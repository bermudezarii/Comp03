#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "qword.h"

#include "ia32_insn.h"
#include "ia32_opcode_tables.h"

#include "ia32_reg.h"
#include "ia32_operand.h"
#include "ia32_implicit.h"
#include "ia32_settings.h"

#define LIBDISASM_H

#include <windows.h>


#include <stdint.h>

/* 'NEW" types
 * __________________________________________________________________________*/

/* 'NEW" x86 API
 * __________________________________________________________________________*/


/* ========================================= Error Reporting */
/* REPORT CODES
 *      These are passed to a reporter function passed at initialization.
 *      Each code determines the type of the argument passed to the reporter;
 *      this allows the report to recover from errors, or just log them.
 */
enum x86_report_codes {
        report_disasm_bounds,   /* RVA OUT OF BOUNDS : The disassembler could
                                   not disassemble the supplied RVA as it is
                                   out of the range of the buffer. The
                                   application should store the address and
                                   attempt to determine what section of the
                                   binary it is in, then disassemble the
                                   address from the bytes in that section.
                                        data: uint32_t rva */
        report_insn_bounds,     /* INSTRUCTION OUT OF BOUNDS: The disassembler
                                   could not disassemble the instruction as
                                   the instruction would require bytes beyond
                                   the end of the current buffer. This usually
                                   indicated garbage bytes at the end of a
                                   buffer, or an incorrectly-sized buffer.
                                        data: uint32_t rva */
        report_invalid_insn,    /* INVALID INSTRUCTION: The disassembler could
                                   not disassemble the instruction as it has an
                                   invalid combination of opcodes and operands.
                                   This will stop automated disassembly; the
                                   application can restart the disassembly
                                   after the invalid instruction.
                                        data: uint32_t rva */
        report_unknown
};

/* 'arg' is optional arbitrary data provided by the code passing the 
 *       callback -- for example, it could be 'this' or 'self' in OOP code.
 * 'code' is provided by libdisasm, it is one of the above
 * 'data' is provided by libdisasm and is context-specific, per the enums */
typedef void (*DISASM_REPORTER)( enum x86_report_codes code, 
				 void *data, void *arg );


/* x86_report_error : Call the register reporter to report an error */
void x86_report_error( enum x86_report_codes code, void *data );

/* ========================================= Libdisasm Management Routines */
enum x86_options {		/* these can be ORed together */
        opt_none= 0,
        opt_ignore_nulls=1,     /* ignore sequences of > 4 NULL bytes */
        opt_16_bit=2,           /* 16-bit/DOS disassembly */
        opt_att_mnemonics=4,    /* use AT&T syntax names for alternate opcode mnemonics */
};

/* management routines */
/* 'arg' is caller-specific data which is passed as the first argument
 * to the reporter callback routine */
int x86_init( enum x86_options options, DISASM_REPORTER reporter, void *arg);
void x86_set_reporter( DISASM_REPORTER reporter, void *arg);
void x86_set_options( enum x86_options options );
enum x86_options x86_get_options( void );
int x86_cleanup(void);


/* ========================================= Instruction Representation */
/* these defines are only intended for use in the array decl's */
#define MAX_REGNAME 8

#define MAX_PREFIX_STR 32
#define MAX_MNEM_STR 16
#define MAX_INSN_SIZE 20        /* same as in i386.h */
#define MAX_OP_STRING 32        /* max possible operand size in string form */
#define MAX_OP_RAW_STRING 64    /* max possible operand size in raw form */
#define MAX_OP_XML_STRING 256   /* max possible operand size in xml form */
#define MAX_NUM_OPERANDS 8	/* max # implicit and explicit operands */
/* in these, the '2 *' is arbitrary: the max # of operands should require
 * more space than the rest of the insn */
#define MAX_INSN_STRING 512        /* 2 * 8 * MAX_OP_STRING */
#define MAX_INSN_RAW_STRING 1024   /* 2 * 8 * MAX_OP_RAW_STRING */
#define MAX_INSN_XML_STRING 4096   /* 2 * 8 * MAX_OP_XML_STRING */

enum x86_reg_type {     /* NOTE: these may be ORed together */
        reg_gen         = 0x00001,      /* general purpose */
        reg_in          = 0x00002,      /* incoming args, ala RISC */
        reg_out         = 0x00004,      /* args to calls, ala RISC */
        reg_local       = 0x00008,      /* local vars, ala RISC */
        reg_fpu         = 0x00010,      /* FPU data register */
        reg_seg         = 0x00020,      /* segment register */
        reg_simd        = 0x00040,      /* SIMD/MMX reg */
        reg_sys         = 0x00080,      /* restricted/system register */
        reg_sp          = 0x00100,      /* stack pointer */
        reg_fp          = 0x00200,      /* frame pointer */
        reg_pc          = 0x00400,      /* program counter */
        reg_retaddr     = 0x00800,      /* return addr for func */
        reg_cond        = 0x01000,      /* condition code / flags */
        reg_zero        = 0x02000,      /* zero register, ala RISC */
        reg_ret         = 0x04000,      /* return value */
        reg_src         = 0x10000,      /* array/rep source */
        reg_dest        = 0x20000,      /* array/rep destination */
        reg_count       = 0x40000       /* array/rep/loop counter */
};

/* x86_reg_t : an X86 CPU register */
typedef struct {
        char name[MAX_REGNAME];
        enum x86_reg_type type;         /* what register is used for */
        unsigned int size;              /* size of register in bytes */
        unsigned int id;                /* register ID #, for quick compares */
	unsigned int alias;		/* ID of reg this is an alias for */
	unsigned int shift;		/* amount to shift aliased reg by */
} x86_reg_t;

/* x86_ea_t : an X86 effective address (address expression) */
typedef struct {
        unsigned int     scale;         /* scale factor */
        x86_reg_t        index, base;   /* index, base registers */
        int32_t          disp;          /* displacement */
        char             disp_sign;     /* is negative? 1/0 */
        char             disp_size;     /* 0, 1, 2, 4 */
} x86_ea_t;

/* x86_absolute_t : an X86 segment:offset address (descriptor) */
typedef struct {
	unsigned short	segment;	/* loaded directly into CS */
	union {
		unsigned short	off16;	/* loaded directly into IP */
		uint32_t		off32;	/* loaded directly into EIP */
	} offset;	
} x86_absolute_t;

enum x86_op_type {      /* mutually exclusive */
        op_unused = 0,          /* empty/unused operand: should never occur */
        op_register = 1,        /* CPU register */
        op_immediate = 2,       /* Immediate Value */
        op_relative_near = 3,   /* Relative offset from IP */
        op_relative_far = 4,    /* Relative offset from IP */
        op_absolute = 5,        /* Absolute address (ptr16:32) */
        op_expression = 6,      /* Address expression (scale/index/base/disp) */
        op_offset = 7,          /* Offset from start of segment (m32) */
        op_unknown
};

#define x86_optype_is_address( optype ) \
	( optype == op_absolute || optype == op_offset )
#define x86_optype_is_relative( optype ) \
	( optype == op_relative_near || optype == op_relative_far )
#define x86_optype_is_memory( optype ) \
	( optype > op_immediate && optype < op_unknown )

