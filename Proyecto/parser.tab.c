/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 2 "parser.y" /* yacc.c:339  */


	#include<stdio.h>
	#include <stdbool.h>

	#pragma warning(disable: 4996)
	extern int yylex();
	extern int linea ;
	extern char* gramaticas[50000];
	extern char* yytext;
	int lineaactual=0;



#line 81 "parser.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "parser.tab.h".  */
#ifndef YY_YY_PARSER_TAB_H_INCLUDED
# define YY_YY_PARSER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    LITERAL = 258,
    INCLUDE = 259,
    DEFINE = 260,
    SLASH = 261,
    LEFT_BRACKET = 262,
    RIGHT_BRACKET = 263,
    COMMA = 264,
    LEFT_PARENTHESIS = 265,
    RIGHT_PARENTHESIS = 266,
    RIGHT_SBRACKET = 267,
    LEFT_SBRACKET = 268,
    SEMICOLON = 269,
    COLON = 270,
    EXCLAMATION = 271,
    PRIME = 272,
    INTERROGATION = 273,
    UP_ARROW = 274,
    DOT = 275,
    BIT_AND = 276,
    BIT_OR = 277,
    COMMENT = 278,
    PLUS = 279,
    MINUS = 280,
    DIV = 281,
    MOD = 282,
    MUL = 283,
    EQU = 284,
    LESS = 285,
    GREATER = 286,
    IDENTIFIER = 287,
    CONSTANT = 288,
    SIZEOF = 289,
    INTEGER = 290,
    PTR_OP = 291,
    INC_OP = 292,
    DEC_OP = 293,
    LEFT_OP = 294,
    RIGHT_OP = 295,
    LE_OP = 296,
    GE_OP = 297,
    EQ_OP = 298,
    NE_OP = 299,
    AND_OP = 300,
    OR_OP = 301,
    MUL_ASSIGN = 302,
    DIV_ASSIGN = 303,
    MOD_ASSIGN = 304,
    ADD_ASSIGN = 305,
    SUB_ASSIGN = 306,
    LEFT_ASSIGN = 307,
    RIGHT_ASSIGN = 308,
    AND_ASSIGN = 309,
    XOR_ASSIGN = 310,
    OR_ASSIGN = 311,
    TYPEDEF = 312,
    EXTERN = 313,
    STATIC = 314,
    AUTO = 315,
    REGISTER = 316,
    CHAR = 317,
    SHORT = 318,
    INT = 319,
    LONG = 320,
    SIGNED = 321,
    UNSIGNED = 322,
    FLOAT = 323,
    DOUBLE = 324,
    CONST = 325,
    VOLATILE = 326,
    VOID = 327,
    STRUCT = 328,
    UNION = 329,
    ENUM = 330,
    ELLIPSIS = 331,
    CASE = 332,
    DEFAULT = 333,
    IF = 334,
    ELSE = 335,
    SWITCH = 336,
    WHILE = 337,
    DO = 338,
    FOR = 339,
    GOTO = 340,
    CONTINUE = 341,
    BREAK = 342,
    RETURN = 343
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 221 "parser.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  248
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   4217

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  90
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  67
/* YYNRULES -- Number of rules.  */
#define YYNRULES  374
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  628

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   343

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      89,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    39,    39,    40,    41,    42,    43,    44,    45,    46,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    61,
      62,    63,    64,    65,    66,    67,    68,    73,    74,    78,
      79,    80,    81,    82,    83,    84,    85,    89,    90,    91,
      92,    93,    94,    98,    99,   100,   101,   102,   103,   110,
     111,   112,   113,   117,   118,   119,   120,   121,   122,   123,
     127,   128,   129,   133,   134,   135,   136,   137,   141,   142,
     143,   147,   148,   152,   153,   157,   158,   162,   163,   167,
     168,   172,   173,   177,   178,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   196,   197,   201,   205,
     206,   207,   208,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   223,   224,   229,   230,   234,   235,   236,
     241,   242,   243,   244,   245,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   264,   265,   266,   270,
     271,   275,   276,   277,   281,   282,   286,   287,   289,   290,
     295,   296,   300,   301,   302,   306,   307,   308,   312,   313,
     317,   318,   322,   323,   327,   328,   329,   330,   336,   337,
     338,   339,   340,   341,   342,   343,   344,   345,   347,   348,
     350,   355,   356,   357,   358,   362,   363,   364,   365,   366,
     367,   371,   372,   377,   378,   384,   385,   386,   387,   388,
     389,   391,   392,   393,   394,   398,   399,   402,   403,   406,
     407,   412,   413,   414,   418,   419,   420,   421,   422,   423,
     424,   425,   426,   430,   431,   432,   436,   437,   441,   442,
     443,   444,   445,   446,   450,   451,   452,   456,   457,   458,
     459,   463,   465,   466,   470,   471,   472,   473,   474,   478,
     479,   483,   484,   485,   489,   490,   491,   492,   493,   494,
     495,   496,   497,   498,   499,   503,   504,   505,   506,   507,
     511,   512,   513,   518,   519,   520,   521,   522,   523,   524,
     525,   526,   527,   531,   532,   538,   539,   540,   541,   542,
     543,   544,   545,   546,   547,   548,   549,   550,   551,   552,
     553,   554,   555,   556,   557,   558,   559,   560,   561,   562,
     563,   564,   565,   566,   567,   568,   569,   570,   571,   572,
     573,   574,   575,   576,   577,   578,   579,   580,   581,   582,
     583,   584,   585,   586,   587,   588,   589,   590,   591,   592,
     593,   594,   595,   596,   597,   598,   599,   600,   601,   602,
     603,   604,   605,   606,   607,   608,   609,   610,   611,   612,
     613,   614,   615,   616,   617,   618,   619,   620,   623,   624,
     625,   626,   627,   628,   629
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "LITERAL", "INCLUDE", "DEFINE", "SLASH",
  "LEFT_BRACKET", "RIGHT_BRACKET", "COMMA", "LEFT_PARENTHESIS",
  "RIGHT_PARENTHESIS", "RIGHT_SBRACKET", "LEFT_SBRACKET", "SEMICOLON",
  "COLON", "EXCLAMATION", "PRIME", "INTERROGATION", "UP_ARROW", "DOT",
  "BIT_AND", "BIT_OR", "COMMENT", "PLUS", "MINUS", "DIV", "MOD", "MUL",
  "EQU", "LESS", "GREATER", "IDENTIFIER", "CONSTANT", "SIZEOF", "INTEGER",
  "PTR_OP", "INC_OP", "DEC_OP", "LEFT_OP", "RIGHT_OP", "LE_OP", "GE_OP",
  "EQ_OP", "NE_OP", "AND_OP", "OR_OP", "MUL_ASSIGN", "DIV_ASSIGN",
  "MOD_ASSIGN", "ADD_ASSIGN", "SUB_ASSIGN", "LEFT_ASSIGN", "RIGHT_ASSIGN",
  "AND_ASSIGN", "XOR_ASSIGN", "OR_ASSIGN", "TYPEDEF", "EXTERN", "STATIC",
  "AUTO", "REGISTER", "CHAR", "SHORT", "INT", "LONG", "SIGNED", "UNSIGNED",
  "FLOAT", "DOUBLE", "CONST", "VOLATILE", "VOID", "STRUCT", "UNION",
  "ENUM", "ELLIPSIS", "CASE", "DEFAULT", "IF", "ELSE", "SWITCH", "WHILE",
  "DO", "FOR", "GOTO", "CONTINUE", "BREAK", "RETURN", "'\\n'", "$accept",
  "primary_expression", "postfix_expression", "argument_expression_list",
  "unary_expression", "unary_operator", "cast_expression",
  "multiplicative_expression", "additive_expression", "shift_expression",
  "relational_expression", "equality_expression", "and_expression",
  "exclusive_or_expression", "inclusive_or_expression",
  "logical_and_expression", "logical_or_expression",
  "conditional_expression", "assignment_expression", "assignment_operator",
  "expression", "constant_expression", "declaration",
  "declaration_specifiers", "init_declarator_list", "init_declarator",
  "storage_class_specifier", "type_specifier", "struct_or_union_specifier",
  "struct_or_union", "struct_declaration_list", "struct_declaration",
  "specifier_qualifier_list", "struct_declarator_list",
  "struct_declarator", "enum_specifier", "enumerator_list", "enumerator",
  "type_qualifier", "declarator", "direct_declarator", "pointer",
  "pointer_type", "type_qualifier_list", "parameter_type_list",
  "parameter_declaration", "identifier_list", "parameter_list",
  "type_name", "abstract_declarator", "direct_abstract_declarator",
  "initializer", "initializer_list", "statement", "labeled_statement",
  "compound_statement", "declaration_list", "statement_list",
  "expression_statement", "selection_statement", "iteration_statement",
  "jump_statement", "translation_unit", "external_declaration", "define",
  "define_options", "function_definition", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,    10
};
# endif

#define YYPACT_NINF -472

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-472)))

