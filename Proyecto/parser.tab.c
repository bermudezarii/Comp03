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
#define YYFINAL  250
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   4206

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  90
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  67
/* YYNRULES -- Number of rules.  */
#define YYNRULES  377
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  624

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
      51,    52,    53,    54,    55,    56,    57,    59,    60,    62,
      63,    64,    65,    66,    67,    68,    73,    74,    78,    79,
      80,    81,    82,    83,    84,    85,    89,    90,    91,    92,
      93,    94,    98,    99,   100,   101,   102,   103,   110,   111,
     112,   113,   117,   118,   119,   120,   121,   122,   123,   127,
     128,   129,   133,   134,   135,   136,   137,   141,   142,   143,
     147,   148,   152,   153,   157,   158,   162,   163,   167,   168,
     172,   173,   177,   178,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   196,   197,   201,   205,   206,
     207,   208,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   226,   227,   232,   233,   237,
     238,   239,   244,   245,   246,   247,   248,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   267,   268,
     269,   273,   274,   278,   279,   280,   284,   285,   289,   290,
     292,   293,   298,   299,   303,   304,   305,   309,   310,   311,
     315,   316,   320,   321,   325,   326,   330,   331,   332,   333,
     339,   340,   341,   342,   343,   344,   345,   346,   347,   348,
     350,   351,   353,   358,   359,   360,   361,   365,   366,   367,
     368,   369,   370,   374,   375,   380,   381,   387,   388,   389,
     390,   391,   392,   394,   395,   396,   397,   401,   402,   405,
     406,   409,   410,   415,   416,   417,   421,   422,   423,   424,
     425,   426,   427,   428,   429,   433,   434,   435,   439,   440,
     444,   445,   446,   447,   448,   449,   453,   454,   455,   459,
     460,   461,   462,   466,   468,   469,   473,   474,   475,   476,
     477,   481,   482,   486,   487,   488,   492,   493,   494,   495,
     496,   497,   498,   499,   500,   501,   502,   506,   507,   508,
     509,   510,   511,   512,   516,   517,   518,   523,   524,   525,
     526,   527,   528,   529,   530,   531,   535,   536,   542,   543,
     544,   545,   546,   547,   548,   549,   550,   551,   552,   553,
     554,   555,   556,   557,   558,   559,   560,   561,   562,   563,
     564,   565,   566,   567,   568,   569,   570,   571,   572,   573,
     574,   575,   576,   577,   578,   579,   580,   581,   582,   583,
     584,   585,   586,   587,   588,   589,   590,   591,   592,   593,
     594,   595,   596,   597,   598,   599,   600,   601,   602,   603,
     604,   605,   606,   607,   608,   609,   610,   611,   612,   613,
     614,   615,   616,   617,   618,   619,   620,   621,   622,   623,
     624,   627,   628,   629,   630,   631,   632,   633
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

#define YYPACT_NINF -479

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-479)))