enum x86_op_datatype {          /* these use Intel's lame terminology */
        op_byte = 1,            /* 1 byte integer */
        op_word = 2,            /* 2 byte integer */
        op_dword = 3,           /* 4 byte integer */
        op_qword = 4,           /* 8 byte integer */
        op_dqword = 5,          /* 16 byte integer */
        op_sreal = 6,           /* 4 byte real (single real) */
        op_dreal = 7,           /* 8 byte real (double real) */
        op_extreal = 8,         /* 10 byte real (extended real) */
        op_bcd = 9,             /* 10 byte binary-coded decimal */
        op_ssimd = 10,          /* 16 byte : 4 packed single FP (SIMD, MMX) */
        op_dsimd = 11,          /* 16 byte : 2 packed double FP (SIMD, MMX) */
        op_sssimd = 12,         /* 4 byte : scalar single FP (SIMD, MMX) */
        op_sdsimd = 13,         /* 8 byte : scalar double FP (SIMD, MMX) */
	op_descr32 = 14,	/* 6 byte Intel descriptor 2:4 */
	op_descr16 = 15,	/* 4 byte Intel descriptor 2:2 */
	op_pdescr32 = 16,	/* 6 byte Intel pseudo-descriptor 32:16 */
	op_pdescr16 = 17,	/* 6 byte Intel pseudo-descriptor 8:24:16 */
	op_bounds16 = 18,	/* signed 16:16 lower:upper bounds */
	op_bounds32 = 19,	/* signed 32:32 lower:upper bounds */
        op_fpuenv16 = 20,	/* 14 byte FPU control/environment data */
        op_fpuenv32 = 21,	/* 28 byte FPU control/environment data */
	op_fpustate16 = 22,	/* 94 byte FPU state (env & reg stack) */
	op_fpustate32 = 23,	/* 108 byte FPU state (env & reg stack) */
	op_fpregset = 24,	/* 512 bytes: register set */
	op_fpreg = 25,		/* FPU register */
    op_none = 0xFF,     /* operand without a datatype (INVLPG) */
};

enum x86_op_access {    /* ORed together */
        op_read = 1,
        op_write = 2,
        op_execute = 4
};

enum x86_op_flags {     /* ORed together, but segs are mutually exclusive */
        op_signed = 1,          /* signed integer */
        op_string = 2,          /* possible string or array */
        op_constant = 4,        /* symbolic constant */
        op_pointer = 8,         /* operand points to a memory address */
	op_sysref = 0x010,	/* operand is a syscall number */
	op_implied = 0x020,	/* operand is implicit in the insn */
	op_hardcode = 0x40,	/* operand is hardcoded in insn definition */
	/* NOTE: an 'implied' operand is one which can be considered a side
	 * effect of the insn, e.g. %esp being modified by PUSH or POP. A
	 * 'hard-coded' operand is one which is specified in the instruction
	 * definition, e.g. %es:%edi in MOVSB or 1 in ROL Eb, 1. The difference
	 * is that hard-coded operands are printed by disassemblers and are
	 * required to re-assemble, while implicit operands are invisible. */
        op_es_seg = 0x100,      /* ES segment override */
        op_cs_seg = 0x200,      /* CS segment override */
        op_ss_seg = 0x300,      /* SS segment override */
        op_ds_seg = 0x400,      /* DS segment override */
        op_fs_seg = 0x500,      /* FS segment override */
        op_gs_seg = 0x600       /* GS segment override */
};

/* x86_op_t : an X86 instruction operand */
typedef struct {
        enum x86_op_type        type;           /* operand type */
        enum x86_op_datatype    datatype;       /* operand size */
        enum x86_op_access      access;         /* operand access [RWX] */
        enum x86_op_flags       flags;          /* misc flags */
        union {
		/* sizeof will have to work on these union members! */
                /* immediate values */
                char            sbyte;
                short           sword;
                int32_t         sdword;
                qword_t         sqword;
                unsigned char   byte;
                unsigned short  word;
                uint32_t        dword;
                qword_t         qword;
                float           sreal;
                double          dreal;
                /* misc large/non-native types */
                unsigned char   extreal[10];
                unsigned char   bcd[10];
                qword_t         dqword[2];
                unsigned char   simd[16];
                unsigned char   fpuenv[28];
                /* offset from segment */
                uint32_t        offset;
                /* ID of CPU register */
                x86_reg_t       reg;
                /* offsets from current insn */
                char            relative_near;
                int32_t         relative_far;
		/* segment:offset */
		x86_absolute_t	absolute;
                /* effective address [expression] */
                x86_ea_t        expression;
        } data;
	/* this is needed to make formatting operands more sane */
	void * insn;		/* pointer to x86_insn_t owning operand */
} x86_op_t;

/* Linked list of x86_op_t; provided for manual traversal of the operand
 * list in an insn. Users wishing to add operands to this list, e.g. to add
 * implicit operands, should use x86_operand_new in x86_operand_list.h */
typedef struct x86_operand_list {
	x86_op_t op;
	struct x86_operand_list *next;
} x86_oplist_t;

enum x86_insn_group {
	insn_none = 0,		/* invalid instruction */
        insn_controlflow = 1,
        insn_arithmetic = 2,
        insn_logic = 3,
        insn_stack = 4,
        insn_comparison = 5,
        insn_move = 6,
        insn_string = 7,
        insn_bit_manip = 8,
        insn_flag_manip = 9,
        insn_fpu = 10,
        insn_interrupt = 13,
        insn_system = 14,
        insn_other = 15
};