#define YYTABLE_NINF -371

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1927,    54,  1067,  1154,  3202,  -472,    42,    91,  -472,  -472,
    -472,  -472,  -472,  -472,  -472,  -472,  -472,  -472,  -472,  -472,
    -472,  -472,  -472,  -472,  -472,  -472,  -472,    79,  -472,  -472,
     229,   131,  -472,  2589,  3511,  -472,    88,   455,  -472,  3530,
    2315,   754,    66,     8,  2444,  -472,   976,  -472,  -472,  -472,
      57,  -472,  -472,  -472,  -472,  -472,  -472,  -472,  -472,  -472,
    -472,  -472,  -472,  -472,  -472,  -472,  -472,  -472,  -472,  -472,
    -472,  -472,  -472,  -472,  -472,  -472,  -472,  -472,  -472,  -472,
    -472,  -472,  -472,  -472,  -472,  -472,  -472,  -472,  -472,  -472,
    -472,  -472,  -472,  -472,  -472,  -472,  -472,  -472,  -472,  -472,
    -472,  -472,  -472,  -472,  -472,  -472,  -472,  -472,  -472,  -472,
    -472,  -472,  -472,  -472,  -472,  -472,  -472,  -472,  -472,  -472,
    -472,  -472,  -472,  -472,  -472,  -472,  -472,  -472,  -472,  -472,
    -472,  -472,  -472,  -472,  -472,  -472,  1067,  -472,  1067,  1240,
    -472,  2388,  -472,  -472,  -472,    53,  -472,  -472,    43,   744,
     655,  -472,  3915,  -472,  3948,  3948,  3981,    70,    87,   111,
     122,  1936,   142,   139,   175,   181,  3364,   106,    81,  1233,
    3981,  -472,   706,   239,   290,   414,   313,   182,   196,   183,
     190,    31,  -472,  -472,   170,  -472,   229,  4014,    72,  -472,
    -472,  -472,  1326,  1412,  -472,  -472,  -472,  -472,  3282,   220,
    3347,   230,  3366,  -472,  -472,  -472,  -472,   222,   269,  -472,
     263,  2315,  3182,   145,  -472,  -472,  -472,   455,  2589,   953,
     282,  2826,  3448,    29,  -472,   289,  -472,   455,  4047,  2557,
    -472,   372,  -472,  1670,  2845,  3526,    66,  4047,    66,  -472,
    -472,  -472,   186,  -472,  -472,     8,  -472,  2589,  -472,  -472,
     194,  -472,  -472,  3597,   285,  2461,   888,   153,   359,  3651,
    3431,  4080,  -472,    81,   155,  1936,  2534,  -472,  -472,  -472,
    2461,  -472,   307,  1936,  3981,  3981,  3981,   336,   215,  2242,
     320,  -472,  -472,  -472,   277,  -472,   155,  4113,  3684,  3981,
     331,   351,  -472,  -472,  -472,  -472,  -472,  -472,  -472,  -472,
    -472,  -472,  -472,  -472,  -472,  3981,  -472,  3981,  3981,  3981,
    3981,  3981,  3981,  3981,  3981,  3981,  3981,  3981,  3981,  3981,
    3981,  3981,  3981,  3981,  3981,  3981,  3981,  3981,  3981,  3981,
    3981,  -472,  2607,   315,  -472,  -472,  1498,  1067,  -472,  -472,
    1670,   242,  1303,   385,   145,  -472,  -472,  -472,   379,   364,
    -472,   222,  -472,  -472,  1670,  3268,  -472,  -472,   121,  1303,
    3097,  -472,   121,   953,  2096,  -472,   374,   393,   315,   408,
    -472,    90,   401,  -472,   411,   413,  -472,   422,   289,  2918,
    3717,  3750,    81,  -472,  -472,   898,  1756,  -472,   505,   230,
     431,   435,  -472,   441,   186,  -472,   186,  2845,  -472,  -472,
    -472,   425,   429,   445,  -472,   469,   475,  3783,   155,  3981,
    3981,   457,  3981,  -472,   250,   489,   490,  1936,  -472,   369,
     400,   421,   492,  1670,  3816,  -472,  -472,   315,   155,   155,
    4146,  -472,  -472,   428,  -472,   338,  -472,  -472,  -472,   182,
    -472,  -472,  -472,   239,   239,   190,   372,   372,   239,   239,
     290,   290,   290,   290,   414,   414,   313,   182,   196,   183,
     161,   190,  -472,  -472,  -472,  -472,  -472,   278,  3981,  -472,
     222,   407,    48,   496,  3981,   286,  -472,   494,  -472,   121,
    -472,   361,  1670,   287,  3116,  2169,  4179,   106,    55,   480,
    1131,  2826,  -472,  -472,  -472,  2022,  -472,  -472,  -472,   510,
    -472,   512,  -472,   463,   145,  3029,  -472,  2937,  -472,  -472,
    -472,   499,   511,   514,   523,  3981,   424,   241,   315,  -472,
    -472,   528,  -472,  3981,  -472,  1936,  1936,  1842,  3981,  1584,
    3981,  3849,   315,   315,  2680,  -472,  3981,  -472,  -472,  3981,
    -472,  -472,  -472,  -472,  -472,  -472,   121,  -472,  3981,  -472,
    -472,  2031,  3651,  2753,  -472,   197,   530,  -472,  -472,  -472,
    -472,  -472,  3882,  3029,  -472,   516,  -472,   513,   515,  3981,
    -472,  -472,  -472,  -472,   472,  -472,  -472,  -472,   438,  1842,
     458,  1842,   481,   250,   538,  -472,  -472,  -472,  -472,   826,
     140,   546,  -472,   550,  -472,  -472,  -472,  3010,   531,   534,
     340,  1936,   552,  -472,  -472,  1842,  -472,  -472,  1842,   556,
    -472,  2169,   559,  -472,  -472,  -472,  -472,  -472,  -472,  -472,
    -472,  -472,  -472,  -472,  -472,  4014,  3450,  -472
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
     272,     0,     0,     0,     0,   281,   186,   185,   168,   120,
     121,   122,   123,   124,   126,   127,   128,   129,   132,   133,
     130,   131,   162,   163,   125,   139,   140,     0,   280,   274,
       0,     0,   115,   103,   105,   134,     0,   209,   135,   113,
     117,   165,     0,   181,   106,   282,     0,   270,   273,   276,
       0,   285,   286,   287,   288,   289,   290,   291,   292,   293,
     294,   295,   296,   297,   298,   299,   300,   301,   302,   303,
     304,   305,   306,   307,   308,   309,   310,   311,   312,   313,
     314,   315,   316,   317,   318,   319,   320,   321,   322,   323,
     324,   325,   326,   327,   328,   329,   330,   331,   332,   333,
     334,   335,   336,   337,   338,   339,   340,   341,   342,   343,
     344,   345,   346,   347,   348,   349,   350,   351,   352,   353,
     354,   355,   356,   357,   358,   359,   360,   361,   362,   363,
     364,   365,   366,   367,   283,   275,     0,     4,     0,     0,
     237,     0,   249,    42,    41,    37,    39,    40,    38,     0,
       2,     3,     0,     6,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    10,    29,    43,
       0,    52,    53,    60,    63,    68,    71,    73,    75,    77,
      79,    81,    83,    96,     0,   241,     0,   117,     0,   244,
     228,   229,     0,     0,   230,   231,   232,   233,     0,     0,
     105,     0,   106,   190,   187,   188,   189,     0,   157,    99,
       0,   117,   165,     0,   102,   104,   107,   146,   109,     0,
     138,     0,     0,   211,   210,   212,   114,   148,     0,     2,
      43,   119,   371,     0,     0,     0,     0,     0,     0,   169,
     170,   166,   164,   191,   183,   182,   108,   110,     1,   271,
       0,   284,   245,   237,     0,     0,     2,     0,     0,   117,
     106,     0,     2,    30,     0,     0,     0,    34,    31,    32,
       0,    98,     0,     0,     0,     0,     0,     2,     0,     0,
       0,   266,   267,   268,     0,     7,     0,     0,     0,     0,
       0,     0,    21,    22,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,     0,    33,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   250,     0,    11,   239,   242,     0,     0,   238,   247,
     248,   147,   149,     0,     0,   174,   173,   175,   160,     0,
     158,     0,   100,   369,     0,     0,   116,   111,     0,   147,
       0,   141,     0,     0,     0,   219,     2,     0,   204,   197,
     198,   211,     0,   207,   193,     0,   215,     0,   213,     0,
       0,     0,    29,   223,   118,   229,   243,   180,   168,   198,
       0,     0,   177,     0,   171,   167,   172,     0,   192,   184,
     112,     0,     0,     0,    16,     0,     0,     0,     5,     0,
     175,     2,     0,   234,     2,     0,     0,     0,   236,     0,
       0,     0,     0,     0,     0,   265,   269,     9,    42,    40,
       0,    26,    17,     0,    27,     0,    19,    20,    84,    54,
      50,    51,    49,    56,    57,    55,    58,    59,    61,    62,
      64,    65,    66,    67,    69,    70,    72,    74,    76,    78,
       0,    80,    97,   240,   246,   146,   148,     0,     0,   155,
       0,     0,   229,   374,     0,     0,   150,   152,   137,   168,
     142,   209,   143,     0,     0,     0,     0,    10,   211,   199,
       0,     0,   195,   196,   220,     0,   214,   216,   221,     0,
     217,     0,   226,     0,     0,     0,   372,     0,   178,   179,
     176,     0,     0,     0,     0,     0,    53,     0,     8,    45,
      44,     0,    35,     0,   235,     0,     0,     0,     0,     0,
     230,     0,    13,    12,     0,    23,     0,    18,    14,     0,
     101,   161,   159,   156,   373,   153,     0,   145,     0,   144,
     136,     2,   117,     0,   200,     0,     0,   194,   208,   222,
     218,   224,     0,     0,   205,   206,   277,     0,     0,     0,
      46,    47,    48,    36,   251,   253,   260,   254,     0,     0,
       0,     0,     0,     2,     0,    28,    82,   151,   154,   211,
       2,     0,   203,     0,   201,   225,   227,     0,     0,     0,
       0,     0,     0,   264,   259,     0,   261,   256,     0,     0,
      24,     0,     0,    35,   202,   279,   278,    15,   252,   255,
     263,   258,   262,   257,    25,   117,   106,    36
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -472,   399,  -126,  -472,   388,  -472,  -162,   -30,  -291,     7,
     174,   247,  -254,   246,   253,  -266,  -472,  -129,  -145,  -472,
     461,  -200,    50,    28,   -11,   371,  -472,   319,  -472,  -472,
     219,  -351,   -22,  -346,    40,  -472,   237,   123,   398,    69,
     -29,     0,  -472,  -472,  -223,  -471,    84,    85,     3,   -23,
    -208,  -231,  -472,   233,  -472,     5,    15,    -1,  -241,  -472,
    -472,  -472,  -472,   548,  -105,  -472,   213
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   167,   168,   433,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   305,
     184,   272,   185,   186,    31,    32,    33,    34,    35,    36,
     360,   361,    37,   475,   476,    38,   349,   350,    39,   187,
      41,   264,    43,   245,   372,   373,   391,   374,    44,   375,
     225,   384,   503,   189,   190,   191,   340,   386,   194,   195,
     196,   197,    46,    47,   135,   136,    48
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      42,   212,   193,   188,    42,    45,   395,   202,   306,   480,
     231,   390,   217,   242,   224,   378,   483,   227,   192,   210,
     443,   444,   377,   263,   558,   448,   449,   271,    30,     6,
      42,   251,   199,   252,   218,   393,     7,   223,   424,   221,
     188,    42,   222,   244,   247,   232,    42,   445,  -368,   328,
      29,    45,  -368,   439,  -185,   233,  -185,    49,   137,   203,
     204,   215,   216,   461,  -186,   364,  -186,   226,   222,    40,
     203,   457,   246,   201,    30,   137,   198,   329,    22,    23,
     205,   206,   332,   383,    50,   273,   207,   229,   151,   250,
     153,   288,   383,   271,   289,   219,    29,   274,     8,   211,
     491,   290,   382,   222,   229,   151,   271,   153,   204,   285,
     241,   208,   286,  -185,  -185,    40,   517,   291,   292,   293,
     220,   275,     8,  -186,  -186,   431,   558,     6,   205,   206,
     258,   198,   276,   480,     7,   483,   474,  -368,   193,   188,
     213,   188,     6,   434,   260,   214,   440,   441,   442,     7,
     502,   592,   279,     8,   192,   198,   499,   231,   137,   242,
     438,     6,   330,   378,   408,   412,     6,   287,     7,   199,
     330,   280,   406,     7,   390,   210,   539,     8,   217,   330,
     501,   231,   530,   531,   331,   462,    42,   262,   151,   281,
     153,   336,   188,   188,   224,   282,   397,   362,    42,   235,
     218,   343,   247,   324,   224,   326,   236,   394,   592,   396,
     259,   188,    42,    42,   401,   325,   353,   223,     6,   402,
     403,   371,   238,   239,   240,     7,   354,   223,   216,   231,
     246,   344,   464,   188,    42,   327,   383,   202,   385,   198,
     355,   346,   335,   209,   258,   399,   357,   519,   520,   369,
       6,   271,   572,   345,   348,   188,   407,     7,   405,   258,
     247,     8,   369,   314,   315,   314,   315,   201,   541,   415,
     188,     6,   213,   416,   545,   400,   351,   352,     7,   188,
     378,   241,   406,   335,   446,   447,   330,   213,   246,   363,
     370,   426,   540,   404,   423,   546,   546,   422,   517,   379,
     547,   549,   380,   389,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,   285,   465,
     466,   286,   417,   200,   259,   450,   451,   452,   453,   316,
     317,   596,   188,   467,   425,   343,   188,   465,   481,   271,
     188,   362,   242,   489,    42,   271,   493,   330,   588,   330,
     538,   265,   617,   570,   188,    42,   322,   323,    42,   472,
      42,   520,    42,   436,   488,   489,   223,   202,   213,   371,
     409,   491,   469,   470,   222,   482,   474,   516,   330,    42,
     525,   378,     6,   437,   221,    42,   188,   222,   223,     7,
     335,   585,   369,     8,   278,     6,   347,    42,   308,   309,
     310,   201,     7,   490,   335,   473,  -168,   369,   468,   330,
     586,   526,   494,   504,   521,   543,   470,   383,   491,   271,
     495,   222,   529,   188,   496,   369,   339,   477,   230,     6,
     330,   477,   527,   389,   497,   571,     7,   536,   492,   537,
       8,   243,   508,   307,   318,   319,   509,   330,   370,   602,
     308,   309,   310,   510,   505,   320,   321,   511,   224,   242,
     200,   512,   481,   311,   312,   221,   370,   330,   222,   605,
     313,   561,   562,   335,   258,   212,     6,   513,   544,    42,
     410,   371,   188,     7,    42,   488,   514,   287,   260,   406,
     330,   371,   608,   556,   202,    42,   454,   455,   413,   482,
     522,   523,   528,     3,    42,    42,   418,    42,    -2,   548,
     232,    -2,   554,   369,   507,   221,    -2,   341,   222,   369,
     233,   559,   231,   369,   560,   597,     6,   188,   489,   188,
     566,   567,   335,     7,   568,   369,   569,   584,   359,   573,
     267,   594,   268,   269,   230,   598,    42,   599,   477,   610,
     477,   589,   601,   200,   552,   593,   591,   613,   230,   516,
     389,   614,   615,    42,   370,   616,   619,   624,   353,   339,
     627,   456,   458,   563,   341,   230,   370,   576,   354,   188,
     459,   188,   484,   609,   356,   359,   587,   333,   471,   359,
     612,   564,   565,   542,   249,   231,   342,    42,   506,   230,
     258,     0,   257,     0,     0,   188,     0,     0,   188,     0,
     230,   488,     0,     0,   626,   477,     0,   342,     0,   339,
     368,     0,     0,   230,     0,   369,   247,   284,     0,   603,
       0,   606,     0,   368,     0,     0,     0,     0,     0,   369,
       0,     0,     0,   398,     0,     0,     0,   230,     0,     0,
     524,   341,     0,   342,   246,   620,     0,     0,   622,     0,
     359,   359,  -168,   333,   342,     0,   370,     0,   342,     0,
     265,  -168,  -168,     0,     0,   230,     0,     0,   359,     0,
     625,     0,   359,   200,     0,   427,     0,  -168,  -168,  -168,
    -168,     0,     0,     0,     0,   230,   230,   230,   230,   230,
     230,   230,   230,   230,   230,   230,   230,   230,   230,   230,
     230,   230,   230,   230,   230,   230,   257,   230,     0,     0,
       0,     0,   257,     0,     0,   307,     0,   257,     0,     0,
     342,   257,   308,   309,   310,   419,   420,   421,     0,   342,
     342,     0,     0,     0,     0,   311,   312,   137,     0,     0,
     435,   254,   313,     0,   261,     0,     0,   342,   574,   575,
     577,   342,   339,   487,   234,     6,     0,   235,   230,     0,
       0,     0,     7,     0,   236,     6,   262,   151,   368,   153,
       0,     0,     7,   237,     0,     0,     8,     0,     0,   460,
     238,   239,   240,   257,     0,   230,   368,   230,   230,     0,
       0,     0,     0,     0,   200,     0,     0,   518,     0,   359,
     200,     0,   604,     0,   607,     0,     0,     0,   535,     0,
       0,     0,     0,     0,     0,   257,     0,   532,   533,   137,
       0,     0,     0,   254,   618,     0,   611,   515,   621,   222,
       0,   623,   143,   144,     0,     0,     0,   145,     0,     0,
     146,   147,     0,   359,   148,   149,   230,     0,   262,   151,
     152,   153,   230,   154,   155,     0,     0,     0,     0,     0,
       0,     0,   359,   257,   267,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   487,     0,     0,   333,   342,     0,
     368,     0,     0,     0,   368,  -168,     0,     0,  -370,     0,
       0,     0,  -370,   230,  -168,  -168,   368,     0,   198,     6,
       0,   230,     0,     0,     0,     0,     7,     0,     0,     6,
     406,  -168,  -168,  -168,     0,     0,     7,   230,     0,     0,
       8,     0,   342,     0,     0,     0,   230,     0,     0,     0,
     230,     0,     0,     0,     0,     0,   257,     0,     0,     0,
       0,   342,     0,     0,     0,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,     0,     0,   248,   230,     0,     0,
       1,     2,     0,     3,     0,   358,     4,  -370,     0,   578,
       5,   580,   582,     0,     0,   257,   368,     6,     0,     0,
       0,     0,     0,     0,     7,     0,     0,     0,     8,     0,
     487,     0,     0,   230,   257,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,     0,
     600,     0,     0,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    28,     0,     0,     0,     0,
      51,     0,   257,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
       0,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   137,     0,   138,
       0,   139,   140,   555,   141,     0,     0,     0,   142,     0,
     143,   144,     0,     0,     0,   145,     0,     0,   146,   147,
       0,     0,   148,   149,     0,     0,   150,   151,   152,   153,
       0,   154,   155,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,     0,     0,     0,
       0,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
       0,   156,   157,   158,     0,   159,   160,   161,   162,   163,
     164,   165,   166,   137,     0,   138,     0,   139,   253,     0,
     141,     0,     0,     0,   142,     0,   143,   144,     0,     0,
       0,   145,   294,     0,   146,   147,     0,     0,   148,   149,
       0,     0,   150,   151,   152,   153,     0,   154,   155,     0,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
       0,     0,     0,     0,     0,     0,     0,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,     0,   156,   157,   158,
       0,   159,   160,   161,   162,   163,   164,   165,   166,   137,
       0,   138,     0,   139,   334,     0,   141,     0,     0,     0,
     142,     0,   143,   144,     0,     0,     0,   145,     0,     0,
     146,   147,     0,     0,   148,   149,     0,     0,   150,   151,
     152,   153,     0,   154,   155,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,     0,
       0,     0,     0,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,     0,   156,   157,   158,     0,   159,   160,   161,
     162,   163,   164,   165,   166,   137,     0,   337,     0,   139,
     338,     0,   141,     0,     0,     0,   142,     0,   143,   144,
       0,     0,     0,   145,     0,     0,   146,   147,     0,     0,
     148,   149,     0,     0,   150,   151,   152,   153,     0,   154,
     155,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,     0,   156,
     157,   158,     0,   159,   160,   161,   162,   163,   164,   165,
     166,   137,     0,   337,     0,   139,   463,     0,   141,     0,
       0,     0,   142,     0,   143,   144,     0,     0,     0,   145,
       0,     0,   146,   147,     0,     0,   148,   149,     0,     0,
     150,   151,   152,   153,     0,   154,   155,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,     0,   156,   157,   158,     0,   159,
     160,   161,   162,   163,   164,   165,   166,   137,     0,   337,
       0,   139,     0,     0,   141,   579,     0,     0,   142,     0,
     143,   144,     0,     0,     0,   145,     0,     0,   146,   147,
       0,     0,   148,   149,     0,     0,   150,   151,   152,   153,
       0,   154,   155,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
       0,   156,   157,   158,     0,   159,   160,   161,   162,   163,
     164,   165,   166,   137,     0,   138,     0,   139,     0,     0,
     141,     0,     0,     0,   142,     0,   143,   144,     0,     0,
       0,   145,     0,     0,   146,   147,     0,     0,   148,   149,
       0,     0,   150,   151,   152,   153,     0,   154,   155,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,     0,   156,   157,   158,
       0,   159,   160,   161,   162,   163,   164,   165,   166,   137,
       0,   337,     0,   139,     0,     0,   141,     0,     0,     0,
     142,     0,   143,   144,     0,     0,     0,   145,     0,     0,
     146,   147,     0,     0,   148,   149,     0,     0,   150,   151,
     152,   153,     0,   154,   155,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,     0,   156,   157,   158,     0,   159,   160,   161,
     162,   163,   164,   165,   166,   137,     0,     0,     0,   139,
       0,     0,   141,     0,     0,     0,   142,     0,   143,   144,
       0,     0,     0,   145,     0,     0,   146,   147,     0,     0,
     148,   149,     0,     0,   150,   151,   152,   153,     0,   154,
     155,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,     0,   156,
     157,   158,     0,   159,   160,   161,   162,   163,   164,   165,
     166,     1,     2,     0,     3,     0,     0,     4,     0,   137,
       0,     5,     0,   139,     0,     0,   270,     0,     6,     0,
     142,     0,   143,   144,     0,     7,     0,   145,     0,     8,
     146,   147,     0,     0,   148,   149,     0,     0,   277,   151,
     152,   153,     0,   154,   155,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   156,   157,   158,    28,   159,   160,   161,
     162,   163,   164,   165,   166,   137,     0,     0,     0,     0,
       0,     0,   332,     0,     0,     0,     0,     0,  -168,     0,
       0,   221,     0,     6,   222,     0,     0,  -168,  -168,     0,
       7,     0,     6,     0,   366,   151,   367,   153,     0,     7,
       0,     0,     0,   406,  -168,  -168,  -168,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,   557,   137,
       0,     0,     0,   254,     0,     0,   485,   365,     0,   222,
       0,     0,   143,   144,     0,     0,     0,   145,     0,     0,
     146,   147,     0,     0,   148,   149,     0,     0,   366,   151,
     486,   153,     0,   154,   155,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,   137,     0,     0,     0,   254,     0,     0,   485,
     365,     0,   222,     0,     0,   143,   144,     0,     0,     0,
     145,     0,     0,   146,   147,     0,     0,   148,   149,     0,
       0,   551,   151,   486,   153,     0,   154,   155,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,   137,     0,     0,     0,   254,
       0,     0,   141,     0,     0,     0,   142,     0,   143,   144,
       0,     0,     0,   145,     0,     0,   146,   147,     0,     0,
     148,   149,     0,     0,   229,   151,   152,   153,     0,   154,
     155,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,   137,     0,
       0,     0,   139,     0,     0,   141,     0,     0,     0,     0,
       0,   143,   144,     0,     0,     0,   145,     0,     0,   146,
     147,     0,     0,   148,   228,     0,     0,   229,   151,   152,
     153,     0,   154,   155,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,   137,     0,     0,     0,   254,     0,     0,   255,     0,
       0,     0,     0,     0,   143,   144,     0,     0,     0,   145,
       0,     0,   146,   147,     0,     0,   148,   149,     0,     0,
     256,   151,   152,   153,     0,   154,   155,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,   137,     6,     0,     0,   254,     0,
       0,   255,     7,     0,     0,     0,     0,   143,   144,     0,
       0,     0,   145,     0,     0,   146,   147,     0,     0,   148,
     149,     0,     0,   256,   151,   152,   153,     0,   154,   155,
       0,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
       0,     0,     0,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,   137,     0,     0,
       0,   254,     0,     0,   270,     0,     0,     0,     0,     0,
     143,   144,     0,     0,     0,   145,     0,     0,   146,   147,
       0,     0,   148,   149,  -168,     0,   414,   151,   152,   153,
       0,   154,   155,  -168,  -168,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  -168,
    -168,  -168,  -168,     0,     0,     0,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
     137,     0,     0,     0,   254,     0,     0,   255,     0,     0,
       0,     0,     0,   143,   144,     0,     0,     0,   145,     0,
       0,   146,   147,     0,     0,   148,   149,     0,     0,   229,
     151,   152,   153,     0,   154,   155,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,     0,     0,     0,     0,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,   137,     0,     0,     0,   254,     0,     0,
     270,     0,     0,     0,     0,     0,   143,   144,     0,     0,
       0,   145,     0,     0,   146,   147,     0,     0,   148,   149,
       0,     0,   583,   151,   152,   153,     0,   154,   155,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,   137,     0,     0,     0,
     254,     0,     0,   270,     0,     0,     0,     0,     0,   143,
     144,     0,     0,     0,   145,     0,     0,   146,   147,     0,
       0,   148,   149,     0,     0,   590,   151,   152,   153,     0,
     154,   155,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,   137,
       0,     0,     0,     0,     0,     0,   364,   365,     0,   222,
       0,     0,     0,     0,     0,     0,     0,     6,   137,     0,
       0,     0,     0,     0,     7,   332,   387,     0,   366,   151,
     367,   153,     0,     0,     0,     0,     6,     0,     0,     0,
       0,     0,     0,     7,     0,     0,     0,   388,   151,   367,
     153,     0,     0,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,   137,     0,     0,     0,     0,     0,     0,   332,   498,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     6,
     137,     0,     0,     0,     0,     0,     7,   332,     0,     0,
     366,   151,   367,   153,     0,     0,     0,     0,     6,     0,
       0,     0,     0,     0,     0,     7,     0,     0,     0,   388,
     151,   367,   153,     0,     0,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,   137,     0,     0,     0,     0,     0,     0,
     332,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     6,     0,     0,     0,     0,     3,     0,     7,     4,
       0,     0,   366,   151,   367,   153,     0,     0,     0,     0,
       6,     0,     0,     0,     0,     0,     0,     7,     0,     0,
       0,     8,     0,     0,     0,     0,     0,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,   478,     0,     4,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     6,     0,
       0,     0,     0,     0,   550,     7,     4,     0,     0,   479,
       0,     0,     0,     0,     0,     0,     0,     6,     0,     0,
       0,     0,     0,     0,     7,     0,     0,     0,   479,     0,
       0,     0,     0,     0,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,   234,     0,     0,   235,     0,     0,     0,     0,
       0,     0,   236,     6,     0,     0,     0,     0,     0,     0,
       7,   237,   198,     0,     8,     0,     0,     0,   238,   239,
     240,     0,     0,     6,     0,     0,     0,     0,     0,     0,
       7,     0,     0,     0,     8,     0,     0,     0,     0,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,     0,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,     4,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     6,
       0,     0,   198,     0,     0,     0,     7,     0,     0,     0,
       8,     0,     0,     6,     0,     0,     0,     0,     0,     0,
       7,     0,     0,     0,     8,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,   345,     0,
       0,     0,     0,     0,     0,     0,     0,   137,     6,     0,
       0,   254,     0,     0,   270,     7,     0,   347,   283,     0,
     143,   144,     0,     0,     0,   145,     0,     6,   146,   147,
       0,     0,   148,   149,     7,     0,   262,   151,   152,   153,
       0,   154,   155,     0,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,   410,     0,     0,     0,     0,     0,     0,     0,
       0,   137,     6,     0,     0,   254,     0,     0,   270,     7,
     376,   523,     0,     0,   143,   144,     0,     0,     0,   145,
       0,     6,   146,   147,     0,     0,   148,   149,     7,     0,
     262,   151,   152,   153,     0,   154,   155,     0,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,  -147,     0,     0,   137,
       0,     0,     6,   254,     0,     0,   270,     0,   392,     7,
       0,     0,   143,   144,     0,  -149,     0,   145,     0,     0,
     146,   147,     0,     0,   148,   149,     0,     0,   262,   151,
     152,   153,     0,   154,   155,     0,     0,     0,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,   -16,   -16,     0,     0,
     -16,   -16,     0,     0,     0,   -16,   -16,   -16,   -16,   -16,
       0,   -16,   -16,   -16,   -16,   -16,   -16,   -16,   -16,     0,
       0,     0,     0,   -16,   -16,   -16,   -16,   -16,   -16,   -16,
     -16,   -16,   -16,   -16,   -16,   -16,   -16,   -16,   -16,   -16,
     -16,   -16,   -16,   -16,   137,     0,     0,     0,   254,     0,
       0,   270,   346,     0,     0,     0,     0,   143,   144,     0,
       0,     0,   145,     0,     0,   146,   147,     0,     0,   148,
     228,     0,     0,   262,   151,   152,   153,   137,   154,   155,
       0,   254,     0,     0,   270,   432,     0,     0,     0,     0,
     143,   144,     0,     0,     0,   145,     0,     0,   146,   147,
       0,     0,   148,   149,     0,     0,   262,   151,   152,   153,
     137,   154,   155,     0,   254,     0,     0,   270,     0,   500,
       0,     0,     0,   143,   144,     0,     0,     0,   145,     0,
       0,   146,   147,     0,     0,   148,   149,     0,     0,   262,
     151,   152,   153,   137,   154,   155,     0,   381,   404,     0,
     270,     0,     0,     0,     0,     0,   143,   144,     0,     0,
       0,   145,     0,     0,   146,   147,     0,     0,   148,   149,
       0,     0,   262,   151,   152,   153,   137,   154,   155,     0,
     254,     0,     0,   270,   515,     0,     0,     0,     0,   143,
     144,     0,     0,     0,   145,     0,     0,   146,   147,     0,
       0,   148,   149,     0,     0,   262,   151,   152,   153,   137,
     154,   155,     0,   254,     0,     0,   270,     0,     0,     0,
     142,     0,   143,   144,     0,     0,     0,   145,     0,     0,
     146,   147,     0,     0,   148,   149,     0,     0,   262,   151,
     152,   153,   137,   154,   155,     0,   254,     0,     0,   270,
     581,     0,     0,     0,     0,   143,   144,     0,     0,     0,
     145,     0,     0,   146,   147,     0,     0,   148,   149,     0,
       0,   262,   151,   152,   153,   137,   154,   155,     0,   381,
     595,     0,   270,     0,     0,     0,     0,     0,   143,   144,
       0,     0,     0,   145,     0,     0,   146,   147,     0,     0,
     148,   149,     0,     0,   262,   151,   152,   153,   137,   154,
     155,     0,   254,     0,     0,   266,     0,     0,     0,     0,
       0,   143,   144,     0,     0,     0,   145,     0,     0,   146,
     147,     0,     0,   148,   149,     0,     0,   262,   151,   152,
     153,   137,   154,   155,     0,   254,     0,     0,   261,     0,
       0,     0,     0,     0,   143,   144,     0,     0,     0,   145,
       0,     0,   146,   147,     0,     0,   148,   149,     0,     0,
     262,   151,   152,   153,   137,   154,   155,     0,   254,     0,
       0,   270,     0,     0,     0,     0,     0,   143,   144,     0,
       0,     0,   145,     0,     0,   146,   147,     0,     0,   148,
     149,     0,     0,   262,   151,   152,   153,   137,   154,   155,
       0,   254,     0,     0,   270,     0,     0,     0,     0,     0,
     143,   144,     0,     0,     0,   145,     0,     0,   146,   147,
       0,     0,   148,   228,     0,     0,   262,   151,   152,   153,
     137,   154,   155,     0,   381,     0,     0,   270,     0,     0,
       0,     0,     0,   143,   144,     0,     0,     0,   145,     0,
       0,   146,   147,     0,     0,   148,   149,     0,     0,   262,
     151,   152,   153,   137,   154,   155,     0,   254,     0,     0,
     270,     0,     0,     0,     0,     0,   143,   144,     0,     0,
       0,   145,     0,     0,   146,   147,     0,     0,   148,   149,
       0,     0,   411,   151,   152,   153,   137,   154,   155,     0,
     254,     0,     0,   270,     0,     0,     0,     0,     0,   428,
     144,     0,     0,     0,   145,     0,     0,   146,   429,     0,
       0,   148,   149,     0,     0,   262,   151,   430,   153,   137,
     154,   155,     0,   254,     0,     0,   534,     0,     0,     0,
       0,     0,   143,   144,     0,     0,     0,   145,     0,     0,
     146,   147,     0,     0,   148,   149,     0,     0,   262,   151,
     152,   153,   137,   154,   155,     0,   254,     0,     0,   553,
       0,     0,     0,     0,     0,   143,   144,     0,     0,     0,
     145,     0,     0,   146,   147,     0,     0,   148,   149,     0,
       0,   262,   151,   152,   153,     0,   154,   155
};