#define YYTABLE_NINF -374

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1853,    36,  1165,  1067,  3520,  -479,    14,    63,  -479,  -479,
    -479,  -479,  -479,  -479,  -479,  -479,  -479,  -479,  -479,  -479,
    -479,  -479,  -479,  -479,  -479,  -479,  -479,    50,  -479,  -479,
     583,    46,  -479,  1974,  1950,  -479,    66,   244,  -479,  2266,
    2559,   424,    37,    21,  2049,  -479,   799,  -479,  -479,  -479,
       6,  -479,  -479,  -479,  -479,  -479,  -479,  -479,  -479,  -479,
    -479,  -479,  -479,  -479,  -479,  -479,  -479,  -479,  -479,  -479,
    -479,  -479,  -479,  -479,  -479,  -479,  -479,  -479,  -479,  -479,
    -479,  -479,  -479,  -479,  -479,  -479,  -479,  -479,  -479,  -479,
    -479,  -479,  -479,  -479,  -479,  -479,  -479,  -479,  -479,  -479,
    -479,  -479,  -479,  -479,  -479,  -479,  -479,  -479,  -479,  -479,
    -479,  -479,  -479,  -479,  -479,  -479,  -479,  -479,  -479,  -479,
    -479,  -479,  -479,  -479,  -479,  -479,  -479,  -479,  -479,  -479,
    -479,  -479,  -479,  -479,  -479,  -479,  1165,  -479,  1165,  -479,
    2705,  -479,  -479,  -479,    39,  -479,  -479,    68,   266,   745,
    -479,  3970,  -479,  4003,  4003,  4036,    97,    41,   132,   154,
    1862,   162,    71,   146,   230,   883,    65,   387,  1417,  4036,
    -479,   117,    59,   169,   360,   173,   155,   167,   226,   214,
      17,  -479,  -479,   193,  -479,   583,  4069,    86,  -479,  -479,
    -479,  1252,  1338,  -479,  -479,  -479,  -479,  3600,   294,  2073,
     307,  2148,  -479,  -479,  -479,  -479,   293,   336,  -479,   224,
    2559,  3500,   419,  -479,  -479,  -479,  -479,  -479,   244,  2318,
    1229,   344,  2778,  3673,   185,  -479,   265,  -479,   244,  3706,
     514,  -479,   355,  -479,  1596,  3163,  3739,    37,  3706,    37,
    -479,  -479,  -479,   519,  -479,  -479,    21,  -479,  -479,  2318,
    -479,  -479,   111,  -479,  -479,  2851,   819,   115,   284,  3772,
    2172,  4102,  -479,   387,   210,  1862,  2924,  -479,  -479,  -479,
    2851,  -479,   313,  1862,  4036,  4036,  4036,   345,   270,  2632,
     354,  -479,  -479,  -479,  -479,   205,  -479,   210,   145,  3805,
    4036,   340,   353,  -479,  -479,  -479,  -479,  -479,  -479,  -479,
    -479,  -479,  -479,  -479,  -479,  -479,  4036,  -479,  4036,  4036,
    4036,  4036,  4036,  4036,  4036,  4036,  4036,  4036,  4036,  4036,
    4036,  4036,  4036,  4036,  4036,  4036,  4036,  4036,  4036,  4036,
    4036,  4036,  -479,  2997,   280,  -479,  -479,  1424,  1165,  -479,
    -479,  1596,  1044,  1487,   366,   419,  -479,  -479,  -479,   382,
     331,  -479,   293,  -479,  -479,  1596,  3586,  -479,  -479,   321,
    1487,  3415,  -479,   321,  1229,  2413,  -479,   418,   406,   280,
     636,  -479,   122,   410,  -479,   432,   438,  -479,   442,   265,
    3236,  3838,  3706,   387,  -479,  -479,   951,  1682,  -479,   691,
     307,   448,   453,  -479,   466,   519,  -479,   519,  3163,  -479,
    -479,  -479,   456,   457,   475,   479,  3871,   210,  4036,  4036,
     460,  4036,  -479,   281,   482,   483,  1862,  -479,   303,   337,
     401,   486,  1596,  3904,  -479,  -479,  -479,   280,   210,   210,
    4135,   280,  -479,   408,  -479,   298,  -479,  -479,  -479,   155,
    -479,  -479,  -479,    59,    59,   214,   355,   355,    59,    59,
     169,   169,   169,   169,   360,   360,   173,   155,   167,   226,
     181,   214,  -479,  -479,  -479,  -479,  -479,   227,  4036,  -479,
     293,   396,    22,   491,  4036,   252,  -479,   485,  -479,   321,
    -479,   620,  1596,   253,  3434,  2486,  4168,    65,   149,   469,
    1315,  2778,  -479,  -479,  -479,  2339,  -479,  -479,  -479,   492,
    -479,   490,  -479,   468,   419,  3347,  -479,  3255,  -479,  -479,
    -479,   480,   495,   493,  4036,    88,   163,   280,  -479,  -479,
     501,  -479,  4036,  -479,  1862,  1862,  1768,  4036,  1510,  4036,
    3937,   280,   280,  3070,  -479,  4036,  -479,  -479,  4036,  -479,
    -479,  -479,  -479,  -479,  -479,   321,  -479,  4036,  -479,  -479,
     287,  3772,  3143,  -479,    76,   506,  -479,  -479,  -479,  -479,
    -479,   960,  3347,  -479,   516,  -479,   502,  4036,  -479,  -479,
    -479,  -479,   447,  -479,  -479,  -479,   427,  1768,   454,  1768,
     464,   281,   530,  -479,  -479,  -479,  -479,  2261,   172,   531,
    -479,   532,  -479,  -479,  -479,  3328,   513,   314,  1862,   537,
    -479,  -479,  1768,  -479,  -479,  1768,   547,  -479,  2486,   549,
    -479,  -479,  -479,  -479,  -479,  -479,  -479,  -479,  -479,  -479,
    -479,  4069,  2247,  -479
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
     276,     0,     0,     0,     0,   284,   188,   187,   170,   122,
     123,   124,   125,   126,   128,   129,   130,   131,   134,   135,
     132,   133,   164,   165,   127,   141,   142,     0,   283,   278,
       0,     0,   117,     0,     0,   136,     0,   211,   137,   115,
     119,   167,     0,   183,     0,   285,     0,   274,   277,   280,
       0,   288,   289,   290,   291,   292,   293,   294,   295,   296,
     297,   298,   299,   300,   301,   302,   303,   304,   305,   306,
     307,   308,   309,   310,   311,   312,   313,   314,   315,   316,
     317,   318,   319,   320,   321,   322,   323,   324,   325,   326,
     327,   328,   329,   330,   331,   332,   333,   334,   335,   336,
     337,   338,   339,   340,   341,   342,   343,   344,   345,   346,
     347,   348,   349,   350,   351,   352,   353,   354,   355,   356,
     357,   358,   359,   360,   361,   362,   363,   364,   365,   366,
     367,   368,   369,   370,   286,   279,     0,     4,     0,   239,
       0,   251,    41,    40,    36,    38,    39,    37,     0,     2,
       3,     0,     6,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    10,    28,    42,     0,
      51,    52,    59,    62,    67,    70,    72,    74,    76,    78,
      80,    82,    95,     0,   243,     0,   119,     0,   246,   230,
     231,     0,     0,   232,   233,   234,   235,     0,     0,     0,
       0,     0,   192,   189,   190,   191,     0,   159,    98,     0,
     119,   167,     0,   101,   104,   103,   108,   107,   148,   111,
       0,   140,     0,     0,   213,   212,   214,   116,   150,     0,
       2,    42,   121,   374,     0,     0,     0,     0,     0,     0,
     171,   172,   168,   166,   193,   185,   184,   110,   109,   112,
       1,   275,     0,   287,   247,     0,     2,     0,     0,   119,
       0,     0,     2,    29,     0,     0,     0,    33,    30,    31,
       0,    97,     0,     0,     0,     0,     0,     2,     0,     0,
       0,   268,   269,   271,   270,     0,     7,     0,     0,     0,
       0,     0,     0,    21,    22,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,     0,    32,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   252,     0,    11,   241,   244,     0,     0,   240,
     249,   250,   149,   151,     0,     0,   176,   175,   177,   162,
       0,   160,     0,    99,   372,     0,     0,   118,   113,     0,
     149,     0,   143,     0,     0,     0,   221,     2,     0,   206,
     199,   200,   213,     0,   209,   195,     0,   217,     0,   215,
       0,     0,     0,    28,   225,   120,   231,   245,   182,   170,
     200,     0,     0,   179,     0,   173,   169,   174,     0,   194,
     186,   114,     0,     0,     0,     0,     0,     5,     0,   177,
       2,     0,   236,     2,     0,     0,     0,   238,     0,     0,
       0,     0,     0,     0,   267,   273,   272,     9,     0,     0,
       0,    12,    17,     0,    26,     0,    19,    20,    83,    53,
      49,    50,    48,    55,    56,    54,    57,    58,    60,    61,
      63,    64,    65,    66,    68,    69,    71,    73,    75,    77,
       0,    79,    96,   242,   248,   148,   150,     0,     0,   157,
       0,     0,   231,   377,     0,     0,   152,   154,   139,   170,
     144,   211,   145,     0,     0,     0,     0,    10,   213,   201,
       0,     0,   197,   198,   222,     0,   216,   218,   223,     0,
     219,     0,   228,     0,     0,     0,   375,     0,   180,   181,
     178,     0,     0,     0,     0,    52,     0,     8,    44,    43,
       0,    34,     0,   237,     0,     0,     0,     0,     0,   232,
       0,    14,    13,     0,    23,     0,    18,    15,     0,   100,
     163,   161,   158,   376,   155,     0,   147,     0,   146,   138,
       2,   119,     0,   202,     0,     0,   196,   210,   224,   220,
     226,     0,     0,   207,   208,   281,     0,     0,    45,    46,
      47,    35,   253,   255,   262,   256,     0,     0,     0,     0,
       0,     2,     0,    27,    81,   153,   156,   213,     2,     0,
     205,     0,   203,   227,   229,     0,     0,     0,     0,     0,
     266,   261,     0,   263,   258,     0,     0,    24,     0,     0,
      34,   204,   282,    16,   254,   257,   265,   260,   264,   259,
      25,   119,     0,    35
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -479,   562,  -127,  -479,   415,  -479,   -79,   -35,  -298,   150,
      72,   236,  -272,   237,   239,  -189,  -479,   -90,  -211,  -479,
     515,  -178,    77,    28,   -18,   359,  -479,   343,  -479,  -479,
     201,  -354,   -26,  -352,    27,  -479,   221,   106,   423,    29,
      34,     0,  -479,  -479,  -233,  -478,    73,    75,   109,   -13,
    -214,  -229,  -479,    93,  -479,    48,    13,    -2,  -273,  -479,
    -479,  -479,  -479,   539,  -113,  -479,   197
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   166,   167,   433,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   306,
     183,   272,   184,   185,    31,    32,    33,    34,    35,    36,
     361,   362,    37,   475,   476,    38,   350,   351,    39,   186,
      41,   264,    43,   246,   373,   374,   392,   375,    44,   376,
     226,   385,   503,   188,   189,   190,   341,   387,   193,   194,
     195,   196,    46,    47,   135,   136,    48
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      42,   192,   391,   187,    42,   232,   423,   480,   218,   396,
     379,   483,   209,   228,   443,   444,   191,   557,   384,   448,
     449,   263,  -371,   253,   225,   254,  -371,   384,    30,    40,
      42,   202,   198,   200,   219,   329,   439,   224,   252,    49,
     187,    42,     6,   245,   249,   378,    42,   197,    45,     7,
    -188,   274,  -188,   234,   457,   212,   202,   206,   394,   210,
     213,   215,   217,   330,   211,   271,    50,   227,   286,     8,
     242,   287,   248,   220,    30,    40,   243,    29,   434,  -187,
     203,  -187,   207,   315,   316,   203,     6,   590,   233,   137,
     307,    22,    23,     7,    45,   438,   333,     6,   221,   569,
     204,   205,   383,   280,     7,   204,   205,   308,   516,  -188,
    -188,  -371,   273,   201,   309,   310,   311,   557,   230,   150,
     462,   152,   258,    29,   331,   445,   407,   312,   313,   483,
     480,   402,   491,   271,   314,   223,   308,   403,  -187,  -187,
     187,   461,   275,   309,   310,   311,   271,   499,   137,   529,
     530,   232,   137,   502,     8,   411,   312,   313,   379,   365,
     281,   428,   223,   314,   276,   391,   288,   209,   198,   259,
     429,   384,   279,   218,   570,   232,   325,   262,   150,   430,
     152,   230,   150,   590,   152,    42,   326,   315,   316,   337,
     331,   187,   187,     6,   363,   222,   538,    42,   223,   219,
       7,   249,   331,   501,   405,   225,   425,   332,   317,   318,
     187,    42,    42,   137,   331,   225,   323,   324,   224,   426,
     411,   243,   372,   355,   232,   464,   200,   217,   224,   248,
     440,   441,   442,   212,   187,    42,   212,   258,   353,   356,
     242,   539,   262,   150,   282,   152,   400,   358,   327,   260,
     370,   371,   258,   278,   222,   187,   406,   223,   354,   328,
     249,   545,   545,   370,   390,     6,   546,   548,   336,   137,
     187,   395,     7,   397,   379,   380,   261,   401,   381,   187,
     446,   447,   386,   286,   259,   340,   287,     6,   248,   516,
     540,   271,   422,   212,     7,   408,   544,   222,   262,   150,
     223,   152,     6,  -170,  -170,   345,   344,   331,     6,     7,
     537,   336,   331,   405,   524,     7,   465,   466,   347,   405,
    -170,  -170,  -170,   331,   583,   349,   613,   467,   416,   518,
     519,   197,   594,   187,   465,   481,   474,   187,   363,   469,
     470,   187,     6,   352,   201,    42,   331,   199,   525,     7,
     384,   364,   421,     8,   489,   187,    42,   493,   412,    42,
     265,    42,   200,    42,   404,   488,   417,   224,   424,   586,
     372,   515,   436,   379,   482,   414,   489,   348,   271,   415,
      42,   309,   310,   311,   271,   437,    42,   187,   477,   224,
     319,   320,   477,   370,   390,   454,   455,   289,    42,   492,
     290,   321,   322,   472,   542,   470,   243,   291,   370,   371,
     331,   468,   526,   520,   504,   505,   490,   535,   336,   536,
     528,   494,   187,   292,   293,   294,   370,   371,   222,   197,
     340,   223,   336,   473,   235,   568,   331,   236,   599,     6,
       6,   495,   344,   519,   237,     6,     7,     7,   584,   496,
    -170,     8,     7,   238,   497,   231,     8,   271,   481,   508,
     239,   240,   241,   331,   509,   602,   244,   258,   225,   450,
     451,   452,   453,   331,   201,   605,   560,   561,   510,    42,
     340,   372,   187,   199,    42,   488,   409,   288,   511,   512,
     513,   372,   405,   521,   522,    42,   527,   482,     3,   336,
     547,   553,   559,   558,    42,    42,   567,    42,   477,   523,
     477,   565,   571,   370,   551,   566,   232,   592,   234,   370,
     390,   543,   243,   370,   371,   595,   187,   598,   187,   398,
    -170,  -170,   236,   562,   596,   370,   371,   489,   211,   237,
     342,   607,   610,   611,   612,    42,  -170,  -170,  -170,  -170,
     587,   615,   515,   233,   591,   239,   240,   241,   620,   336,
     623,   456,    42,   360,   458,   484,   267,   459,   268,   269,
     231,   357,   585,   471,   477,   355,   541,   187,   199,   187,
     563,   606,   564,   506,   231,   251,   232,     0,   609,     0,
     258,     0,     0,   197,   260,    42,     0,   208,   342,   555,
     201,   231,   187,   574,     6,   187,     0,     0,   488,   360,
     354,     7,     0,   360,     0,     8,     0,   572,   573,   575,
     343,   340,   249,   370,   371,   231,     0,     0,     0,     0,
     491,     0,     0,   223,     0,   474,   370,   621,   231,     0,
       0,     6,   582,   343,     0,     0,   491,     0,     7,   223,
     248,   231,     8,     0,   600,   257,   603,     6,     0,     0,
       0,   589,     0,     0,     7,     0,     0,     0,     8,   399,
     601,     0,   604,     0,   231,     0,   342,     0,   343,   616,
     285,     0,   618,     0,     0,   360,   360,     0,     0,   343,
       0,   614,     0,   343,    -2,   617,     0,    -2,   619,     0,
     507,   222,    -2,   360,   223,     0,     0,   360,   199,     0,
       0,     0,     6,     0,     0,     0,     0,   622,     0,     7,
       0,     0,     0,   231,   231,   231,   231,   231,   231,   231,
     231,   231,   231,   231,   231,   231,   231,   231,   231,   231,
     231,   231,   231,   231,     0,   231,     0,     0,     0,   334,
       0,     0,     0,     0,     0,     0,   343,     0,     0,     0,
     265,  -170,  -170,     0,     0,   343,   343,     0,     0,     0,
     257,     0,     0,     0,     0,     0,   257,  -170,  -170,  -170,
    -170,   257,     0,   343,   369,   257,     0,   343,     0,   418,
     419,   420,     0,     0,     0,     0,   231,   369,     0,   250,
       0,     0,     0,     1,     2,   435,     3,     0,     0,     4,
       0,     0,     0,     5,     0,     0,     0,     0,     0,     0,
       6,   231,     0,   231,   231,     0,   334,     7,   199,     0,
       0,     8,     0,   360,   199,  -170,  -170,     0,     0,     0,
       6,     0,     0,     0,   460,   534,     0,     7,   257,   427,
     431,   405,  -170,  -170,  -170,     0,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,     0,   360,     0,     0,     0,
     257,     0,     0,   231,   283,     0,   137,     0,    28,   231,
       0,     0,     0,   270,     0,   360,     0,   284,     0,   142,
     143,   267,     0,     0,   144,     0,     0,   145,   146,     0,
       0,   147,   148,   343,     0,   262,   150,   151,   152,     0,
     153,   154,     0,     0,     0,     0,   257,   487,     0,   231,
       0,     0,     0,     0,     0,     0,     0,   231,     0,     0,
       0,     0,   369,     0,     0,     0,     0,     0,     0,     0,
       0,  -373,     0,   231,     0,  -373,   343,     0,     0,     0,
     369,   197,   231,   137,     0,     0,   231,   382,   593,   517,
     270,     0,     6,     0,     0,   343,   142,   143,     0,     7,
       0,   144,     0,     8,   145,   146,     0,     0,   147,   148,
     531,   532,   262,   150,   151,   152,     0,   153,   154,     0,
     257,     0,   231,     0,     0,     0,     0,     0,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   231,     0,     0,     0,
    -373,     0,   576,     0,   578,   580,     0,   487,   257,     0,
     334,     0,     0,   369,     0,   346,     0,   369,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   257,     0,   369,
     137,     0,   138,     0,     3,   139,     0,   140,     0,     0,
       0,   141,   597,   142,   143,     0,     0,     0,   144,     0,
       0,   145,   146,     0,     0,   147,   148,     0,     0,   149,
     150,   151,   152,     0,   153,   154,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
       0,     0,     0,   257,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,     0,   155,   156,   157,     0,   158,   159,
     160,   161,   162,   163,   164,   165,     0,   369,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    51,     0,
     487,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,     0,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   137,     0,   138,     0,     3,
     335,   359,   140,     0,     0,     0,   141,     0,   142,   143,
       0,     0,     0,   144,     0,     0,   145,   146,     0,     0,
     147,   148,     0,     0,   149,   150,   151,   152,     0,   153,
     154,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,     0,     0,     0,     0,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,     0,   155,
     156,   157,     0,   158,   159,   160,   161,   162,   163,   164,
     165,   137,     0,   338,     0,     3,   339,   554,   140,     0,
       0,     0,   141,     0,   142,   143,     0,     0,     0,   144,
       0,     0,   145,   146,     0,     0,   147,   148,     0,     0,
     149,   150,   151,   152,     0,   153,   154,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,     0,     0,     0,     0,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,     0,   155,   156,   157,     0,   158,
     159,   160,   161,   162,   163,   164,   165,   137,     0,   338,
       0,     3,   463,     0,   140,     0,     0,     0,   141,     0,
     142,   143,     0,     0,     0,   144,   295,     0,   145,   146,
       0,     0,   147,   148,     0,     0,   149,   150,   151,   152,
       0,   153,   154,     0,   296,   297,   298,   299,   300,   301,
     302,   303,   304,   305,     0,     0,     0,     0,     0,     0,
       0,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
       0,   155,   156,   157,     0,   158,   159,   160,   161,   162,
     163,   164,   165,   137,     0,   338,     0,     3,     0,     0,
     140,   577,     0,     0,   141,     0,   142,   143,     0,     0,
       0,   144,     0,     0,   145,   146,     0,     0,   147,   148,
       0,     0,   149,   150,   151,   152,     0,   153,   154,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,     0,     0,     0,     0,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,     0,   155,   156,   157,
       0,   158,   159,   160,   161,   162,   163,   164,   165,   137,
       0,   138,     0,     3,     0,     0,   140,     0,     0,     0,
     141,     0,   142,   143,     0,     0,     0,   144,     0,     0,
     145,   146,     0,     0,   147,   148,     0,     0,   149,   150,
     151,   152,     0,   153,   154,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,     0,   155,   156,   157,     0,   158,   159,   160,
     161,   162,   163,   164,   165,   137,     0,   338,     0,     3,
       0,     0,   140,     0,     0,     0,   141,     0,   142,   143,
       0,     0,     0,   144,     0,     0,   145,   146,     0,     0,
     147,   148,     0,     0,   149,   150,   151,   152,     0,   153,
     154,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,     0,   155,
     156,   157,     0,   158,   159,   160,   161,   162,   163,   164,
     165,   137,     0,     0,     0,     3,     0,     0,   140,     0,
       0,     0,   141,     0,   142,   143,     0,     0,     0,   144,
       0,     0,   145,   146,     0,     0,   147,   148,     0,     0,
     149,   150,   151,   152,     0,   153,   154,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,     0,   155,   156,   157,     0,   158,
     159,   160,   161,   162,   163,   164,   165,     1,     2,     0,
       3,     0,     0,     4,     0,   137,     0,     5,     0,     3,
       0,     0,   270,     0,     6,     0,   141,     0,   142,   143,
       0,     7,     0,   144,     0,     8,   145,   146,     0,     0,
     147,   148,     0,     0,   277,   150,   151,   152,     0,   153,
     154,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   155,
     156,   157,    28,   158,   159,   160,   161,   162,   163,   164,
     165,   216,     0,     0,     0,     0,     0,     0,     0,  -105,
    -105,  -105,     0,  -105,  -105,  -149,     0,     0,     0,     0,
       0,     6,     0,     0,     0,   214,     0,     0,     7,     0,
       0,     0,  -105,  -102,  -102,  -102,     0,  -102,  -102,     0,
       0,     0,     0,     0,     0,  -102,     0,     0,     0,     0,
       0,     0,  -102,     0,     0,     0,  -102,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,     0,     0,     0,     0,
       0,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
     247,     0,     0,     0,     0,     0,     0,     0,  -106,  -106,
    -106,     0,  -106,  -106,     0,     0,     0,     0,     0,     0,
       6,     0,     0,     0,   216,     0,     0,     7,     0,     0,
       0,  -106,  -105,  -105,   346,     0,  -105,     0,     0,     0,
       0,     0,     0,     0,     6,     0,     0,     0,     0,     0,
       0,     7,     0,     0,     0,  -105,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,     0,     0,     0,     0,     0,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,   247,
       0,     0,     0,     0,     0,     0,     0,  -106,  -106,   348,
       0,  -106,     0,     0,     0,     0,     0,     0,     0,     6,
       0,     0,     0,   247,     0,     0,     7,     0,     0,     0,
    -106,  -106,  -106,   409,     0,  -106,     0,     0,     0,     0,
       0,     0,     0,     6,     0,     0,     0,     0,     0,     0,
       7,     0,     0,     0,  -106,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,     0,     0,     0,     0,     0,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,   247,     0,
       0,     0,     0,     0,     0,     0,  -106,  -106,   522,     0,
    -106,     0,     0,     0,   137,     0,     0,  -151,     6,     0,
       0,   608,   514,     0,   223,     7,     0,   142,   143,  -106,
       0,  -151,   144,     0,     0,   145,   146,     0,     0,   147,
     148,     0,     0,   262,   150,   151,   152,     0,   153,   154,
       0,     0,     0,     0,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,   137,     0,     0,     0,     0,     0,     0,   333,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       6,     0,     0,     0,     0,     0,     0,     7,     0,     0,
       0,   367,   150,   368,   152,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,     0,     0,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,   556,   137,     0,     0,     0,
       0,     0,     0,   485,   366,     0,   223,     0,     0,   142,
     143,     0,     0,     0,   144,     0,     0,   145,   146,     0,
       0,   147,   148,     0,     0,   367,   150,   486,   152,     0,
     153,   154,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,   137,
       0,     0,     0,     0,     0,     0,   485,   366,     0,   223,
       0,     0,   142,   143,     0,     0,     0,   144,     0,     0,
     145,   146,     0,     0,   147,   148,     0,     0,   550,   150,
     486,   152,     0,   153,   154,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,   137,     0,     0,     0,     3,     0,     0,   140,
       0,     0,     0,     0,     0,   142,   143,     0,     0,     0,
     144,     0,     0,   145,   146,     0,     0,   147,   229,     0,
       0,   230,   150,   151,   152,     0,   153,   154,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,   137,     0,     0,     0,     0,
       0,     0,   140,     0,     0,     0,   141,     0,   142,   143,
       0,     0,     0,   144,     0,     0,   145,   146,     0,     0,
     147,   148,     0,     0,   230,   150,   151,   152,     0,   153,
     154,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,   137,     0,
       0,     0,     0,     0,     0,   255,     0,     0,     0,     0,
       0,   142,   143,     0,     0,     0,   144,     0,     0,   145,
     146,     0,     0,   147,   148,     0,     0,   256,   150,   151,
     152,     0,   153,   154,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,   137,     0,     0,     0,     0,     0,     0,   365,   366,
       0,   223,     0,     0,     0,     0,     0,     0,     0,     6,
       0,     0,     0,     0,     0,     0,     7,     0,     0,     0,
     367,   150,   368,   152,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,   137,     0,     0,     0,     0,     0,
       0,   255,     0,     0,     0,     0,     0,   142,   143,     0,
       0,     0,   144,     0,     0,   145,   146,     0,     0,   147,
     148,     0,     0,   256,   150,   151,   152,     0,   153,   154,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,   137,     0,     0,
       0,     0,     0,     0,   270,     0,     0,     0,     0,     0,
     142,   143,     0,     0,     0,   144,     0,     0,   145,   146,
       0,     0,   147,   148,     0,     0,   413,   150,   151,   152,
       0,   153,   154,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
     137,     0,     0,     0,     0,     0,     0,   255,     0,     0,
       0,     0,     0,   142,   143,     0,     0,     0,   144,     0,
       0,   145,   146,     0,     0,   147,   148,     0,     0,   230,
     150,   151,   152,     0,   153,   154,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,   137,     0,     0,     0,     0,     0,     0,
     270,     0,     0,     0,     0,     0,   142,   143,     0,     0,
       0,   144,     0,     0,   145,   146,     0,     0,   147,   148,
       0,     0,   581,   150,   151,   152,     0,   153,   154,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,   137,     0,     0,     0,
       0,     0,     0,   270,     0,     0,     0,     0,     0,   142,
     143,     0,     0,     0,   144,     0,   137,   145,   146,     0,
       0,   147,   148,   333,   388,   588,   150,   151,   152,     0,
     153,   154,     0,     0,     6,     0,     0,     0,     0,     0,
       0,     7,     0,     0,     0,   389,   150,   368,   152,     0,
       0,     0,     0,     0,     0,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,     0,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,   137,
       0,     0,     0,     0,     0,     0,   333,   498,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     6,   137,     0,
       0,     0,     0,     0,     7,   333,     0,     0,   367,   150,
     368,   152,     0,     0,     0,     0,     6,     0,     0,     0,
       0,     0,     0,     7,     0,     0,     0,   389,   150,   368,
     152,     0,     0,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,   137,     0,     0,     0,     0,     0,     0,   333,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     6,
       0,     0,     0,     0,     3,     0,     7,     4,     0,     0,
     367,   150,   368,   152,     0,     0,     0,     0,     6,     0,
       0,     0,     0,     0,     0,     7,     0,     0,     0,     8,
       0,     0,     0,     0,     0,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,   478,     0,     4,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     6,     0,     0,     0,
       0,     0,   549,     7,     4,     0,     0,   479,     0,     0,
       0,     0,     0,     0,     0,     6,     0,     0,     0,     0,
       0,     0,     7,     0,     0,     0,   479,     0,     0,     0,
       0,     0,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
     235,     0,     0,   236,     0,     0,     0,     0,     0,     0,
     237,     6,     0,     0,     0,     0,     0,     0,     7,   238,
     197,     0,     8,     0,     0,     0,   239,   240,   241,     0,
       0,     6,     0,     0,     0,     0,     0,     0,     7,     0,
       0,     0,     8,     0,     0,     0,     0,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,     0,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,     4,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     6,     0,     0,
     197,     0,     0,     0,     7,     0,     0,     0,     8,     0,
       0,     6,     0,     0,     0,     0,     0,     0,     7,     0,
       0,     0,     8,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,   137,     0,     0,     0,
       0,     0,     0,   270,     0,   377,     0,     0,     0,   142,
     143,     0,     0,     0,   144,     0,     0,   145,   146,     0,
       0,   147,   148,     0,     0,   262,   150,   151,   152,   137,
     153,   154,     0,   382,     0,     0,   270,     0,     0,     0,
       0,     0,   142,   143,     0,     0,     0,   144,     0,     0,
     145,   146,     0,     0,   147,   148,     0,     0,   262,   150,
     151,   152,   137,   153,   154,     0,     0,     0,     0,   270,
       0,   393,     0,     0,     0,   142,   143,     0,     0,     0,
     144,     0,     0,   145,   146,     0,     0,   147,   148,     0,
       0,   262,   150,   151,   152,   137,   153,   154,     0,     0,
       0,     0,   270,   347,     0,     0,     0,     0,   142,   143,
       0,     0,     0,   144,     0,     0,   145,   146,     0,     0,
     147,   229,     0,     0,   262,   150,   151,   152,   137,   153,
     154,     0,     0,     0,     0,   270,   432,     0,     0,     0,
       0,   142,   143,     0,     0,     0,   144,     0,     0,   145,
     146,     0,     0,   147,   148,     0,     0,   262,   150,   151,
     152,   137,   153,   154,     0,     0,     0,     0,   270,     0,
     500,     0,     0,     0,   142,   143,     0,     0,     0,   144,
       0,     0,   145,   146,     0,     0,   147,   148,     0,     0,
     262,   150,   151,   152,   137,   153,   154,     0,     0,     0,
       0,   270,   514,     0,     0,     0,     0,   142,   143,     0,
       0,     0,   144,     0,     0,   145,   146,     0,     0,   147,
     148,     0,     0,   262,   150,   151,   152,   137,   153,   154,
       0,     0,     0,     0,   270,     0,     0,     0,   141,     0,
     142,   143,     0,     0,     0,   144,     0,     0,   145,   146,
       0,     0,   147,   148,     0,     0,   262,   150,   151,   152,
     137,   153,   154,     0,     0,     0,     0,   270,   579,     0,
       0,     0,     0,   142,   143,     0,     0,     0,   144,     0,
       0,   145,   146,     0,     0,   147,   148,     0,     0,   262,
     150,   151,   152,   137,   153,   154,     0,     0,     0,     0,
     266,     0,     0,     0,     0,     0,   142,   143,     0,     0,
       0,   144,     0,     0,   145,   146,     0,     0,   147,   148,
       0,     0,   262,   150,   151,   152,   137,   153,   154,     0,
       0,     0,     0,   261,     0,     0,     0,     0,     0,   142,
     143,     0,     0,     0,   144,     0,     0,   145,   146,     0,
       0,   147,   148,     0,     0,   262,   150,   151,   152,   137,
     153,   154,     0,     0,     0,     0,   270,     0,     0,     0,
       0,     0,   142,   143,     0,     0,     0,   144,     0,     0,
     145,   146,     0,     0,   147,   148,     0,     0,   262,   150,
     151,   152,   137,   153,   154,     0,     0,     0,     0,   270,
       0,     0,     0,     0,     0,   142,   143,     0,     0,     0,
     144,     0,     0,   145,   146,     0,     0,   147,   229,     0,
       0,   262,   150,   151,   152,   137,   153,   154,     0,     0,
       0,     0,   270,     0,     0,     0,     0,     0,   142,   143,
       0,     0,     0,   144,     0,     0,   145,   146,     0,     0,
     147,   148,     0,     0,   410,   150,   151,   152,   137,   153,
     154,     0,     0,     0,     0,   533,     0,     0,     0,     0,
       0,   142,   143,     0,     0,     0,   144,     0,     0,   145,
     146,     0,     0,   147,   148,     0,     0,   262,   150,   151,
     152,   137,   153,   154,     0,     0,     0,     0,   552,     0,
       0,     0,     0,     0,   142,   143,     0,     0,     0,   144,
       0,     0,   145,   146,     0,     0,   147,   148,     0,     0,
     262,   150,   151,   152,     0,   153,   154
};