enum x86_insn_type {
	insn_invalid = 0,	/* invalid instruction */
        /* insn_controlflow */
        insn_jmp = 0x1001,
        insn_jcc = 0x1002,
        insn_call = 0x1003,
        insn_callcc = 0x1004,
        insn_return = 0x1005,
        /* insn_arithmetic */
        insn_add = 0x2001,
        insn_sub = 0x2002,
        insn_mul = 0x2003,
        insn_div = 0x2004,
        insn_inc = 0x2005,
        insn_dec = 0x2006,
        insn_shl = 0x2007,
        insn_shr = 0x2008,
        insn_rol = 0x2009,
        insn_ror = 0x200A,
        /* insn_logic */
        insn_and = 0x3001,
        insn_or = 0x3002,
        insn_xor = 0x3003,
        insn_not = 0x3004,
        insn_neg = 0x3005,
        /* insn_stack */
        insn_push = 0x4001,
        insn_pop = 0x4002,
        insn_pushregs = 0x4003,
        insn_popregs = 0x4004,
        insn_pushflags = 0x4005,
        insn_popflags = 0x4006,
        insn_enter = 0x4007,
        insn_leave = 0x4008,
        /* insn_comparison */
        insn_test = 0x5001,
        insn_cmp = 0x5002,
        /* insn_move */
        insn_mov = 0x6001,      /* move */
        insn_movcc = 0x6002,    /* conditional move */
        insn_xchg = 0x6003,     /* exchange */
        insn_xchgcc = 0x6004,   /* conditional exchange */
        /* insn_string */
        insn_strcmp = 0x7001,
        insn_strload = 0x7002,
        insn_strmov = 0x7003,
        insn_strstore = 0x7004,
        insn_translate = 0x7005,        /* xlat */
        /* insn_bit_manip */
        insn_bittest = 0x8001,
        insn_bitset = 0x8002,
        insn_bitclear = 0x8003,
        /* insn_flag_manip */
        insn_clear_carry = 0x9001,
        insn_clear_zero = 0x9002,
        insn_clear_oflow = 0x9003,
        insn_clear_dir = 0x9004,
        insn_clear_sign = 0x9005,
        insn_clear_parity = 0x9006,
        insn_set_carry = 0x9007,
        insn_set_zero = 0x9008,
        insn_set_oflow = 0x9009,
        insn_set_dir = 0x900A,
        insn_set_sign = 0x900B,
        insn_set_parity = 0x900C,
        insn_tog_carry = 0x9010,
        insn_tog_zero = 0x9020,
        insn_tog_oflow = 0x9030,
        insn_tog_dir = 0x9040,
        insn_tog_sign = 0x9050,
        insn_tog_parity = 0x9060,
        /* insn_fpu */
        insn_fmov = 0xA001,
        insn_fmovcc = 0xA002,
        insn_fneg = 0xA003,
        insn_fabs = 0xA004,
        insn_fadd = 0xA005,
        insn_fsub = 0xA006,
        insn_fmul = 0xA007,
        insn_fdiv = 0xA008,
        insn_fsqrt = 0xA009,
        insn_fcmp = 0xA00A,
        insn_fcos = 0xA00C,
        insn_fldpi = 0xA00D,
        insn_fldz = 0xA00E,
        insn_ftan = 0xA00F,
        insn_fsine = 0xA010,
        insn_fsys = 0xA020,
        /* insn_interrupt */
        insn_int = 0xD001,
        insn_intcc = 0xD002,    /* not present in x86 ISA */
        insn_iret = 0xD003,
        insn_bound = 0xD004,
        insn_debug = 0xD005,
        insn_trace = 0xD006,
        insn_invalid_op = 0xD007,
        insn_oflow = 0xD008,
        /* insn_system */
        insn_halt = 0xE001,
        insn_in = 0xE002,       /* input from port/bus */
        insn_out = 0xE003,      /* output to port/bus */
        insn_cpuid = 0xE004,
        /* insn_other */
        insn_nop = 0xF001,
        insn_bcdconv = 0xF002,  /* convert to or from BCD */
        insn_szconv = 0xF003    /* change size of operand */
};

/* These flags specify special characteristics of the instruction, such as
 * whether the inatruction is privileged or whether it serializes the
 * pipeline.
 * NOTE : These may not be accurate for all instructions; updates to the
 * opcode tables have not been completed. */
enum x86_insn_note {
	insn_note_ring0		= 1,	/* Only available in ring 0 */
	insn_note_smm		= 2,	/* "" in System Management Mode */
	insn_note_serial	= 4,	/* Serializing instruction */
	insn_note_nonswap	= 8,	/* Does not swap arguments in att-style formatting */
	insn_note_nosuffix  = 16,	/* Does not have size suffix in att-style formatting */
};

/* This specifies what effects the instruction has on the %eflags register */
enum x86_flag_status {
        insn_carry_set = 0x1,			/* CF */
        insn_zero_set = 0x2,			/* ZF */
        insn_oflow_set = 0x4,			/* OF */
        insn_dir_set = 0x8,			/* DF */
        insn_sign_set = 0x10,			/* SF */
        insn_parity_set = 0x20,			/* PF */
        insn_carry_or_zero_set = 0x40,
        insn_zero_set_or_sign_ne_oflow = 0x80,
        insn_carry_clear = 0x100,
        insn_zero_clear = 0x200,
        insn_oflow_clear = 0x400,
        insn_dir_clear = 0x800,
        insn_sign_clear = 0x1000,
        insn_parity_clear = 0x2000,
        insn_sign_eq_oflow = 0x4000,
        insn_sign_ne_oflow = 0x8000
};

/* The CPU model in which the insturction first appeared; this can be used
 * to mask out instructions appearing in earlier or later models or to
 * check the portability of a binary.
 * NOTE : These may not be accurate for all instructions; updates to the
 * opcode tables have not been completed. */
enum x86_insn_cpu {
	cpu_8086 	= 1,	/* Intel */
	cpu_80286	= 2,
	cpu_80386	= 3,
	cpu_80387	= 4,
	cpu_80486	= 5,
	cpu_pentium	= 6,
	cpu_pentiumpro	= 7,
	cpu_pentium2	= 8,
	cpu_pentium3	= 9,
	cpu_pentium4	= 10,
	cpu_k6		= 16,	/* AMD */
	cpu_k7		= 32,
	cpu_athlon	= 48
};

/* CPU ISA subsets: These are derived from the Instruction Groups in
 * Intel Vol 1 Chapter 5; they represent subsets of the IA32 ISA but
 * do not reflect the 'type' of the instruction in the same way that
 * x86_insn_group does. In short, these are AMD/Intel's somewhat useless 
 * designations.
 * NOTE : These may not be accurate for all instructions; updates to the
 * opcode tables have not been completed. */
enum x86_insn_isa {
	isa_gp		= 1,	/* general purpose */
	isa_fp		= 2,	/* floating point */
	isa_fpumgt	= 3,	/* FPU/SIMD management */
	isa_mmx		= 4,	/* Intel MMX */
	isa_sse1	= 5,	/* Intel SSE SIMD */
	isa_sse2	= 6,	/* Intel SSE2 SIMD */
	isa_sse3	= 7,	/* Intel SSE3 SIMD */
	isa_3dnow	= 8,	/* AMD 3DNow! SIMD */
	isa_sys		= 9	/* system instructions */
};

enum x86_insn_prefix {
        insn_no_prefix = 0,
        insn_rep_zero = 1,	/* REPZ and REPE */
        insn_rep_notzero = 2,	/* REPNZ and REPNZ */
        insn_lock = 4		/* LOCK: */
};

/* TODO: maybe provide insn_new/free(), and have disasm return new insn_t */
/* x86_insn_t : an X86 instruction */
typedef struct {
        /* information about the instruction */
        uint32_t addr;             /* load address */
        uint32_t offset;           /* offset into file/buffer */
        enum x86_insn_group group;      /* meta-type, e.g. INS_EXEC */
        enum x86_insn_type type;        /* type, e.g. INS_BRANCH */
	enum x86_insn_note note;	/* note, e.g. RING0 */
        unsigned char bytes[MAX_INSN_SIZE];
        unsigned char size;             /* size of insn in bytes */
	/* 16/32-bit mode settings */
	unsigned char addr_size;	/* default address size : 2 or 4 */
	unsigned char op_size;		/* default operand size : 2 or 4 */
	/* CPU/instruction set */
	enum x86_insn_cpu cpu;
	enum x86_insn_isa isa;
	/* flags */
        enum x86_flag_status flags_set; /* flags set or tested by insn */
        enum x86_flag_status flags_tested;
	/* stack */
	unsigned char stack_mod;	/* 0 or 1 : is the stack modified? */
	int32_t stack_mod_val;		/* val stack is modified by if known */

        /* the instruction proper */
        enum x86_insn_prefix prefix;	/* prefixes ORed together */
        char prefix_string[MAX_PREFIX_STR]; /* prefixes [might be truncated] */
        char mnemonic[MAX_MNEM_STR];
        x86_oplist_t *operands;		/* list of explicit/implicit operands */
	size_t operand_count;		/* total number of operands */
	size_t explicit_count;		/* number of explicit operands */
        /* convenience fields for user */
        void *block;                    /* code block containing this insn */
        void *function;                 /* function containing this insn */
        int tag;			/* tag the insn as seen/processed */
} x86_insn_t;