static const yytype_int16 yycheck[] =
{
       0,    30,     3,     3,     4,     0,   237,     4,   170,   360,
      40,   234,    34,    42,    37,   223,   362,    39,     3,    30,
     311,   312,   222,   149,   495,   316,   317,   156,     0,    21,
      30,   136,     4,   138,    34,   235,    28,    37,   279,    10,
      40,    41,    13,    43,    44,    40,    46,   313,     0,    18,
       0,    46,     4,   307,    11,    40,    13,     3,     3,    17,
      17,    33,    34,   329,    11,    10,    13,    39,    13,     0,
      17,   325,    44,     4,    46,     3,    10,    46,    70,    71,
      37,    38,    10,   228,    30,    15,     7,    32,    33,    32,
      35,    10,   237,   222,    13,     7,    46,    10,    32,    30,
      10,    20,   228,    13,    32,    33,   235,    35,    17,     3,
      41,    32,     6,    70,    71,    46,   407,    36,    37,    38,
      32,    10,    32,    70,    71,   287,   597,    21,    37,    38,
     141,    10,    10,   484,    28,   481,    15,    89,   139,   139,
       9,   141,    21,   288,   141,    14,   308,   309,   310,    28,
     381,    11,    10,    32,   139,    10,   379,   187,     3,   188,
     305,    21,     9,   371,    11,    10,    21,   167,    28,   141,
       9,    32,    32,    28,   397,   186,    15,    32,   200,     9,
     380,   211,   423,   424,    14,   330,   186,    32,    33,    14,
      35,   192,   192,   193,   217,    14,    10,   219,   198,    13,
     200,   198,   202,    21,   227,    22,    20,   236,    11,   238,
     141,   211,   212,   213,    20,    19,   211,   217,    21,    25,
      26,   221,    36,    37,    38,    28,   211,   227,   200,   259,
     202,    11,   337,   233,   234,    45,   381,   234,   233,    10,
     212,    11,   192,    14,   255,   245,   218,   409,   410,   221,
      21,   380,    11,    11,    32,   255,   256,    28,   255,   270,
     260,    32,   234,    24,    25,    24,    25,   198,   468,   266,
     270,    21,     9,   270,   474,   247,     7,    14,    28,   279,
     488,   212,    32,   233,   314,   315,     9,     9,   260,     7,
     221,    14,    14,     8,   279,     9,     9,    82,   589,    10,
      14,    14,    13,   234,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,     3,   341,
     342,     6,    15,     4,   255,   318,   319,   320,   321,    39,
      40,   562,   332,   344,    14,   332,   336,   359,   360,   468,
     340,   363,   371,   366,   344,   474,   369,     9,   548,     9,
      12,    15,    12,   515,   354,   355,    43,    44,   358,   354,
     360,   523,   362,    32,   364,   388,   366,   364,     9,   369,
      11,    10,     8,     9,    13,   360,    15,   407,     9,   379,
      11,   589,    21,    32,    10,   385,   386,    13,   388,    28,
     340,   536,   364,    32,   161,    21,    11,   397,    26,    27,
      28,   332,    28,    10,   354,   355,    32,   379,    29,     9,
     539,    11,    11,   385,   414,     8,     9,   562,    10,   548,
       9,    13,   423,   423,    11,   397,   193,   358,    40,    21,
       9,   362,    11,   364,    12,    11,    28,     9,   369,    11,
      32,    43,    11,    19,    30,    31,    11,     9,   379,    11,
      26,    27,    28,    12,   385,    41,    42,    32,   481,   488,
     141,    32,   484,    39,    40,    10,   397,     9,    13,    11,
      46,     8,     9,   423,   485,   504,    21,    32,   473,   479,
      11,   481,   482,    28,   484,   485,    11,   487,   485,    32,
       9,   491,    11,   490,   491,   495,   322,   323,   265,   484,
      11,    11,    10,     7,   504,   505,   273,   507,     3,    15,
     505,     6,    32,   485,     9,    10,    11,   198,    13,   491,
     505,    11,   552,   495,    12,     9,    21,   527,   551,   529,
      31,    20,   482,    28,    20,   507,    13,   534,   219,    11,
     152,    11,   154,   155,   156,    32,   546,    32,   479,    11,
     481,   551,    80,   234,   485,   555,   553,    11,   170,   589,
     491,    11,    31,   563,   495,    31,    14,    11,   563,   336,
      11,   324,   326,   504,   255,   187,   507,   527,   563,   579,
     327,   581,   363,   583,   213,   266,   546,   188,   351,   270,
     590,   507,   507,   470,    46,   625,   198,   597,   385,   211,
     611,    -1,   141,    -1,    -1,   605,    -1,    -1,   608,    -1,
     222,   611,    -1,    -1,   611,   546,    -1,   219,    -1,   386,
     221,    -1,    -1,   235,    -1,   597,   626,   166,    -1,   579,
      -1,   581,    -1,   234,    -1,    -1,    -1,    -1,    -1,   611,
      -1,    -1,    -1,   245,    -1,    -1,    -1,   259,    -1,    -1,
     417,   332,    -1,   255,   626,   605,    -1,    -1,   608,    -1,
     341,   342,     7,   264,   266,    -1,   597,    -1,   270,    -1,
      15,    16,    17,    -1,    -1,   287,    -1,    -1,   359,    -1,
     611,    -1,   363,   364,    -1,   286,    -1,    32,    33,    34,
      35,    -1,    -1,    -1,    -1,   307,   308,   309,   310,   311,
     312,   313,   314,   315,   316,   317,   318,   319,   320,   321,
     322,   323,   324,   325,   326,   327,   255,   329,    -1,    -1,
      -1,    -1,   261,    -1,    -1,    19,    -1,   266,    -1,    -1,
     332,   270,    26,    27,    28,   274,   275,   276,    -1,   341,
     342,    -1,    -1,    -1,    -1,    39,    40,     3,    -1,    -1,
     289,     7,    46,    -1,    10,    -1,    -1,   359,   525,   526,
     527,   363,   529,   364,    10,    21,    -1,    13,   380,    -1,
      -1,    -1,    28,    -1,    20,    21,    32,    33,   379,    35,
      -1,    -1,    28,    29,    -1,    -1,    32,    -1,    -1,   328,
      36,    37,    38,   332,    -1,   407,   397,   409,   410,    -1,
      -1,    -1,    -1,    -1,   485,    -1,    -1,   408,    -1,   490,
     491,    -1,   579,    -1,   581,    -1,    -1,    -1,   430,    -1,
      -1,    -1,    -1,    -1,    -1,   364,    -1,   428,   429,     3,
      -1,    -1,    -1,     7,   601,    -1,    10,    11,   605,    13,
      -1,   608,    16,    17,    -1,    -1,    -1,    21,    -1,    -1,
      24,    25,    -1,   534,    28,    29,   468,    -1,    32,    33,
      34,    35,   474,    37,    38,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   553,   412,   486,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   485,    -1,    -1,   488,   490,    -1,
     491,    -1,    -1,    -1,   495,     7,    -1,    -1,     0,    -1,
      -1,    -1,     4,   515,    16,    17,   507,    -1,    10,    21,
      -1,   523,    -1,    -1,    -1,    -1,    28,    -1,    -1,    21,
      32,    33,    34,    35,    -1,    -1,    28,   539,    -1,    -1,
      32,    -1,   534,    -1,    -1,    -1,   548,    -1,    -1,    -1,
     552,    -1,    -1,    -1,    -1,    -1,   485,    -1,    -1,    -1,
      -1,   553,    -1,    -1,    -1,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    -1,    -1,     0,   589,    -1,    -1,
       4,     5,    -1,     7,    -1,    32,    10,    89,    -1,   528,
      14,   530,   531,    -1,    -1,   534,   597,    21,    -1,    -1,
      -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,    32,    -1,
     611,    -1,    -1,   625,   553,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    -1,
     569,    -1,    -1,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    89,    -1,    -1,    -1,    -1,
       3,    -1,   611,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      -1,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,     3,    -1,     5,
      -1,     7,     8,    32,    10,    -1,    -1,    -1,    14,    -1,
      16,    17,    -1,    -1,    -1,    21,    -1,    -1,    24,    25,
      -1,    -1,    28,    29,    -1,    -1,    32,    33,    34,    35,
      -1,    37,    38,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    -1,    -1,    -1,
      -1,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      -1,    77,    78,    79,    -1,    81,    82,    83,    84,    85,
      86,    87,    88,     3,    -1,     5,    -1,     7,     8,    -1,
      10,    -1,    -1,    -1,    14,    -1,    16,    17,    -1,    -1,
      -1,    21,    29,    -1,    24,    25,    -1,    -1,    28,    29,
      -1,    -1,    32,    33,    34,    35,    -1,    37,    38,    -1,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    -1,    77,    78,    79,
      -1,    81,    82,    83,    84,    85,    86,    87,    88,     3,
      -1,     5,    -1,     7,     8,    -1,    10,    -1,    -1,    -1,
      14,    -1,    16,    17,    -1,    -1,    -1,    21,    -1,    -1,
      24,    25,    -1,    -1,    28,    29,    -1,    -1,    32,    33,
      34,    35,    -1,    37,    38,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    -1,
      -1,    -1,    -1,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    -1,    77,    78,    79,    -1,    81,    82,    83,
      84,    85,    86,    87,    88,     3,    -1,     5,    -1,     7,
       8,    -1,    10,    -1,    -1,    -1,    14,    -1,    16,    17,
      -1,    -1,    -1,    21,    -1,    -1,    24,    25,    -1,    -1,
      28,    29,    -1,    -1,    32,    33,    34,    35,    -1,    37,
      38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    -1,    77,
      78,    79,    -1,    81,    82,    83,    84,    85,    86,    87,
      88,     3,    -1,     5,    -1,     7,     8,    -1,    10,    -1,
      -1,    -1,    14,    -1,    16,    17,    -1,    -1,    -1,    21,
      -1,    -1,    24,    25,    -1,    -1,    28,    29,    -1,    -1,
      32,    33,    34,    35,    -1,    37,    38,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    -1,    77,    78,    79,    -1,    81,
      82,    83,    84,    85,    86,    87,    88,     3,    -1,     5,
      -1,     7,    -1,    -1,    10,    11,    -1,    -1,    14,    -1,
      16,    17,    -1,    -1,    -1,    21,    -1,    -1,    24,    25,
      -1,    -1,    28,    29,    -1,    -1,    32,    33,    34,    35,
      -1,    37,    38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      -1,    77,    78,    79,    -1,    81,    82,    83,    84,    85,
      86,    87,    88,     3,    -1,     5,    -1,     7,    -1,    -1,
      10,    -1,    -1,    -1,    14,    -1,    16,    17,    -1,    -1,
      -1,    21,    -1,    -1,    24,    25,    -1,    -1,    28,    29,
      -1,    -1,    32,    33,    34,    35,    -1,    37,    38,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    -1,    77,    78,    79,
      -1,    81,    82,    83,    84,    85,    86,    87,    88,     3,
      -1,     5,    -1,     7,    -1,    -1,    10,    -1,    -1,    -1,
      14,    -1,    16,    17,    -1,    -1,    -1,    21,    -1,    -1,
      24,    25,    -1,    -1,    28,    29,    -1,    -1,    32,    33,
      34,    35,    -1,    37,    38,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    -1,    77,    78,    79,    -1,    81,    82,    83,
      84,    85,    86,    87,    88,     3,    -1,    -1,    -1,     7,
      -1,    -1,    10,    -1,    -1,    -1,    14,    -1,    16,    17,
      -1,    -1,    -1,    21,    -1,    -1,    24,    25,    -1,    -1,
      28,    29,    -1,    -1,    32,    33,    34,    35,    -1,    37,
      38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    -1,    77,
      78,    79,    -1,    81,    82,    83,    84,    85,    86,    87,
      88,     4,     5,    -1,     7,    -1,    -1,    10,    -1,     3,
      -1,    14,    -1,     7,    -1,    -1,    10,    -1,    21,    -1,
      14,    -1,    16,    17,    -1,    28,    -1,    21,    -1,    32,
      24,    25,    -1,    -1,    28,    29,    -1,    -1,    32,    33,
      34,    35,    -1,    37,    38,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    77,    78,    79,    89,    81,    82,    83,
      84,    85,    86,    87,    88,     3,    -1,    -1,    -1,    -1,
      -1,    -1,    10,    -1,    -1,    -1,    -1,    -1,     7,    -1,
      -1,    10,    -1,    21,    13,    -1,    -1,    16,    17,    -1,
      28,    -1,    21,    -1,    32,    33,    34,    35,    -1,    28,
      -1,    -1,    -1,    32,    33,    34,    35,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,     3,
      -1,    -1,    -1,     7,    -1,    -1,    10,    11,    -1,    13,
      -1,    -1,    16,    17,    -1,    -1,    -1,    21,    -1,    -1,
      24,    25,    -1,    -1,    28,    29,    -1,    -1,    32,    33,
      34,    35,    -1,    37,    38,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,     3,    -1,    -1,    -1,     7,    -1,    -1,    10,
      11,    -1,    13,    -1,    -1,    16,    17,    -1,    -1,    -1,
      21,    -1,    -1,    24,    25,    -1,    -1,    28,    29,    -1,
      -1,    32,    33,    34,    35,    -1,    37,    38,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,     3,    -1,    -1,    -1,     7,
      -1,    -1,    10,    -1,    -1,    -1,    14,    -1,    16,    17,
      -1,    -1,    -1,    21,    -1,    -1,    24,    25,    -1,    -1,
      28,    29,    -1,    -1,    32,    33,    34,    35,    -1,    37,
      38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,     3,    -1,
      -1,    -1,     7,    -1,    -1,    10,    -1,    -1,    -1,    -1,
      -1,    16,    17,    -1,    -1,    -1,    21,    -1,    -1,    24,
      25,    -1,    -1,    28,    29,    -1,    -1,    32,    33,    34,
      35,    -1,    37,    38,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,     3,    -1,    -1,    -1,     7,    -1,    -1,    10,    -1,
      -1,    -1,    -1,    -1,    16,    17,    -1,    -1,    -1,    21,
      -1,    -1,    24,    25,    -1,    -1,    28,    29,    -1,    -1,
      32,    33,    34,    35,    -1,    37,    38,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,     3,    21,    -1,    -1,     7,    -1,
      -1,    10,    28,    -1,    -1,    -1,    -1,    16,    17,    -1,
      -1,    -1,    21,    -1,    -1,    24,    25,    -1,    -1,    28,
      29,    -1,    -1,    32,    33,    34,    35,    -1,    37,    38,
      -1,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      -1,    -1,    -1,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,     3,    -1,    -1,
      -1,     7,    -1,    -1,    10,    -1,    -1,    -1,    -1,    -1,
      16,    17,    -1,    -1,    -1,    21,    -1,    -1,    24,    25,
      -1,    -1,    28,    29,     7,    -1,    32,    33,    34,    35,
      -1,    37,    38,    16,    17,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,
      33,    34,    35,    -1,    -1,    -1,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
       3,    -1,    -1,    -1,     7,    -1,    -1,    10,    -1,    -1,
      -1,    -1,    -1,    16,    17,    -1,    -1,    -1,    21,    -1,
      -1,    24,    25,    -1,    -1,    28,    29,    -1,    -1,    32,
      33,    34,    35,    -1,    37,    38,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    -1,    -1,    -1,    -1,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,     3,    -1,    -1,    -1,     7,    -1,    -1,
      10,    -1,    -1,    -1,    -1,    -1,    16,    17,    -1,    -1,
      -1,    21,    -1,    -1,    24,    25,    -1,    -1,    28,    29,
      -1,    -1,    32,    33,    34,    35,    -1,    37,    38,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,     3,    -1,    -1,    -1,
       7,    -1,    -1,    10,    -1,    -1,    -1,    -1,    -1,    16,
      17,    -1,    -1,    -1,    21,    -1,    -1,    24,    25,    -1,
      -1,    28,    29,    -1,    -1,    32,    33,    34,    35,    -1,
      37,    38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,     3,
      -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    -1,    13,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,     3,    -1,
      -1,    -1,    -1,    -1,    28,    10,    11,    -1,    32,    33,
      34,    35,    -1,    -1,    -1,    -1,    21,    -1,    -1,    -1,
      -1,    -1,    -1,    28,    -1,    -1,    -1,    32,    33,    34,
      35,    -1,    -1,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,     3,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,
       3,    -1,    -1,    -1,    -1,    -1,    28,    10,    -1,    -1,
      32,    33,    34,    35,    -1,    -1,    -1,    -1,    21,    -1,
      -1,    -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,    32,
      33,    34,    35,    -1,    -1,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,     3,    -1,    -1,    -1,    -1,    -1,    -1,
      10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    21,    -1,    -1,    -1,    -1,     7,    -1,    28,    10,
      -1,    -1,    32,    33,    34,    35,    -1,    -1,    -1,    -1,
      21,    -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,    -1,
      -1,    32,    -1,    -1,    -1,    -1,    -1,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,     8,    -1,    10,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,    -1,
      -1,    -1,    -1,    -1,     8,    28,    10,    -1,    -1,    32,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,    -1,    -1,
      -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,    32,    -1,
      -1,    -1,    -1,    -1,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    10,    -1,    -1,    13,    -1,    -1,    -1,    -1,
      -1,    -1,    20,    21,    -1,    -1,    -1,    -1,    -1,    -1,
      28,    29,    10,    -1,    32,    -1,    -1,    -1,    36,    37,
      38,    -1,    -1,    21,    -1,    -1,    -1,    -1,    -1,    -1,
      28,    -1,    -1,    -1,    32,    -1,    -1,    -1,    -1,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    -1,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,
      -1,    -1,    10,    -1,    -1,    -1,    28,    -1,    -1,    -1,
      32,    -1,    -1,    21,    -1,    -1,    -1,    -1,    -1,    -1,
      28,    -1,    -1,    -1,    32,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,    21,    -1,
      -1,     7,    -1,    -1,    10,    28,    -1,    11,    14,    -1,
      16,    17,    -1,    -1,    -1,    21,    -1,    21,    24,    25,
      -1,    -1,    28,    29,    28,    -1,    32,    33,    34,    35,
      -1,    37,    38,    -1,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,    21,    -1,    -1,     7,    -1,    -1,    10,    28,
      12,    11,    -1,    -1,    16,    17,    -1,    -1,    -1,    21,
      -1,    21,    24,    25,    -1,    -1,    28,    29,    28,    -1,
      32,    33,    34,    35,    -1,    37,    38,    -1,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    15,    -1,    -1,     3,
      -1,    -1,    21,     7,    -1,    -1,    10,    -1,    12,    28,
      -1,    -1,    16,    17,    -1,    15,    -1,    21,    -1,    -1,
      24,    25,    -1,    -1,    28,    29,    -1,    -1,    32,    33,
      34,    35,    -1,    37,    38,    -1,    -1,    -1,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,     9,    10,    -1,    -1,
      13,    14,    -1,    -1,    -1,    18,    19,    20,    21,    22,
      -1,    24,    25,    26,    27,    28,    29,    30,    31,    -1,
      -1,    -1,    -1,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,     3,    -1,    -1,    -1,     7,    -1,
      -1,    10,    11,    -1,    -1,    -1,    -1,    16,    17,    -1,
      -1,    -1,    21,    -1,    -1,    24,    25,    -1,    -1,    28,
      29,    -1,    -1,    32,    33,    34,    35,     3,    37,    38,
      -1,     7,    -1,    -1,    10,    11,    -1,    -1,    -1,    -1,
      16,    17,    -1,    -1,    -1,    21,    -1,    -1,    24,    25,
      -1,    -1,    28,    29,    -1,    -1,    32,    33,    34,    35,
       3,    37,    38,    -1,     7,    -1,    -1,    10,    -1,    12,
      -1,    -1,    -1,    16,    17,    -1,    -1,    -1,    21,    -1,
      -1,    24,    25,    -1,    -1,    28,    29,    -1,    -1,    32,
      33,    34,    35,     3,    37,    38,    -1,     7,     8,    -1,
      10,    -1,    -1,    -1,    -1,    -1,    16,    17,    -1,    -1,
      -1,    21,    -1,    -1,    24,    25,    -1,    -1,    28,    29,
      -1,    -1,    32,    33,    34,    35,     3,    37,    38,    -1,
       7,    -1,    -1,    10,    11,    -1,    -1,    -1,    -1,    16,
      17,    -1,    -1,    -1,    21,    -1,    -1,    24,    25,    -1,
      -1,    28,    29,    -1,    -1,    32,    33,    34,    35,     3,
      37,    38,    -1,     7,    -1,    -1,    10,    -1,    -1,    -1,
      14,    -1,    16,    17,    -1,    -1,    -1,    21,    -1,    -1,
      24,    25,    -1,    -1,    28,    29,    -1,    -1,    32,    33,
      34,    35,     3,    37,    38,    -1,     7,    -1,    -1,    10,
      11,    -1,    -1,    -1,    -1,    16,    17,    -1,    -1,    -1,
      21,    -1,    -1,    24,    25,    -1,    -1,    28,    29,    -1,
      -1,    32,    33,    34,    35,     3,    37,    38,    -1,     7,
       8,    -1,    10,    -1,    -1,    -1,    -1,    -1,    16,    17,
      -1,    -1,    -1,    21,    -1,    -1,    24,    25,    -1,    -1,
      28,    29,    -1,    -1,    32,    33,    34,    35,     3,    37,
      38,    -1,     7,    -1,    -1,    10,    -1,    -1,    -1,    -1,
      -1,    16,    17,    -1,    -1,    -1,    21,    -1,    -1,    24,
      25,    -1,    -1,    28,    29,    -1,    -1,    32,    33,    34,
      35,     3,    37,    38,    -1,     7,    -1,    -1,    10,    -1,
      -1,    -1,    -1,    -1,    16,    17,    -1,    -1,    -1,    21,
      -1,    -1,    24,    25,    -1,    -1,    28,    29,    -1,    -1,
      32,    33,    34,    35,     3,    37,    38,    -1,     7,    -1,
      -1,    10,    -1,    -1,    -1,    -1,    -1,    16,    17,    -1,
      -1,    -1,    21,    -1,    -1,    24,    25,    -1,    -1,    28,
      29,    -1,    -1,    32,    33,    34,    35,     3,    37,    38,
      -1,     7,    -1,    -1,    10,    -1,    -1,    -1,    -1,    -1,
      16,    17,    -1,    -1,    -1,    21,    -1,    -1,    24,    25,
      -1,    -1,    28,    29,    -1,    -1,    32,    33,    34,    35,
       3,    37,    38,    -1,     7,    -1,    -1,    10,    -1,    -1,
      -1,    -1,    -1,    16,    17,    -1,    -1,    -1,    21,    -1,
      -1,    24,    25,    -1,    -1,    28,    29,    -1,    -1,    32,
      33,    34,    35,     3,    37,    38,    -1,     7,    -1,    -1,
      10,    -1,    -1,    -1,    -1,    -1,    16,    17,    -1,    -1,
      -1,    21,    -1,    -1,    24,    25,    -1,    -1,    28,    29,
      -1,    -1,    32,    33,    34,    35,     3,    37,    38,    -1,
       7,    -1,    -1,    10,    -1,    -1,    -1,    -1,    -1,    16,
      17,    -1,    -1,    -1,    21,    -1,    -1,    24,    25,    -1,
      -1,    28,    29,    -1,    -1,    32,    33,    34,    35,     3,
      37,    38,    -1,     7,    -1,    -1,    10,    -1,    -1,    -1,
      -1,    -1,    16,    17,    -1,    -1,    -1,    21,    -1,    -1,
      24,    25,    -1,    -1,    28,    29,    -1,    -1,    32,    33,
      34,    35,     3,    37,    38,    -1,     7,    -1,    -1,    10,
      -1,    -1,    -1,    -1,    -1,    16,    17,    -1,    -1,    -1,
      21,    -1,    -1,    24,    25,    -1,    -1,    28,    29,    -1,
      -1,    32,    33,    34,    35,    -1,    37,    38
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     4,     5,     7,    10,    14,    21,    28,    32,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    89,   112,
     113,   114,   115,   116,   117,   118,   119,   122,   125,   128,
     129,   130,   131,   132,   138,   145,   152,   153,   156,     3,
      30,     3,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,   154,   155,     3,     5,     7,
       8,    10,    14,    16,    17,    21,    24,    25,    28,    29,
      32,    33,    34,    35,    37,    38,    77,    78,    79,    81,
      82,    83,    84,    85,    86,    87,    88,    91,    92,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   110,   112,   113,   129,   131,   143,
     144,   145,   146,   147,   148,   149,   150,   151,    10,   113,
     117,   129,   138,    17,    17,    37,    38,     7,    32,    14,
     114,   129,   130,     9,    14,   113,   113,   122,   131,     7,
      32,    10,    13,   131,   139,   140,   113,   122,    29,    32,
      94,    97,   145,   146,    10,    13,    20,    29,    36,    37,
      38,   129,   130,   128,   131,   133,   113,   131,     0,   153,
      32,   154,   154,     8,     7,    10,    32,   110,   114,   129,
     138,    10,    32,    92,   131,    15,    10,    94,    94,    94,
      10,   107,   111,    15,    10,    10,    10,    32,   143,    10,
      32,    14,    14,    14,   110,     3,     6,   131,    10,    13,
      20,    36,    37,    38,    29,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,   109,    96,    19,    26,    27,
      28,    39,    40,    46,    24,    25,    39,    40,    30,    31,
      41,    42,    43,    44,    21,    19,    22,    45,    18,    46,
       9,    14,    10,    91,     8,   112,   147,     5,     8,   143,
     146,   117,   128,   138,    11,    11,    11,    11,    32,   126,
     127,     7,    14,   145,   146,   113,   115,   113,    32,   117,
     120,   121,   122,     7,    10,    11,    32,    34,    91,   113,
     129,   131,   134,   135,   137,   139,    12,   111,   140,    10,
      13,     7,    92,   108,   141,   145,   147,    11,    32,   129,
     134,   136,    12,   111,   130,   141,   130,    10,   128,   131,
     113,    20,    25,    26,     8,   138,    32,   131,    11,    11,
      11,    32,    10,   143,    32,   138,   138,    15,   143,   110,
     110,   110,    82,   146,   148,    14,    14,    91,    16,    25,
      34,    96,    11,    93,   108,   110,    32,    32,   108,   102,
      96,    96,    96,    98,    98,   105,    97,    97,    98,    98,
      99,    99,    99,    99,   100,   100,   101,   102,   103,   104,
     110,   105,   108,     8,   154,   122,   122,   114,    29,     8,
       9,   126,   145,   112,    15,   123,   124,   129,     8,    32,
     121,   122,   146,   123,   120,    10,    34,    91,   131,   139,
      10,    10,   129,   139,    11,     9,    11,    12,    11,   134,
      12,   111,   141,   142,   113,   129,   156,     9,    11,    11,
      12,    32,    32,    32,    11,    11,    97,    98,    91,    96,
      96,   131,    11,    11,   143,    11,    11,    11,    10,   147,
     148,   148,    91,    91,    10,    94,     9,    11,    12,    15,
      14,   111,   127,     8,   145,   111,     9,    14,    15,    14,
       8,    32,   129,    10,    32,    32,   138,    76,   135,    11,
      12,     8,     9,   129,   136,   137,    31,    20,    20,    13,
      96,    11,    11,    11,   143,   143,   112,   143,   110,    11,
     110,    11,   110,    32,   138,   108,   107,   124,   111,   131,
      32,   138,    11,   131,    11,     8,   141,     9,    32,    32,
     110,    80,    11,   112,   143,    11,   112,   143,    11,   131,
      11,    10,   131,    11,    11,    31,    31,    12,   143,    14,
     112,   143,   112,   143,    11,   129,   138,    11
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    90,    91,    91,    91,    91,    91,    91,    91,    91,
      92,    92,    92,    92,    92,    92,    92,    92,    92,    92,
      92,    92,    92,    92,    92,    92,    92,    93,    93,    94,
      94,    94,    94,    94,    94,    94,    94,    95,    95,    95,
      95,    95,    95,    96,    96,    96,    96,    96,    96,    97,
      97,    97,    97,    98,    98,    98,    98,    98,    98,    98,
      99,    99,    99,   100,   100,   100,   100,   100,   101,   101,
     101,   102,   102,   103,   103,   104,   104,   105,   105,   106,
     106,   107,   107,   108,   108,   109,   109,   109,   109,   109,
     109,   109,   109,   109,   109,   109,   110,   110,   111,   112,
     112,   112,   112,   113,   113,   113,   113,   113,   113,   113,
     113,   113,   113,   113,   113,   114,   114,   115,   115,   115,
     116,   116,   116,   116,   116,   117,   117,   117,   117,   117,
     117,   117,   117,   117,   117,   117,   118,   118,   118,   119,
     119,   120,   120,   120,   121,   121,   122,   122,   122,   122,
     123,   123,   124,   124,   124,   125,   125,   125,   126,   126,
     127,   127,   128,   128,   129,   129,   129,   129,   130,   130,
     130,   130,   130,   130,   130,   130,   130,   130,   130,   130,
     130,   131,   131,   131,   131,   132,   132,   132,   132,   132,
     132,   133,   133,   134,   134,   135,   135,   135,   135,   135,
     135,   135,   135,   135,   135,   136,   136,   137,   137,   138,
     138,   139,   139,   139,   140,   140,   140,   140,   140,   140,
     140,   140,   140,   141,   141,   141,   142,   142,   143,   143,
     143,   143,   143,   143,   144,   144,   144,   145,   145,   145,
     145,   146,   146,   146,   147,   147,   147,   147,   147,   148,
     148,   149,   149,   149,   150,   150,   150,   150,   150,   150,
     150,   150,   150,   150,   150,   151,   151,   151,   151,   151,
     152,   152,   152,   153,   153,   153,   153,   153,   153,   153,
     153,   153,   153,   154,   154,   155,   155,   155,   155,   155,
     155,   155,   155,   155,   155,   155,   155,   155,   155,   155,
     155,   155,   155,   155,   155,   155,   155,   155,   155,   155,
     155,   155,   155,   155,   155,   155,   155,   155,   155,   155,
     155,   155,   155,   155,   155,   155,   155,   155,   155,   155,
     155,   155,   155,   155,   155,   155,   155,   155,   155,   155,
     155,   155,   155,   155,   155,   155,   155,   155,   155,   155,
     155,   155,   155,   155,   155,   155,   155,   155,   155,   155,
     155,   155,   155,   155,   155,   155,   155,   155,   156,   156,
     156,   156,   156,   156,   156
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     3,     1,     2,     4,     3,
       1,     2,     4,     4,     4,     7,     2,     3,     4,     3,
       3,     2,     2,     4,     6,     7,     3,     1,     3,     1,
       2,     2,     2,     2,     2,     4,     5,     1,     1,     1,
       1,     1,     1,     1,     4,     4,     5,     5,     5,     3,
       3,     3,     1,     1,     3,     3,     3,     3,     3,     3,
       1,     3,     3,     1,     3,     3,     3,     3,     1,     3,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     5,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     1,     2,
       3,     5,     2,     1,     2,     1,     1,     2,     2,     2,
       2,     3,     3,     1,     2,     1,     3,     1,     3,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     5,     4,     2,     1,
       1,     1,     2,     2,     3,     3,     2,     1,     2,     1,
       1,     3,     1,     2,     3,     4,     5,     2,     1,     3,
       1,     3,     1,     1,     2,     1,     2,     3,     1,     2,
       2,     3,     3,     3,     3,     3,     4,     3,     4,     4,
       3,     1,     2,     2,     3,     1,     1,     2,     2,     2,
       2,     1,     2,     1,     3,     2,     2,     1,     1,     2,
       3,     4,     5,     4,     1,     3,     3,     1,     3,     1,
       2,     1,     1,     2,     3,     2,     3,     3,     4,     2,
       3,     3,     4,     1,     3,     4,     1,     3,     1,     1,
       1,     1,     1,     1,     3,     4,     3,     2,     3,     3,
       4,     1,     2,     2,     1,     2,     3,     2,     2,     1,
       2,     5,     7,     5,     5,     7,     6,     7,     7,     6,
       5,     6,     7,     7,     6,     3,     2,     2,     2,     3,
       1,     2,     0,     1,     1,     2,     2,     6,     8,     8,
       1,     1,     1,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     4,     3,
       3,     2,     4,     5,     4
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 39 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s primary_expression: IDENTIFIER FINAL\n",linea, gramaticas );}
#line 2488 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 40 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  primary_expression: CONSTANT FINAL\n",linea,  gramaticas );}
#line 2494 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 41 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  LITERAL FINAL\n",linea, gramaticas );}
#line 2500 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 42 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  primary_expression: LEFT_PARENTHESIS FINAL expression RIGHT_PARETHESIS\n",linea, gramaticas);}
#line 2506 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 43 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  primary_expression: INTEGER FINAL\n",linea, gramaticas );}
#line 2512 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 44 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  LITERAL FINAL\n",linea, gramaticas );}
#line 2518 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 45 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  LITERAL FINAL\n",linea, gramaticas );}
#line 2524 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 51 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  postfix_expression: primary_expression\n",linea, gramaticas );}
#line 2530 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 52 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  postfix_expression: pointer primary_expression\n",linea, gramaticas);}
#line 2536 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 53 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  postfix_expression: primary_expression pointer primary_expression \n",linea, gramaticas );}
#line 2542 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 54 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  postfix_expression: primary_expression pointer primary_expression \n",linea, gramaticas );}
#line 2548 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 55 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  postfix_expression: postfix_expression RIGHT_SBRACKET expression LEFT_SBRACKET\n",linea, gramaticas);}
#line 2554 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 56 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  postfix_expression: postfix_expression RIGHT_SBRACKET expression LEFT_SBRACKET\n",linea, gramaticas);
}
#line 2561 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 57 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  postfix_expression: postfix_expression RIGHT_SBRACKET expression LEFT_SBRACKET\n",linea, gramaticas);}
#line 2567 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 58 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  postfix_expression: postfix_expression LEFT_PARENTHESIS RIGHT_PARENTHESIS\n",linea,gramaticas);}
#line 2573 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 59 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  postfix_expression: postfix_expression RIGHT_PARENTHESIS argument_expression_list LEFT_PARENTHESIS\n",linea, gramaticas);}
#line 2579 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 61 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  postfix_expression: postfix_expression DOT IDENTIFIER\n",linea, gramaticas);}
#line 2585 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 62 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  postfix_expression: postfix_expression PTR_OP IDENTIFIER\n",linea, gramaticas);}
#line 2591 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 63 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  postfix_expression: postfix_expression INC_OP\n",linea, gramaticas );}
#line 2597 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 64 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  postfix_expression: postfix_expression DEC_OP\n",linea, gramaticas );}
#line 2603 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 65 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_expression: SIZEOF unary_expression\n",linea, gramaticas );}
#line 2609 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 66 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_expression: SIZEOF LEFT_PARENTHESIS type_name RIGHT_PARENTHESIS\n",linea, gramaticas );}
#line 2615 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 67 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_expression: SIZEOF LEFT_PARENTHESIS type_name RIGHT_PARENTHESIS\n",linea, gramaticas );}
#line 2621 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 68 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  postfix_expression: primary_expression pointer cast_expression\n",linea, gramaticas);}
#line 2627 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 73 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  argument_expression_list: assignment_expression\n",linea, gramaticas);}
#line 2633 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 74 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  argument_expression_list: argument_expression_list COMMA assignment_expression\n",linea, gramaticas);}
#line 2639 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 78 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_expression: postfix_expression\n",linea, gramaticas );}
#line 2645 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 79 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_expression:pointer postfix_expression\n",linea, gramaticas);}
#line 2651 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 80 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_expression: INC_OP unary_expression\n",linea, gramaticas );}
#line 2657 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 81 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_expression: DEC_OP unary_expression\n",linea, gramaticas );}
#line 2663 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 82 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_expression: unary_operator cast_expression\n",linea, gramaticas );}
#line 2669 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 83 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_expression: SIZEOF unary_expression\n",linea, gramaticas );}
#line 2675 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 84 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_expression: SIZEOF LEFT_PARENTHESIS type_name RIGHT_PARENTHESIS\n",linea, gramaticas );}
#line 2681 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 85 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_expression: SIZEOF LEFT_PARENTHESIS type_name RIGHT_PARENTHESIS\n",linea, gramaticas );}
#line 2687 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 89 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_operator: BIT_AND\n",linea, gramaticas );}
#line 2693 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 90 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_operator: MUL\n",linea, gramaticas );}
#line 2699 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 91 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_operator: PLUS\n",linea, gramaticas );}
#line 2705 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 92 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_operator: MINUS\n",linea, gramaticas );}
#line 2711 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 93 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_operator: PRIME\n",linea, gramaticas );}
#line 2717 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 94 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_operator: EXCLAMATION\n",linea, gramaticas);}
#line 2723 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 98 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  cast_expression: unary_expression\n",linea, gramaticas);}
#line 2729 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 99 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  cast_expression: LEFT_PARENTHESIS type_name RIGHT_PARENTHESIS cast_expression\n",linea, gramaticas);}
#line 2735 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 100 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  cast_expression: LEFT_PARENTHESIS type_name RIGHT_PARENTHESIS cast_expression\n",linea, gramaticas);}
#line 2741 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 101 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  cast_expression: LEFT_PARENTHESIS type_name RIGHT_PARENTHESIS cast_expression\n",linea, gramaticas);}
#line 2747 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 102 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  cast_expression: LEFT_PARENTHESIS type_name RIGHT_PARENTHESIS cast_expression\n",linea, gramaticas);}
#line 2753 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 103 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  cast_expression: LEFT_PARENTHESIS type_name RIGHT_PARENTHESIS cast_expression\n",linea, gramaticas);}
#line 2759 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 110 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  multiplicative_expression: multiplicative_expression MUL cast_expression\n",linea, gramaticas );}
#line 2765 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 111 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  multiplicative_expression: multiplicative_expression DIV cast_expression\n",linea, gramaticas );}
#line 2771 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 112 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  multiplicative_expression: multiplicative_expression MOD cast_expression\n",linea,gramaticas );}
#line 2777 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 113 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  multiplicative_expression: cast_expression\n",linea, gramaticas);}
#line 2783 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 117 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  additive_expression: multiplicative_expression\n",linea,gramaticas );}
#line 2789 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 118 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  additive_expression:multiplicative_expression UP_ARROW and_expression\n",linea,gramaticas );}
#line 2795 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 119 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  additive_expression:multiplicative_expression OR_OP logical_and_expression\n",linea,gramaticas );}
#line 2801 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 120 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  shift_expression: shift_expression LEFT_OP additive_expression\n",linea, gramaticas);}
#line 2807 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 121 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  shift_expression: shift_expression LEFT_OP additive_expression\n",linea, gramaticas);}
#line 2813 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 122 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  additive_expression: additive_expression PLUS multiplicative_expression\n",linea,gramaticas) ;}
#line 2819 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 123 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  additive_expression: additive_expression MINUS multiplicative_expression\n",linea, gramaticas) ;}
#line 2825 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 127 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  shift_expression: additive_expression\n",linea, gramaticas );}
#line 2831 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 128 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  shift_expression: shift_expression LEFT_OP additive_expression\n",linea, gramaticas);}
#line 2837 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 129 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  shift_expression: shift_expression RIGHT_OP additive_expression \n",linea, gramaticas);}
#line 2843 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 133 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  relational_expression: shift_expression\n",linea, gramaticas);}
#line 2849 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 134 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  relational_expression: relational_expression LESS shift_expression\n",linea, gramaticas);}
#line 2855 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 135 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  relational_expression: relational_expression GREATER shift_expression\n",linea, gramaticas );}
#line 2861 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 136 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  relational_expression: relational_expression LE_OP shift_expression\n",linea, gramaticas);}
#line 2867 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 137 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  relational_expression: relational_expression GE_OP shift_expression\n",linea, gramaticas );}
#line 2873 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 141 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  equality_expression: relational_expression\n",linea, gramaticas);}
#line 2879 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 142 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  equality_expression: equality_expression EQ_OP relational_expression\n",linea, gramaticas );}
#line 2885 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 143 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  equality_expression: equality_expression NE_OP relational_expression\n",linea, gramaticas);}
#line 2891 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 147 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  and_expression: equality_expression\n",linea, gramaticas );}
#line 2897 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 148 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  and_expression: and_expression BIT_AND equality_expression\n",linea, gramaticas);}
#line 2903 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 152 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  exclusive_or_expression: and_expression\n",linea, gramaticas );}
#line 2909 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 153 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  exclusive_or_expression: exclusive_or_expression UP_ARROW and_expression\n",linea, gramaticas );}
#line 2915 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 157 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  inclusive_or_expression: exclusive_or_expression\n",linea, gramaticas);}
#line 2921 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 158 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  inclusive_or_expression: inclusive_or_expression BIT_OR exclusive_or_expression\n",linea, gramaticas );}
#line 2927 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 162 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  logical_and_expression: inclusive_or_expression\n",linea,gramaticas );}
#line 2933 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 163 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  logical_and_expression: logical_and_expression AND_OP inclusive_or_expression\n",linea, gramaticas);}
#line 2939 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 167 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  logical_or_expression: logical_and_expression\n",linea,gramaticas);}
#line 2945 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 168 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  logical_or_expression: logical_or_expression OR_OP logical_and_expression\n",linea, gramaticas );}
#line 2951 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 172 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  conditional_expression: logical_or_expression\n",linea, gramaticas);}
#line 2957 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 173 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  conditional_expression: logical_or_expression INTERROGATION expression COLON conditional_expression\n",linea,gramaticas);}
#line 2963 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 177 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  assignment_expression: conditional_expression\n",linea, gramaticas);}
#line 2969 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 178 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  assignment_expression: unary_expression assignment_operator assignment_expression\n",linea,gramaticas);}
#line 2975 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 182 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  assignment_operator: EQU\n",linea, gramaticas);}
#line 2981 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 183 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  assignment_operator: MUL_ASSIGN\n",linea,gramaticas );}
#line 2987 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 184 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  assignment_operator: DIV_ASSIGN\n",linea,gramaticas);}
#line 2993 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 185 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  assignment_operator: MOD_ASSIGN\n",linea,gramaticas);}
#line 2999 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 186 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  assignment_operator: ADD_ASSIGN\n",linea, gramaticas);}
#line 3005 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 187 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  assignment_operator: SUB_ASSIGN\n",linea, gramaticas);}
#line 3011 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 188 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  assignment_operator: LEFT_ASSIGN\n",linea, gramaticas);}
#line 3017 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 189 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  assignment_operator: RIGHT_ASSIGN\n",linea,gramaticas);}
#line 3023 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 190 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  assignment_operator: AND_ASSIGN\n",linea, gramaticas);}
#line 3029 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 191 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  assignment_operator: XOR_ASSIGN\n",linea, gramaticas);}
#line 3035 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 192 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  assignment_operator: OR_ASSIGN\n",linea, gramaticas);}
#line 3041 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 196 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  expression: assignment_expression\n",linea, gramaticas);}
#line 3047 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 197 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  expression: expression COMMA assignment_expression\n",linea,gramaticas);}
#line 3053 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 201 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  constant_expression: conditional_expression\n",linea, gramaticas );}
#line 3059 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 205 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  declaration: declaration_specifiers SEMICOLON \n",linea, gramaticas );memset(gramaticas,0,sizeof(gramaticas));}
#line 3065 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 206 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  declaration: declaration_specifiers init_declarator_list SEMICOLON\n",linea, gramaticas);memset(gramaticas,0,sizeof(gramaticas));}
#line 3071 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 207 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  declaration: LEFT_PARENTHESIS declaration_specifiers RIGHT_PARENTHESIS init_declarator_list SEMICOLON \n",linea, gramaticas);memset(gramaticas,0,sizeof(gramaticas));}
#line 3077 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 208 "parser.y" /* yacc.c:1646  */
    {memset(gramaticas,0,sizeof(gramaticas));printf("%d con %s  declaration: LEFT_PARENTHESIS declaration_specifiers RIGHT_PARENTHESIS init_declarator_list SEMICOLON \n",linea, gramaticas);memset(gramaticas,0,sizeof(gramaticas));}