static const yytype_int16 yycheck[] =
{
       0,     3,   235,     3,     4,    40,   279,   361,    34,   238,
     224,   363,    30,    39,   312,   313,     3,   495,   229,   317,
     318,   148,     0,   136,    37,   138,     4,   238,     0,     0,
      30,    17,     4,     4,    34,    18,   308,    37,    32,     3,
      40,    41,    21,    43,    44,   223,    46,    10,     0,    28,
      11,    10,    13,    40,   326,     9,    17,     7,   236,    30,
      14,    33,    34,    46,    30,   155,    30,    39,     3,    32,
      41,     6,    44,     7,    46,    46,    42,     0,   289,    11,
      17,    13,    32,    24,    25,    17,    21,    11,    40,     3,
     169,    70,    71,    28,    46,   306,    10,    21,    32,    11,
      37,    38,   229,    32,    28,    37,    38,    19,   406,    70,
      71,    89,    15,     4,    26,    27,    28,   595,    32,    33,
     331,    35,   140,    46,     9,   314,    11,    39,    40,   481,
     484,    20,    10,   223,    46,    13,    19,    26,    70,    71,
     140,   330,    10,    26,    27,    28,   236,   380,     3,   422,
     423,   186,     3,   382,    32,    10,    39,    40,   372,    10,
      14,    16,    13,    46,    10,   398,   166,   185,   140,   140,
      25,   382,    10,   199,    11,   210,    21,    32,    33,    34,
      35,    32,    33,    11,    35,   185,    19,    24,    25,   191,
       9,   191,   192,    21,   220,    10,    15,   197,    13,   199,
      28,   201,     9,   381,    32,   218,     1,    14,    39,    40,
     210,   211,   212,     3,     9,   228,    43,    44,   218,    14,
      10,   187,   222,   210,   259,   338,   197,   199,   228,   201,
     309,   310,   311,     9,   234,   235,     9,   255,    14,   211,
     211,    14,    32,    33,    14,    35,   246,   219,    22,   140,
     222,   222,   270,   160,    10,   255,   256,    13,   210,    45,
     260,     9,     9,   235,   235,    21,    14,    14,   191,     3,
     270,   237,    28,   239,   488,    10,    10,   249,    13,   279,
     315,   316,   234,     3,   255,   192,     6,    21,   260,   587,
     468,   381,   279,     9,    28,    11,   474,    10,    32,    33,
      13,    35,    21,    16,    17,    11,   197,     9,    21,    28,
      12,   234,     9,    32,    11,    28,   342,   343,    11,    32,
      33,    34,    35,     9,   535,    32,    12,   345,    15,   408,
     409,    10,   561,   333,   360,   361,    15,   337,   364,     8,
       9,   341,    21,     7,   235,   345,     9,     4,    11,    28,
     561,     7,    82,    32,   367,   355,   356,   370,   265,   359,
      15,   361,   333,   363,   255,   365,   273,   367,    14,   547,
     370,   406,    32,   587,   361,   266,   389,    11,   468,   270,
     380,    26,    27,    28,   474,    32,   386,   387,   359,   389,
      30,    31,   363,   365,   365,   323,   324,    10,   398,   370,
      13,    41,    42,   355,     8,     9,   372,    20,   380,   380,
       9,    29,    11,   413,   386,   386,    10,     9,   341,    11,
     422,    11,   422,    36,    37,    38,   398,   398,    10,    10,
     337,    13,   355,   356,    10,   514,     9,    13,    11,    21,
      21,     9,   333,   522,    20,    21,    28,    28,   538,    11,
      32,    32,    28,    29,    12,    40,    32,   547,   484,    11,
      36,    37,    38,     9,    11,    11,    43,   485,   481,   319,
     320,   321,   322,     9,   365,    11,     8,     9,    12,   479,
     387,   481,   482,   140,   484,   485,    11,   487,    32,    32,
      11,   491,    32,    11,    11,   495,    10,   484,     7,   422,
      15,    32,    12,    11,   504,   505,    13,   507,   479,   416,
     481,    31,    11,   485,   485,    20,   551,    11,   505,   491,
     491,   473,   488,   495,   495,     9,   526,    80,   528,    10,
      16,    17,    13,   504,    32,   507,   507,   550,   504,    20,
     197,    11,    11,    11,    31,   545,    32,    33,    34,    35,
     550,    14,   587,   505,   554,    36,    37,    38,    11,   482,
      11,   325,   562,   220,   327,   364,   151,   328,   153,   154,
     155,   212,   545,   352,   545,   562,   470,   577,   235,   579,
     507,   581,   507,   386,   169,    46,   621,    -1,   588,    -1,
     608,    -1,    -1,    10,   485,   595,    -1,    14,   255,   490,
     491,   186,   602,   526,    21,   605,    -1,    -1,   608,   266,
     562,    28,    -1,   270,    -1,    32,    -1,   524,   525,   526,
     197,   528,   622,   595,   595,   210,    -1,    -1,    -1,    -1,
      10,    -1,    -1,    13,    -1,    15,   608,   608,   223,    -1,
      -1,    21,   533,   220,    -1,    -1,    10,    -1,    28,    13,
     622,   236,    32,    -1,   577,   140,   579,    21,    -1,    -1,
      -1,   552,    -1,    -1,    28,    -1,    -1,    -1,    32,   246,
     577,    -1,   579,    -1,   259,    -1,   333,    -1,   255,   602,
     165,    -1,   605,    -1,    -1,   342,   343,    -1,    -1,   266,
      -1,   598,    -1,   270,     3,   602,    -1,     6,   605,    -1,
       9,    10,    11,   360,    13,    -1,    -1,   364,   365,    -1,
      -1,    -1,    21,    -1,    -1,    -1,    -1,   608,    -1,    28,
      -1,    -1,    -1,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,    -1,   330,    -1,    -1,    -1,   187,
      -1,    -1,    -1,    -1,    -1,    -1,   333,    -1,    -1,    -1,
      15,    16,    17,    -1,    -1,   342,   343,    -1,    -1,    -1,
     255,    -1,    -1,    -1,    -1,    -1,   261,    32,    33,    34,
      35,   266,    -1,   360,   222,   270,    -1,   364,    -1,   274,
     275,   276,    -1,    -1,    -1,    -1,   381,   235,    -1,     0,
      -1,    -1,    -1,     4,     5,   290,     7,    -1,    -1,    10,
      -1,    -1,    -1,    14,    -1,    -1,    -1,    -1,    -1,    -1,
      21,   406,    -1,   408,   409,    -1,   264,    28,   485,    -1,
      -1,    32,    -1,   490,   491,    16,    17,    -1,    -1,    -1,
      21,    -1,    -1,    -1,   329,   430,    -1,    28,   333,   287,
     288,    32,    33,    34,    35,    -1,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    -1,   533,    -1,    -1,    -1,
     365,    -1,    -1,   468,     1,    -1,     3,    -1,    89,   474,
      -1,    -1,    -1,    10,    -1,   552,    -1,    14,    -1,    16,
      17,   486,    -1,    -1,    21,    -1,    -1,    24,    25,    -1,
      -1,    28,    29,   490,    -1,    32,    33,    34,    35,    -1,
      37,    38,    -1,    -1,    -1,    -1,   411,   365,    -1,   514,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   522,    -1,    -1,
      -1,    -1,   380,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     0,    -1,   538,    -1,     4,   533,    -1,    -1,    -1,
     398,    10,   547,     3,    -1,    -1,   551,     7,     8,   407,
      10,    -1,    21,    -1,    -1,   552,    16,    17,    -1,    28,
      -1,    21,    -1,    32,    24,    25,    -1,    -1,    28,    29,
     428,   429,    32,    33,    34,    35,    -1,    37,    38,    -1,
     485,    -1,   587,    -1,    -1,    -1,    -1,    -1,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   621,    -1,    -1,    -1,
      89,    -1,   527,    -1,   529,   530,    -1,   485,   533,    -1,
     488,    -1,    -1,   491,    -1,    11,    -1,   495,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   552,    -1,   507,
       3,    -1,     5,    -1,     7,     8,    -1,    10,    -1,    -1,
      -1,    14,   567,    16,    17,    -1,    -1,    -1,    21,    -1,
      -1,    24,    25,    -1,    -1,    28,    29,    -1,    -1,    32,
      33,    34,    35,    -1,    37,    38,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      -1,    -1,    -1,   608,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    -1,    77,    78,    79,    -1,    81,    82,
      83,    84,    85,    86,    87,    88,    -1,   595,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,    -1,
     608,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    -1,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,     3,    -1,     5,    -1,     7,
       8,    32,    10,    -1,    -1,    -1,    14,    -1,    16,    17,
      -1,    -1,    -1,    21,    -1,    -1,    24,    25,    -1,    -1,
      28,    29,    -1,    -1,    32,    33,    34,    35,    -1,    37,
      38,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    -1,    -1,    -1,    -1,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    -1,    77,
      78,    79,    -1,    81,    82,    83,    84,    85,    86,    87,
      88,     3,    -1,     5,    -1,     7,     8,    32,    10,    -1,
      -1,    -1,    14,    -1,    16,    17,    -1,    -1,    -1,    21,
      -1,    -1,    24,    25,    -1,    -1,    28,    29,    -1,    -1,
      32,    33,    34,    35,    -1,    37,    38,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    -1,    -1,    -1,    -1,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    -1,    77,    78,    79,    -1,    81,
      82,    83,    84,    85,    86,    87,    88,     3,    -1,     5,
      -1,     7,     8,    -1,    10,    -1,    -1,    -1,    14,    -1,
      16,    17,    -1,    -1,    -1,    21,    29,    -1,    24,    25,
      -1,    -1,    28,    29,    -1,    -1,    32,    33,    34,    35,
      -1,    37,    38,    -1,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      -1,    77,    78,    79,    -1,    81,    82,    83,    84,    85,
      86,    87,    88,     3,    -1,     5,    -1,     7,    -1,    -1,
      10,    11,    -1,    -1,    14,    -1,    16,    17,    -1,    -1,
      -1,    21,    -1,    -1,    24,    25,    -1,    -1,    28,    29,
      -1,    -1,    32,    33,    34,    35,    -1,    37,    38,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    -1,    -1,    -1,    -1,    57,    58,    59,
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
      84,    85,    86,    87,    88,     3,    -1,     5,    -1,     7,
      -1,    -1,    10,    -1,    -1,    -1,    14,    -1,    16,    17,
      -1,    -1,    -1,    21,    -1,    -1,    24,    25,    -1,    -1,
      28,    29,    -1,    -1,    32,    33,    34,    35,    -1,    37,
      38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    -1,    77,
      78,    79,    -1,    81,    82,    83,    84,    85,    86,    87,
      88,     3,    -1,    -1,    -1,     7,    -1,    -1,    10,    -1,
      -1,    -1,    14,    -1,    16,    17,    -1,    -1,    -1,    21,
      -1,    -1,    24,    25,    -1,    -1,    28,    29,    -1,    -1,
      32,    33,    34,    35,    -1,    37,    38,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    -1,    77,    78,    79,    -1,    81,
      82,    83,    84,    85,    86,    87,    88,     4,     5,    -1,
       7,    -1,    -1,    10,    -1,     3,    -1,    14,    -1,     7,
      -1,    -1,    10,    -1,    21,    -1,    14,    -1,    16,    17,
      -1,    28,    -1,    21,    -1,    32,    24,    25,    -1,    -1,
      28,    29,    -1,    -1,    32,    33,    34,    35,    -1,    37,
      38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    77,
      78,    79,    89,    81,    82,    83,    84,    85,    86,    87,
      88,     1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     9,
      10,    11,    -1,    13,    14,    15,    -1,    -1,    -1,    -1,
      -1,    21,    -1,    -1,    -1,     1,    -1,    -1,    28,    -1,
      -1,    -1,    32,     9,    10,    11,    -1,    13,    14,    -1,
      -1,    -1,    -1,    -1,    -1,    21,    -1,    -1,    -1,    -1,
      -1,    -1,    28,    -1,    -1,    -1,    32,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    -1,    -1,    -1,    -1,
      -1,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
       1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     9,    10,
      11,    -1,    13,    14,    -1,    -1,    -1,    -1,    -1,    -1,
      21,    -1,    -1,    -1,     1,    -1,    -1,    28,    -1,    -1,
      -1,    32,     9,    10,    11,    -1,    13,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    21,    -1,    -1,    -1,    -1,    -1,
      -1,    28,    -1,    -1,    -1,    32,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    -1,    -1,    -1,    -1,    -1,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,     1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     9,    10,    11,
      -1,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,
      -1,    -1,    -1,     1,    -1,    -1,    28,    -1,    -1,    -1,
      32,     9,    10,    11,    -1,    13,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    21,    -1,    -1,    -1,    -1,    -1,    -1,
      28,    -1,    -1,    -1,    32,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    -1,    -1,    -1,    -1,    -1,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,     1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     9,    10,    11,    -1,
      13,    -1,    -1,    -1,     3,    -1,    -1,     1,    21,    -1,
      -1,    10,    11,    -1,    13,    28,    -1,    16,    17,    32,
      -1,    15,    21,    -1,    -1,    24,    25,    -1,    -1,    28,
      29,    -1,    -1,    32,    33,    34,    35,    -1,    37,    38,
      -1,    -1,    -1,    -1,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,     3,    -1,    -1,    -1,    -1,    -1,    -1,    10,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      21,    -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,    -1,
      -1,    32,    33,    34,    35,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    -1,    -1,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,     3,    -1,    -1,    -1,
      -1,    -1,    -1,    10,    11,    -1,    13,    -1,    -1,    16,
      17,    -1,    -1,    -1,    21,    -1,    -1,    24,    25,    -1,
      -1,    28,    29,    -1,    -1,    32,    33,    34,    35,    -1,
      37,    38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,     3,
      -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    -1,    13,
      -1,    -1,    16,    17,    -1,    -1,    -1,    21,    -1,    -1,
      24,    25,    -1,    -1,    28,    29,    -1,    -1,    32,    33,
      34,    35,    -1,    37,    38,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,     3,    -1,    -1,    -1,     7,    -1,    -1,    10,
      -1,    -1,    -1,    -1,    -1,    16,    17,    -1,    -1,    -1,
      21,    -1,    -1,    24,    25,    -1,    -1,    28,    29,    -1,
      -1,    32,    33,    34,    35,    -1,    37,    38,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,     3,    -1,    -1,    -1,    -1,
      -1,    -1,    10,    -1,    -1,    -1,    14,    -1,    16,    17,
      -1,    -1,    -1,    21,    -1,    -1,    24,    25,    -1,    -1,
      28,    29,    -1,    -1,    32,    33,    34,    35,    -1,    37,
      38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,     3,    -1,
      -1,    -1,    -1,    -1,    -1,    10,    -1,    -1,    -1,    -1,
      -1,    16,    17,    -1,    -1,    -1,    21,    -1,    -1,    24,
      25,    -1,    -1,    28,    29,    -1,    -1,    32,    33,    34,
      35,    -1,    37,    38,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,     3,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,
      -1,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,
      -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,
      32,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,     3,    -1,    -1,    -1,    -1,    -1,
      -1,    10,    -1,    -1,    -1,    -1,    -1,    16,    17,    -1,
      -1,    -1,    21,    -1,    -1,    24,    25,    -1,    -1,    28,
      29,    -1,    -1,    32,    33,    34,    35,    -1,    37,    38,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,     3,    -1,    -1,
      -1,    -1,    -1,    -1,    10,    -1,    -1,    -1,    -1,    -1,
      16,    17,    -1,    -1,    -1,    21,    -1,    -1,    24,    25,
      -1,    -1,    28,    29,    -1,    -1,    32,    33,    34,    35,
      -1,    37,    38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
       3,    -1,    -1,    -1,    -1,    -1,    -1,    10,    -1,    -1,
      -1,    -1,    -1,    16,    17,    -1,    -1,    -1,    21,    -1,
      -1,    24,    25,    -1,    -1,    28,    29,    -1,    -1,    32,
      33,    34,    35,    -1,    37,    38,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,     3,    -1,    -1,    -1,    -1,    -1,    -1,
      10,    -1,    -1,    -1,    -1,    -1,    16,    17,    -1,    -1,
      -1,    21,    -1,    -1,    24,    25,    -1,    -1,    28,    29,
      -1,    -1,    32,    33,    34,    35,    -1,    37,    38,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,     3,    -1,    -1,    -1,
      -1,    -1,    -1,    10,    -1,    -1,    -1,    -1,    -1,    16,
      17,    -1,    -1,    -1,    21,    -1,     3,    24,    25,    -1,
      -1,    28,    29,    10,    11,    32,    33,    34,    35,    -1,
      37,    38,    -1,    -1,    21,    -1,    -1,    -1,    -1,    -1,
      -1,    28,    -1,    -1,    -1,    32,    33,    34,    35,    -1,
      -1,    -1,    -1,    -1,    -1,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    -1,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,     3,
      -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,     3,    -1,
      -1,    -1,    -1,    -1,    28,    10,    -1,    -1,    32,    33,
      34,    35,    -1,    -1,    -1,    -1,    21,    -1,    -1,    -1,
      -1,    -1,    -1,    28,    -1,    -1,    -1,    32,    33,    34,
      35,    -1,    -1,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,     3,    -1,    -1,    -1,    -1,    -1,    -1,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,
      -1,    -1,    -1,    -1,     7,    -1,    28,    10,    -1,    -1,
      32,    33,    34,    35,    -1,    -1,    -1,    -1,    21,    -1,
      -1,    -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,    32,
      -1,    -1,    -1,    -1,    -1,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,     8,    -1,    10,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    21,    -1,    -1,    -1,
      -1,    -1,     8,    28,    10,    -1,    -1,    32,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    21,    -1,    -1,    -1,    -1,
      -1,    -1,    28,    -1,    -1,    -1,    32,    -1,    -1,    -1,
      -1,    -1,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      10,    -1,    -1,    13,    -1,    -1,    -1,    -1,    -1,    -1,
      20,    21,    -1,    -1,    -1,    -1,    -1,    -1,    28,    29,
      10,    -1,    32,    -1,    -1,    -1,    36,    37,    38,    -1,
      -1,    21,    -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,
      -1,    -1,    32,    -1,    -1,    -1,    -1,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    -1,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    10,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,    -1,    -1,
      10,    -1,    -1,    -1,    28,    -1,    -1,    -1,    32,    -1,
      -1,    21,    -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,
      -1,    -1,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,     3,    -1,    -1,    -1,
      -1,    -1,    -1,    10,    -1,    12,    -1,    -1,    -1,    16,
      17,    -1,    -1,    -1,    21,    -1,    -1,    24,    25,    -1,
      -1,    28,    29,    -1,    -1,    32,    33,    34,    35,     3,
      37,    38,    -1,     7,    -1,    -1,    10,    -1,    -1,    -1,
      -1,    -1,    16,    17,    -1,    -1,    -1,    21,    -1,    -1,
      24,    25,    -1,    -1,    28,    29,    -1,    -1,    32,    33,
      34,    35,     3,    37,    38,    -1,    -1,    -1,    -1,    10,
      -1,    12,    -1,    -1,    -1,    16,    17,    -1,    -1,    -1,
      21,    -1,    -1,    24,    25,    -1,    -1,    28,    29,    -1,
      -1,    32,    33,    34,    35,     3,    37,    38,    -1,    -1,
      -1,    -1,    10,    11,    -1,    -1,    -1,    -1,    16,    17,
      -1,    -1,    -1,    21,    -1,    -1,    24,    25,    -1,    -1,
      28,    29,    -1,    -1,    32,    33,    34,    35,     3,    37,
      38,    -1,    -1,    -1,    -1,    10,    11,    -1,    -1,    -1,
      -1,    16,    17,    -1,    -1,    -1,    21,    -1,    -1,    24,
      25,    -1,    -1,    28,    29,    -1,    -1,    32,    33,    34,
      35,     3,    37,    38,    -1,    -1,    -1,    -1,    10,    -1,
      12,    -1,    -1,    -1,    16,    17,    -1,    -1,    -1,    21,
      -1,    -1,    24,    25,    -1,    -1,    28,    29,    -1,    -1,
      32,    33,    34,    35,     3,    37,    38,    -1,    -1,    -1,
      -1,    10,    11,    -1,    -1,    -1,    -1,    16,    17,    -1,
      -1,    -1,    21,    -1,    -1,    24,    25,    -1,    -1,    28,
      29,    -1,    -1,    32,    33,    34,    35,     3,    37,    38,
      -1,    -1,    -1,    -1,    10,    -1,    -1,    -1,    14,    -1,
      16,    17,    -1,    -1,    -1,    21,    -1,    -1,    24,    25,
      -1,    -1,    28,    29,    -1,    -1,    32,    33,    34,    35,
       3,    37,    38,    -1,    -1,    -1,    -1,    10,    11,    -1,
      -1,    -1,    -1,    16,    17,    -1,    -1,    -1,    21,    -1,
      -1,    24,    25,    -1,    -1,    28,    29,    -1,    -1,    32,
      33,    34,    35,     3,    37,    38,    -1,    -1,    -1,    -1,
      10,    -1,    -1,    -1,    -1,    -1,    16,    17,    -1,    -1,
      -1,    21,    -1,    -1,    24,    25,    -1,    -1,    28,    29,
      -1,    -1,    32,    33,    34,    35,     3,    37,    38,    -1,
      -1,    -1,    -1,    10,    -1,    -1,    -1,    -1,    -1,    16,
      17,    -1,    -1,    -1,    21,    -1,    -1,    24,    25,    -1,
      -1,    28,    29,    -1,    -1,    32,    33,    34,    35,     3,
      37,    38,    -1,    -1,    -1,    -1,    10,    -1,    -1,    -1,
      -1,    -1,    16,    17,    -1,    -1,    -1,    21,    -1,    -1,
      24,    25,    -1,    -1,    28,    29,    -1,    -1,    32,    33,
      34,    35,     3,    37,    38,    -1,    -1,    -1,    -1,    10,
      -1,    -1,    -1,    -1,    -1,    16,    17,    -1,    -1,    -1,
      21,    -1,    -1,    24,    25,    -1,    -1,    28,    29,    -1,
      -1,    32,    33,    34,    35,     3,    37,    38,    -1,    -1,
      -1,    -1,    10,    -1,    -1,    -1,    -1,    -1,    16,    17,
      -1,    -1,    -1,    21,    -1,    -1,    24,    25,    -1,    -1,
      28,    29,    -1,    -1,    32,    33,    34,    35,     3,    37,
      38,    -1,    -1,    -1,    -1,    10,    -1,    -1,    -1,    -1,
      -1,    16,    17,    -1,    -1,    -1,    21,    -1,    -1,    24,
      25,    -1,    -1,    28,    29,    -1,    -1,    32,    33,    34,
      35,     3,    37,    38,    -1,    -1,    -1,    -1,    10,    -1,
      -1,    -1,    -1,    -1,    16,    17,    -1,    -1,    -1,    21,
      -1,    -1,    24,    25,    -1,    -1,    28,    29,    -1,    -1,
      32,    33,    34,    35,    -1,    37,    38
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
      85,    86,    87,    88,    89,   154,   155,     3,     5,     8,
      10,    14,    16,    17,    21,    24,    25,    28,    29,    32,
      33,    34,    35,    37,    38,    77,    78,    79,    81,    82,
      83,    84,    85,    86,    87,    88,    91,    92,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   110,   112,   113,   129,   131,   143,   144,
     145,   146,   147,   148,   149,   150,   151,    10,   113,   117,
     129,   138,    17,    17,    37,    38,     7,    32,    14,   114,
     129,   130,     9,    14,     1,   113,     1,   113,   122,   131,
       7,    32,    10,    13,   131,   139,   140,   113,   122,    29,
      32,    94,    97,   145,   146,    10,    13,    20,    29,    36,
      37,    38,   129,   130,   128,   131,   133,     1,   113,   131,
       0,   153,    32,   154,   154,    10,    32,   110,   114,   129,
     138,    10,    32,    92,   131,    15,    10,    94,    94,    94,
      10,   107,   111,    15,    10,    10,    10,    32,   143,    10,
      32,    14,    14,     1,    14,   110,     3,     6,   131,    10,
      13,    20,    36,    37,    38,    29,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,   109,    96,    19,    26,
      27,    28,    39,    40,    46,    24,    25,    39,    40,    30,
      31,    41,    42,    43,    44,    21,    19,    22,    45,    18,
      46,     9,    14,    10,    91,     8,   112,   147,     5,     8,
     143,   146,   117,   128,   138,    11,    11,    11,    11,    32,
     126,   127,     7,    14,   145,   146,   113,   115,   113,    32,
     117,   120,   121,   122,     7,    10,    11,    32,    34,    91,
     113,   129,   131,   134,   135,   137,   139,    12,   111,   140,
      10,    13,     7,    92,   108,   141,   145,   147,    11,    32,
     129,   134,   136,    12,   111,   130,   141,   130,    10,   128,
     131,   113,    20,    26,   138,    32,   131,    11,    11,    11,
      32,    10,   143,    32,   138,   138,    15,   143,   110,   110,
     110,    82,   146,   148,    14,     1,    14,    91,    16,    25,
      34,    91,    11,    93,   108,   110,    32,    32,   108,   102,
      96,    96,    96,    98,    98,   105,    97,    97,    98,    98,
      99,    99,    99,    99,   100,   100,   101,   102,   103,   104,
     110,   105,   108,     8,   154,   122,   122,   114,    29,     8,
       9,   126,   145,   112,    15,   123,   124,   129,     8,    32,
     121,   122,   146,   123,   120,    10,    34,    91,   131,   139,
      10,    10,   129,   139,    11,     9,    11,    12,    11,   134,
      12,   111,   141,   142,   113,   129,   156,     9,    11,    11,
      12,    32,    32,    11,    11,    97,    98,    91,    96,    96,
     131,    11,    11,   143,    11,    11,    11,    10,   147,   148,
     148,    91,    91,    10,    94,     9,    11,    12,    15,    14,
     111,   127,     8,   145,   111,     9,    14,    15,    14,     8,
      32,   129,    10,    32,    32,   138,    76,   135,    11,    12,
       8,     9,   129,   136,   137,    31,    20,    13,    96,    11,
      11,    11,   143,   143,   112,   143,   110,    11,   110,    11,
     110,    32,   138,   108,   107,   124,   111,   131,    32,   138,
      11,   131,    11,     8,   141,     9,    32,   110,    80,    11,
     112,   143,    11,   112,   143,    11,   131,    11,    10,   131,
      11,    11,    31,    12,   143,    14,   112,   143,   112,   143,
      11,   129,   138,    11
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    90,    91,    91,    91,    91,    91,    91,    91,    91,
      92,    92,    92,    92,    92,    92,    92,    92,    92,    92,
      92,    92,    92,    92,    92,    92,    93,    93,    94,    94,
      94,    94,    94,    94,    94,    94,    95,    95,    95,    95,
      95,    95,    96,    96,    96,    96,    96,    96,    97,    97,
      97,    97,    98,    98,    98,    98,    98,    98,    98,    99,
      99,    99,   100,   100,   100,   100,   100,   101,   101,   101,
     102,   102,   103,   103,   104,   104,   105,   105,   106,   106,
     107,   107,   108,   108,   109,   109,   109,   109,   109,   109,
     109,   109,   109,   109,   109,   110,   110,   111,   112,   112,
     112,   112,   113,   113,   113,   113,   113,   113,   113,   113,
     113,   113,   113,   113,   113,   113,   113,   114,   114,   115,
     115,   115,   116,   116,   116,   116,   116,   117,   117,   117,
     117,   117,   117,   117,   117,   117,   117,   117,   118,   118,
     118,   119,   119,   120,   120,   120,   121,   121,   122,   122,
     122,   122,   123,   123,   124,   124,   124,   125,   125,   125,
     126,   126,   127,   127,   128,   128,   129,   129,   129,   129,
     130,   130,   130,   130,   130,   130,   130,   130,   130,   130,
     130,   130,   130,   131,   131,   131,   131,   132,   132,   132,
     132,   132,   132,   133,   133,   134,   134,   135,   135,   135,
     135,   135,   135,   135,   135,   135,   135,   136,   136,   137,
     137,   138,   138,   139,   139,   139,   140,   140,   140,   140,
     140,   140,   140,   140,   140,   141,   141,   141,   142,   142,
     143,   143,   143,   143,   143,   143,   144,   144,   144,   145,
     145,   145,   145,   146,   146,   146,   147,   147,   147,   147,
     147,   148,   148,   149,   149,   149,   150,   150,   150,   150,
     150,   150,   150,   150,   150,   150,   150,   151,   151,   151,
     151,   151,   151,   151,   152,   152,   152,   153,   153,   153,
     153,   153,   153,   153,   153,   153,   154,   154,   155,   155,
     155,   155,   155,   155,   155,   155,   155,   155,   155,   155,
     155,   155,   155,   155,   155,   155,   155,   155,   155,   155,
     155,   155,   155,   155,   155,   155,   155,   155,   155,   155,
     155,   155,   155,   155,   155,   155,   155,   155,   155,   155,
     155,   155,   155,   155,   155,   155,   155,   155,   155,   155,
     155,   155,   155,   155,   155,   155,   155,   155,   155,   155,
     155,   155,   155,   155,   155,   155,   155,   155,   155,   155,
     155,   155,   155,   155,   155,   155,   155,   155,   155,   155,
     155,   156,   156,   156,   156,   156,   156,   156
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     3,     1,     2,     4,     3,
       1,     2,     3,     4,     4,     4,     7,     3,     4,     3,
       3,     2,     2,     4,     6,     7,     1,     3,     1,     2,
       2,     2,     2,     2,     4,     5,     1,     1,     1,     1,
       1,     1,     1,     4,     4,     5,     5,     5,     3,     3,
       3,     1,     1,     3,     3,     3,     3,     3,     3,     1,
       3,     3,     1,     3,     3,     3,     3,     1,     3,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     5,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     1,     2,     3,
       5,     2,     1,     2,     2,     1,     1,     2,     2,     2,
       2,     2,     2,     3,     3,     1,     2,     1,     3,     1,
       3,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     5,     4,
       2,     1,     1,     1,     2,     2,     3,     3,     2,     1,
       2,     1,     1,     3,     1,     2,     3,     4,     5,     2,
       1,     3,     1,     3,     1,     1,     2,     1,     2,     3,
       1,     2,     2,     3,     3,     3,     3,     3,     4,     3,
       4,     4,     3,     1,     2,     2,     3,     1,     1,     2,
       2,     2,     2,     1,     2,     1,     3,     2,     2,     1,
       1,     2,     3,     4,     5,     4,     1,     3,     3,     1,
       3,     1,     2,     1,     1,     2,     3,     2,     3,     3,
       4,     2,     3,     3,     4,     1,     3,     4,     1,     3,
       1,     1,     1,     1,     1,     1,     3,     4,     3,     2,
       3,     3,     4,     1,     2,     2,     1,     2,     3,     2,
       2,     1,     2,     5,     7,     5,     5,     7,     6,     7,
       7,     6,     5,     6,     7,     7,     6,     3,     2,     2,
       2,     2,     3,     3,     1,     2,     0,     1,     1,     2,
       2,     6,     8,     1,     1,     1,     1,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     4,     3,     3,     2,     4,     5,     4
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
    {/*printf("%d con %s primary_expression: IDENTIFIER FINAL\n",linea, gramaticas );*/}
#line 2486 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 40 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  primary_expression: CONSTANT FINAL\n",linea,  gramaticas );*/}
#line 2492 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 41 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  LITERAL FINAL\n",linea, gramaticas );*/}
#line 2498 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 42 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  primary_expression: LEFT_PARENTHESIS FINAL expression RIGHT_PARETHESIS\n",linea, gramaticas);*/}
#line 2504 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 43 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  primary_expression: INTEGER FINAL\n",linea, gramaticas );*/}
#line 2510 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 44 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  LITERAL FINAL\n",linea, gramaticas );*/}
#line 2516 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 45 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  LITERAL FINAL\n",linea, gramaticas );*/}
#line 2522 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 51 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  postfix_expression: primary_expression\n",linea, gramaticas );*/}
#line 2528 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 52 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  postfix_expression: pointer primary_expression\n",linea, gramaticas);*/}
#line 2534 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 53 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  postfix_expression: primary_expression pointer primary_expression \n",linea, gramaticas );*/}
#line 2540 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 54 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  postfix_expression: primary_expression pointer primary_expression \n",linea, gramaticas );*/}
#line 2546 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 55 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  postfix_expression: primary_expression pointer primary_expression \n",linea, gramaticas );*/}
#line 2552 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 56 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  postfix_expression: postfix_expression RIGHT_SBRACKET expression LEFT_SBRACKET\n",linea, gramaticas);*/}
#line 2558 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 57 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  postfix_expression: postfix_expression RIGHT_SBRACKET expression LEFT_SBRACKET\n",linea, gramaticas);
}	| LEFT_BRACKET RIGHT_BRACKET {/*printf("%d con %s  postfix_expression: postfix_expression RIGHT_SBRACKET expression LEFT_SBRACKET\n",linea, gramaticas);*/}
#line 2565 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 59 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  postfix_expression: postfix_expression LEFT_PARENTHESIS RIGHT_PARENTHESIS\n",linea,gramaticas);*/}
#line 2571 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 60 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  postfix_expression: postfix_expression RIGHT_PARENTHESIS argument_expression_list LEFT_PARENTHESIS\n",linea, gramaticas);*/}
#line 2577 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 62 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  postfix_expression: postfix_expression DOT IDENTIFIER\n",linea, gramaticas);*/}
#line 2583 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 63 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  postfix_expression: postfix_expression PTR_OP IDENTIFIER\n",linea, gramaticas);*/}
#line 2589 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 64 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  postfix_expression: postfix_expression INC_OP\n",linea, gramaticas );*/}
#line 2595 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 65 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  postfix_expression: postfix_expression DEC_OP\n",linea, gramaticas );*/}
#line 2601 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 66 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  unary_expression: SIZEOF unary_expression\n",linea, gramaticas );*/}
#line 2607 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 67 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  unary_expression: SIZEOF LEFT_PARENTHESIS type_name RIGHT_PARENTHESIS\n",linea, gramaticas );*/}
#line 2613 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 68 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  unary_expression: SIZEOF LEFT_PARENTHESIS type_name RIGHT_PARENTHESIS\n",linea, gramaticas );*/}
#line 2619 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 73 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  argument_expression_list: assignment_expression\n",linea, gramaticas);*/}
#line 2625 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 74 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  argument_expression_list: argument_expression_list COMMA assignment_expression\n",linea, gramaticas);*/}
#line 2631 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 78 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  unary_expression: postfix_expression\n",linea, gramaticas );*/}
#line 2637 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 79 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  unary_expression:pointer postfix_expression\n",linea, gramaticas);*/}
#line 2643 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 80 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  unary_expression: INC_OP unary_expression\n",linea, gramaticas );*/}
#line 2649 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 81 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  unary_expression: DEC_OP unary_expression\n",linea, gramaticas );*/}
#line 2655 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 82 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  unary_expression: unary_operator cast_expression\n",linea, gramaticas );*/}
#line 2661 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 83 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  unary_expression: SIZEOF unary_expression\n",linea, gramaticas );*/}
#line 2667 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 84 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  unary_expression: SIZEOF LEFT_PARENTHESIS type_name RIGHT_PARENTHESIS\n",linea, gramaticas );*/}
#line 2673 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 85 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  unary_expression: SIZEOF LEFT_PARENTHESIS type_name RIGHT_PARENTHESIS\n",linea, gramaticas );*/}
#line 2679 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 89 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  unary_operator: BIT_AND\n",linea, gramaticas );*/}
#line 2685 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 90 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  unary_operator: MUL\n",linea, gramaticas );*/}
#line 2691 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 91 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  unary_operator: PLUS\n",linea, gramaticas );*/}
#line 2697 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 92 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  unary_operator: MINUS\n",linea, gramaticas );*/}
#line 2703 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 93 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  unary_operator: PRIME\n",linea, gramaticas );*/}
#line 2709 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 94 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  unary_operator: EXCLAMATION\n",linea, gramaticas);*/}
#line 2715 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 98 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  cast_expression: unary_expression\n",linea, gramaticas);*/}
#line 2721 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 99 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  cast_expression: LEFT_PARENTHESIS type_name RIGHT_PARENTHESIS cast_expression\n",linea, gramaticas);*/}
#line 2727 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 100 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  cast_expression: LEFT_PARENTHESIS type_name RIGHT_PARENTHESIS cast_expression\n",linea, gramaticas);*/}
#line 2733 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 101 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  cast_expression: LEFT_PARENTHESIS type_name RIGHT_PARENTHESIS cast_expression\n",linea, gramaticas);*/}
#line 2739 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 102 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  cast_expression: LEFT_PARENTHESIS type_name RIGHT_PARENTHESIS cast_expression\n",linea, gramaticas);*/}
#line 2745 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 103 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  cast_expression: LEFT_PARENTHESIS type_name RIGHT_PARENTHESIS cast_expression\n",linea, gramaticas);*/}
#line 2751 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 110 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  multiplicative_expression: multiplicative_expression MUL cast_expression\n",linea, gramaticas );*/}
#line 2757 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 111 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  multiplicative_expression: multiplicative_expression DIV cast_expression\n",linea, gramaticas );*/}
#line 2763 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 112 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  multiplicative_expression: multiplicative_expression MOD cast_expression\n",linea,gramaticas );*/}
#line 2769 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 113 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  multiplicative_expression: cast_expression\n",linea, gramaticas);*/}
#line 2775 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 117 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  additive_expression: multiplicative_expression\n",linea,gramaticas );*/}
#line 2781 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 118 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  additive_expression:multiplicative_expression UP_ARROW and_expression\n",linea,gramaticas );*/}
#line 2787 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 119 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  additive_expression:multiplicative_expression OR_OP logical_and_expression\n",linea,gramaticas );*/}
#line 2793 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 120 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  shift_expression: shift_expression LEFT_OP additive_expression\n",linea, gramaticas);*/}
#line 2799 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 121 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  shift_expression: shift_expression LEFT_OP additive_expression\n",linea, gramaticas);*/}
#line 2805 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 122 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  additive_expression: additive_expression PLUS multiplicative_expression\n",linea,gramaticas) ;*/}
#line 2811 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 123 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  additive_expression: additive_expression MINUS multiplicative_expression\n",linea, gramaticas) ;*/}
#line 2817 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 127 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  shift_expression: additive_expression\n",linea, gramaticas );*/}
#line 2823 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 128 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  shift_expression: shift_expression LEFT_OP additive_expression\n",linea, gramaticas);*/}
#line 2829 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 129 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  shift_expression: shift_expression RIGHT_OP additive_expression \n",linea, gramaticas);*/}
#line 2835 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 133 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  relational_expression: shift_expression\n",linea, gramaticas);*/}
#line 2841 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 134 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  relational_expression: relational_expression LESS shift_expression\n",linea, gramaticas);*/}
#line 2847 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 135 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  relational_expression: relational_expression GREATER shift_expression\n",linea, gramaticas );*/}
#line 2853 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 136 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  relational_expression: relational_expression LE_OP shift_expression\n",linea, gramaticas);*/}
#line 2859 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 137 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  relational_expression: relational_expression GE_OP shift_expression\n",linea, gramaticas );*/}
#line 2865 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 141 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  equality_expression: relational_expression\n",linea, gramaticas);*/}
#line 2871 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 142 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  equality_expression: equality_expression EQ_OP relational_expression\n",linea, gramaticas );*/}
#line 2877 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 143 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  equality_expression: equality_expression NE_OP relational_expression\n",linea, gramaticas);*/}
#line 2883 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 147 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  and_expression: equality_expression\n",linea, gramaticas );*/}
#line 2889 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 148 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  and_expression: and_expression BIT_AND equality_expression\n",linea, gramaticas);*/}
#line 2895 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 152 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  exclusive_or_expression: and_expression\n",linea, gramaticas );*/}
#line 2901 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 153 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  exclusive_or_expression: exclusive_or_expression UP_ARROW and_expression\n",linea, gramaticas );*/}
#line 2907 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 157 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  inclusive_or_expression: exclusive_or_expression\n",linea, gramaticas);*/}
#line 2913 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 158 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  inclusive_or_expression: inclusive_or_expression BIT_OR exclusive_or_expression\n",linea, gramaticas );*/}
#line 2919 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 162 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  logical_and_expression: inclusive_or_expression\n",linea,gramaticas );*/}
#line 2925 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 163 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  logical_and_expression: logical_and_expression AND_OP inclusive_or_expression\n",linea, gramaticas);*/}
#line 2931 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 167 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  logical_or_expression: logical_and_expression\n",linea,gramaticas);*/}
#line 2937 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 168 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  logical_or_expression: logical_or_expression OR_OP logical_and_expression\n",linea, gramaticas );*/}
#line 2943 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 172 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  conditional_expression: logical_or_expression\n",linea, gramaticas);*/}
#line 2949 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 173 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  conditional_expression: logical_or_expression INTERROGATION expression COLON conditional_expression\n",linea,gramaticas);*/}
#line 2955 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 177 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  assignment_expression: conditional_expression\n",linea, gramaticas);*/}
#line 2961 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 178 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  assignment_expression: unary_expression assignment_operator assignment_expression\n",linea,gramaticas);*/}
#line 2967 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 182 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  assignment_operator: EQU\n",linea, gramaticas);*/}
#line 2973 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 183 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  assignment_operator: MUL_ASSIGN\n",linea,gramaticas );*/}
#line 2979 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 184 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  assignment_operator: DIV_ASSIGN\n",linea,gramaticas);*/}
#line 2985 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 185 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  assignment_operator: MOD_ASSIGN\n",linea,gramaticas);*/}
#line 2991 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 186 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  assignment_operator: ADD_ASSIGN\n",linea, gramaticas);*/}
#line 2997 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 187 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  assignment_operator: SUB_ASSIGN\n",linea, gramaticas);*/}
#line 3003 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 188 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  assignment_operator: LEFT_ASSIGN\n",linea, gramaticas);*/}
#line 3009 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 189 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  assignment_operator: RIGHT_ASSIGN\n",linea,gramaticas);*/}
#line 3015 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 190 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  assignment_operator: AND_ASSIGN\n",linea, gramaticas);*/}
#line 3021 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 191 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  assignment_operator: XOR_ASSIGN\n",linea, gramaticas);*/}
#line 3027 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 192 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  assignment_operator: OR_ASSIGN\n",linea, gramaticas);*/}
#line 3033 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 196 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  expression: assignment_expression\n",linea, gramaticas);*/}
#line 3039 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 197 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  expression: expression COMMA assignment_expression\n",linea,gramaticas);*/}
#line 3045 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 201 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  constant_expression: conditional_expression\n",linea, gramaticas );*/}
#line 3051 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 205 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  declaration: declaration_specifiers SEMICOLON \n",linea, gramaticas );memset(gramaticas,0,sizeof(gramaticas));*/}
#line 3057 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 206 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  declaration: declaration_specifiers init_declarator_list SEMICOLON\n",linea, gramaticas);memset(gramaticas,0,sizeof(gramaticas));*/}
#line 3063 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 207 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  declaration: LEFT_PARENTHESIS declaration_specifiers RIGHT_PARENTHESIS init_declarator_list SEMICOLON \n",linea, gramaticas);memset(gramaticas,0,sizeof(gramaticas));*/}
#line 3069 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 208 "parser.y" /* yacc.c:1646  */
    {memset(gramaticas,0,sizeof(gramaticas));/*printf("%d con %s  declaration: LEFT_PARENTHESIS declaration_specifiers RIGHT_PARENTHESIS init_declarator_list SEMICOLON \n",linea, gramaticas);memset(gramaticas,0,sizeof(gramaticas));*/}