/* returns 0 if an instruction is invalid, 1 if valid */
int x86_insn_is_valid( x86_insn_t *insn );

/* DISASSEMBLY ROUTINES
 *      Canonical order of arguments is
 *        (buf, buf_len, buf_rva, offset, len, insn, func, arg, resolve_func)
 *      ...but of course all of these are not used at the same time.
 */


/* Function prototype for caller-supplied callback routine
 *      These callbacks are intended to process 'insn' further, e.g. by
 *      adding it to a linked list, database, etc */
typedef void (*DISASM_CALLBACK)( x86_insn_t *insn, void * arg );

/* Function prototype for caller-supplied address resolver.
 *      This routine is used to determine the rva to disassemble next, given
 *      the 'dest' operand of a jump/call. This allows the caller to resolve
 *      jump/call targets stored in a register or on the stack, and also allows
 *      the caller to prevent endless loops by checking if an address has
 *      already been disassembled. If an address cannot be resolved from the
 *      operand, or if the address has already been disassembled, this routine
 *      should return -1; in all other cases the RVA to be disassembled next
 *      should be returned. */
typedef int32_t (*DISASM_RESOLVER)( x86_op_t *op, x86_insn_t * current_insn,
				 void *arg );


/* x86_disasm: Disassemble a single instruction from a buffer of bytes.
 *             Returns size of instruction in bytes.
 *             Caller is responsible for calling x86_oplist_free() on
 *             a reused "insn" to avoid leaking memory when calling this
 *             function repeatedly.
 *      buf     : Buffer of bytes to disassemble
 *      buf_len : Length of the buffer
 *      buf_rva : Load address of the start of the buffer
 *      offset  : Offset in buffer to disassemble
 *      insn    : Structure to fill with disassembled instruction
 */
unsigned int x86_disasm( unsigned char *buf, unsigned int buf_len,
                	 uint32_t buf_rva, unsigned int offset,
                	 x86_insn_t * insn );

/* x86_disasm_range: Sequential disassembly of a range of bytes in a buffer,
 *                   invoking a callback function each time an instruction
 *                   is successfully disassembled. The 'range' refers to the
 *                   bytes between 'offset' and 'offset + len' in the buffer;
 *                   'len' is assumed to be less than the length of the buffer.
 *                   Returns number of instructions processed.
 *      buf     : Buffer of bytes to disassemble (e.g. .text section)
 *      buf_rva : Load address of buffer (e.g. ELF Virtual Address)
 *      offset  : Offset in buffer to start disassembly at
 *      len     : Number of bytes to disassemble
 *      func    : Callback function to invoke (may be NULL)
 *      arg     : Arbitrary data to pass to callback (may be NULL)
 */
unsigned int x86_disasm_range( unsigned char *buf, uint32_t buf_rva,
	                       unsigned int offset, unsigned int len,
	                       DISASM_CALLBACK func, void *arg );

/* x86_disasm_forward: Flow-of-execution disassembly of the bytes in a buffer,
 *                     invoking a callback function each time an instruction
 *                     is successfully disassembled.
 *      buf     : Buffer to disassemble (e.g. .text section)
 *      buf_len : Number of bytes in buffer
 *      buf_rva : Load address of buffer (e.g. ELF Virtual Address)
 *      offset  : Offset in buffer to start disassembly at (e.g. entry point)
 *      func    : Callback function to invoke (may be NULL)
 *      arg     : Arbitrary data to pass to callback (may be NULL)
 *      resolver: Caller-supplied address resolver. If no resolver is
 *                supplied, a default internal one is used -- however the
 *                internal resolver does NOT catch loops and could end up
 *                disassembling forever..
 *      r_arg	: Arbitrary data to pass to resolver (may be NULL)
 */
unsigned int x86_disasm_forward( unsigned char *buf, unsigned int buf_len,
	                         uint32_t buf_rva, unsigned int offset,
	                         DISASM_CALLBACK func, void *arg,
	                         DISASM_RESOLVER resolver, void *r_arg );

/* Instruction operands: these are stored as a list of explicit and
 * implicit operands. It is recommended that the 'foreach' routines
 * be used to when examining operands for purposes of data flow analysis */

/* Operand FOREACH callback: 'arg' is an abritrary parameter passed to the
 * foreach routine, 'insn' is the x86_insn_t whose operands are being
 * iterated over, and 'op' is the current x86_op_t */
typedef void (*x86_operand_fn)(x86_op_t *op, x86_insn_t *insn, void *arg);

/* FOREACH types: these are used to limit the foreach results to 
 * operands which match a certain "type" (implicit or explicit)
 * or which are accessed in certain ways (e.g. read or write). Note
 * that this operates on the operand list of single instruction, so
 * specifying the 'real' operand type (register, memory, etc) is not
 * useful. Note also that by definition Execute Access implies Read
 * Access and implies Not Write Access.
 * The "type" (implicit or explicit) and the access method can
 * be ORed together, e.g. op_wo | op_explicit */
enum x86_op_foreach_type {
	op_any 	= 0,		/* ALL operands (explicit, implicit, rwx) */
	op_dest = 1,		/* operands with Write access */
	op_src 	= 2,		/* operands with Read access */
	op_ro 	= 3,		/* operands with Read but not Write access */
	op_wo 	= 4,		/* operands with Write but not Read access */
	op_xo 	= 5,		/* operands with Execute access */
	op_rw 	= 6,		/* operands with Read AND Write access */
	op_implicit = 0x10,	/* operands that are implied by the opcode */
	op_explicit = 0x20	/* operands that are not side-effects */
};


/* free the operand list associated with an instruction -- useful for
 * preventing memory leaks when free()ing an x86_insn_t */
void x86_oplist_free( x86_insn_t *insn );

/* Operand foreach: invokes 'func' with 'insn' and 'arg' as arguments. The
 * 'type' parameter is used to select only operands matching specific
 * criteria. */
int x86_operand_foreach( x86_insn_t *insn, x86_operand_fn func, void *arg,
	       	  	 enum x86_op_foreach_type type);

/* convenience routine: returns count of operands matching 'type' */
size_t x86_operand_count( x86_insn_t *insn, enum x86_op_foreach_type type );

/* accessor functions for the operands */
x86_op_t * x86_operand_1st( x86_insn_t *insn );
x86_op_t * x86_operand_2nd( x86_insn_t *insn );
x86_op_t * x86_operand_3rd( x86_insn_t *insn );

/* these allow libdisasm 2.0 accessor functions to still be used */
#define x86_get_dest_operand( insn ) x86_operand_1st( insn )
#define x86_get_src_operand( insn ) x86_operand_2nd( insn )
#define x86_get_imm_operand( insn ) x86_operand_3rd( insn )

/* get size of operand data in bytes */
unsigned int x86_operand_size( x86_op_t *op );

/* Operand Convenience Routines: the following three routines are common
 * operations on operands, intended to ease the burden of the programmer. */

/* Get Address: return the value of an offset operand, or the offset of
 * a segment:offset absolute address */
uint32_t x86_get_address( x86_insn_t *insn );

/* Get Relative Offset: return as a sign-extended int32_t the near or far
 * relative offset operand, or 0 if there is none. There can be only one
 * relaive offset operand in an instruction. */