#line 3083 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 212 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  declaration_specifiers: storage_class_specifier \n",linea, gramaticas);}
#line 3089 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 213 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  declaration_specifiers: storage_class_specifier declaration_specifiers\n",linea, gramaticas);}
#line 3095 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 214 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  declaration_specifiers: type_specifier\n",linea, gramaticas);}
#line 3101 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 216 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  declaration_specifiers: type_specifier declaration_specifiers {\n",linea, gramaticas);}
#line 3107 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 218 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  declaration_specifiers: type_specifier\n",linea, gramaticas);}
#line 3113 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 220 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  declaration_specifiers: type_specifier declaration_specifiers {\n",linea, gramaticas);}
#line 3119 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 221 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  declaration_specifiers: type_specifier declaration_specifiers {\n",linea, gramaticas);}
#line 3125 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 223 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  declaration_specifiers: type_qualifier\n",linea, gramaticas );}
#line 3131 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 224 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  declaration_specifiers: type_qualifier declaration_specifiers\n",linea, gramaticas );}
#line 3137 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 229 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  init_declarator_list: init_declarator\n",linea, gramaticas );}
#line 3143 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 230 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  init_declarator_list: init_declarator_list COMMA init_declarator\n",linea,gramaticas);}
#line 3149 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 234 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  init_declarator: declarator\n",linea, gramaticas );}
#line 3155 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 235 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  init_declarator: declarator EQU initializer\n",linea, gramaticas );}
#line 3161 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 236 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  init_declarator: multiplicative_expression\n",linea, gramaticas );}
#line 3167 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 241 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  storage_class_specifier: TYPEDEF\n",linea, gramaticas);}
#line 3173 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 242 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  storage_class_specifier: EXTERN\n",linea, gramaticas);}
#line 3179 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 243 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  storage_class_specifier: STATIC\n",linea,gramaticas);}
#line 3185 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 244 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  storage_class_specifier: AUTO\n",linea, gramaticas);}
#line 3191 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 245 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  storage_class_specifier: REGISTER\n",linea, gramaticas);}
#line 3197 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 249 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_specifier: VOID\n",linea, gramaticas);}
#line 3203 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 250 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_specifier: CHAR\n",linea, gramaticas);}
#line 3209 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 251 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_specifier: SHORT\n",linea, gramaticas);}
#line 3215 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 252 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_specifier: INT\n",linea, gramaticas);}
#line 3221 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 253 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_specifier: LONG\n",linea, gramaticas);}
#line 3227 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 254 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_specifier: FLOAT\n",linea, gramaticas);}
#line 3233 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 255 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_specifier: DOUBLE\n",linea, gramaticas);}
#line 3239 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 256 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_specifier: SIGNED\n",linea, gramaticas);}
#line 3245 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 257 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_specifier: UNSIGNED\n",linea, gramaticas);}
#line 3251 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 258 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_specifier: struct_or_union_specifier\n",linea, gramaticas );}
#line 3257 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 259 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_specifier: enum_specifier\n",linea, gramaticas );}
#line 3263 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 264 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  struct_or_union_specifier: struct_or_union IDENTIFIER LEFT_BRACKET struct_declaration_list RIGHT_BRACKET \n",linea, gramaticas );}
#line 3269 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 265 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  struct_or_union_specifier: struct_or_union LEFT_BRACKET struct_declaration_list RIGHT_BRACKET\n",linea,gramaticas );}
#line 3275 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 266 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  struct_or_union_specifier: struct_or_union IDENTIFIER\n",linea, gramaticas);}
#line 3281 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 270 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  struct_or_union: STRUCT\n",linea, gramaticas);}
#line 3287 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 271 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  struct_or_union: UNION\n",linea, gramaticas);}
#line 3293 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 275 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  struct_declaration_list: struct_declaration\n",linea, gramaticas );}
#line 3299 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 276 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  struct_declaration_list: struct_declaration_list struct_declaration\n",linea, gramaticas );}
#line 3305 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 277 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  struct_declaration_list:  struct_declaration_list declaration_list\n",linea, gramaticas );}
#line 3311 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 281 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  struct_declaration: specifier_qualifier_list struct_declarator_list SEMICOLON\n",linea, gramaticas );memset(gramaticas,0,sizeof(gramaticas));}
#line 3317 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 282 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  struct_declaration: IDENTIFIER struct_declarator_list SEMICOLON \n",linea, gramaticas );memset(gramaticas,0,sizeof(gramaticas));}
#line 3323 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 286 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  specifier_qualifier_list: type_specifier specifier_qualifier_list\n",linea, gramaticas );}
#line 3329 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 287 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  specifier_qualifier_list: type_specifier\n",linea, gramaticas );}
#line 3335 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 289 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  specifier_qualifier_list: type_qualifier specifier_qualifier_list\n",linea,gramaticas);}
#line 3341 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 290 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  specifier_qualifier_list: type_qualifier\n",linea, gramaticas );}
#line 3347 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 295 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  struct_declarator_list: struct_declarator\n",linea, gramaticas );}
#line 3353 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 296 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  struct_declarator_list: struct_declarator_list COMMA struct_declarator\n",linea, gramaticas );}
#line 3359 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 300 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  struct_declarator: declarator\n",linea, gramaticas );}
#line 3365 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 301 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  struct_declarator: COLON constant_expression \n",linea, gramaticas );}
#line 3371 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 302 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  struct_declarator: declarator COLON constant_expression \n",linea, gramaticas);}
#line 3377 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 306 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  enum_specifier: ENUM LEFT_BRACKET enumerator_list RIGHT_BRACKET\n",linea, gramaticas);}
#line 3383 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 307 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  enum_specifier: ENUM IDENTIFIER LEFT_BRACKET enumerator_list RIGHT_BRACKET \n",linea,gramaticas);}
#line 3389 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 308 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  enum_specifier: ENUM IDENTIFIER\n",linea, gramaticas );}
#line 3395 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 312 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  enumerator_list: enumerator\n",linea, gramaticas);}
#line 3401 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 313 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  enumerator_list: enumerator_list COMMA enumerator\n",linea, gramaticas );}
#line 3407 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 317 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  enumerator: IDENTIFIER\n",linea, gramaticas);}
#line 3413 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 318 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  enumerator: IDENTIFIER EQU constant_expression\n",linea,gramaticas);}
#line 3419 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 322 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_qualifier: CONST\n",linea,gramaticas);}
#line 3425 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 323 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_qualifier: VOLATILE\n",linea, gramaticas);}
#line 3431 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 327 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  declarator: pointer direct_declarator \n",linea, gramaticas );}
#line 3437 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 328 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  declarator: direct_declarator\n",linea, gramaticas );}
#line 3443 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 329 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  declarator: declarator direct_declarator\n",linea, gramaticas );}
#line 3449 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 330 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  declarator: direct_declarator EQU initializer \n",linea, gramaticas );}
#line 3455 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 336 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_declarator: IDENTIFIER\n",linea, gramaticas);}
#line 3461 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 337 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_declarator: direct_declarator INC_OP\n",linea, gramaticas);}
#line 3467 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 338 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_declarator: direct_declarator DEC_OP\n",linea, gramaticas);}
#line 3473 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 339 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_declarator: direct_declarator DOT direct_declarator\n",linea, gramaticas);}
#line 3479 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 340 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_declarator: direct_declarator PTR_OP direct_declarator\n",linea, gramaticas);}
#line 3485 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 341 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_declarator: LEFT_PARENTHESIS declarator RIGHT_PARENTHESIS\n",linea, gramaticas );}
#line 3491 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 342 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_declarator: LEFT_PARENTHESIS declarator RIGHT_PARENTHESIS\n",linea, gramaticas );}
#line 3497 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 343 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_specifier: TYPE_NAME\n",linea,gramaticas);}
#line 3503 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 344 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_declarator: direct_declarator LEFT_SBRACKET constant_expression RIGHT_SBRACKET\n",linea,gramaticas);}
#line 3509 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 345 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_declarator: direct_declarator LEFT_SBRACKET RIGHT_SBRACKET\n",linea, gramaticas );}
#line 3515 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 347 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_declarator: direct_declarator LEFT_PARENTHESIS parameter_type_list RIGHT_PARENTHESIS\n",linea, gramaticas );}
#line 3521 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 348 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_declarator: direct_declarator LEFT_PARENTHESIS identifier_list RIGHT_PARENTHESIS\n",linea, gramaticas );}
#line 3527 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 350 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_declarator: direct_declarator LEFT_PARENTHESIS RIGHT_PARENTHESIS\n",linea,gramaticas);}
#line 3533 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 355 "parser.y" /* yacc.c:1646  */
    { printf("%d con %s  pointer: pointer_type\n",linea, gramaticas);}