#line 3075 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 212 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  declaration_specifiers: storage_class_specifier \n",linea, gramaticas);*/}
#line 3081 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 213 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  declaration_specifiers: storage_class_specifier declaration_specifiers\n",linea, gramaticas);*/}
#line 3087 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 214 "parser.y" /* yacc.c:1646  */
    {yyerror("missing declaration_specifiers");}
#line 3093 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 215 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  declaration_specifiers: type_specifier\n",linea, gramaticas);*/}
#line 3099 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 216 "parser.y" /* yacc.c:1646  */
    {}
#line 3105 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 217 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  declaration_specifiers: type_specifier declaration_specifiers {\n",linea, gramaticas);*/}
#line 3111 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 218 "parser.y" /* yacc.c:1646  */
    {yyerror("missing declaration_specifiers or pointer");}
#line 3117 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 219 "parser.y" /* yacc.c:1646  */
    {}
#line 3123 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 220 "parser.y" /* yacc.c:1646  */
    {yyerror("missing declaration_specifiers or missing pointer");}
#line 3129 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 221 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  declaration_specifiers: type_specifier\n",linea, gramaticas);*/}
#line 3135 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 223 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  declaration_specifiers: type_specifier declaration_specifiers {\n",linea, gramaticas);*/}
#line 3141 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 224 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  declaration_specifiers: type_specifier declaration_specifiers {\n",linea, gramaticas);*/}
#line 3147 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 226 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  declaration_specifiers: type_qualifier\n",linea, gramaticas );*/}
#line 3153 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 227 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  declaration_specifiers: type_qualifier declaration_specifiers\n",linea, gramaticas );*/}
#line 3159 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 232 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  init_declarator_list: init_declarator\n",linea, gramaticas );*/}
#line 3165 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 233 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  init_declarator_list: init_declarator_list COMMA init_declarator\n",linea,gramaticas);*/}
#line 3171 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 237 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  init_declarator: declarator\n",linea, gramaticas );*/}
#line 3177 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 238 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  init_declarator: declarator EQU initializer\n",linea, gramaticas );*/}
#line 3183 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 239 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  init_declarator: multiplicative_expression\n",linea, gramaticas );*/}
#line 3189 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 244 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  storage_class_specifier: TYPEDEF\n",linea, gramaticas);*/}
#line 3195 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 245 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  storage_class_specifier: EXTERN\n",linea, gramaticas);*/}
#line 3201 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 246 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  storage_class_specifier: STATIC\n",linea,gramaticas);*/}
#line 3207 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 247 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  storage_class_specifier: AUTO\n",linea, gramaticas);*/}
#line 3213 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 248 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  storage_class_specifier: REGISTER\n",linea, gramaticas);*/}
#line 3219 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 252 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  type_specifier: VOID\n",linea, gramaticas);*/}
#line 3225 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 253 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  type_specifier: CHAR\n",linea, gramaticas);*/}
#line 3231 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 254 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  type_specifier: SHORT\n",linea, gramaticas);*/}
#line 3237 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 255 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  type_specifier: INT\n",linea, gramaticas);*/}
#line 3243 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 256 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  type_specifier: LONG\n",linea, gramaticas);*/}
#line 3249 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 257 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  type_specifier: FLOAT\n",linea, gramaticas);*/}
#line 3255 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 258 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  type_specifier: DOUBLE\n",linea, gramaticas);*/}
#line 3261 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 259 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  type_specifier: SIGNED\n",linea, gramaticas);*/}
#line 3267 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 260 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  type_specifier: UNSIGNED\n",linea, gramaticas);*/}
#line 3273 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 261 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  type_specifier: struct_or_union_specifier\n",linea, gramaticas );*/}
#line 3279 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 262 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  type_specifier: enum_specifier\n",linea, gramaticas );*/}
#line 3285 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 267 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  struct_or_union_specifier: struct_or_union IDENTIFIER LEFT_BRACKET struct_declaration_list RIGHT_BRACKET \n",linea, gramaticas );*/}
#line 3291 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 268 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  struct_or_union_specifier: struct_or_union LEFT_BRACKET struct_declaration_list RIGHT_BRACKET\n",linea,gramaticas );*/}
#line 3297 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 269 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  struct_or_union_specifier: struct_or_union IDENTIFIER\n",linea, gramaticas);*/}
#line 3303 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 273 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  struct_or_union: STRUCT\n",linea, gramaticas);*/}
#line 3309 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 274 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  struct_or_union: UNION\n",linea, gramaticas);*/}
#line 3315 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 278 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  struct_declaration_list: struct_declaration\n",linea, gramaticas );*/}
#line 3321 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 279 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  struct_declaration_list: struct_declaration_list struct_declaration\n",linea, gramaticas );*/}
#line 3327 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 280 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  struct_declaration_list:  struct_declaration_list declaration_list\n",linea, gramaticas );*/}
#line 3333 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 284 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  struct_declaration: specifier_qualifier_list struct_declarator_list SEMICOLON\n",linea, gramaticas );memset(gramaticas,0,sizeof(gramaticas));*/}
#line 3339 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 285 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  struct_declaration: IDENTIFIER struct_declarator_list SEMICOLON \n",linea, gramaticas );memset(gramaticas,0,sizeof(gramaticas));*/}
#line 3345 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 289 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  specifier_qualifier_list: type_specifier specifier_qualifier_list\n",linea, gramaticas );*/}
#line 3351 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 290 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  specifier_qualifier_list: type_specifier\n",linea, gramaticas );*/}
#line 3357 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 292 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  specifier_qualifier_list: type_qualifier specifier_qualifier_list\n",linea,gramaticas);*/}
#line 3363 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 293 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  specifier_qualifier_list: type_qualifier\n",linea, gramaticas );*/}
#line 3369 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 298 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  struct_declarator_list: struct_declarator\n",linea, gramaticas );*/}
#line 3375 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 299 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  struct_declarator_list: struct_declarator_list COMMA struct_declarator\n",linea, gramaticas );*/}
#line 3381 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 303 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  struct_declarator: declarator\n",linea, gramaticas );*/}
#line 3387 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 304 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  struct_declarator: COLON constant_expression \n",linea, gramaticas );*/}
#line 3393 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 305 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  struct_declarator: declarator COLON constant_expression \n",linea, gramaticas);*/}
#line 3399 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 309 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  enum_specifier: ENUM LEFT_BRACKET enumerator_list RIGHT_BRACKET\n",linea, gramaticas);*/}
#line 3405 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 310 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  enum_specifier: ENUM IDENTIFIER LEFT_BRACKET enumerator_list RIGHT_BRACKET \n",linea,gramaticas);*/}
#line 3411 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 311 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  enum_specifier: ENUM IDENTIFIER\n",linea, gramaticas );*/}
#line 3417 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 315 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  enumerator_list: enumerator\n",linea, gramaticas);*/}
#line 3423 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 316 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  enumerator_list: enumerator_list COMMA enumerator\n",linea, gramaticas );*/}
#line 3429 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 320 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  enumerator: IDENTIFIER\n",linea, gramaticas);*/}
#line 3435 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 321 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  enumerator: IDENTIFIER EQU constant_expression\n",linea,gramaticas);*/}
#line 3441 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 325 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  type_qualifier: CONST\n",linea,gramaticas);*/}
#line 3447 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 326 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  type_qualifier: VOLATILE\n",linea, gramaticas);*/}
#line 3453 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 330 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  declarator: pointer direct_declarator \n",linea, gramaticas );*/}
#line 3459 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 331 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  declarator: direct_declarator\n",linea, gramaticas );*/}
#line 3465 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 332 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  declarator: declarator direct_declarator\n",linea, gramaticas );*/}
#line 3471 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 333 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  declarator: direct_declarator EQU initializer \n",linea, gramaticas );*/}
#line 3477 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 339 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  direct_declarator: IDENTIFIER\n",linea, gramaticas);*/}
#line 3483 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 340 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  direct_declarator: direct_declarator INC_OP\n",linea, gramaticas);*/}
#line 3489 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 341 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  direct_declarator: direct_declarator DEC_OP\n",linea, gramaticas);*/}
#line 3495 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 342 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  direct_declarator: direct_declarator DOT direct_declarator\n",linea, gramaticas);*/}
#line 3501 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 343 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  direct_declarator: direct_declarator PTR_OP direct_declarator\n",linea, gramaticas);*/}
#line 3507 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 344 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  direct_declarator: LEFT_PARENTHESIS declarator RIGHT_PARENTHESIS\n",linea, gramaticas );*/}
#line 3513 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 345 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  direct_declarator: LEFT_PARENTHESIS declarator RIGHT_PARENTHESIS\n",linea, gramaticas );*/}
#line 3519 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 346 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  type_specifier: TYPE_NAME\n",linea,gramaticas);*/}
#line 3525 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 347 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  direct_declarator: direct_declarator LEFT_SBRACKET constant_expression RIGHT_SBRACKET\n",linea,gramaticas);*/}
#line 3531 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 348 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  direct_declarator: direct_declarator LEFT_SBRACKET RIGHT_SBRACKET\n",linea, gramaticas );*/}
#line 3537 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 350 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  direct_declarator: direct_declarator LEFT_PARENTHESIS parameter_type_list RIGHT_PARENTHESIS\n",linea, gramaticas );*/}
#line 3543 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 351 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  direct_declarator: direct_declarator LEFT_PARENTHESIS identifier_list RIGHT_PARENTHESIS\n",linea, gramaticas );*/}
#line 3549 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 353 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  direct_declarator: direct_declarator LEFT_PARENTHESIS RIGHT_PARENTHESIS\n",linea,gramaticas);*/}
#line 3555 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 358 "parser.y" /* yacc.c:1646  */
    { /*printf("%d con %s  pointer: pointer_type\n",linea, gramaticas);*/}