int32_t x86_get_rel_offset( x86_insn_t *insn );

/* Get Branch Target: return the x86_op_t containing the target of
 * a jump or call operand, or NULL if there is no branch target. 
 * Internally, a 'branch target' is defined as any operand with
 * Execute Access set. There can be only one branch target per instruction. */
x86_op_t * x86_get_branch_target( x86_insn_t *insn );

/* Get Immediate: return the x86_op_t containing the immediate operand
 * for this instruction, or NULL if there is no immediate operand. There
 * can be only one immediate operand per instruction */
x86_op_t * x86_get_imm( x86_insn_t *insn );

/* Get Raw Immediate Data: returns a pointer to the immediate data encoded
 * in the instruction. This is useful for large data types [>32 bits] currently
 * not supported by libdisasm, or for determining if the disassembler
 * screwed up the conversion of the immediate data. Note that 'imm' in this
 * context refers to immediate data encoded at the end of an instruction as
 * detailed in the Intel Manual Vol II Chapter 2; it does not refer to the
 * 'op_imm' operand (the third operand in instructions like 'mul' */
unsigned char * x86_get_raw_imm( x86_insn_t *insn );


/* More accessor fuctions, this time for user-defined info... */
/* set the address (usually RVA) of the insn */
void x86_set_insn_addr( x86_insn_t *insn, uint32_t addr );

/* set the offset (usually offset into file) of the insn */
void x86_set_insn_offset( x86_insn_t *insn, unsigned int offset );

/* set a pointer to the function owning the instruction. The 
 * type of 'func' is user-defined; libdisasm does not use the func field. */
void x86_set_insn_function( x86_insn_t *insn, void * func );

/* set a pointer to the block of code owning the instruction. The 
 * type of 'block' is user-defined; libdisasm does not use the block field. */
void x86_set_insn_block( x86_insn_t *insn, void * block );

/* instruction tagging: these routines allow the programmer to mark
 * instructions as "seen" in a DFS, for example. libdisasm does not use
 * the tag field.*/ 
/* set insn->tag to 1 */
void x86_tag_insn( x86_insn_t *insn );
/* set insn->tag to 0 */
void x86_untag_insn( x86_insn_t *insn );
/* return insn->tag */
int x86_insn_is_tagged( x86_insn_t *insn );


/* Disassembly formats:
 *      AT&T is standard AS/GAS-style: "mnemonic\tsrc, dest, imm"
 *      Intel is standard MASM/NASM/TASM: "mnemonic\tdest,src, imm"
 *      Native is tab-delimited: "RVA\tbytes\tmnemonic\tdest\tsrc\timm"
 *      XML is your typical <insn> ... </insn>
 *      Raw is addr|offset|size|bytes|prefix... see libdisasm_formats.7
 */
enum x86_asm_format { 
	unknown_syntax = 0,		/* never use! */
	native_syntax, 			/* header: 35 bytes */
	intel_syntax, 			/* header: 23 bytes */
	att_syntax,  			/* header: 23 bytes */
	xml_syntax,			/* header: 679 bytes */
	raw_syntax			/* header: 172 bytes */
};

/* format (sprintf) an operand into 'buf' using specified syntax */
int x86_format_operand(x86_op_t *op, char *buf, int len,
                  enum x86_asm_format format);

/* format (sprintf) an instruction mnemonic into 'buf' using specified syntax */
int x86_format_mnemonic(x86_insn_t *insn, char *buf, int len,
                        enum x86_asm_format format);

/* format (sprintf) an instruction into 'buf' using specified syntax;
 * this includes formatting all operands */
int x86_format_insn(x86_insn_t *insn, char *buf, int len, enum x86_asm_format);

/* fill 'buf' with a description of the format's syntax */
int x86_format_header( char *buf, int len, enum x86_asm_format format);

/* Endianness of an x86 CPU : 0 is big, 1 is little; always returns 1 */
unsigned int x86_endian(void);

/* Default address and operand size in bytes */
unsigned int x86_addr_size(void);
unsigned int x86_op_size(void);

/* Size of a machine word in bytes */
unsigned int x86_word_size(void);

/* maximum size of a code instruction */
#define x86_max_inst_size(x) x86_max_insn_size(x)
unsigned int x86_max_insn_size(void);

/* register IDs of Stack, Frame, Instruction pointer and Flags register */
unsigned int x86_sp_reg(void);
unsigned int x86_fp_reg(void);
unsigned int x86_ip_reg(void);
unsigned int x86_flag_reg(void);

/* fill 'reg' struct with details of register 'id' */
void x86_reg_from_id( unsigned int id, x86_reg_t * reg );

/* convenience macro demonstrating how to get an aliased register; proto is
 *   void x86_get_aliased_reg( x86_reg_t *alias_reg, x86_reg_t *output_reg )
 * where 'alias_reg' is a reg operand and 'output_reg' is filled with the
 * register that the operand is an alias for */
#define x86_get_aliased_reg( alias_reg, output_reg )			\
	x86_reg_from_id( alias_reg->alias, output_reg )


/* ================================== Invariant Instruction Representation */
/* Invariant instructions are used for generating binary signatures; 
 * the instruction is modified so that all variant bytes in an instruction
 * are replaced with a wildcard byte. 
 *
 * A 'variant byte' is one that is expected to be modified by either the 
 * static or the dynamic linker: for example, an address encoded in an 
 * instruction. 
 *
 * By comparing the invariant representation of one instruction [or of a
 * sequence of instructions] with the invariant representation of another,
 * one determine whether the two invariant representations are from the same
 * relocatable object [.o] file. Thus one can use binary signatures [which
 * are just sequences of invariant instruction representations] to look for
 * library routines which have been statically-linked into a binary.
 *
 * The invariant routines are faster and smaller than the disassembly
 * routines; they can be used to determine the size of an instruction 
 * without all of the overhead of a full instruction disassembly.
 */

/* This byte is used to replace variant bytes */
#define X86_WILDCARD_BYTE 0xF4

typedef struct {
        enum x86_op_type        type;           /* operand type */
        enum x86_op_datatype    datatype;       /* operand size */
        enum x86_op_access      access;         /* operand access [RWX] */
        enum x86_op_flags       flags;          /* misc flags */
} x86_invariant_op_t;

typedef struct {
	unsigned char bytes[64];	/* invariant representation */
	unsigned int  size;		/* number of bytes in insn */
        enum x86_insn_group group;      /* meta-type, e.g. INS_EXEC */
        enum x86_insn_type type;        /* type, e.g. INS_BRANCH */
	x86_invariant_op_t operands[3];	/* operands: dest, src, imm */
} x86_invariant_t;
 

/* return a version of the instruction with the variant bytes masked out */
size_t x86_invariant_disasm( unsigned char *buf, int buf_len, 
			  x86_invariant_t *inv );
/* return the size in bytes of the intruction pointed to by 'buf';
 * this used x86_invariant_disasm since it faster than x86_disasm */
size_t x86_size_disasm( unsigned char *buf, unsigned int buf_len );




extern ia32_table_desc_t ia32_tables[];
extern ia32_settings_t ia32_settings;

#define IS_SP( op )  (op->type == op_register && 	\
		(op->data.reg.id == REG_ESP_INDEX || 	\
		 op->data.reg.alias == REG_ESP_INDEX) )
#define IS_IMM( op ) (op->type == op_immediate )