#line 3539 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 356 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  pointer: pointer_type type_qualifier_list\n",linea, gramaticas );}
#line 3545 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 357 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  pointer: pointer_type pointer\n",linea, gramaticas );}
#line 3551 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 358 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  pointer: pointer_type type_qualifier_list pointer\n",linea,gramaticas);}
#line 3557 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 362 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  pointer_type: MUL\n",linea,gramaticas);}
#line 3563 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 363 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  pointer_type: BIT_AND\n",linea,gramaticas);}
#line 3569 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 364 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  pointer_type: MUL\n",linea,gramaticas);}
#line 3575 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 365 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  pointer_type: MUL\n",linea,gramaticas);}
#line 3581 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 367 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  pointer_type: BIT_AND\n",linea,gramaticas);}
#line 3587 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 371 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_qualifier_list: type_qualifier\n",linea,gramaticas );}
#line 3593 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 372 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_qualifier_list: type_qualifier_list type_qualifier\n",linea, gramaticas );}
#line 3599 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 377 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  parameter_type_list: parameter_list\n",linea, gramaticas );}
#line 3605 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 378 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  parameter_type_list: parameter_list COMMA ELLIPSIS\n",linea, gramaticas);}
#line 3611 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 384 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  parameter_declaration: declaration_specifiers declarator\n",linea, gramaticas );}
#line 3617 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 385 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  parameter_declaration: declaration_specifiers abstract_declarator\n",linea, gramaticas );}
#line 3623 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 386 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  parameter_declaration: declaration_specifiers\n",linea, gramaticas );}
#line 3629 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 387 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  parameter_declaration: declarator\n",linea, gramaticas );}
#line 3635 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 388 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  parameter_declaration: IDENTIFIER abstract_declarator\n",linea, gramaticas );}
#line 3641 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 389 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  parameter_declaration: IDENTIFIER abstract_declarator\n",linea, gramaticas
	 );}