#line 3561 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 359 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  pointer: pointer_type type_qualifier_list\n",linea, gramaticas );*/}
#line 3567 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 360 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  pointer: pointer_type pointer\n",linea, gramaticas );*/}
#line 3573 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 361 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  pointer: pointer_type type_qualifier_list pointer\n",linea,gramaticas);*/}
#line 3579 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 365 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  pointer_type: MUL\n",linea,gramaticas);*/}
#line 3585 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 366 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  pointer_type: BIT_AND\n",linea,gramaticas);*/}
#line 3591 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 367 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  pointer_type: MUL\n",linea,gramaticas);*/}
#line 3597 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 368 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  pointer_type: MUL\n",linea,gramaticas);*/}
#line 3603 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 370 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  pointer_type: BIT_AND\n",linea,gramaticas);*/}
#line 3609 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 374 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  type_qualifier_list: type_qualifier\n",linea,gramaticas );*/}
#line 3615 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 375 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  type_qualifier_list: type_qualifier_list type_qualifier\n",linea, gramaticas );*/}
#line 3621 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 380 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  parameter_type_list: parameter_list\n",linea, gramaticas );*/}
#line 3627 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 381 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  parameter_type_list: parameter_list COMMA ELLIPSIS\n",linea, gramaticas);*/}
#line 3633 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 387 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  parameter_declaration: declaration_specifiers declarator\n",linea, gramaticas );*/}
#line 3639 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 388 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  parameter_declaration: declaration_specifiers abstract_declarator\n",linea, gramaticas );*/}
#line 3645 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 389 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  parameter_declaration: declaration_specifiers\n",linea, gramaticas );*/}
#line 3651 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 390 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  parameter_declaration: declarator\n",linea, gramaticas );*/}
#line 3657 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 391 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  parameter_declaration: IDENTIFIER abstract_declarator\n",linea, gramaticas );*/}
#line 3663 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 392 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  parameter_declaration: IDENTIFIER abstract_declarator\n",linea, gramaticas
	 );*/}