/* for calculating stack modification based on an operand */
static INLINE int32_t long_from_operand( x86_op_t *op ) {

	if (! IS_IMM(op) ) {
		return 0L;
	}

	switch ( op->datatype ) {
		case op_byte:
			return (int32_t) op->data.sbyte;
		case op_word:
			return (int32_t) op->data.sword;
		case op_qword:
			return (int32_t) op->data.sqword;
		case op_dword:
			return op->data.sdword;
		default:
			/* these are not used in stack insn */
			break;
	}

	return 0L;
}
		

/* determine what this insn does to the stack */
static void ia32_stack_mod(x86_insn_t *insn) {
	x86_op_t *dest, *src = NULL;

	if (! insn || ! insn->operands ) {
		return;
	}
       
	dest = &insn->operands->op;
	if ( dest ) {
		src = &insn->operands->next->op;
	}

	insn->stack_mod = 0; 
	insn->stack_mod_val = 0;

	switch ( insn->type ) {
		case insn_call:
		case insn_callcc:
			insn->stack_mod = 1;
			insn->stack_mod_val = insn->addr_size * -1;
			break;
		case insn_push:
			insn->stack_mod = 1;
			insn->stack_mod_val = insn->addr_size * -1;
			break;
		case insn_return:
			insn->stack_mod = 1;
			insn->stack_mod_val = insn->addr_size;
		case insn_int: case insn_intcc:
		case insn_iret:
			break;
		case insn_pop:
			insn->stack_mod = 1;
			if (! IS_SP( dest ) ) {
				insn->stack_mod_val = insn->op_size;
			} /* else we don't know the stack change in a pop esp */
			break;
		case insn_enter:
			insn->stack_mod = 1;
			insn->stack_mod_val = 0; /* TODO : FIX */
			break;
		case insn_leave:
			insn->stack_mod = 1;
			insn->stack_mod_val = 0; /* TODO : FIX */
			break;
		case insn_pushregs:
			insn->stack_mod = 1;
			insn->stack_mod_val = 0; /* TODO : FIX */
			break;
		case insn_popregs:
			insn->stack_mod = 1;
			insn->stack_mod_val = 0; /* TODO : FIX */
			break;
		case insn_pushflags:
			insn->stack_mod = 1;
			insn->stack_mod_val = 0; /* TODO : FIX */
			break;
		case insn_popflags:
			insn->stack_mod = 1;
			insn->stack_mod_val = 0; /* TODO : FIX */
			break;
		case insn_add:
			if ( IS_SP( dest ) ) {
				insn->stack_mod = 1;
				insn->stack_mod_val = long_from_operand( src ); 
			}
			break;
		case insn_sub:
			if ( IS_SP( dest ) ) {
				insn->stack_mod = 1;
				insn->stack_mod_val = long_from_operand( src ); 
				insn->stack_mod_val *= -1;
			}
			break;
		case insn_inc:
			if ( IS_SP( dest ) ) {
				insn->stack_mod = 1;
				insn->stack_mod_val = 1;
			}
			break;
		case insn_dec:
			if ( IS_SP( dest ) ) {
				insn->stack_mod = 1;
				insn->stack_mod_val = 1;
			}
			break;
		case insn_mov: case insn_movcc:
		case insn_xchg: case insn_xchgcc:
		case insn_mul: case insn_div:
		case insn_shl: case insn_shr:
		case insn_rol: case insn_ror:
		case insn_and: case insn_or:
		case insn_not: case insn_neg:
		case insn_xor:
			if ( IS_SP( dest ) ) {
				insn->stack_mod = 1;
			}
			break;
		default:
			break;
	}
	if (! strcmp("enter", insn->mnemonic) ) {
		insn->stack_mod = 1;
	} else if (! strcmp("leave", insn->mnemonic) ) {
		insn->stack_mod = 1;
	}

	/* for mov, etc we return 0 -- unknown stack mod */

	return;
}

/* get the cpu details for this insn from cpu flags int */
static void ia32_handle_cpu( x86_insn_t *insn, unsigned int cpu ) {
	insn->cpu = (enum x86_insn_cpu) CPU_MODEL(cpu);
	insn->isa = (enum x86_insn_isa) (ISA_SUBSET(cpu)) >> 16;
	return;
}

/* handle mnemonic type and group */
static void ia32_handle_mnemtype(x86_insn_t *insn, unsigned int mnemtype) {
	unsigned int type = mnemtype & ~INS_FLAG_MASK;
        insn->group = (enum x86_insn_group) (INS_GROUP(type)) >> 12;
        insn->type = (enum x86_insn_type) INS_TYPE(type);

	return;
}

static void ia32_handle_notes(x86_insn_t *insn, unsigned int notes) {
	insn->note = (enum x86_insn_note) notes;
	return;
}

static void ia32_handle_eflags( x86_insn_t *insn, unsigned int eflags) {
        unsigned int flags;

        /* handle flags effected */
        flags = INS_FLAGS_TEST(eflags);
        /* handle weird OR cases */
        /* these are either JLE (ZF | SF<>OF) or JBE (CF | ZF) */
        if (flags & INS_TEST_OR) {
                flags &= ~INS_TEST_OR;
                if ( flags & INS_TEST_ZERO ) {
                        flags &= ~INS_TEST_ZERO;
                        if ( flags & INS_TEST_CARRY ) {
                                flags &= ~INS_TEST_CARRY ;
                                flags |= (int)insn_carry_or_zero_set;
                        } else if ( flags & INS_TEST_SFNEOF ) {
                                flags &= ~INS_TEST_SFNEOF;
                                flags |= (int)insn_zero_set_or_sign_ne_oflow;
                        }
                }
        }
        insn->flags_tested = (enum x86_flag_status) flags;

        insn->flags_set = (enum x86_flag_status) INS_FLAGS_SET(eflags) >> 16;

	return;
}

static void ia32_handle_prefix( x86_insn_t *insn, unsigned int prefixes ) {

        insn->prefix = (enum x86_insn_prefix) prefixes & PREFIX_MASK; // >> 20;
        if (! (insn->prefix & PREFIX_PRINT_MASK) ) {
		/* no printable prefixes */
                insn->prefix = insn_no_prefix;
        }

        /* concat all prefix strings */
        if ( (unsigned int)insn->prefix & PREFIX_LOCK ) {
                strncat(insn->prefix_string, "lock ", 32 - 
				strlen(insn->prefix_string));
        }

        if ( (unsigned int)insn->prefix & PREFIX_REPNZ ) {
                strncat(insn->prefix_string, "repnz ", 32  - 
				strlen(insn->prefix_string));
        } else if ( (unsigned int)insn->prefix & PREFIX_REPZ ) {
                strncat(insn->prefix_string, "repz ", 32 - 
				strlen(insn->prefix_string));
        }

        return;
}


static void reg_32_to_16( x86_op_t *op, x86_insn_t *insn, void *arg ) {

	/* if this is a 32-bit register and it is a general register ... */
	if ( op->type == op_register && op->data.reg.size == 4 && 
	     (op->data.reg.type & reg_gen) ) {
		/* WORD registers are 8 indices off from DWORD registers */
		ia32_handle_register( &(op->data.reg), 
				op->data.reg.id + 8 );
	}
}