#line 3648 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 391 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_expression: SIZEOF LEFT_PARENTHESIS type_name RIGHT_PARENTHESIS\n",linea, gramaticas );}
#line 3654 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 392 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_expression: SIZEOF LEFT_PARENTHESIS IDENTIFIER pointer RIGHT_PARENTHESIS\n",linea, gramaticas );}
#line 3660 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 393 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_expression: SIZEOF LEFT_PARENTHESIS IDENTIFIER RIGHT_PARENTHESIS\n",linea, gramaticas );}
#line 3666 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 398 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  identifier_list: IDENTIFIER COMMA identifier_list\n",linea, gramaticas);}
#line 3672 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 399 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  identifier_list: IDENTIFIER COMMA parameter_list\n",linea, gramaticas);}
#line 3678 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 402 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  parameter_list: parameter_declaration\n",linea, gramaticas);}
#line 3684 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 403 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  parameter_list: parameter_list COMMA parameter_declaration\n",linea, gramaticas);}
#line 3690 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 406 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_name: specifier_qualifier_list\n",linea, gramaticas);}
#line 3696 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 407 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_name: specifier_qualifier_list abstract_declarator\n",linea, gramaticas);}
#line 3702 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 412 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  abstract_declarator: pointer\n",linea, gramaticas);}
#line 3708 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 212:
#line 413 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  abstract_declarator: direct_abstract_declarator\n",linea, gramaticas );}
#line 3714 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 414 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  abstract_declarator: pointer direct_abstract_declarator\n",linea, gramaticas);}
#line 3720 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 214:
#line 418 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_abstract_declarator: LEFT_PARENTHESIS abstract_declarator RIGHT_PARENTHESIS \n",linea, gramaticas );}
#line 3726 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 215:
#line 419 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_abstract_declarator:  LEFT_SBRACKET RIGHT_SBRACKET \n",linea, gramaticas);}
#line 3732 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 216:
#line 420 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_abstract_declarator: LEFT_SBRACKET constant_expression RIGHT_SBRACKET \n",linea, gramaticas );}
#line 3738 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 217:
#line 421 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_abstract_declarator: direct_abstract_declarator LEFT_SBRACKET RIGHT_SBRACKET\n",linea, gramaticas );}
#line 3744 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 218:
#line 422 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_abstract_declarator: direct_abstract_declarator LEFT_SBRACKET constant_expression RIGHT_SBRACKET \n",linea, gramaticas );}
#line 3750 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 219:
#line 423 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_abstract_declarator: LEFT_PARENTHESIS RIGHT_PARENTHESIS\n",linea, gramaticas);}
#line 3756 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 220:
#line 424 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_abstract_declarator: LEFT_PARENTHESIS parameter_type_list RIGHT_PARENTHESIS \n",linea, gramaticas );}
#line 3762 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 221:
#line 425 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_abstract_declarator: direct_abstract_declarator LEFT_PARENTHESIS RIGHT_PARENTHESIS\n",linea,gramaticas );}
#line 3768 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 222:
#line 426 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_abstract_declarator: direct_abstract_declarator LEFT_PARENTHESIS parameter_type_list RIGHT_PARENTHESIS\n",linea,  gramaticas  );}
#line 3774 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 223:
#line 430 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  initializer: assignment_expression\n",linea, gramaticas );}
#line 3780 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 224:
#line 431 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  initializer: LEFT_BRACKET initializer_list RIGHT_BRACKET\n",linea,  gramaticas );}
#line 3786 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 225:
#line 432 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  initializer: LEFT_BRACKET initializer_list COMMA RIGHT_BRACKET\n",linea, gramaticas );}
#line 3792 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 226:
#line 436 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  initializer_list: initializer\n",linea, gramaticas);}
#line 3798 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 227:
#line 437 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  initializer_list: initializer_list COMMA initializer \n",linea, gramaticas);}
#line 3804 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 228:
#line 441 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  statement: labeled_statement\n",linea, gramaticas );}
#line 3810 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 229:
#line 442 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  statement: compound_statement\n",linea, gramaticas);}
#line 3816 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 230:
#line 443 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  statement: expression_statement\n",linea,gramaticas );}
#line 3822 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 231:
#line 444 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  statement: selection_statement\n",linea, gramaticas);}
#line 3828 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 232:
#line 445 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  statement: iteration_statement\n",linea, gramaticas );}
#line 3834 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 233:
#line 446 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  statement: jump_statement\n",linea, gramaticas );}
#line 3840 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 234:
#line 450 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  labeled_statement: IDENTIFIER COLON statement \n",linea, gramaticas );}
#line 3846 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 235:
#line 451 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  labeled_statement: CASE constant_expression COLON statement\n",linea, gramaticas );}
#line 3852 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 236:
#line 452 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  labeled_statement: DEFAULT COLON statement\n",linea, gramaticas );}
#line 3858 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 237:
#line 456 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  compound_statement: LEFT_BRACKET RIGHT_BRACKET\n",linea, gramaticas);}
#line 3864 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 238:
#line 457 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  compound_statement: LEFT_BRACKET statement_list RIGHT_BRACKET\n",linea, gramaticas );}
#line 3870 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 239:
#line 458 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  compound_statement: LEFT_BRACKET declaration_list RIGHT_BRACKET\n",linea, gramaticas);}
#line 3876 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 240:
#line 459 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  compound_statement: LEFT_BRACKET declaration_list statement_list RIGHT_BRACKET\n",linea, gramaticas);}
#line 3882 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 241:
#line 463 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  declaration_list: declaration\n",linea, gramaticas );}
#line 3888 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 242:
#line 465 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  declaration_list: declaration_list declaration\n",linea, gramaticas);}
#line 3894 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 243:
#line 466 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  declaration_list: declaration_list statement_list\n",linea, gramaticas);}
#line 3900 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 244:
#line 470 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  statement_list: statement\n",linea, gramaticas );}
#line 3906 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 246:
#line 472 "parser.y" /* yacc.c:1646  */
    {memset(gramaticas,0,sizeof(gramaticas)); printf("%d con %s  external_declaration: DEFINE define\n",linea, gramaticas);}