#line 3670 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 394 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  unary_expression: SIZEOF LEFT_PARENTHESIS type_name RIGHT_PARENTHESIS\n",linea, gramaticas );*/}
#line 3676 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 395 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  unary_expression: SIZEOF LEFT_PARENTHESIS IDENTIFIER pointer RIGHT_PARENTHESIS\n",linea, gramaticas );*/}
#line 3682 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 396 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  unary_expression: SIZEOF LEFT_PARENTHESIS IDENTIFIER RIGHT_PARENTHESIS\n",linea, gramaticas );*/}
#line 3688 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 401 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  identifier_list: IDENTIFIER COMMA identifier_list\n",linea, gramaticas);*/}
#line 3694 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 402 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  identifier_list: IDENTIFIER COMMA parameter_list\n",linea, gramaticas);*/}
#line 3700 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 405 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  parameter_list: parameter_declaration\n",linea, gramaticas);*/}
#line 3706 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 406 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  parameter_list: parameter_list COMMA parameter_declaration\n",linea, gramaticas);*/}
#line 3712 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 409 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  type_name: specifier_qualifier_list\n",linea, gramaticas);*/}
#line 3718 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 212:
#line 410 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  type_name: specifier_qualifier_list abstract_declarator\n",linea, gramaticas);*/}
#line 3724 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 415 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  abstract_declarator: pointer\n",linea, gramaticas);*/}
#line 3730 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 214:
#line 416 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  abstract_declarator: direct_abstract_declarator\n",linea, gramaticas );*/}
#line 3736 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 215:
#line 417 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  abstract_declarator: pointer direct_abstract_declarator\n",linea, gramaticas);*/}
#line 3742 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 216:
#line 421 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  direct_abstract_declarator: LEFT_PARENTHESIS abstract_declarator RIGHT_PARENTHESIS \n",linea, gramaticas );*/}
#line 3748 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 217:
#line 422 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  direct_abstract_declarator:  LEFT_SBRACKET RIGHT_SBRACKET \n",linea, gramaticas);*/}
#line 3754 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 218:
#line 423 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  direct_abstract_declarator: LEFT_SBRACKET constant_expression RIGHT_SBRACKET \n",linea, gramaticas );*/}
#line 3760 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 219:
#line 424 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  direct_abstract_declarator: direct_abstract_declarator LEFT_SBRACKET RIGHT_SBRACKET\n",linea, gramaticas );*/}
#line 3766 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 220:
#line 425 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  direct_abstract_declarator: direct_abstract_declarator LEFT_SBRACKET constant_expression RIGHT_SBRACKET \n",linea, gramaticas );*/}
#line 3772 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 221:
#line 426 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  direct_abstract_declarator: LEFT_PARENTHESIS RIGHT_PARENTHESIS\n",linea, gramaticas);*/}
#line 3778 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 222:
#line 427 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  direct_abstract_declarator: LEFT_PARENTHESIS parameter_type_list RIGHT_PARENTHESIS \n",linea, gramaticas );*/}
#line 3784 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 223:
#line 428 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  direct_abstract_declarator: direct_abstract_declarator LEFT_PARENTHESIS RIGHT_PARENTHESIS\n",linea,gramaticas );*/}
#line 3790 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 224:
#line 429 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  direct_abstract_declarator: direct_abstract_declarator LEFT_PARENTHESIS parameter_type_list RIGHT_PARENTHESIS\n",linea,  gramaticas  );*/}
#line 3796 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 225:
#line 433 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  initializer: assignment_expression\n",linea, gramaticas );*/}
#line 3802 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 226:
#line 434 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  initializer: LEFT_BRACKET initializer_list RIGHT_BRACKET\n",linea,  gramaticas );*/}
#line 3808 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 227:
#line 435 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  initializer: LEFT_BRACKET initializer_list COMMA RIGHT_BRACKET\n",linea, gramaticas );*/}
#line 3814 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 228:
#line 439 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  initializer_list: initializer\n",linea, gramaticas);*/}
#line 3820 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 229:
#line 440 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  initializer_list: initializer_list COMMA initializer \n",linea, gramaticas);*/}
#line 3826 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 230:
#line 444 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  statement: labeled_statement\n",linea, gramaticas );*/}
#line 3832 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 231:
#line 445 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  statement: compound_statement\n",linea, gramaticas);*/}
#line 3838 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 232:
#line 446 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  statement: expression_statement\n",linea,gramaticas );*/}
#line 3844 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 233:
#line 447 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  statement: selection_statement\n",linea, gramaticas);*/}
#line 3850 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 234:
#line 448 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  statement: iteration_statement\n",linea, gramaticas );*/}
#line 3856 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 235:
#line 449 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  statement: jump_statement\n",linea, gramaticas );*/}
#line 3862 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 236:
#line 453 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  labeled_statement: IDENTIFIER COLON statement \n",linea, gramaticas );*/}
#line 3868 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 237:
#line 454 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  labeled_statement: CASE constant_expression COLON statement\n",linea, gramaticas );*/}
#line 3874 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 238:
#line 455 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  labeled_statement: DEFAULT COLON statement\n",linea, gramaticas );*/}
#line 3880 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 239:
#line 459 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  compound_statement: LEFT_BRACKET RIGHT_BRACKET\n",linea, gramaticas);*/}
#line 3886 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 240:
#line 460 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  compound_statement: LEFT_BRACKET statement_list RIGHT_BRACKET\n",linea, gramaticas );*/}
#line 3892 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 241:
#line 461 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  compound_statement: LEFT_BRACKET declaration_list RIGHT_BRACKET\n",linea, gramaticas);*/}
#line 3898 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 242:
#line 462 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  compound_statement: LEFT_BRACKET declaration_list statement_list RIGHT_BRACKET\n",linea, gramaticas);*/}
#line 3904 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 243:
#line 466 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  declaration_list: declaration\n",linea, gramaticas );*/}
#line 3910 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 244:
#line 468 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  declaration_list: declaration_list declaration\n",linea, gramaticas);*/}
#line 3916 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 245:
#line 469 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  declaration_list: declaration_list statement_list\n",linea, gramaticas);*/}
#line 3922 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 246:
#line 473 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  statement_list: statement\n",linea, gramaticas );*/}
#line 3928 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 248:
#line 475 "parser.y" /* yacc.c:1646  */
    {memset(gramaticas,0,sizeof(gramaticas)); /*printf("%d con %s  external_declaration: DEFINE define\n",linea, gramaticas);*/}