static void handle_insn_metadata( x86_insn_t *insn, ia32_insn_t *raw_insn ) {
	ia32_handle_mnemtype( insn, raw_insn->mnem_flag );
	ia32_handle_notes( insn, raw_insn->notes );
	ia32_handle_eflags( insn, raw_insn->flags_effected );
	ia32_handle_cpu( insn, raw_insn->cpu );
	ia32_stack_mod( insn );
}

static size_t ia32_decode_insn( unsigned char *buf, size_t buf_len, 
			   ia32_insn_t *raw_insn, x86_insn_t *insn,
			   unsigned int prefixes ) {
	size_t size, op_size;
	unsigned char modrm;

	/* this should never happen, but just in case... */
	if ( raw_insn->mnem_flag == INS_INVALID ) {
		return 0;
	}

	if (ia32_settings.options & opt_16_bit) {
		insn->op_size = ( prefixes & PREFIX_OP_SIZE ) ? 4 : 2;
		insn->addr_size = ( prefixes & PREFIX_ADDR_SIZE ) ? 4 : 2;
	} else {
		insn->op_size = ( prefixes & PREFIX_OP_SIZE ) ? 2 : 4;
		insn->addr_size = ( prefixes & PREFIX_ADDR_SIZE ) ? 2 : 4;
	}


	/*  ++++   1. Copy mnemonic and mnemonic-flags to CODE struct */
	if ((ia32_settings.options & opt_att_mnemonics) && raw_insn->mnemonic_att[0]) {
		strncpy( insn->mnemonic, raw_insn->mnemonic_att, 16 );
	}
	else {
		strncpy( insn->mnemonic, raw_insn->mnemonic, 16 );
	}
	ia32_handle_prefix( insn, prefixes );

	handle_insn_metadata( insn, raw_insn );

	/* prefetch the next byte in case it is a modr/m byte -- saves
	 * worrying about whether the 'mod/rm' operand or the 'reg' operand
	 * occurs first */
	modrm = GET_BYTE( buf, buf_len );

	/*  ++++   2. Decode Explicit Operands */
	/* Intel uses up to 3 explicit operands in its instructions;
	 * the first is 'dest', the second is 'src', and the third
	 * is an additional source value (usually an immediate value,
	 * e.g. in the MUL instructions). These three explicit operands
	 * are encoded in the opcode tables, even if they are not used 
	 * by the instruction. Additional implicit operands are stored
	 * in a supplemental table and are handled later. */

	op_size = ia32_decode_operand( buf, buf_len, insn, raw_insn->dest, 
					raw_insn->dest_flag, prefixes, modrm );
	/* advance buffer, increase size if necessary */
	buf += op_size;
	buf_len -= op_size;
	size = op_size;

	op_size = ia32_decode_operand( buf, buf_len, insn, raw_insn->src, 
					raw_insn->src_flag, prefixes, modrm );
	buf += op_size;
	buf_len -= op_size;
	size += op_size;

	op_size = ia32_decode_operand( buf, buf_len, insn, raw_insn->aux, 
					raw_insn->aux_flag, prefixes, modrm );
	size += op_size;


	/*  ++++   3. Decode Implicit Operands */
	/* apply implicit operands */
	ia32_insn_implicit_ops( insn, raw_insn->implicit_ops );
	/* we have one small inelegant hack here, to deal with 
	 * the two prefixes that have implicit operands. If Intel
	 * adds more, we'll change the algorithm to suit :) */
	if ( (prefixes & PREFIX_REPZ) || (prefixes & PREFIX_REPNZ) ) {
		ia32_insn_implicit_ops( insn, IDX_IMPLICIT_REP );
	}


	/* 16-bit hack: foreach operand, if 32-bit reg, make 16-bit reg */
	if ( insn->op_size == 2 ) {
		x86_operand_foreach( insn, reg_32_to_16, NULL, op_any );
	}

	return size;
}


/* convenience routine */
#define USES_MOD_RM(flag) \
	(flag == ADDRMETH_E || flag == ADDRMETH_M || flag == ADDRMETH_Q || \
	 flag == ADDRMETH_W || flag == ADDRMETH_R)

static int uses_modrm_flag( unsigned int flag ) {
	unsigned int meth;
	if ( flag == ARG_NONE ) {
		return 0;
	}
	meth = (flag & ADDRMETH_MASK);
	if ( USES_MOD_RM(meth) ) {
		return 1;
	}

	return 0;
}

/* This routine performs the actual byte-by-byte opcode table lookup.
 * Originally it was pretty simple: get a byte, adjust it to a proper
 * index into the table, then check the table row at that index to
 * determine what to do next. But is anything that simple with Intel?
 * This is now a huge, convoluted mess, mostly of bitter comments. */
/* buf: pointer to next byte to read from stream 
 * buf_len: length of buf
 * table: index of table to use for lookups
 * raw_insn: output pointer that receives opcode definition
 * prefixes: output integer that is encoded with prefixes in insn 
 * returns : number of bytes consumed from stream during lookup */ 