#line 3912 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 247:
#line 473 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  statement_list: statement_list statement\n",linea, gramaticas);}
#line 3918 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 248:
#line 474 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  statement_list: statement_list declaration_list\n",linea, gramaticas);}
#line 3924 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 249:
#line 478 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  expression_statement: SEMICOLON\n",linea, gramaticas );memset(gramaticas,0,sizeof(gramaticas));}
#line 3930 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 250:
#line 479 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  expression_statement: expression SEMICOLON \n",linea, gramaticas );memset(gramaticas,0,sizeof(gramaticas));}
#line 3936 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 251:
#line 483 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  selection_statement: IF LEFT_PARENTHESIS expression RIGHT_PARENTHESIS statement\n",linea,gramaticas);}
#line 3942 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 252:
#line 484 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  selection_statement: IF LEFT_PARENTHESIS expression RIGHT_PARENTHESIS statement ELSE statement\n",linea, gramaticas);}
#line 3948 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 253:
#line 485 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  selection_statement: SWITCH LEFT_PARENTHESIS expression RIGHT_PARENTHESIS statement\n",linea, gramaticas );}
#line 3954 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 254:
#line 489 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  iteration_statement: WHILE LEFT_PARENTHESIS expression RIGHT_PARENTHESIS statement\n",linea, gramaticas);}
#line 3960 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 255:
#line 490 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  iteration_statement: DO statement WHILE LEFT_PARENTHESIS expression RIGHT_PARENTHESIS SEMICOLON\n",linea, gramaticas);memset(gramaticas,0,sizeof(gramaticas));}
#line 3966 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 256:
#line 491 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  iteration_statement: FOR LEFT_PARENTHESIS expression_statement expression_statement RIGHT_PARENTHESIS statement\n",linea, gramaticas );}
#line 3972 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 257:
#line 492 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  iteration_statement: FOR LEFT_PARENTHESIS expression_statement expression_statement expression RIGHT_PARENTHESIS statement\n",linea, gramaticas);}
#line 3978 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 258:
#line 493 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  iteration_statement: FOR LEFT_PARENTHESIS expression_statement expression_statement expression RIGHT_PARENTHESIS statement\n",linea, gramaticas);}
#line 3984 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 259:
#line 494 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  iteration_statement: FOR LEFT_PARENTHESIS expression_statement expression_statement expression RIGHT_PARENTHESIS statement\n",linea, gramaticas);}
#line 3990 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 260:
#line 495 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  iteration_statement: WHILE LEFT_PARENTHESIS expression RIGHT_PARENTHESIS statement\n",linea, gramaticas);}
#line 3996 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 261:
#line 496 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  iteration_statement: FOR LEFT_PARENTHESIS expression_statement expression_statement RIGHT_PARENTHESIS statement\n",linea, gramaticas );}
#line 4002 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 262:
#line 497 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  iteration_statement: FOR LEFT_PARENTHESIS expression_statement expression_statement expression RIGHT_PARENTHESIS statement\n",linea, gramaticas);}
#line 4008 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 263:
#line 498 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  iteration_statement: FOR LEFT_PARENTHESIS expression_statement expression_statement expression RIGHT_PARENTHESIS statement\n",linea, gramaticas);}
#line 4014 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 264:
#line 499 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  iteration_statement: FOR LEFT_PARENTHESIS expression_statement expression_statement expression RIGHT_PARENTHESIS statement\n",linea, gramaticas);}
#line 4020 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 265:
#line 503 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  jump_statement: GOTO IDENTIFIER SEMICOLON\n",linea, gramaticas );memset(gramaticas,0,sizeof(gramaticas));}
#line 4026 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 266:
#line 504 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  jump_statement: CONTINUE SEMICOLON\n",linea, gramaticas);memset(gramaticas,0,sizeof(gramaticas));}
#line 4032 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 267:
#line 505 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  jump_statement: BREAK SEMICOLON\n",linea, gramaticas);memset(gramaticas,0,sizeof(gramaticas));}
#line 4038 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 268:
#line 506 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  jump_statement: RETURN SEMICOLON\n",linea, gramaticas);memset(gramaticas,0,sizeof(gramaticas));}
#line 4044 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 269:
#line 507 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  jump_statement: RETURN expression SEMICOLON\n",linea, gramaticas);memset(gramaticas,0,sizeof(gramaticas));}
#line 4050 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 270:
#line 511 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  translation_unit: Entre a external_declaration\n",linea, gramaticas);memset(gramaticas,0,sizeof(gramaticas));}
#line 4056 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 271:
#line 512 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  translation_unit: Entre a ciclo translation_unit\n",linea, gramaticas );memset(gramaticas,0,sizeof(gramaticas));}
#line 4062 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 272:
#line 513 "parser.y" /* yacc.c:1646  */
    {printf("%d  translation_unit: Archivo Vacío\n",linea );memset(gramaticas,0,sizeof(gramaticas));}