#line 3934 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 249:
#line 476 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  statement_list: statement_list statement\n",linea, gramaticas);*/}
#line 3940 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 250:
#line 477 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  statement_list: statement_list declaration_list\n",linea, gramaticas);*/}
#line 3946 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 251:
#line 481 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  expression_statement: SEMICOLON\n",linea, gramaticas );memset(gramaticas,0,sizeof(gramaticas));*/}
#line 3952 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 252:
#line 482 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  expression_statement: expression SEMICOLON \n",linea, gramaticas );memset(gramaticas,0,sizeof(gramaticas));*/}
#line 3958 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 253:
#line 486 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  selection_statement: IF LEFT_PARENTHESIS expression RIGHT_PARENTHESIS statement\n",linea,gramaticas);*/}
#line 3964 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 254:
#line 487 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  selection_statement: IF LEFT_PARENTHESIS expression RIGHT_PARENTHESIS statement ELSE statement\n",linea, gramaticas);*/}
#line 3970 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 255:
#line 488 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  selection_statement: SWITCH LEFT_PARENTHESIS expression RIGHT_PARENTHESIS statement\n",linea, gramaticas );*/}
#line 3976 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 256:
#line 492 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  iteration_statement: WHILE LEFT_PARENTHESIS expression RIGHT_PARENTHESIS statement\n",linea, gramaticas);*/}
#line 3982 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 257:
#line 493 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  iteration_statement: DO statement WHILE LEFT_PARENTHESIS expression RIGHT_PARENTHESIS SEMICOLON\n",linea, gramaticas);memset(gramaticas,0,sizeof(gramaticas));*/}
#line 3988 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 258:
#line 494 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  iteration_statement: FOR LEFT_PARENTHESIS expression_statement expression_statement RIGHT_PARENTHESIS statement\n",linea, gramaticas );*/}
#line 3994 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 259:
#line 495 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  iteration_statement: FOR LEFT_PARENTHESIS expression_statement expression_statement expression RIGHT_PARENTHESIS statement\n",linea, gramaticas);*/}
#line 4000 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 260:
#line 496 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  iteration_statement: FOR LEFT_PARENTHESIS expression_statement expression_statement expression RIGHT_PARENTHESIS statement\n",linea, gramaticas);*/}
#line 4006 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 261:
#line 497 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  iteration_statement: FOR LEFT_PARENTHESIS expression_statement expression_statement expression RIGHT_PARENTHESIS statement\n",linea, gramaticas);*/}
#line 4012 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 262:
#line 498 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  iteration_statement: WHILE LEFT_PARENTHESIS expression RIGHT_PARENTHESIS statement\n",linea, gramaticas);*/}
#line 4018 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 263:
#line 499 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  iteration_statement: FOR LEFT_PARENTHESIS expression_statement expression_statement RIGHT_PARENTHESIS statement\n",linea, gramaticas );*/}
#line 4024 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 264:
#line 500 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  iteration_statement: FOR LEFT_PARENTHESIS expression_statement expression_statement expression RIGHT_PARENTHESIS statement\n",linea, gramaticas);*/}
#line 4030 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 265:
#line 501 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  iteration_statement: FOR LEFT_PARENTHESIS expression_statement expression_statement expression RIGHT_PARENTHESIS statement\n",linea, gramaticas);*/}
#line 4036 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 266:
#line 502 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  iteration_statement: FOR LEFT_PARENTHESIS expression_statement expression_statement expression RIGHT_PARENTHESIS statement\n",linea, gramaticas);*/}
#line 4042 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 267:
#line 506 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  jump_statement: GOTO IDENTIFIER SEMICOLON\n",linea, gramaticas );memset(gramaticas,0,sizeof(gramaticas));*/}
#line 4048 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 268:
#line 507 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  jump_statement: CONTINUE SEMICOLON\n",linea, gramaticas);memset(gramaticas,0,sizeof(gramaticas));*/}
#line 4054 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 269:
#line 508 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  jump_statement: BREAK SEMICOLON\n",linea, gramaticas);memset(gramaticas,0,sizeof(gramaticas));*/}
#line 4060 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 270:
#line 509 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  jump_statement: RETURN SEMICOLON\n",linea, gramaticas);memset(gramaticas,0,sizeof(gramaticas));*/}
#line 4066 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 271:
#line 510 "parser.y" /* yacc.c:1646  */
    {yyerror(" missing ; ");}