size_t ia32_table_lookup( unsigned char *buf, size_t buf_len,
				 unsigned int table, ia32_insn_t **raw_insn,
				 unsigned int *prefixes ) {
	unsigned char *next, op = buf[0];	/* byte value -- 'opcode' */
	size_t size = 1, sub_size = 0, next_len;
	ia32_table_desc_t *table_desc;
	unsigned int subtable, prefix = 0, recurse_table = 0;

	table_desc = &ia32_tables[table];

	op = GET_BYTE( buf, buf_len );

	if ( table_desc->type == tbl_fpu && op > table_desc->maxlim) {
		/* one of the fucking FPU tables out of the 00-BH range */
		/* OK,. this is a bit of a hack -- the proper way would
		 * have been to use subtables in the 00-BF FPU opcode tables,
		 * but that is rather wasteful of space... */
		table_desc = &ia32_tables[table +1];
	}

	/* PERFORM TABLE LOOKUP */

	/* ModR/M trick: shift extension bits into lowest bits of byte */
	/* Note: non-ModR/M tables have a shift value of 0 */
	op >>= table_desc->shift;

	/* ModR/M trick: mask out high bits to turn extension into an index */
	/* Note: non-ModR/M tables have a mask value of 0xFF */
	op &= table_desc->mask;


	/* Sparse table trick: check that byte is <= max value */
	/* Note: full (256-entry) tables have a maxlim of 155 */
	if ( op > table_desc->maxlim ) {
		/* this is a partial table, truncated at the tail,
		   and op is out of range! */
		return INVALID_INSN;
	}

	/* Sparse table trick: check that byte is >= min value */
	/* Note: full (256-entry) tables have a minlim of 0 */
	if ( table_desc->minlim > op ) {
		/* this is a partial table, truncated at the head,
		   and op is out of range! */
		return INVALID_INSN;
	}
	/* adjust op to be an offset from table index 0 */
	op -= table_desc->minlim;

	/* Yay! 'op' is now fully adjusted to be an index into 'table' */
	*raw_insn = &(table_desc->table[op]);
	//printf("BYTE %X TABLE %d OP %X\n", buf[0], table, op ); 

	if ( (*raw_insn)->mnem_flag & INS_FLAG_PREFIX ) {
		prefix = (*raw_insn)->mnem_flag & PREFIX_MASK;
	}


	/* handle escape to a multibyte/coproc/extension/etc table */
	/* NOTE: if insn is a prefix and has a subtable, then we
	 *       only recurse if this is the first prefix byte --
	 *       that is, if *prefixes is 0. 
	 * NOTE also that suffix tables are handled later */
	subtable = (*raw_insn)->table;

	if ( subtable && ia32_tables[subtable].type != tbl_suffix &&
	     (! prefix || ! *prefixes) ) {

	     	if ( ia32_tables[subtable].type == tbl_ext_ext ||
	     	     ia32_tables[subtable].type == tbl_fpu_ext ) {
			/* opcode extension: reuse current byte in buffer */
			next = buf;
			next_len = buf_len;
		} else {
			/* "normal" opcode: advance to next byte in buffer */
			if ( buf_len > 1 ) {
				next = &buf[1];
				next_len = buf_len - 1;
			}
			else {
				// buffer is truncated 
				return INVALID_INSN;
			}
		}
		/* we encountered a multibyte opcode: recurse using the
		 * table specified in the opcode definition */
		sub_size = ia32_table_lookup( next, next_len, subtable, 
				raw_insn, prefixes );

		/* SSE/prefix hack: if the original opcode def was a 
		 * prefix that specified a subtable, and the subtable
		 * lookup returned a valid insn, then we have encountered
		 * an SSE opcode definition; otherwise, we pretend we
		 * never did the subtable lookup, and deal with the 
		 * prefix normally later */
		if ( prefix && ( sub_size == INVALID_INSN  ||
		       INS_TYPE((*raw_insn)->mnem_flag) == INS_INVALID ) ) {
			/* this is a prefix, not an SSE insn :
			 * lookup next byte in main table,
			 * subsize will be reset during the
			 * main table lookup */
			recurse_table = 1;
		} else {
			/* this is either a subtable (two-byte) insn
			 * or an invalid insn: either way, set prefix
			 * to NULL and end the opcode lookup */
			prefix = 0;
			// short-circuit lookup on invalid insn
			if (sub_size == INVALID_INSN) return INVALID_INSN;
		}
	} else if ( prefix ) {
		recurse_table = 1;
	}

	/* by default, we assume that we have the opcode definition,
	 * and there is no need to recurse on the same table, but
	 * if we do then a prefix was encountered... */
	if ( recurse_table ) {
		/* this must have been a prefix: use the same table for
		 * lookup of the next byte */
		sub_size = ia32_table_lookup( &buf[1], buf_len - 1, table, 
				raw_insn, prefixes );

		// short-circuit lookup on invalid insn
		if (sub_size == INVALID_INSN) return INVALID_INSN;

		/* a bit of a hack for branch hints */
		if ( prefix & BRANCH_HINT_MASK ) {
			if ( INS_GROUP((*raw_insn)->mnem_flag) == INS_EXEC ) {
				/* segment override prefixes are invalid for
			 	* all branch instructions, so delete them */
				prefix &= ~PREFIX_REG_MASK;
			} else {
				prefix &= ~BRANCH_HINT_MASK;
			}
		}

		/* apply prefix to instruction */

		/* TODO: implement something enforcing prefix groups */
		(*prefixes) |= prefix;
	}

	/* if this lookup was in a ModR/M table, then an opcode byte is 
	 * NOT consumed: subtract accordingly. NOTE that if none of the
	 * operands used the ModR/M, then we need to consume the byte
	 * here, but ONLY in the 'top-level' opcode extension table */

	if ( table_desc->type == tbl_ext_ext ) {
		/* extensions-to-extensions never consume a byte */
		--size;
	} else if ( (table_desc->type == tbl_extension || 
	       	     table_desc->type == tbl_fpu ||
		     table_desc->type == tbl_fpu_ext ) && 
		/* extensions that have an operand encoded in ModR/M
		 * never consume a byte */
	      	    (uses_modrm_flag((*raw_insn)->dest_flag) || 
	             uses_modrm_flag((*raw_insn)->src_flag) )  	) {
		--size;
	}

	size += sub_size;

	return size;
}

static size_t handle_insn_suffix( unsigned char *buf, size_t buf_len,
			   ia32_insn_t *raw_insn, x86_insn_t * insn ) {
	ia32_table_desc_t *table_desc;
	ia32_insn_t *sfx_insn;
	size_t size;
	unsigned int prefixes = 0;

	table_desc = &ia32_tables[raw_insn->table]; 
	size = ia32_table_lookup( buf, buf_len, raw_insn->table, &sfx_insn,
				 &prefixes );
	if (size == INVALID_INSN || sfx_insn->mnem_flag == INS_INVALID ) {
		return 0;
	}

	strncpy( insn->mnemonic, sfx_insn->mnemonic, 16 );
	handle_insn_metadata( insn, sfx_insn );

	return 1;
}

/* invalid instructions are handled by returning 0 [error] from the
 * function, setting the size of the insn to 1 byte, and copying
 * the byte at the start of the invalid insn into the x86_insn_t.
 * if the caller is saving the x86_insn_t for invalid instructions,
 * instead of discarding them, this will maintain a consistent
 * address space in the x86_insn_ts */

/* this function is called by the controlling disassembler, so its name and
 * calling convention cannot be changed */
/*    buf   points to the loc of the current opcode (start of the 
 *          instruction) in the instruction stream. The instruction 
 *          stream is assumed to be a buffer of bytes read directly 
 *          from the file for the purpose of disassembly; a mem-mapped 
 *          file is ideal for *        this.
 *    insn points to a code structure to be filled by instr_decode
 *    returns the size of the decoded instruction in bytes */
size_t ia32_disasm_addr( unsigned char * buf, size_t buf_len, 
		x86_insn_t *insn ) {
	ia32_insn_t *raw_insn = NULL;
	unsigned int prefixes = 0;
	size_t size, sfx_size;
	
	if ( (ia32_settings.options & opt_ignore_nulls) && buf_len > 3 &&
	    !buf[0] && !buf[1] && !buf[2] && !buf[3]) {
		/* IF IGNORE_NULLS is set AND
		 * first 4 bytes in the intruction stream are NULL
		 * THEN return 0 (END_OF_DISASSEMBLY) */
		/* TODO: set errno */
		MAKE_INVALID( insn, buf );
		return 0;	/* 4 00 bytes in a row? This isn't code! */
	}

	/* Perform recursive table lookup starting with main table (0) */
	size = ia32_table_lookup(buf, buf_len, idx_Main, &raw_insn, &prefixes);
	if ( size == INVALID_INSN || size > buf_len || raw_insn->mnem_flag == INS_INVALID ) {
		MAKE_INVALID( insn, buf );
		/* TODO: set errno */
		return 0;
	}

	/* We now have the opcode itself figured out: we can decode
	 * the rest of the instruction. */
	size += ia32_decode_insn( &buf[size], buf_len - size, raw_insn, insn, 
				  prefixes );
	if ( raw_insn->mnem_flag & INS_FLAG_SUFFIX ) {
		/* AMD 3DNow! suffix -- get proper operand type here */
		sfx_size = handle_insn_suffix( &buf[size], buf_len - size,
				raw_insn, insn );
		if (! sfx_size ) {
			/* TODO: set errno */
			MAKE_INVALID( insn, buf );
			return 0;
		}

		size += sfx_size;
	}

	if (! size ) {
		/* invalid insn */
		MAKE_INVALID( insn, buf );
		return 0;
	}


	insn->size = size;
	return size;		/* return size of instruction in bytes */
}