#line 4068 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 273:
#line 518 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  external_declaration: function_definition\n",linea, gramaticas);}
#line 4074 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 274:
#line 519 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  external_declaration: declaration\n",linea, gramaticas);}
#line 4080 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 275:
#line 520 "parser.y" /* yacc.c:1646  */
    {memset(gramaticas,0,sizeof(gramaticas)); printf("%d con %s  external_declaration: DEFINE define\n",linea, gramaticas);}
#line 4086 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 276:
#line 521 "parser.y" /* yacc.c:1646  */
    {memset(gramaticas,0,sizeof(gramaticas));printf("%d con %s  external_declaration: INCLUDE LITERALn\n",linea, gramaticas);}
#line 4092 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 277:
#line 522 "parser.y" /* yacc.c:1646  */
    {memset(gramaticas,0,sizeof(gramaticas));printf("%d con %s  external_declaration: INCLUDE LITERALn\n",linea, gramaticas);}
#line 4098 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 278:
#line 523 "parser.y" /* yacc.c:1646  */
    {memset(gramaticas,0,sizeof(gramaticas));printf("%d con %s  external_declaration: INCLUDE LITERALn\n",linea, gramaticas);}
#line 4104 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 279:
#line 524 "parser.y" /* yacc.c:1646  */
    {memset(gramaticas,0,sizeof(gramaticas));printf("%d con %s  external_declaration: INCLUDE LITERALn\n",linea, gramaticas);}
#line 4110 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 280:
#line 525 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  external_declaration: \\n \n",linea, gramaticas);}
#line 4116 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 281:
#line 526 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  external_declaration: SEMICOLON\n",linea, gramaticas);}
#line 4122 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 282:
#line 527 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  external_declaration: compound_statement\n",linea, gramaticas);}
#line 4128 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 283:
#line 531 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  define: define_enter\n",linea, gramaticas);}
#line 4134 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 368:
#line 623 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  function_definition: declaration_specifiers declarator declaration_list compound_statement\n",linea,gramaticas);}
#line 4140 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 369:
#line 624 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  function_definition: declaration_specifiers declarator compound_statement \n",linea, gramaticas);}
#line 4146 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 370:
#line 625 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  function_definition: declarator declaration_list compound_statement\n",linea, gramaticas );}
#line 4152 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 371:
#line 626 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  function_definition: declarator compound_statement\n",linea,gramaticas);}
#line 4158 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 372:
#line 627 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  function_definition: declarator declaration_list compound_statement function_definition\n",linea,gramaticas);}
#line 4164 "parser.tab.c" /* yacc.c:1646  */
    break;


#line 4168 "parser.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 632 "parser.y" /* yacc.c:1906  */


#include<stdio.h>
#include <stdbool.h>