#line 4072 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 272:
#line 511 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  jump_statement: RETURN expression SEMICOLON\n",linea, gramaticas);memset(gramaticas,0,sizeof(gramaticas));*/}
#line 4078 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 273:
#line 512 "parser.y" /* yacc.c:1646  */
    {yyerror("missing ;");}
#line 4084 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 274:
#line 516 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  translation_unit: Entre a external_declaration\n",linea, gramaticas);memset(gramaticas,0,sizeof(gramaticas));*/}
#line 4090 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 275:
#line 517 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  translation_unit: Entre a ciclo translation_unit\n",linea, gramaticas );memset(gramaticas,0,sizeof(gramaticas));*/}
#line 4096 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 276:
#line 518 "parser.y" /* yacc.c:1646  */
    {/*printf("%d  translation_unit: Archivo Vacío\n",linea );memset(gramaticas,0,sizeof(gramaticas));*/}
#line 4102 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 277:
#line 523 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  external_declaration: function_definition\n",linea, gramaticas);*/}
#line 4108 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 278:
#line 524 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  external_declaration: declaration\n",linea, gramaticas);*/}
#line 4114 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 279:
#line 525 "parser.y" /* yacc.c:1646  */
    {memset(gramaticas,0,sizeof(gramaticas)); /*printf("%d con %s  external_declaration: DEFINE define\n",linea, gramaticas);*/}
#line 4120 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 280:
#line 526 "parser.y" /* yacc.c:1646  */
    {memset(gramaticas,0,sizeof(gramaticas));/*printf("%d con %s  external_declaration: INCLUDE LITERALn\n",linea, gramaticas);*/}
#line 4126 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 281:
#line 527 "parser.y" /* yacc.c:1646  */
    {memset(gramaticas,0,sizeof(gramaticas));/*printf("%d con %s  external_declaration: INCLUDE LITERALn\n",linea, gramaticas);*/}
#line 4132 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 282:
#line 528 "parser.y" /* yacc.c:1646  */
    {memset(gramaticas,0,sizeof(gramaticas));/*printf("%d con %s  external_declaration: INCLUDE LITERALn\n",linea, gramaticas);*/}
#line 4138 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 283:
#line 529 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  external_declaration: \\n \n",linea, gramaticas);*/}
#line 4144 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 284:
#line 530 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  external_declaration: SEMICOLON\n",linea, gramaticas);*/}
#line 4150 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 285:
#line 531 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  external_declaration: compound_statement\n",linea, gramaticas);*/}
#line 4156 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 286:
#line 535 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  define: define_enter\n",linea, gramaticas);*/}
#line 4162 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 371:
#line 627 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  function_definition: declaration_specifiers declarator declaration_list compound_statement\n",linea,gramaticas);*/}
#line 4168 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 372:
#line 628 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  function_definition: declaration_specifiers declarator compound_statement \n",linea, gramaticas);*/}
#line 4174 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 373:
#line 629 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  function_definition: declarator declaration_list compound_statement\n",linea, gramaticas );*/}
#line 4180 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 374:
#line 630 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  function_definition: declarator compound_statement\n",linea,gramaticas);*/}
#line 4186 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 375:
#line 631 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  function_definition: declarator declaration_list compound_statement function_definition\n",linea,gramaticas);*/}
#line 4192 "parser.tab.c" /* yacc.c:1646  */
    break;


#line 4196 "parser.tab.c" /* yacc.c:1646  */
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
#line 636 "parser.y" /* yacc.c:1906  */


#include<stdio.h>
#include <stdbool.h>
