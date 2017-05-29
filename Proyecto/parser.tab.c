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
#line 6 "parser.y" /* yacc.c:339  */


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
# define YYERROR_VERBOSE 1
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


#if 1

/* The parser invokes alloca or malloc; define the necessary symbols.  */

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
# define YYCOPY_NEEDED 1
#endif


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
#define YYFINAL  254
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   4545

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  90
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  67
/* YYNRULES -- Number of rules.  */
#define YYNRULES  380
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  646

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
       0,    43,    43,    44,    45,    46,    49,    50,    51,    56,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    72,
      73,    74,    75,    76,    77,    78,    79,    84,    85,    89,
      90,    91,    92,    93,    94,    95,    96,   100,   101,   102,
     103,   104,   105,   109,   110,   111,   112,   113,   114,   121,
     122,   123,   124,   128,   129,   130,   131,   132,   133,   134,
     138,   139,   140,   144,   145,   146,   147,   148,   152,   153,
     154,   158,   159,   163,   164,   168,   169,   173,   174,   178,
     179,   183,   184,   188,   189,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   207,   208,   212,   216,
     217,   219,   220,   221,   222,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   238,   239,   244,   245,   249,
     250,   251,   253,   258,   259,   260,   261,   262,   266,   267,
     268,   269,   270,   271,   272,   273,   274,   275,   276,   281,
     282,   283,   287,   288,   292,   293,   294,   298,   299,   303,
     304,   306,   307,   312,   313,   317,   318,   319,   323,   324,
     325,   329,   330,   334,   335,   339,   340,   344,   345,   346,
     348,   354,   355,   356,   357,   358,   359,   360,   361,   362,
     363,   365,   366,   369,   374,   375,   376,   377,   381,   382,
     383,   384,   385,   386,   390,   391,   396,   397,   403,   404,
     405,   406,   407,   408,   409,   411,   412,   413,   414,   418,
     419,   422,   423,   426,   427,   432,   433,   434,   438,   439,
     440,   441,   442,   443,   444,   445,   446,   450,   451,   452,
     456,   457,   461,   462,   463,   464,   465,   466,   470,   471,
     472,   476,   477,   478,   479,   483,   485,   486,   490,   491,
     492,   493,   494,   498,   499,   504,   505,   506,   510,   511,
     512,   513,   514,   515,   516,   517,   518,   519,   520,   524,
     525,   526,   527,   528,   532,   533,   534,   539,   540,   541,
     542,   543,   544,   545,   546,   547,   548,   552,   553,   560,
     561,   562,   563,   564,   565,   566,   567,   568,   569,   570,
     571,   572,   573,   574,   575,   576,   577,   578,   579,   580,
     581,   582,   583,   584,   585,   586,   587,   588,   589,   590,
     591,   592,   593,   594,   595,   596,   597,   598,   599,   600,
     601,   602,   603,   604,   605,   606,   607,   608,   609,   610,
     611,   612,   613,   614,   615,   616,   617,   618,   619,   620,
     621,   622,   623,   624,   625,   626,   627,   628,   629,   630,
     631,   632,   633,   634,   635,   636,   637,   638,   639,   640,
     641,   642,   645,   646,   647,   648,   649,   650,   651,   652,
     653
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
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

#define YYPACT_NINF -498

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-498)))

#define YYTABLE_NINF -375

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    2155,    22,  1295,  1382,  3573,  -498,    25,    33,  -498,  -498,
    -498,  -498,  -498,  -498,  -498,  -498,  -498,  -498,  -498,  -498,
    -498,  -498,  -498,  -498,  -498,  -498,  -498,    28,  -498,  -498,
     624,  3487,  -498,  2229,  1191,  -498,    41,   279,  -498,  2229,
    2470,  3553,    23,    63,  1191,  -498,  1135,  -498,  -498,  -498,
      42,  -498,  -498,  -498,  -498,  -498,  -498,  -498,  -498,  -498,
    -498,  -498,  -498,  -498,  -498,  -498,  -498,  -498,  -498,  -498,
    -498,  -498,  -498,  -498,  -498,  -498,  -498,  -498,  -498,  -498,
    -498,  -498,  -498,  -498,  -498,  -498,  -498,  -498,  -498,  -498,
    -498,  -498,  -498,  -498,  -498,  -498,  -498,  -498,  -498,  -498,
    -498,  -498,  -498,  -498,  -498,  -498,  -498,  -498,  -498,  -498,
    -498,  -498,  -498,  -498,  -498,  -498,  -498,  -498,  -498,  -498,
    -498,  -498,  -498,  -498,  -498,  -498,  -498,  -498,  -498,  -498,
    -498,  -498,  -498,  -498,  -498,  -498,  1295,  -498,  1295,  1468,
    -498,  2689,  -498,  -498,  -498,    34,  -498,  -498,    89,   174,
    3380,  -498,  4276,  -498,  4309,  4309,  4342,    50,    97,   105,
     121,  2164,   133,    67,   136,   164,  3656,    91,   291,   762,
    4342,  -498,   450,   195,   239,   363,   282,   183,   215,   170,
     199,    10,  -498,  -498,   147,  -498,   624,  3740,   285,    54,
    -498,  -498,  -498,  1554,  1640,  -498,  -498,  -498,  -498,   904,
     237,  3658,   262,  3723,  -498,  -498,  -498,  -498,   252,   296,
    -498,  4342,   162,   298,  2543,  3553,    82,  -498,    82,  -498,
    -498,   279,  2229,  1359,   312,  3127,  3913,    53,  -498,   200,
    -498,   279,  4375,  4375,   525,  -498,   305,  -498,  1898,  3146,
    3946,    23,  4375,    23,  -498,  -498,  3639,  -498,   707,  -498,
    -498,    63,  -498,  2229,  -498,  -498,   217,  -498,  -498,  1011,
     327,  2762,   680,   163,   254,  3816,  3742,  4408,  -498,   291,
     119,  2164,  2835,  -498,  -498,  -498,  2762,  -498,   323,  2164,
    4342,  4342,  4342,   326,   274,  2616,   346,  -498,  -498,  -498,
     171,  -498,   119,  4441,  3979,  4342,   340,   344,  -498,  -498,
    -498,  -498,  -498,  -498,  -498,  -498,  -498,  -498,  -498,  -498,
    -498,  4342,  -498,  4342,  4342,  4342,  4342,  4342,  4342,  4342,
    4342,  4342,  4342,  4342,  4342,  4342,  4342,  4342,  4342,  4342,
    4342,  4342,  4342,  4342,  4342,  4342,  4342,  -498,  4012,  2908,
     250,  -498,  -498,  1726,  1295,  -498,  -498,  1898,  1447,  1617,
     373,    82,  -498,  -498,  -498,   359,   449,  -498,   252,  -498,
    -498,  -498,  4375,  -498,  1898,  3639,  -498,   173,  -498,   226,
    1617,  3399,  -498,   226,  1359,  2324,  -498,   342,   393,   250,
     863,  -498,   125,   396,  -498,   400,   402,  -498,   399,   200,
    3219,  4045,  4078,  -498,  -498,   291,  -498,  1211,  1984,  -498,
     670,   262,   404,   407,  -498,   411,   707,  -498,   707,  -498,
    3146,  -498,  -498,  -498,   398,   406,   423,  -498,   414,   417,
    4111,   119,  4342,  4342,   429,  4342,  -498,    47,   421,   431,
    2164,  -498,   307,   335,   339,   458,  1898,  4144,  -498,  -498,
     250,   119,   119,  4474,  -498,  -498,   357,  -498,   248,  -498,
    -498,  -498,   183,  -498,  -498,  -498,   195,   195,   199,   305,
     305,   195,   195,   239,   239,   239,   239,   363,   363,   282,
     183,   215,   170,   138,   199,  -498,  -498,  -498,  -498,  -498,
     182,  4342,  -498,   252,   455,  -498,  -498,    32,   468,  4177,
    -498,   191,  -498,   464,  -498,   226,  -498,   849,  1898,   203,
    3467,  2397,  4507,    91,   416,    82,  1531,  3127,   109,  -498,
    -498,  -498,  2250,  -498,  -498,  -498,   471,  -498,   473,  -498,
     465,    82,  1116,  -498,  3238,  -498,  -498,  -498,   452,   466,
     467,   478,  4342,   426,   100,   250,  -498,  -498,   482,  -498,
    4342,  -498,  2164,  2164,  2070,  4342,  1812,  4342,  4210,   250,
     250,  2981,  -498,  4342,  -498,  -498,  4342,  -498,  -498,  -498,
    -498,  -498,  -498,   226,  -498,  4342,  -498,  -498,   761,  3816,
    3054,  -498,    48,   483,    82,  -498,  -498,  -498,  -498,  -498,
    4243,  1116,  -498,   493,  -498,   460,   472,  4342,  -498,  -498,
    -498,  -498,   433,  -498,  -498,  -498,   380,  2070,   390,  2070,
     397,    47,   503,  -498,  -498,  -498,  3880,   134,   504,  -498,
     505,  -498,  -498,  -498,  -498,  3311,   486,   487,   258,  2164,
     506,  -498,  -498,  2070,  -498,  -498,  2070,   514,  -498,  2397,
     517,  -498,  -498,  -498,  -498,  -498,  -498,  -498,  -498,  -498,
    -498,  -498,  -498,  3740,  3807,  -498
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
     276,     0,     0,     0,     0,   285,   189,   188,   171,   123,
     124,   125,   126,   127,   129,   130,   131,   132,   135,   136,
     133,   134,   165,   166,   128,   142,   143,     0,   284,   278,
       0,     0,   117,   105,   107,   137,     0,   213,   138,   115,
     119,   168,     0,   184,   108,   286,     0,   274,   277,   280,
       0,   289,   290,   291,   292,   293,   294,   295,   296,   297,
     298,   299,   300,   301,   302,   303,   304,   305,   306,   307,
     308,   309,   310,   311,   312,   313,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   332,   333,   334,   335,   336,   337,
     338,   339,   340,   341,   342,   343,   344,   345,   346,   347,
     348,   349,   350,   351,   352,   353,   354,   355,   356,   357,
     358,   359,   360,   361,   362,   363,   364,   365,   366,   367,
     368,   369,   370,   371,   287,   279,     0,     4,     0,     0,
     241,     0,   253,    42,    41,    37,    39,    40,    38,     0,
       2,     3,     0,     6,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    10,    29,    43,
       0,    52,    53,    60,    63,    68,    71,    73,    75,    77,
      79,    81,    83,    96,     0,   245,     0,   119,   168,     0,
     248,   232,   233,     0,     0,   234,   235,   236,   237,     0,
       0,   107,     0,   108,   193,   190,   191,   192,     0,   160,
      99,     0,     0,     0,   119,   168,     0,   102,     0,   106,
     109,   149,   111,     0,   141,     0,     0,   215,   214,   216,
     116,   151,     0,     0,     2,    43,   122,   375,     0,     0,
       0,     0,     0,     0,   172,   173,     0,   169,   167,   194,
     186,   185,   110,   112,     1,   275,     0,   288,   249,    16,
       0,     0,     2,     0,     0,   119,   108,     0,     2,    30,
       0,     0,     0,    34,    31,    32,     0,    98,     0,     0,
       0,     0,     0,     2,     0,     0,     0,   270,   271,   272,
       0,     7,     0,     0,     0,     0,     0,     0,    21,    22,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,     0,    33,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   254,   119,     0,
      11,   243,   246,     0,     0,   242,   251,   252,   150,   152,
       0,     0,   177,   176,   178,   163,     0,   161,     0,   156,
     100,   103,     0,   373,     0,     0,   118,     0,   113,     0,
     150,     0,   144,     0,     0,     0,   223,     2,     0,   208,
     200,   201,   215,     0,   211,   196,     0,   219,     0,   217,
       0,     0,     0,   227,   121,    29,   120,   233,   247,   183,
     171,   201,     0,     0,   180,     0,   174,   170,   175,   380,
       0,   195,   187,   114,     0,     0,     0,    16,     0,     0,
       0,     5,     0,   178,     2,     0,   238,     2,     0,     0,
       0,   240,     0,     0,     0,     0,     0,     0,   269,   273,
       9,    42,    40,     0,    26,    17,     0,    27,     0,    19,
      20,    84,    54,    50,    51,    49,    56,    57,    55,    58,
      59,    61,    62,    64,    65,    66,    67,    69,    70,    72,
      74,    76,    78,     0,    80,    97,   244,   250,   149,   151,
       0,     0,   158,     0,     0,    83,   157,   233,   378,   119,
     104,     0,   153,   155,   140,   171,   145,   213,   146,     0,
       0,     0,     0,    10,   215,   202,     0,     0,   171,   198,
     199,   224,     0,   218,   220,   225,     0,   221,     0,   230,
       0,     0,     0,   376,     0,   181,   182,   179,     0,     0,
       0,     0,     0,    53,     0,     8,    45,    44,     0,    35,
       0,   239,     0,     0,     0,     0,     0,   234,     0,    13,
      12,     0,    23,     0,    18,    14,     0,   101,   164,   162,
     159,   377,   379,     0,   148,     0,   147,   139,     2,   119,
       0,   203,     0,     0,     0,   197,   212,   226,   222,   228,
       0,     0,   209,   210,   281,     0,     0,     0,    46,    47,
      48,    36,   255,   257,   264,   258,     0,     0,     0,     0,
       0,     2,     0,    28,    82,   154,   215,     2,     0,   207,
       0,   205,   204,   229,   231,     0,     0,     0,     0,     0,
       0,   268,   263,     0,   265,   260,     0,     0,    24,     0,
       0,    35,   206,   283,   282,    15,   256,   259,   267,   262,
     266,   261,    25,   119,   108,    36
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -498,   500,  -132,  -498,   507,  -498,    -6,   -39,  -312,   -97,
     106,   189,  -235,   201,   198,  -281,  -498,   -94,  -213,  -498,
     585,   -98,    31,    49,   -21,   320,  -498,   410,  -498,  -498,
     165,  -364,   -12,  -357,   -28,  -498,   179,    55,    73,   245,
     481,     0,  -498,  -498,  -227,  -497,    24,    29,    81,     2,
    -214,  -219,  -498,   508,  -498,    21,    69,     5,  -267,  -498,
    -498,  -498,  -498,   499,  -112,  -498,   152
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   167,   168,   446,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   311,
     184,   486,   185,   186,    31,    32,    33,    34,    35,    36,
     371,   372,    37,   491,   492,    38,   356,   357,    39,   187,
     188,   270,    43,   251,   383,   384,   403,   385,    44,   386,
     229,   394,   520,   190,   191,   192,   347,   398,   195,   196,
     197,   198,    46,    47,   135,   136,    48
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      42,   236,   213,   189,    42,   456,   457,   496,   194,   212,
     461,   462,   402,   389,   396,   576,   499,   269,   437,   393,
     393,    45,   221,   407,   257,    49,   258,   231,   334,   393,
      42,    29,  -372,   199,   222,   208,  -372,   227,   458,   228,
     189,    42,   204,   250,   253,  -189,    42,  -189,   223,    30,
     205,   204,    50,   200,   474,     8,   335,   137,   278,   609,
     209,   237,   277,   225,   339,   279,   226,    45,     6,     6,
     206,   207,   193,   224,   256,     7,     7,    29,   452,   419,
     218,   447,   219,   220,     6,   203,   234,   151,   230,   153,
     246,     7,   199,   252,   291,    30,   470,   292,   451,   286,
    -188,   395,  -188,     6,  -189,  -189,   205,   280,   534,   238,
       7,   590,     6,   359,     8,   281,   249,   277,   576,     7,
     264,  -372,   137,   475,   320,   321,   206,   207,   388,   425,
       6,   282,   277,    22,    23,   507,   496,     7,   226,   189,
     499,   189,   405,   285,   194,   609,   277,   336,   236,   393,
     287,   268,   151,   556,   153,     6,   336,     8,   213,  -188,
    -188,   337,     7,   516,   312,   212,   419,   293,   389,   547,
     548,   216,   336,   519,   421,   236,   360,   137,   288,   393,
     336,   260,   216,   402,   267,   439,    42,   490,    42,   221,
     200,   216,   332,   189,   189,     6,   557,   367,   343,    42,
     563,   222,     7,   253,   330,   564,   268,   151,   193,   153,
     390,   373,   563,   391,   189,    42,    42,   566,    42,   320,
     321,   227,   266,   228,   342,   382,   236,   463,   464,   465,
     466,   227,   477,   228,   331,   363,   199,   414,   189,    42,
     264,   211,   415,   416,   333,    40,    42,     6,   351,   202,
     220,   412,   252,   291,     7,   264,   292,   336,     8,   397,
     555,   189,   420,   216,   365,   422,   253,   336,   485,   342,
     635,   368,   349,   353,   380,   214,   189,   409,   322,   323,
     350,   459,   460,   364,   355,   189,   247,   444,   380,   225,
     389,    40,   226,   518,   534,   239,   349,   277,   240,   236,
       6,   294,   413,   358,   295,   241,     6,     7,   453,   454,
     455,   296,   361,     7,   242,   252,   336,     8,   542,   374,
     203,   243,   244,   245,   411,   328,   329,   297,   298,   299,
     480,   314,   315,   316,   349,   417,   478,   479,   430,   189,
     603,   271,   418,   189,   336,   349,   543,   189,   336,   349,
     544,    42,   225,   428,   436,   226,   435,   429,   478,   497,
     438,   614,   373,     6,   189,    42,   553,   393,   554,    42,
       7,    42,   449,    42,  -171,   504,   450,   227,   342,   505,
     382,   533,   510,   558,   354,   487,   265,   277,   481,   336,
      42,   620,   389,   324,   325,   342,   488,    42,   189,   336,
     227,   623,   505,   506,   326,   327,   336,   511,   626,   512,
      42,   514,   349,   513,   201,   525,   536,   537,   526,   137,
     350,   349,   349,   527,   380,   423,   375,   538,   531,   226,
     528,   338,   539,   247,   467,   468,   189,   589,   529,   380,
     498,   546,   540,   349,   202,   313,   521,   349,   234,   151,
     236,   153,   314,   315,   316,   530,   203,   482,   483,   380,
     247,   419,   604,   560,   483,   317,   318,   342,   545,   313,
     381,   277,   319,   579,   580,     3,   314,   315,   316,   565,
     264,    41,   577,   584,   401,   578,   585,   586,   497,   317,
     318,   587,   616,   591,   611,    42,   319,   382,   189,   228,
      42,   504,   615,   293,   617,    42,   265,   382,   574,   561,
     562,   215,    42,   619,   628,   631,   632,   633,   634,   469,
     637,    42,    42,   248,    42,   642,   588,    41,   645,   342,
     236,   472,  -171,   471,   537,   605,   366,   484,   559,   500,
    -171,  -171,  -171,   237,   189,   255,   189,   235,   582,   523,
     380,   201,     0,   583,     0,     0,   380,  -171,  -171,  -171,
    -171,   380,     0,    42,     0,     0,     0,   533,   606,   498,
     505,     0,   610,   380,    42,   594,     0,     0,     0,   349,
       0,    42,   266,     0,   202,     0,     0,   573,   203,     0,
       0,   238,     0,     0,     0,     0,     0,   189,     0,   189,
       0,   627,   363,     0,   236,     0,     0,   630,   264,   348,
     489,     0,     0,     0,   493,    42,     0,     0,   493,     0,
     401,     0,     0,   189,   349,   509,   189,     0,   621,   504,
     624,     0,   602,   370,   199,   381,     0,     0,   210,   211,
       0,     0,   522,   349,   253,     6,     0,     0,     0,   201,
     364,   608,     7,     0,   638,   381,     8,   640,     0,   273,
       0,   274,   275,   235,   380,     0,     0,     0,     0,   284,
     248,   348,     0,    -2,     0,     0,    -2,   235,   380,   524,
     225,    -2,   370,   226,     0,     0,   370,  -171,     0,   340,
       0,     6,     0,   252,   235,  -171,  -171,  -171,     7,     0,
       0,     6,   346,     0,     0,     0,     0,     0,     7,     0,
     644,     0,   419,  -171,  -171,  -171,     0,   410,   235,     0,
     240,   235,   406,     0,   408,   379,   263,   241,     0,     0,
       0,     0,     0,   235,     0,     0,     0,     0,     0,   379,
     493,     0,   493,   243,   244,   245,   569,   235,     0,   348,
     571,   290,   401,     0,     0,     0,     0,   381,   370,   370,
       0,     0,     0,     0,     0,     0,   581,     0,  -171,   381,
     340,   225,   235,     0,   226,     0,  -171,  -171,  -171,   426,
     370,     0,     6,     0,   370,   201,     0,   431,     0,     7,
       0,   300,   440,   419,  -171,  -171,  -171,     0,     0,     0,
     235,     0,     0,     0,     0,     0,     0,     0,   493,   301,
     302,   303,   304,   305,   306,   307,   308,   309,   310,   612,
     235,   235,   235,   235,   235,   235,   235,   235,   235,   235,
     235,   235,   235,   235,   235,   235,   235,   235,   235,   235,
     235,     0,   235,     0,     0,   235,   263,     0,     0,     0,
       0,   346,   263,     0,     0,     0,     0,   263,     0,   507,
     381,   263,   226,   248,   211,   432,   433,   434,     0,     0,
       6,     0,     0,   507,   643,   503,   226,     7,    41,     0,
     448,     8,     0,     0,     6,     0,     0,     0,     0,     0,
     379,     7,     0,     0,     0,   508,     0,     0,   235,     0,
       0,     0,     0,     0,     0,     0,   346,     0,     0,     0,
     379,   201,     0,     0,   199,     0,   370,   201,     0,   473,
       0,   535,     0,     0,   263,     6,     0,   235,     0,   235,
     235,     0,     7,     0,     0,     0,     8,     0,   541,     0,
       0,   549,   550,     0,     0,     0,     0,     0,     0,     0,
     552,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     263,   370,     0,     0,     0,     0,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
     370,     0,     0,     0,     0,   248,     0,     0,   235,     0,
       0,     0,     0,     0,     0,     0,   235,     0,     0,     0,
       0,   503,   215,     0,   340,     0,     0,   379,     0,   273,
     263,  -241,   379,     0,  -241,  -241,  -241,     0,  -241,  -241,
       0,     0,  -241,     0,   379,     0,     0,  -241,  -241,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   235,
       0,     0,     0,  -241,  -241,  -241,  -241,   235,     0,     0,
     592,   593,   595,     0,   346,     0,     0,     0,     0,     0,
       0,     0,     0,   235,     0,     0,     0,     0,     0,     0,
       0,     0,   235,     0,     0,     0,   235,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   263,     0,  -241,  -241,
    -241,  -241,  -241,  -241,  -241,  -241,  -241,  -241,  -241,  -241,
    -241,     0,     0,     0,     0,   622,     0,   625,     0,     0,
       0,     0,     0,   235,     0,   379,     0,     0,     0,     0,
       0,     0,     0,     3,     0,     0,     4,   636,     0,   503,
     596,   639,   598,   600,   641,   254,   263,     6,     0,     1,
       2,     0,     3,     0,     7,     4,     0,     0,     8,     5,
     235,     0,     0,     0,     0,   263,     6,     0,     0,     0,
       0,     0,     0,     7,     0,     0,     0,     8,     0,     0,
       0,     0,   618,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,  -374,     6,     0,   263,  -374,     0,     0,     0,     7,
       0,   199,     0,     0,    28,     0,     0,     0,     0,     0,
       0,     0,     6,     0,     0,     0,     0,     0,     0,     7,
       0,     0,     0,     8,     0,     0,     0,     0,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,     0,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    51,     0,
    -374,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,     0,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   137,     0,   138,     0,   139,
     140,   369,   141,     0,     0,     0,   142,     0,   143,   144,
       0,     0,     0,   145,     0,     0,   146,   147,     0,     0,
     148,   149,     0,     0,   150,   151,   152,   153,     0,   154,
     155,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,     0,     0,     0,     0,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,   352,   156,
     157,   158,     0,   159,   160,   161,   162,   163,   164,   165,
     166,   137,     0,   138,     0,   139,   259,     0,   141,     0,
       0,     0,   142,     0,   143,   144,     0,     0,     0,   145,
       0,     0,   146,   147,     0,     0,   148,   149,     0,     0,
     150,   151,   152,   153,     0,   154,   155,     0,     0,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,     0,     0,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,     0,   156,   157,   158,     0,   159,
     160,   161,   162,   163,   164,   165,   166,   137,     0,   138,
       0,   139,   341,   572,   141,     0,     0,     0,   142,     0,
     143,   144,     0,     0,     0,   145,     0,     0,   146,   147,
       0,     0,   148,   149,     0,     0,   150,   151,   152,   153,
       0,   154,   155,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,     0,     0,     0,
       0,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
       0,   156,   157,   158,     0,   159,   160,   161,   162,   163,
     164,   165,   166,   137,     0,   344,     0,   139,   345,     0,
     141,     0,     0,     0,   142,     0,   143,   144,     0,     0,
       0,   145,     0,     0,   146,   147,     0,     0,   148,   149,
       0,     0,   150,   151,   152,   153,     0,   154,   155,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,     0,     0,     0,     0,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,     0,   156,   157,   158,
       0,   159,   160,   161,   162,   163,   164,   165,   166,   137,
       0,   344,     0,   139,   476,     0,   141,     0,     0,     0,
     142,     0,   143,   144,     0,     0,     0,   145,     0,     0,
     146,   147,     0,     0,   148,   149,     0,     0,   150,   151,
     152,   153,     0,   154,   155,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,     0,   156,   157,   158,     0,   159,   160,   161,
     162,   163,   164,   165,   166,   137,     0,   344,     0,   139,
       0,     0,   141,   597,     0,     0,   142,     0,   143,   144,
       0,     0,     0,   145,     0,     0,   146,   147,     0,     0,
     148,   149,     0,     0,   150,   151,   152,   153,     0,   154,
     155,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,     0,   156,
     157,   158,     0,   159,   160,   161,   162,   163,   164,   165,
     166,   137,     0,   138,     0,   139,     0,     0,   141,     0,
       0,     0,   142,     0,   143,   144,     0,     0,     0,   145,
       0,     0,   146,   147,     0,     0,   148,   149,     0,     0,
     150,   151,   152,   153,     0,   154,   155,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,     0,   156,   157,   158,     0,   159,
     160,   161,   162,   163,   164,   165,   166,   137,     0,   344,
       0,   139,     0,     0,   141,     0,     0,     0,   142,     0,
     143,   144,     0,     0,     0,   145,     0,     0,   146,   147,
       0,     0,   148,   149,     0,     0,   150,   151,   152,   153,
       0,   154,   155,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
       0,   156,   157,   158,     0,   159,   160,   161,   162,   163,
     164,   165,   166,   137,     0,     0,     0,   139,     0,     0,
     141,     0,     0,     0,   142,     0,   143,   144,     0,     0,
       0,   145,     0,     0,   146,   147,     0,     0,   148,   149,
       0,     0,   150,   151,   152,   153,     0,   154,   155,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,     0,   156,   157,   158,
       0,   159,   160,   161,   162,   163,   164,   165,   166,     1,
       2,     0,     3,     0,     0,     4,     0,   137,     0,     5,
       0,   139,     0,     0,   276,     0,     6,     0,   142,     0,
     143,   144,     0,     7,     0,   145,     0,     8,   146,   147,
       0,     0,   148,   149,     0,     0,   283,   151,   152,   153,
       0,   154,   155,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   156,   157,   158,    28,   159,   160,   161,   162,   163,
     164,   165,   166,   137,     0,     0,     0,     0,     0,     0,
     339,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     6,     0,     0,     0,     0,     0,     0,     7,     0,
       0,     0,   377,   151,   378,   153,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,     0,     0,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,   575,   137,     0,     0,
       0,   260,     0,     0,   501,   376,     0,   226,     0,     0,
     143,   144,     0,     0,     0,   145,     0,     0,   146,   147,
       0,     0,   148,   149,     0,     0,   377,   151,   502,   153,
       0,   154,   155,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
     137,     0,     0,     0,   260,     0,     0,   501,   376,     0,
     226,     0,     0,   143,   144,     0,     0,     0,   145,     0,
       0,   146,   147,     0,     0,   148,   149,     0,     0,   568,
     151,   502,   153,     0,   154,   155,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,   137,     0,     0,     0,   139,     0,     0,
     141,     0,     0,     0,     0,   232,   143,   144,     0,     0,
       0,   145,     0,     0,   146,   147,     0,     0,   148,   233,
       0,     0,   234,   151,   152,   153,     0,   154,   155,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,   137,     0,     0,     0,
     139,     0,     0,   141,     0,     0,     0,     0,   362,   143,
     144,     0,     0,     0,   145,     0,     0,   146,   147,     0,
       0,   148,   233,     0,     0,   234,   151,   152,   153,     0,
     154,   155,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,   137,
       0,     0,     0,   260,     0,     0,   141,     0,     0,     0,
     142,     0,   143,   144,     0,     0,     0,   145,     0,     0,
     146,   147,     0,     0,   148,   149,     0,     0,   234,   151,
     152,   153,     0,   154,   155,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,   137,     0,     0,     0,   260,     0,     0,   261,
       0,     0,     0,     0,     0,   143,   144,     0,     0,     0,
     145,     0,     0,   146,   147,     0,     0,   148,   149,     0,
       0,   262,   151,   152,   153,     0,   154,   155,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,   137,     0,     0,     0,   260,
       0,     0,   261,     0,     0,     0,     0,     0,   143,   144,
       0,     0,     0,   145,     0,     0,   146,   147,     0,     0,
     148,   149,     0,     0,   262,   151,   152,   153,     0,   154,
     155,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,   137,     0,
       0,     0,   260,     0,     0,   276,     0,     0,     0,     0,
       0,   143,   144,     0,     0,     0,   145,     0,     0,   146,
     147,     0,     0,   148,   149,     0,     0,   427,   151,   152,
     153,     0,   154,   155,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,   137,     0,     0,     0,   260,     0,     0,   261,     0,
       0,     0,     0,     0,   143,   144,     0,     0,     0,   145,
       0,     0,   146,   147,     0,     0,   148,   149,     0,     0,
     234,   151,   152,   153,     0,   154,   155,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,   137,     0,     0,     0,   260,     0,
       0,   276,     0,     0,     0,     0,     0,   143,   144,     0,
       0,     0,   145,     0,     0,   146,   147,     0,     0,   148,
     149,     0,     0,   601,   151,   152,   153,     0,   154,   155,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,   137,     0,     0,
       0,   260,     0,     0,   276,     0,     0,     0,     0,     0,
     143,   144,     0,     0,     0,   145,     0,     0,   146,   147,
       0,     0,   148,   149,     0,     0,   607,   151,   152,   153,
       0,   154,   155,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
     137,     0,     0,     0,     0,     0,     0,   375,   376,     0,
     226,     0,     0,     0,     0,     0,     0,     0,     6,   137,
       0,     0,     0,     0,     0,     7,   339,   399,     0,   377,
     151,   378,   153,     0,     0,     0,     0,     6,     0,     0,
       0,     0,     0,     0,     7,     0,     0,     0,   400,   151,
     378,   153,     0,     0,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,   137,     0,     0,     0,     0,     0,     0,   339,
     515,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       6,   137,     0,     0,     0,     0,     0,     7,   339,     0,
       0,   377,   151,   378,   153,     0,     0,     0,     0,     6,
       0,     0,     0,     0,     0,     0,     7,     0,     0,     0,
     400,   151,   378,   153,     0,     0,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,   137,     0,     0,     0,     0,     0,
       0,   339,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     6,     0,     0,     0,     0,     0,     0,     7,
       0,     0,     0,   377,   151,   378,   153,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,  -171,     0,     0,
       0,     0,     0,     0,     0,   271,  -171,  -171,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   494,     0,     4,
       0,     0,  -171,  -171,  -171,  -171,     0,     0,     0,     0,
       6,     0,     0,     0,     0,     0,     0,     7,     0,     0,
       0,   495,     0,     0,     0,     0,     0,  -171,  -171,  -171,
    -171,  -171,  -171,  -171,  -171,  -171,  -171,  -171,  -171,  -171,
    -171,  -171,  -171,  -171,  -171,  -171,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,   567,     0,     4,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     6,     0,
       0,     0,     0,     0,     0,     7,   216,     0,     0,   495,
       0,   217,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,     0,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,   239,     0,     0,   240,     0,     0,     0,
       0,     0,     0,   241,     6,     0,     0,     0,     0,     0,
       0,     7,   242,   199,     0,     8,     0,     0,     0,   243,
     244,   245,     0,     0,     6,     0,     0,     0,     0,     0,
       0,     7,     0,     0,     0,     8,     0,     0,     0,     0,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,     0,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,     4,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   137,
       6,     0,     0,   260,     0,     0,   276,     7,     0,   352,
     289,     8,   143,   144,     0,     0,     0,   145,     0,     6,
     146,   147,     0,     0,   148,   149,     7,     0,   268,   151,
     152,   153,     0,   154,   155,     0,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,   354,     0,     0,     0,     0,     0,
       0,     0,     0,   137,     6,     0,     0,   260,     0,     0,
     276,     7,     0,   423,     0,   232,   143,   144,     0,     0,
       0,   145,     0,     6,   146,   147,     0,     0,   148,   233,
       7,     0,   268,   151,   152,   153,     0,   154,   155,     0,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,   540,   137,
       0,     0,     0,   260,     0,     0,   276,   353,     6,     0,
       0,   232,   143,   144,     0,     7,     0,   145,     0,     0,
     146,   147,     0,     0,   148,   233,     0,     0,   268,   151,
     152,   153,     0,   154,   155,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,   137,     0,     0,     0,   260,     0,     0,
     629,   532,     0,   226,     0,     0,   143,   144,     0,     0,
       0,   145,     0,     0,   146,   147,     0,     0,   148,   149,
       0,     0,   268,   151,   152,   153,   137,   154,   155,     0,
     260,     0,     0,   276,     0,   387,     0,     0,     0,   143,
     144,     0,     0,     0,   145,     0,     0,   146,   147,     0,
       0,   148,   149,     0,     0,   268,   151,   152,   153,   137,
     154,   155,     0,   260,     0,     0,   276,     0,   404,     0,
       0,     0,   143,   144,     0,     0,     0,   145,     0,     0,
     146,   147,     0,     0,   148,   149,     0,     0,   268,   151,
     152,   153,   137,   154,   155,     0,   260,     0,     0,   276,
     445,     0,     0,     0,     0,   143,   144,     0,     0,     0,
     145,     0,     0,   146,   147,     0,     0,   148,   149,     0,
       0,   268,   151,   152,   153,   137,   154,   155,     0,   260,
       0,     0,   276,     0,     0,     0,     0,   362,   143,   144,
       0,     0,     0,   145,     0,     0,   146,   147,     0,     0,
     148,   233,     0,     0,   268,   151,   152,   153,   137,   154,
     155,     0,   260,     0,     0,   276,     0,   517,     0,     0,
       0,   143,   144,     0,     0,     0,   145,     0,     0,   146,
     147,     0,     0,   148,   149,     0,     0,   268,   151,   152,
     153,   137,   154,   155,     0,   392,   417,     0,   276,     0,
       0,     0,     0,     0,   143,   144,     0,     0,     0,   145,
       0,     0,   146,   147,     0,     0,   148,   149,     0,     0,
     268,   151,   152,   153,   137,   154,   155,     0,   260,     0,
       0,   276,   532,     0,     0,     0,     0,   143,   144,     0,
       0,     0,   145,     0,     0,   146,   147,     0,     0,   148,
     149,     0,     0,   268,   151,   152,   153,   137,   154,   155,
       0,   260,     0,     0,   276,     0,     0,     0,   142,     0,
     143,   144,     0,     0,     0,   145,     0,     0,   146,   147,
       0,     0,   148,   149,     0,     0,   268,   151,   152,   153,
     137,   154,   155,     0,   139,     0,     0,   276,     0,     0,
       0,     0,   232,   143,   144,     0,     0,     0,   145,     0,
       0,   146,   147,     0,     0,   148,   233,     0,     0,   268,
     151,   152,   153,   137,   154,   155,     0,   260,     0,     0,
     276,   599,     0,     0,     0,     0,   143,   144,     0,     0,
       0,   145,     0,     0,   146,   147,     0,     0,   148,   149,
       0,     0,   268,   151,   152,   153,   137,   154,   155,     0,
     392,   613,     0,   276,     0,     0,     0,     0,     0,   143,
     144,     0,     0,     0,   145,     0,     0,   146,   147,     0,
       0,   148,   149,     0,     0,   268,   151,   152,   153,   137,
     154,   155,     0,   260,     0,     0,   272,     0,     0,     0,
       0,     0,   143,   144,     0,     0,     0,   145,     0,     0,
     146,   147,     0,     0,   148,   149,     0,     0,   268,   151,
     152,   153,   137,   154,   155,     0,   260,     0,     0,   267,
       0,     0,     0,     0,     0,   143,   144,     0,     0,     0,
     145,     0,     0,   146,   147,     0,     0,   148,   149,     0,
       0,   268,   151,   152,   153,   137,   154,   155,     0,   260,
       0,     0,   276,     0,     0,     0,     0,     0,   143,   144,
       0,     0,     0,   145,     0,     0,   146,   147,     0,     0,
     148,   149,     0,     0,   268,   151,   152,   153,   137,   154,
     155,     0,   392,     0,     0,   276,     0,     0,     0,     0,
       0,   143,   144,     0,     0,     0,   145,     0,     0,   146,
     147,     0,     0,   148,   149,     0,     0,   268,   151,   152,
     153,   137,   154,   155,     0,   260,     0,     0,   276,     0,
       0,     0,     0,     0,   143,   144,     0,     0,     0,   145,
       0,     0,   146,   147,     0,     0,   148,   149,     0,     0,
     424,   151,   152,   153,   137,   154,   155,     0,   260,     0,
       0,   276,     0,     0,     0,     0,     0,   441,   144,     0,
       0,     0,   145,     0,     0,   146,   442,     0,     0,   148,
     149,     0,     0,   268,   151,   443,   153,   137,   154,   155,
       0,   260,     0,     0,   551,     0,     0,     0,     0,     0,
     143,   144,     0,     0,     0,   145,     0,     0,   146,   147,
       0,     0,   148,   149,     0,     0,   268,   151,   152,   153,
     137,   154,   155,     0,   260,     0,     0,   570,     0,     0,
       0,     0,     0,   143,   144,     0,     0,     0,   145,     0,
       0,   146,   147,     0,     0,   148,   149,     0,     0,   268,
     151,   152,   153,     0,   154,   155
};

static const yytype_int16 yycheck[] =
{
       0,    40,    30,     3,     4,   317,   318,   371,     3,    30,
     322,   323,   239,   227,   233,   512,   373,   149,   285,   232,
     233,     0,    34,   242,   136,     3,   138,    39,    18,   242,
      30,     0,     0,    10,    34,     7,     4,    37,   319,    37,
      40,    41,    17,    43,    44,    11,    46,    13,     7,     0,
      17,    17,    30,     4,   335,    32,    46,     3,   156,    11,
      32,    40,   156,    10,    10,    15,    13,    46,    21,    21,
      37,    38,     3,    32,    32,    28,    28,    46,   313,    32,
      31,   294,    33,    34,    21,     4,    32,    33,    39,    35,
      41,    28,    10,    44,     3,    46,   331,     6,   311,    32,
      11,   233,    13,    21,    70,    71,    17,    10,   420,    40,
      28,    11,    21,   211,    32,    10,    43,   211,   615,    28,
     141,    89,     3,   336,    24,    25,    37,    38,   226,    10,
      21,    10,   226,    70,    71,    10,   500,    28,    13,   139,
     497,   141,   240,    10,   139,    11,   240,     9,   187,   362,
      14,    32,    33,    15,    35,    21,     9,    32,   186,    70,
      71,    14,    28,   390,   170,   186,    32,   167,   382,   436,
     437,     9,     9,   392,    11,   214,    14,     3,    14,   392,
       9,     7,     9,   410,    10,    14,   186,    14,   188,   201,
     141,     9,    22,   193,   194,    21,    14,   218,   193,   199,
       9,   201,    28,   203,    21,    14,    32,    33,   139,    35,
      10,   223,     9,    13,   214,   215,   216,    14,   218,    24,
      25,   221,   141,   221,   193,   225,   265,   324,   325,   326,
     327,   231,   344,   231,    19,   214,    10,    20,   238,   239,
     261,    15,    25,    26,    45,     0,   246,    21,    11,     4,
     201,   251,   203,     3,    28,   276,     6,     9,    32,   238,
      12,   261,   262,     9,   215,    11,   266,     9,   362,   238,
      12,   222,   199,    11,   225,    30,   276,   246,    39,    40,
     199,   320,   321,   214,    32,   285,    41,   293,   239,    10,
     504,    46,    13,   391,   606,    10,   223,   391,    13,   338,
      21,    10,   253,     7,    13,    20,    21,    28,   314,   315,
     316,    20,    14,    28,    29,   266,     9,    32,    11,     7,
     239,    36,    37,    38,   251,    43,    44,    36,    37,    38,
     351,    26,    27,    28,   261,     8,   348,   349,    15,   339,
     553,    15,   261,   343,     9,   272,    11,   347,     9,   276,
      11,   351,    10,   272,   285,    13,    82,   276,   370,   371,
      14,   580,   374,    21,   364,   365,     9,   580,    11,   369,
      28,   371,    32,   373,    32,   375,    32,   377,   347,   377,
     380,   420,   380,   481,    11,   364,   141,   481,    29,     9,
     390,    11,   606,    30,    31,   364,   365,   397,   398,     9,
     400,    11,   400,    10,    41,    42,     9,    11,    11,     9,
     410,    12,   339,    11,     4,    11,   422,   423,    11,     3,
     339,   348,   349,    12,   375,    11,    10,   427,    11,    13,
      32,   186,    11,   188,   328,   329,   436,    11,    32,   390,
     371,   436,    11,   370,   199,    19,   397,   374,    32,    33,
     489,    35,    26,    27,    28,    32,   375,     8,     9,   410,
     215,    32,   556,     8,     9,    39,    40,   436,    10,    19,
     225,   565,    46,     8,     9,     7,    26,    27,    28,    15,
     501,     0,    11,    31,   239,    12,    20,    20,   500,    39,
      40,    13,    32,    11,    11,   495,    46,   497,   498,   497,
     500,   501,     9,   503,    32,   505,   261,   507,   508,   488,
     489,    30,   512,    80,    11,    11,    11,    31,    31,   330,
      14,   521,   522,    42,   524,    11,   532,    46,    11,   498,
     569,   333,     7,   332,   540,   563,   216,   358,   483,   374,
      15,    16,    17,   522,   544,    46,   546,    40,   524,   397,
     501,   141,    -1,   524,    -1,    -1,   507,    32,    33,    34,
      35,   512,    -1,   563,    -1,    -1,    -1,   606,   568,   500,
     568,    -1,   572,   524,   574,   544,    -1,    -1,    -1,   506,
      -1,   581,   501,    -1,   339,    -1,    -1,   506,   507,    -1,
      -1,   522,    -1,    -1,    -1,    -1,    -1,   597,    -1,   599,
      -1,   601,   581,    -1,   643,    -1,    -1,   607,   629,   199,
     365,    -1,    -1,    -1,   369,   615,    -1,    -1,   373,    -1,
     375,    -1,    -1,   623,   551,   380,   626,    -1,   597,   629,
     599,    -1,   551,   223,    10,   390,    -1,    -1,    14,    15,
      -1,    -1,   397,   570,   644,    21,    -1,    -1,    -1,   239,
     581,   570,    28,    -1,   623,   410,    32,   626,    -1,   152,
      -1,   154,   155,   156,   615,    -1,    -1,    -1,    -1,   161,
     189,   261,    -1,     3,    -1,    -1,     6,   170,   629,     9,
      10,    11,   272,    13,    -1,    -1,   276,     7,    -1,   189,
      -1,    21,    -1,   644,   187,    15,    16,    17,    28,    -1,
      -1,    21,   194,    -1,    -1,    -1,    -1,    -1,    28,    -1,
     629,    -1,    32,    33,    34,    35,    -1,    10,   211,    -1,
      13,   214,   241,    -1,   243,   225,   141,    20,    -1,    -1,
      -1,    -1,    -1,   226,    -1,    -1,    -1,    -1,    -1,   239,
     495,    -1,   497,    36,    37,    38,   501,   240,    -1,   339,
     505,   166,   507,    -1,    -1,    -1,    -1,   512,   348,   349,
      -1,    -1,    -1,    -1,    -1,    -1,   521,    -1,     7,   524,
     270,    10,   265,    -1,    13,    -1,    15,    16,    17,   271,
     370,    -1,    21,    -1,   374,   375,    -1,   279,    -1,    28,
      -1,    29,   292,    32,    33,    34,    35,    -1,    -1,    -1,
     293,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   563,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,   574,
     313,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   332,
     333,    -1,   335,    -1,    -1,   338,   261,    -1,    -1,    -1,
      -1,   343,   267,    -1,    -1,    -1,    -1,   272,    -1,    10,
     615,   276,    13,   382,    15,   280,   281,   282,    -1,    -1,
      21,    -1,    -1,    10,   629,   375,    13,    28,   397,    -1,
     295,    32,    -1,    -1,    21,    -1,    -1,    -1,    -1,    -1,
     390,    28,    -1,    -1,    -1,    32,    -1,    -1,   391,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   398,    -1,    -1,    -1,
     410,   501,    -1,    -1,    10,    -1,   506,   507,    -1,   334,
      -1,   421,    -1,    -1,   339,    21,    -1,   420,    -1,   422,
     423,    -1,    28,    -1,    -1,    -1,    32,    -1,   430,    -1,
      -1,   441,   442,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     443,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     375,   551,    -1,    -1,    -1,    -1,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
     570,    -1,    -1,    -1,    -1,   504,    -1,    -1,   481,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   489,    -1,    -1,    -1,
      -1,   501,   521,    -1,   504,    -1,    -1,   507,    -1,   502,
     425,     0,   512,    -1,     3,     4,     5,    -1,     7,     8,
      -1,    -1,    11,    -1,   524,    -1,    -1,    16,    17,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   532,
      -1,    -1,    -1,    32,    33,    34,    35,   540,    -1,    -1,
     542,   543,   544,    -1,   546,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   556,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   565,    -1,    -1,    -1,   569,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   501,    -1,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    -1,    -1,    -1,    -1,   597,    -1,   599,    -1,    -1,
      -1,    -1,    -1,   606,    -1,   615,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     7,    -1,    -1,    10,   619,    -1,   629,
     545,   623,   547,   548,   626,     0,   551,    21,    -1,     4,
       5,    -1,     7,    -1,    28,    10,    -1,    -1,    32,    14,
     643,    -1,    -1,    -1,    -1,   570,    21,    -1,    -1,    -1,
      -1,    -1,    -1,    28,    -1,    -1,    -1,    32,    -1,    -1,
      -1,    -1,   587,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,     0,    21,    -1,   629,     4,    -1,    -1,    -1,    28,
      -1,    10,    -1,    -1,    89,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    21,    -1,    -1,    -1,    -1,    -1,    -1,    28,
      -1,    -1,    -1,    32,    -1,    -1,    -1,    -1,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    -1,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,    -1,
      89,     6,     7,     8,     9,    10,    11,    12,    13,    14,
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
      68,    69,    70,    71,    72,    73,    74,    75,    11,    77,
      78,    79,    -1,    81,    82,    83,    84,    85,    86,    87,
      88,     3,    -1,     5,    -1,     7,     8,    -1,    10,    -1,
      -1,    -1,    14,    -1,    16,    17,    -1,    -1,    -1,    21,
      -1,    -1,    24,    25,    -1,    -1,    28,    29,    -1,    -1,
      32,    33,    34,    35,    -1,    37,    38,    -1,    -1,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    -1,    -1,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    -1,    77,    78,    79,    -1,    81,
      82,    83,    84,    85,    86,    87,    88,     3,    -1,     5,
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
      -1,    21,    -1,    -1,    24,    25,    -1,    -1,    28,    29,
      -1,    -1,    32,    33,    34,    35,    -1,    37,    38,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    -1,    -1,    -1,    -1,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    -1,    77,    78,    79,
      -1,    81,    82,    83,    84,    85,    86,    87,    88,     3,
      -1,     5,    -1,     7,     8,    -1,    10,    -1,    -1,    -1,
      14,    -1,    16,    17,    -1,    -1,    -1,    21,    -1,    -1,
      24,    25,    -1,    -1,    28,    29,    -1,    -1,    32,    33,
      34,    35,    -1,    37,    38,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    -1,    77,    78,    79,    -1,    81,    82,    83,
      84,    85,    86,    87,    88,     3,    -1,     5,    -1,     7,
      -1,    -1,    10,    11,    -1,    -1,    14,    -1,    16,    17,
      -1,    -1,    -1,    21,    -1,    -1,    24,    25,    -1,    -1,
      28,    29,    -1,    -1,    32,    33,    34,    35,    -1,    37,
      38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    -1,    77,
      78,    79,    -1,    81,    82,    83,    84,    85,    86,    87,
      88,     3,    -1,     5,    -1,     7,    -1,    -1,    10,    -1,
      -1,    -1,    14,    -1,    16,    17,    -1,    -1,    -1,    21,
      -1,    -1,    24,    25,    -1,    -1,    28,    29,    -1,    -1,
      32,    33,    34,    35,    -1,    37,    38,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    -1,    77,    78,    79,    -1,    81,
      82,    83,    84,    85,    86,    87,    88,     3,    -1,     5,
      -1,     7,    -1,    -1,    10,    -1,    -1,    -1,    14,    -1,
      16,    17,    -1,    -1,    -1,    21,    -1,    -1,    24,    25,
      -1,    -1,    28,    29,    -1,    -1,    32,    33,    34,    35,
      -1,    37,    38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      -1,    77,    78,    79,    -1,    81,    82,    83,    84,    85,
      86,    87,    88,     3,    -1,    -1,    -1,     7,    -1,    -1,
      10,    -1,    -1,    -1,    14,    -1,    16,    17,    -1,    -1,
      -1,    21,    -1,    -1,    24,    25,    -1,    -1,    28,    29,
      -1,    -1,    32,    33,    34,    35,    -1,    37,    38,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    -1,    77,    78,    79,
      -1,    81,    82,    83,    84,    85,    86,    87,    88,     4,
       5,    -1,     7,    -1,    -1,    10,    -1,     3,    -1,    14,
      -1,     7,    -1,    -1,    10,    -1,    21,    -1,    14,    -1,
      16,    17,    -1,    28,    -1,    21,    -1,    32,    24,    25,
      -1,    -1,    28,    29,    -1,    -1,    32,    33,    34,    35,
      -1,    37,    38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    77,    78,    79,    89,    81,    82,    83,    84,    85,
      86,    87,    88,     3,    -1,    -1,    -1,    -1,    -1,    -1,
      10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    21,    -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,
      -1,    -1,    32,    33,    34,    35,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    -1,    -1,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,     3,    -1,    -1,
      -1,     7,    -1,    -1,    10,    11,    -1,    13,    -1,    -1,
      16,    17,    -1,    -1,    -1,    21,    -1,    -1,    24,    25,
      -1,    -1,    28,    29,    -1,    -1,    32,    33,    34,    35,
      -1,    37,    38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
       3,    -1,    -1,    -1,     7,    -1,    -1,    10,    11,    -1,
      13,    -1,    -1,    16,    17,    -1,    -1,    -1,    21,    -1,
      -1,    24,    25,    -1,    -1,    28,    29,    -1,    -1,    32,
      33,    34,    35,    -1,    37,    38,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,     3,    -1,    -1,    -1,     7,    -1,    -1,
      10,    -1,    -1,    -1,    -1,    15,    16,    17,    -1,    -1,
      -1,    21,    -1,    -1,    24,    25,    -1,    -1,    28,    29,
      -1,    -1,    32,    33,    34,    35,    -1,    37,    38,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,     3,    -1,    -1,    -1,
       7,    -1,    -1,    10,    -1,    -1,    -1,    -1,    15,    16,
      17,    -1,    -1,    -1,    21,    -1,    -1,    24,    25,    -1,
      -1,    28,    29,    -1,    -1,    32,    33,    34,    35,    -1,
      37,    38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,     3,
      -1,    -1,    -1,     7,    -1,    -1,    10,    -1,    -1,    -1,
      14,    -1,    16,    17,    -1,    -1,    -1,    21,    -1,    -1,
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
      71,    72,    73,    74,    75,     3,    -1,    -1,    -1,     7,
      -1,    -1,    10,    -1,    -1,    -1,    -1,    -1,    16,    17,
      -1,    -1,    -1,    21,    -1,    -1,    24,    25,    -1,    -1,
      28,    29,    -1,    -1,    32,    33,    34,    35,    -1,    37,
      38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,     3,    -1,
      -1,    -1,     7,    -1,    -1,    10,    -1,    -1,    -1,    -1,
      -1,    16,    17,    -1,    -1,    -1,    21,    -1,    -1,    24,
      25,    -1,    -1,    28,    29,    -1,    -1,    32,    33,    34,
      35,    -1,    37,    38,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,     3,    -1,    -1,    -1,     7,    -1,    -1,    10,    -1,
      -1,    -1,    -1,    -1,    16,    17,    -1,    -1,    -1,    21,
      -1,    -1,    24,    25,    -1,    -1,    28,    29,    -1,    -1,
      32,    33,    34,    35,    -1,    37,    38,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,     3,    -1,    -1,    -1,     7,    -1,
      -1,    10,    -1,    -1,    -1,    -1,    -1,    16,    17,    -1,
      -1,    -1,    21,    -1,    -1,    24,    25,    -1,    -1,    28,
      29,    -1,    -1,    32,    33,    34,    35,    -1,    37,    38,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,     3,    -1,    -1,
      -1,     7,    -1,    -1,    10,    -1,    -1,    -1,    -1,    -1,
      16,    17,    -1,    -1,    -1,    21,    -1,    -1,    24,    25,
      -1,    -1,    28,    29,    -1,    -1,    32,    33,    34,    35,
      -1,    37,    38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
       3,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    -1,
      13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,     3,
      -1,    -1,    -1,    -1,    -1,    28,    10,    11,    -1,    32,
      33,    34,    35,    -1,    -1,    -1,    -1,    21,    -1,    -1,
      -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,    32,    33,
      34,    35,    -1,    -1,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,     3,    -1,    -1,    -1,    -1,    -1,    -1,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      21,     3,    -1,    -1,    -1,    -1,    -1,    28,    10,    -1,
      -1,    32,    33,    34,    35,    -1,    -1,    -1,    -1,    21,
      -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,
      32,    33,    34,    35,    -1,    -1,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,     3,    -1,    -1,    -1,    -1,    -1,
      -1,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    21,    -1,    -1,    -1,    -1,    -1,    -1,    28,
      -1,    -1,    -1,    32,    33,    34,    35,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,     7,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    15,    16,    17,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     8,    -1,    10,
      -1,    -1,    32,    33,    34,    35,    -1,    -1,    -1,    -1,
      21,    -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,    -1,
      -1,    32,    -1,    -1,    -1,    -1,    -1,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,     8,    -1,    10,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,    -1,
      -1,    -1,    -1,    -1,    -1,    28,     9,    -1,    -1,    32,
      -1,    14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    -1,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    10,    -1,    -1,    13,    -1,    -1,    -1,
      -1,    -1,    -1,    20,    21,    -1,    -1,    -1,    -1,    -1,
      -1,    28,    29,    10,    -1,    32,    -1,    -1,    -1,    36,
      37,    38,    -1,    -1,    21,    -1,    -1,    -1,    -1,    -1,
      -1,    28,    -1,    -1,    -1,    32,    -1,    -1,    -1,    -1,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    -1,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    10,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
      21,    -1,    -1,     7,    -1,    -1,    10,    28,    -1,    11,
      14,    32,    16,    17,    -1,    -1,    -1,    21,    -1,    21,
      24,    25,    -1,    -1,    28,    29,    28,    -1,    32,    33,
      34,    35,    -1,    37,    38,    -1,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,    21,    -1,    -1,     7,    -1,    -1,
      10,    28,    -1,    11,    -1,    15,    16,    17,    -1,    -1,
      -1,    21,    -1,    21,    24,    25,    -1,    -1,    28,    29,
      28,    -1,    32,    33,    34,    35,    -1,    37,    38,    -1,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    11,     3,
      -1,    -1,    -1,     7,    -1,    -1,    10,    11,    21,    -1,
      -1,    15,    16,    17,    -1,    28,    -1,    21,    -1,    -1,
      24,    25,    -1,    -1,    28,    29,    -1,    -1,    32,    33,
      34,    35,    -1,    37,    38,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,     3,    -1,    -1,    -1,     7,    -1,    -1,
      10,    11,    -1,    13,    -1,    -1,    16,    17,    -1,    -1,
      -1,    21,    -1,    -1,    24,    25,    -1,    -1,    28,    29,
      -1,    -1,    32,    33,    34,    35,     3,    37,    38,    -1,
       7,    -1,    -1,    10,    -1,    12,    -1,    -1,    -1,    16,
      17,    -1,    -1,    -1,    21,    -1,    -1,    24,    25,    -1,
      -1,    28,    29,    -1,    -1,    32,    33,    34,    35,     3,
      37,    38,    -1,     7,    -1,    -1,    10,    -1,    12,    -1,
      -1,    -1,    16,    17,    -1,    -1,    -1,    21,    -1,    -1,
      24,    25,    -1,    -1,    28,    29,    -1,    -1,    32,    33,
      34,    35,     3,    37,    38,    -1,     7,    -1,    -1,    10,
      11,    -1,    -1,    -1,    -1,    16,    17,    -1,    -1,    -1,
      21,    -1,    -1,    24,    25,    -1,    -1,    28,    29,    -1,
      -1,    32,    33,    34,    35,     3,    37,    38,    -1,     7,
      -1,    -1,    10,    -1,    -1,    -1,    -1,    15,    16,    17,
      -1,    -1,    -1,    21,    -1,    -1,    24,    25,    -1,    -1,
      28,    29,    -1,    -1,    32,    33,    34,    35,     3,    37,
      38,    -1,     7,    -1,    -1,    10,    -1,    12,    -1,    -1,
      -1,    16,    17,    -1,    -1,    -1,    21,    -1,    -1,    24,
      25,    -1,    -1,    28,    29,    -1,    -1,    32,    33,    34,
      35,     3,    37,    38,    -1,     7,     8,    -1,    10,    -1,
      -1,    -1,    -1,    -1,    16,    17,    -1,    -1,    -1,    21,
      -1,    -1,    24,    25,    -1,    -1,    28,    29,    -1,    -1,
      32,    33,    34,    35,     3,    37,    38,    -1,     7,    -1,
      -1,    10,    11,    -1,    -1,    -1,    -1,    16,    17,    -1,
      -1,    -1,    21,    -1,    -1,    24,    25,    -1,    -1,    28,
      29,    -1,    -1,    32,    33,    34,    35,     3,    37,    38,
      -1,     7,    -1,    -1,    10,    -1,    -1,    -1,    14,    -1,
      16,    17,    -1,    -1,    -1,    21,    -1,    -1,    24,    25,
      -1,    -1,    28,    29,    -1,    -1,    32,    33,    34,    35,
       3,    37,    38,    -1,     7,    -1,    -1,    10,    -1,    -1,
      -1,    -1,    15,    16,    17,    -1,    -1,    -1,    21,    -1,
      -1,    24,    25,    -1,    -1,    28,    29,    -1,    -1,    32,
      33,    34,    35,     3,    37,    38,    -1,     7,    -1,    -1,
      10,    11,    -1,    -1,    -1,    -1,    16,    17,    -1,    -1,
      -1,    21,    -1,    -1,    24,    25,    -1,    -1,    28,    29,
      -1,    -1,    32,    33,    34,    35,     3,    37,    38,    -1,
       7,     8,    -1,    10,    -1,    -1,    -1,    -1,    -1,    16,
      17,    -1,    -1,    -1,    21,    -1,    -1,    24,    25,    -1,
      -1,    28,    29,    -1,    -1,    32,    33,    34,    35,     3,
      37,    38,    -1,     7,    -1,    -1,    10,    -1,    -1,    -1,
      -1,    -1,    16,    17,    -1,    -1,    -1,    21,    -1,    -1,
      24,    25,    -1,    -1,    28,    29,    -1,    -1,    32,    33,
      34,    35,     3,    37,    38,    -1,     7,    -1,    -1,    10,
      -1,    -1,    -1,    -1,    -1,    16,    17,    -1,    -1,    -1,
      21,    -1,    -1,    24,    25,    -1,    -1,    28,    29,    -1,
      -1,    32,    33,    34,    35,     3,    37,    38,    -1,     7,
      -1,    -1,    10,    -1,    -1,    -1,    -1,    -1,    16,    17,
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
      33,    34,    35,    -1,    37,    38
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
     105,   106,   107,   108,   110,   112,   113,   129,   130,   131,
     143,   144,   145,   146,   147,   148,   149,   150,   151,    10,
     113,   117,   129,   138,    17,    17,    37,    38,     7,    32,
      14,    15,   114,   124,   129,   130,     9,    14,   113,   113,
     113,   122,   131,     7,    32,    10,    13,   131,   139,   140,
     113,   122,    15,    29,    32,    94,    97,   145,   146,    10,
      13,    20,    29,    36,    37,    38,   113,   129,   130,   128,
     131,   133,   113,   131,     0,   153,    32,   154,   154,     8,
       7,    10,    32,   110,   114,   129,   138,    10,    32,    92,
     131,    15,    10,    94,    94,    94,    10,   107,   111,    15,
      10,    10,    10,    32,   143,    10,    32,    14,    14,    14,
     110,     3,     6,   131,    10,    13,    20,    36,    37,    38,
      29,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,   109,    96,    19,    26,    27,    28,    39,    40,    46,
      24,    25,    39,    40,    30,    31,    41,    42,    43,    44,
      21,    19,    22,    45,    18,    46,     9,    14,   129,    10,
      91,     8,   112,   147,     5,     8,   143,   146,   117,   128,
     138,    11,    11,    11,    11,    32,   126,   127,     7,   111,
      14,    14,    15,   145,   146,   113,   115,   114,   113,    32,
     117,   120,   121,   122,     7,    10,    11,    32,    34,    91,
     113,   129,   131,   134,   135,   137,   139,    12,   111,   140,
      10,    13,     7,   108,   141,    92,   141,   145,   147,    11,
      32,   129,   134,   136,    12,   111,   130,   141,   130,   112,
      10,   128,   131,   113,    20,    25,    26,     8,   138,    32,
     131,    11,    11,    11,    32,    10,   143,    32,   138,   138,
      15,   143,   110,   110,   110,    82,   146,   148,    14,    14,
      91,    16,    25,    34,    96,    11,    93,   108,   110,    32,
      32,   108,   102,    96,    96,    96,    98,    98,   105,    97,
      97,    98,    98,    99,    99,    99,    99,   100,   100,   101,
     102,   103,   104,   110,   105,   108,     8,   154,   122,   122,
     114,    29,     8,     9,   126,   107,   111,   145,   112,   129,
      14,   123,   124,   129,     8,    32,   121,   122,   146,   123,
     120,    10,    34,    91,   131,   139,    10,    10,    32,   129,
     139,    11,     9,    11,    12,    11,   134,    12,   111,   141,
     142,   113,   129,   156,     9,    11,    11,    12,    32,    32,
      32,    11,    11,    97,    98,    91,    96,    96,   131,    11,
      11,   143,    11,    11,    11,    10,   147,   148,   148,    91,
      91,    10,    94,     9,    11,    12,    15,    14,   111,   127,
       8,   145,   145,     9,    14,    15,    14,     8,    32,   129,
      10,   129,    32,   138,   131,    76,   135,    11,    12,     8,
       9,   129,   136,   137,    31,    20,    20,    13,    96,    11,
      11,    11,   143,   143,   112,   143,   110,    11,   110,    11,
     110,    32,   138,   108,   107,   124,   131,    32,   138,    11,
     131,    11,   129,     8,   141,     9,    32,    32,   110,    80,
      11,   112,   143,    11,   112,   143,    11,   131,    11,    10,
     131,    11,    11,    31,    31,    12,   143,    14,   112,   143,
     112,   143,    11,   129,   138,    11
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
     112,   112,   112,   112,   112,   113,   113,   113,   113,   113,
     113,   113,   113,   113,   113,   113,   113,   114,   114,   115,
     115,   115,   115,   116,   116,   116,   116,   116,   117,   117,
     117,   117,   117,   117,   117,   117,   117,   117,   117,   118,
     118,   118,   119,   119,   120,   120,   120,   121,   121,   122,
     122,   122,   122,   123,   123,   124,   124,   124,   125,   125,
     125,   126,   126,   127,   127,   128,   128,   129,   129,   129,
     129,   130,   130,   130,   130,   130,   130,   130,   130,   130,
     130,   130,   130,   130,   131,   131,   131,   131,   132,   132,
     132,   132,   132,   132,   133,   133,   134,   134,   135,   135,
     135,   135,   135,   135,   135,   135,   135,   135,   135,   136,
     136,   137,   137,   138,   138,   139,   139,   139,   140,   140,
     140,   140,   140,   140,   140,   140,   140,   141,   141,   141,
     142,   142,   143,   143,   143,   143,   143,   143,   144,   144,
     144,   145,   145,   145,   145,   146,   146,   146,   147,   147,
     147,   147,   147,   148,   148,   149,   149,   149,   150,   150,
     150,   150,   150,   150,   150,   150,   150,   150,   150,   151,
     151,   151,   151,   151,   152,   152,   152,   153,   153,   153,
     153,   153,   153,   153,   153,   153,   153,   154,   154,   155,
     155,   155,   155,   155,   155,   155,   155,   155,   155,   155,
     155,   155,   155,   155,   155,   155,   155,   155,   155,   155,
     155,   155,   155,   155,   155,   155,   155,   155,   155,   155,
     155,   155,   155,   155,   155,   155,   155,   155,   155,   155,
     155,   155,   155,   155,   155,   155,   155,   155,   155,   155,
     155,   155,   155,   155,   155,   155,   155,   155,   155,   155,
     155,   155,   155,   155,   155,   155,   155,   155,   155,   155,
     155,   155,   155,   155,   155,   155,   155,   155,   155,   155,
     155,   155,   156,   156,   156,   156,   156,   156,   156,   156,
     156
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
       3,     5,     2,     3,     4,     1,     2,     1,     1,     2,
       2,     2,     2,     3,     3,     1,     2,     1,     3,     1,
       3,     3,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     5,
       4,     2,     1,     1,     1,     2,     2,     3,     3,     2,
       1,     2,     1,     1,     3,     1,     2,     3,     4,     5,
       2,     1,     3,     1,     3,     1,     1,     2,     1,     2,
       3,     1,     2,     2,     3,     3,     3,     3,     3,     4,
       3,     4,     4,     3,     1,     2,     2,     3,     1,     1,
       2,     2,     2,     2,     1,     2,     1,     3,     2,     2,
       1,     1,     2,     3,     4,     4,     5,     4,     1,     3,
       3,     1,     3,     1,     2,     1,     1,     2,     3,     2,
       3,     3,     4,     2,     3,     3,     4,     1,     3,     4,
       1,     3,     1,     1,     1,     1,     1,     1,     3,     4,
       3,     2,     3,     3,     4,     1,     2,     2,     1,     2,
       3,     2,     2,     1,     2,     5,     7,     5,     5,     7,
       6,     7,     7,     6,     5,     6,     7,     7,     6,     3,
       2,     2,     2,     3,     1,     2,     0,     1,     1,     2,
       2,     6,     8,     8,     1,     1,     1,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     4,     3,     3,     2,     4,     5,     4,     5,
       3
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
      YY_LAC_DISCARD ("YYBACKUP");                              \
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

/* Given a state stack such that *YYBOTTOM is its bottom, such that
   *YYTOP is either its top or is YYTOP_EMPTY to indicate an empty
   stack, and such that *YYCAPACITY is the maximum number of elements it
   can hold without a reallocation, make sure there is enough room to
   store YYADD more elements.  If not, allocate a new stack using
   YYSTACK_ALLOC, copy the existing elements, and adjust *YYBOTTOM,
   *YYTOP, and *YYCAPACITY to reflect the new capacity and memory
   location.  If *YYBOTTOM != YYBOTTOM_NO_FREE, then free the old stack
   using YYSTACK_FREE.  Return 0 if successful or if no reallocation is
   required.  Return 1 if memory is exhausted.  */
static int
yy_lac_stack_realloc (YYSIZE_T *yycapacity, YYSIZE_T yyadd,
#if YYDEBUG
                      char const *yydebug_prefix,
                      char const *yydebug_suffix,
#endif
                      yytype_int16 **yybottom,
                      yytype_int16 *yybottom_no_free,
                      yytype_int16 **yytop, yytype_int16 *yytop_empty)
{
  YYSIZE_T yysize_old =
    *yytop == yytop_empty ? 0 : *yytop - *yybottom + 1;
  YYSIZE_T yysize_new = yysize_old + yyadd;
  if (*yycapacity < yysize_new)
    {
      YYSIZE_T yyalloc = 2 * yysize_new;
      yytype_int16 *yybottom_new;
      /* Use YYMAXDEPTH for maximum stack size given that the stack
         should never need to grow larger than the main state stack
         needs to grow without LAC.  */
      if (YYMAXDEPTH < yysize_new)
        {
          YYDPRINTF ((stderr, "%smax size exceeded%s", yydebug_prefix,
                      yydebug_suffix));
          return 1;
        }
      if (YYMAXDEPTH < yyalloc)
        yyalloc = YYMAXDEPTH;
      yybottom_new =
        (yytype_int16*) YYSTACK_ALLOC (yyalloc * sizeof *yybottom_new);
      if (!yybottom_new)
        {
          YYDPRINTF ((stderr, "%srealloc failed%s", yydebug_prefix,
                      yydebug_suffix));
          return 1;
        }
      if (*yytop != yytop_empty)
        {
          YYCOPY (yybottom_new, *yybottom, yysize_old);
          *yytop = yybottom_new + (yysize_old - 1);
        }
      if (*yybottom != yybottom_no_free)
        YYSTACK_FREE (*yybottom);
      *yybottom = yybottom_new;
      *yycapacity = yyalloc;
    }
  return 0;
}

/* Establish the initial context for the current lookahead if no initial
   context is currently established.

   We define a context as a snapshot of the parser stacks.  We define
   the initial context for a lookahead as the context in which the
   parser initially examines that lookahead in order to select a
   syntactic action.  Thus, if the lookahead eventually proves
   syntactically unacceptable (possibly in a later context reached via a
   series of reductions), the initial context can be used to determine
   the exact set of tokens that would be syntactically acceptable in the
   lookahead's place.  Moreover, it is the context after which any
   further semantic actions would be erroneous because they would be
   determined by a syntactically unacceptable token.

   YY_LAC_ESTABLISH should be invoked when a reduction is about to be
   performed in an inconsistent state (which, for the purposes of LAC,
   includes consistent states that don't know they're consistent because
   their default reductions have been disabled).  Iff there is a
   lookahead token, it should also be invoked before reporting a syntax
   error.  This latter case is for the sake of the debugging output.

   For parse.lac=full, the implementation of YY_LAC_ESTABLISH is as
   follows.  If no initial context is currently established for the
   current lookahead, then check if that lookahead can eventually be
   shifted if syntactic actions continue from the current context.
   Report a syntax error if it cannot.  */
#define YY_LAC_ESTABLISH                                         \
do {                                                             \
  if (!yy_lac_established)                                       \
    {                                                            \
      YYDPRINTF ((stderr,                                        \
                  "LAC: initial context established for %s\n",   \
                  yytname[yytoken]));                            \
      yy_lac_established = 1;                                    \
      {                                                          \
        int yy_lac_status =                                      \
          yy_lac (yyesa, &yyes, &yyes_capacity, yyssp, yytoken); \
        if (yy_lac_status == 2)                                  \
          goto yyexhaustedlab;                                   \
        if (yy_lac_status == 1)                                  \
          goto yyerrlab;                                         \
      }                                                          \
    }                                                            \
} while (0)

/* Discard any previous initial lookahead context because of Event,
   which may be a lookahead change or an invalidation of the currently
   established initial context for the current lookahead.

   The most common example of a lookahead change is a shift.  An example
   of both cases is syntax error recovery.  That is, a syntax error
   occurs when the lookahead is syntactically erroneous for the
   currently established initial context, so error recovery manipulates
   the parser stacks to try to find a new initial context in which the
   current lookahead is syntactically acceptable.  If it fails to find
   such a context, it discards the lookahead.  */
#if YYDEBUG
# define YY_LAC_DISCARD(Event)                                           \
do {                                                                     \
  if (yy_lac_established)                                                \
    {                                                                    \
      if (yydebug)                                                       \
        YYFPRINTF (stderr, "LAC: initial context discarded due to "      \
                   Event "\n");                                          \
      yy_lac_established = 0;                                            \
    }                                                                    \
} while (0)
#else
# define YY_LAC_DISCARD(Event) yy_lac_established = 0
#endif

/* Given the stack whose top is *YYSSP, return 0 iff YYTOKEN can
   eventually (after perhaps some reductions) be shifted, return 1 if
   not, or return 2 if memory is exhausted.  As preconditions and
   postconditions: *YYES_CAPACITY is the allocated size of the array to
   which *YYES points, and either *YYES = YYESA or *YYES points to an
   array allocated with YYSTACK_ALLOC.  yy_lac may overwrite the
   contents of either array, alter *YYES and *YYES_CAPACITY, and free
   any old *YYES other than YYESA.  */
static int
yy_lac (yytype_int16 *yyesa, yytype_int16 **yyes,
        YYSIZE_T *yyes_capacity, yytype_int16 *yyssp, int yytoken)
{
  yytype_int16 *yyes_prev = yyssp;
  yytype_int16 *yyesp = yyes_prev;
  YYDPRINTF ((stderr, "LAC: checking lookahead %s:", yytname[yytoken]));
  if (yytoken == YYUNDEFTOK)
    {
      YYDPRINTF ((stderr, " Always Err\n"));
      return 1;
    }
  while (1)
    {
      int yyrule = yypact[*yyesp];
      if (yypact_value_is_default (yyrule)
          || (yyrule += yytoken) < 0 || YYLAST < yyrule
          || yycheck[yyrule] != yytoken)
        {
          yyrule = yydefact[*yyesp];
          if (yyrule == 0)
            {
              YYDPRINTF ((stderr, " Err\n"));
              return 1;
            }
        }
      else
        {
          yyrule = yytable[yyrule];
          if (yytable_value_is_error (yyrule))
            {
              YYDPRINTF ((stderr, " Err\n"));
              return 1;
            }
          if (0 < yyrule)
            {
              YYDPRINTF ((stderr, " S%d\n", yyrule));
              return 0;
            }
          yyrule = -yyrule;
        }
      {
        YYSIZE_T yylen = yyr2[yyrule];
        YYDPRINTF ((stderr, " R%d", yyrule - 1));
        if (yyesp != yyes_prev)
          {
            YYSIZE_T yysize = yyesp - *yyes + 1;
            if (yylen < yysize)
              {
                yyesp -= yylen;
                yylen = 0;
              }
            else
              {
                yylen -= yysize;
                yyesp = yyes_prev;
              }
          }
        if (yylen)
          yyesp = yyes_prev -= yylen;
      }
      {
        int yystate;
        {
          int yylhs = yyr1[yyrule] - YYNTOKENS;
          yystate = yypgoto[yylhs] + *yyesp;
          if (yystate < 0 || YYLAST < yystate
              || yycheck[yystate] != *yyesp)
            yystate = yydefgoto[yylhs];
          else
            yystate = yytable[yystate];
        }
        if (yyesp == yyes_prev)
          {
            yyesp = *yyes;
            *yyesp = yystate;
          }
        else
          {
            if (yy_lac_stack_realloc (yyes_capacity, 1,
#if YYDEBUG
                                      " (", ")",
#endif
                                      yyes, yyesa, &yyesp, yyes_prev))
              {
                YYDPRINTF ((stderr, "\n"));
                return 2;
              }
            *++yyesp = yystate;
          }
        YYDPRINTF ((stderr, " G%d", yystate));
      }
    }
}


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
   YYSSP.  In order to see if a particular token T is a
   valid looakhead, invoke yy_lac (YYESA, YYES, YYES_CAPACITY, YYSSP, T).

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store or if
   yy_lac returned 2.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyesa, yytype_int16 **yyes,
                YYSIZE_T *yyes_capacity, yytype_int16 *yyssp, int yytoken)
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
       In the first two cases, it might appear that the current syntax
       error should have been detected in the previous state when yy_lac
       was invoked.  However, at that time, there might have been a
       different syntax error that discarded a different initial context
       during error recovery, leaving behind the current lookahead.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      YYDPRINTF ((stderr, "Constructing syntax error message\n"));
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          int yyx;

          for (yyx = 0; yyx < YYNTOKENS; ++yyx)
            if (yyx != YYTERROR && yyx != YYUNDEFTOK)
              {
                {
                  int yy_lac_status = yy_lac (yyesa, yyes, yyes_capacity,
                                              yyssp, yyx);
                  if (yy_lac_status == 2)
                    return 2;
                  if (yy_lac_status == 1)
                    continue;
                }
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
# if YYDEBUG
      else if (yydebug)
        YYFPRINTF (stderr, "No expected tokens.\n");
# endif
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

    yytype_int16 yyesa[20];
    yytype_int16 *yyes;
    YYSIZE_T yyes_capacity;

  int yy_lac_established = 0;
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

  yyes = yyesa;
  yyes_capacity = sizeof yyesa / sizeof *yyes;
  if (YYMAXDEPTH < yyes_capacity)
    yyes_capacity = YYMAXDEPTH;

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
    {
      YY_LAC_ESTABLISH;
      goto yydefault;
    }
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      YY_LAC_ESTABLISH;
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
  YY_LAC_DISCARD ("shift");

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
  {
    int yychar_backup = yychar;
    switch (yyn)
      {
          case 2:
#line 43 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s primary_expression: IDENTIFIER FINAL\n",linea, gramaticas );}
#line 2796 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 44 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  primary_expression: CONSTANT FINAL\n",linea,  gramaticas );}
#line 2802 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 45 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  LITERAL FINAL\n",linea, gramaticas );}
#line 2808 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 46 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  primary_expression: LEFT_PARENTHESIS FINAL expression RIGHT_PARETHESIS\n",linea, gramaticas);}
#line 2814 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 49 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  primary_expression: INTEGER FINAL\n",linea, gramaticas );}
#line 2820 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 50 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  LITERAL FINAL\n",linea, gramaticas );}
#line 2826 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 51 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  LITERAL FINAL\n",linea, gramaticas );}
#line 2832 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 56 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  primary_expression SLASH primary_expression\n",linea, gramaticas );}
#line 2838 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 62 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  postfix_expression: primary_expression\n",linea, gramaticas );}
#line 2844 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 63 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  postfix_expression: pointer primary_expression\n",linea, gramaticas);}
#line 2850 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 64 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  postfix_expression: primary_expression pointer primary_expression \n",linea, gramaticas );}
#line 2856 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 65 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  postfix_expression: primary_expression pointer primary_expression \n",linea, gramaticas );}
#line 2862 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 66 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  postfix_expression: postfix_expression RIGHT_SBRACKET expression LEFT_SBRACKET\n",linea, gramaticas);}
#line 2868 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 67 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  postfix_expression: postfix_expression RIGHT_SBRACKET expression LEFT_SBRACKET\n",linea, gramaticas);
}
#line 2875 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 68 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  postfix_expression: postfix_expression RIGHT_SBRACKET expression LEFT_SBRACKET\n",linea, gramaticas);}
#line 2881 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 69 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  postfix_expression: postfix_expression LEFT_PARENTHESIS RIGHT_PARENTHESIS\n",linea,gramaticas);}
#line 2887 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 70 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  postfix_expression: postfix_expression RIGHT_PARENTHESIS argument_expression_list LEFT_PARENTHESIS\n",linea, gramaticas);}
#line 2893 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 72 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  postfix_expression: postfix_expression DOT IDENTIFIER\n",linea, gramaticas);}
#line 2899 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 73 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  postfix_expression: postfix_expression PTR_OP IDENTIFIER\n",linea, gramaticas);}
#line 2905 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 74 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  postfix_expression: postfix_expression INC_OP\n",linea, gramaticas );}
#line 2911 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 75 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  postfix_expression: postfix_expression DEC_OP\n",linea, gramaticas );}
#line 2917 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 76 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_expression: SIZEOF unary_expression\n",linea, gramaticas );}
#line 2923 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 77 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_expression: SIZEOF LEFT_PARENTHESIS type_name RIGHT_PARENTHESIS\n",linea, gramaticas );}
#line 2929 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 78 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_expression: SIZEOF LEFT_PARENTHESIS type_name RIGHT_PARENTHESIS\n",linea, gramaticas );}
#line 2935 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 79 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  postfix_expression: primary_expression pointer cast_expression\n",linea, gramaticas);}
#line 2941 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 84 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  argument_expression_list: assignment_expression\n",linea, gramaticas);}
#line 2947 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 85 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  argument_expression_list: argument_expression_list COMMA assignment_expression\n",linea, gramaticas);}
#line 2953 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 89 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_expression: postfix_expression\n",linea, gramaticas );}
#line 2959 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 90 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_expression:pointer postfix_expression\n",linea, gramaticas);}
#line 2965 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 91 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_expression: INC_OP unary_expression\n",linea, gramaticas );}
#line 2971 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 92 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_expression: DEC_OP unary_expression\n",linea, gramaticas );}
#line 2977 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 93 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_expression: unary_operator cast_expression\n",linea, gramaticas );}
#line 2983 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 94 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_expression: SIZEOF unary_expression\n",linea, gramaticas );}
#line 2989 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 95 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_expression: SIZEOF LEFT_PARENTHESIS type_name RIGHT_PARENTHESIS\n",linea, gramaticas );}
#line 2995 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 96 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_expression: SIZEOF LEFT_PARENTHESIS type_name RIGHT_PARENTHESIS\n",linea, gramaticas );}
#line 3001 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 100 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_operator: BIT_AND\n",linea, gramaticas );}
#line 3007 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 101 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_operator: MUL\n",linea, gramaticas );}
#line 3013 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 102 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_operator: PLUS\n",linea, gramaticas );}
#line 3019 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 103 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_operator: MINUS\n",linea, gramaticas );}
#line 3025 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 104 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_operator: PRIME\n",linea, gramaticas );}
#line 3031 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 105 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_operator: EXCLAMATION\n",linea, gramaticas);}
#line 3037 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 109 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  cast_expression: unary_expression\n",linea, gramaticas);}
#line 3043 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 110 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  cast_expression: LEFT_PARENTHESIS type_name RIGHT_PARENTHESIS cast_expression\n",linea, gramaticas);}
#line 3049 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 111 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  cast_expression: LEFT_PARENTHESIS type_name RIGHT_PARENTHESIS cast_expression\n",linea, gramaticas);}
#line 3055 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 112 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  cast_expression: LEFT_PARENTHESIS type_name RIGHT_PARENTHESIS cast_expression\n",linea, gramaticas);}
#line 3061 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 113 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  cast_expression: LEFT_PARENTHESIS type_name RIGHT_PARENTHESIS cast_expression\n",linea, gramaticas);}
#line 3067 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 114 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  cast_expression: LEFT_PARENTHESIS type_name RIGHT_PARENTHESIS cast_expression\n",linea, gramaticas);}
#line 3073 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 121 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  multiplicative_expression: multiplicative_expression MUL cast_expression\n",linea, gramaticas );}
#line 3079 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 122 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  multiplicative_expression: multiplicative_expression DIV cast_expression\n",linea, gramaticas );}
#line 3085 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 123 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  multiplicative_expression: multiplicative_expression MOD cast_expression\n",linea,gramaticas );}
#line 3091 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 124 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  multiplicative_expression: cast_expression\n",linea, gramaticas);}
#line 3097 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 128 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  additive_expression: multiplicative_expression\n",linea,gramaticas );}
#line 3103 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 129 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  additive_expression:multiplicative_expression UP_ARROW and_expression\n",linea,gramaticas );}
#line 3109 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 130 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  additive_expression:multiplicative_expression OR_OP logical_and_expression\n",linea,gramaticas );}
#line 3115 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 131 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  shift_expression: shift_expression LEFT_OP additive_expression\n",linea, gramaticas);}
#line 3121 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 132 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  shift_expression: shift_expression LEFT_OP additive_expression\n",linea, gramaticas);}
#line 3127 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 133 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  additive_expression: additive_expression PLUS multiplicative_expression\n",linea,gramaticas) ;}
#line 3133 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 134 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  additive_expression: additive_expression MINUS multiplicative_expression\n",linea, gramaticas) ;}
#line 3139 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 138 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  shift_expression: additive_expression\n",linea, gramaticas );}
#line 3145 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 139 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  shift_expression: shift_expression LEFT_OP additive_expression\n",linea, gramaticas);}
#line 3151 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 140 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  shift_expression: shift_expression RIGHT_OP additive_expression \n",linea, gramaticas);}
#line 3157 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 144 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  relational_expression: shift_expression\n",linea, gramaticas);}
#line 3163 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 145 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  relational_expression: relational_expression LESS shift_expression\n",linea, gramaticas);}
#line 3169 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 146 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  relational_expression: relational_expression GREATER shift_expression\n",linea, gramaticas );}
#line 3175 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 147 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  relational_expression: relational_expression LE_OP shift_expression\n",linea, gramaticas);}
#line 3181 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 148 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  relational_expression: relational_expression GE_OP shift_expression\n",linea, gramaticas );}
#line 3187 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 152 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  equality_expression: relational_expression\n",linea, gramaticas);}
#line 3193 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 153 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  equality_expression: equality_expression EQ_OP relational_expression\n",linea, gramaticas );}
#line 3199 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 154 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  equality_expression: equality_expression NE_OP relational_expression\n",linea, gramaticas);}
#line 3205 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 158 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  and_expression: equality_expression\n",linea, gramaticas );}
#line 3211 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 159 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  and_expression: and_expression BIT_AND equality_expression\n",linea, gramaticas);}
#line 3217 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 163 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  exclusive_or_expression: and_expression\n",linea, gramaticas );}
#line 3223 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 164 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  exclusive_or_expression: exclusive_or_expression UP_ARROW and_expression\n",linea, gramaticas );}
#line 3229 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 168 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  inclusive_or_expression: exclusive_or_expression\n",linea, gramaticas);}
#line 3235 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 169 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  inclusive_or_expression: inclusive_or_expression BIT_OR exclusive_or_expression\n",linea, gramaticas );}
#line 3241 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 173 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  logical_and_expression: inclusive_or_expression\n",linea,gramaticas );}
#line 3247 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 174 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  logical_and_expression: logical_and_expression AND_OP inclusive_or_expression\n",linea, gramaticas);}
#line 3253 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 178 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  logical_or_expression: logical_and_expression\n",linea,gramaticas);}
#line 3259 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 179 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  logical_or_expression: logical_or_expression OR_OP logical_and_expression\n",linea, gramaticas );}
#line 3265 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 183 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  conditional_expression: logical_or_expression\n",linea, gramaticas);}
#line 3271 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 184 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  conditional_expression: logical_or_expression INTERROGATION expression COLON conditional_expression\n",linea,gramaticas);}
#line 3277 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 188 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  assignment_expression: conditional_expression\n",linea, gramaticas);}
#line 3283 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 189 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  assignment_expression: unary_expression assignment_operator assignment_expression\n",linea,gramaticas);}
#line 3289 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 193 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  assignment_operator: EQU\n",linea, gramaticas);}
#line 3295 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 194 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  assignment_operator: MUL_ASSIGN\n",linea,gramaticas );}
#line 3301 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 195 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  assignment_operator: DIV_ASSIGN\n",linea,gramaticas);}
#line 3307 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 196 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  assignment_operator: MOD_ASSIGN\n",linea,gramaticas);}
#line 3313 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 197 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  assignment_operator: ADD_ASSIGN\n",linea, gramaticas);}
#line 3319 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 198 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  assignment_operator: SUB_ASSIGN\n",linea, gramaticas);}
#line 3325 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 199 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  assignment_operator: LEFT_ASSIGN\n",linea, gramaticas);}
#line 3331 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 200 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  assignment_operator: RIGHT_ASSIGN\n",linea,gramaticas);}
#line 3337 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 201 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  assignment_operator: AND_ASSIGN\n",linea, gramaticas);}
#line 3343 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 202 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  assignment_operator: XOR_ASSIGN\n",linea, gramaticas);}
#line 3349 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 203 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  assignment_operator: OR_ASSIGN\n",linea, gramaticas);}
#line 3355 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 207 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  expression: assignment_expression\n",linea, gramaticas);}
#line 3361 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 208 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  expression: expression COMMA assignment_expression\n",linea,gramaticas);}
#line 3367 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 212 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  constant_expression: conditional_expression\n",linea, gramaticas );}
#line 3373 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 216 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  declaration: declaration_specifiers SEMICOLON \n",linea, gramaticas );memset(gramaticas,0,sizeof(gramaticas));}
#line 3379 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 217 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  declaration: declaration_specifiers init_declarator_list SEMICOLON\n",linea, gramaticas);memset(gramaticas,0,sizeof(gramaticas));}
#line 3385 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 219 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  declaration: LEFT_PARENTHESIS declaration_specifiers RIGHT_PARENTHESIS init_declarator_list SEMICOLON \n",linea, gramaticas);memset(gramaticas,0,sizeof(gramaticas));}
#line 3391 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 220 "parser.y" /* yacc.c:1646  */
    {memset(gramaticas,0,sizeof(gramaticas));printf("%d con %s  declaration: init_declarator_list SEMICOLON \n",linea, gramaticas);memset(gramaticas,0,sizeof(gramaticas));}
#line 3397 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 221 "parser.y" /* yacc.c:1646  */
    {memset(gramaticas,0,sizeof(gramaticas));printf("%d con %s  declaration: declaration_specifiers struct_declarator SEMICOLON\n",linea, gramaticas);memset(gramaticas,0,sizeof(gramaticas));}
#line 3403 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 227 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  declaration_specifiers: storage_class_specifier \n",linea, gramaticas);}
#line 3409 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 228 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  declaration_specifiers: storage_class_specifier declaration_specifiers\n",linea, gramaticas);}
#line 3415 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 229 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  declaration_specifiers: type_specifier\n",linea, gramaticas);}
#line 3421 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 231 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  declaration_specifiers: type_specifier declaration_specifiers {\n",linea, gramaticas);}
#line 3427 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 233 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  declaration_specifiers: type_specifier\n",linea, gramaticas);}
#line 3433 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 235 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  declaration_specifiers: type_specifier declaration_specifiers {\n",linea, gramaticas);}
#line 3439 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 236 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  declaration_specifiers: type_specifier declaration_specifiers {\n",linea, gramaticas);}
#line 3445 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 238 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  declaration_specifiers: type_qualifier\n",linea, gramaticas );}
#line 3451 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 239 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  declaration_specifiers: type_qualifier declaration_specifiers\n",linea, gramaticas );}
#line 3457 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 244 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  init_declarator_list: init_declarator\n",linea, gramaticas );}
#line 3463 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 245 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  init_declarator_list: init_declarator_list COMMA init_declarator\n",linea,gramaticas);}
#line 3469 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 249 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  init_declarator: declarator\n",linea, gramaticas );}
#line 3475 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 250 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  init_declarator: declarator EQU initializer\n",linea, gramaticas );}
#line 3481 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 251 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  init_declarator: declarator COLON initializer\n",linea, gramaticas );}
#line 3487 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 253 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  init_declarator: multiplicative_expression\n",linea, gramaticas );}
#line 3493 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 258 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  storage_class_specifier: TYPEDEF\n",linea, gramaticas);}
#line 3499 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 259 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  storage_class_specifier: EXTERN\n",linea, gramaticas);}
#line 3505 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 260 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  storage_class_specifier: STATIC\n",linea,gramaticas);}
#line 3511 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 261 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  storage_class_specifier: AUTO\n",linea, gramaticas);}
#line 3517 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 262 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  storage_class_specifier: REGISTER\n",linea, gramaticas);}
#line 3523 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 266 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_specifier: VOID\n",linea, gramaticas);}
#line 3529 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 267 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_specifier: CHAR\n",linea, gramaticas);}
#line 3535 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 268 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_specifier: SHORT\n",linea, gramaticas);}
#line 3541 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 269 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_specifier: INT\n",linea, gramaticas);}
#line 3547 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 270 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_specifier: LONG\n",linea, gramaticas);}
#line 3553 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 271 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_specifier: FLOAT\n",linea, gramaticas);}
#line 3559 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 272 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_specifier: DOUBLE\n",linea, gramaticas);}
#line 3565 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 273 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_specifier: SIGNED\n",linea, gramaticas);}
#line 3571 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 274 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_specifier: UNSIGNED\n",linea, gramaticas);}
#line 3577 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 275 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_specifier: struct_or_union_specifier\n",linea, gramaticas );}
#line 3583 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 276 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_specifier: enum_specifier\n",linea, gramaticas );}
#line 3589 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 281 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  struct_or_union_specifier: struct_or_union IDENTIFIER LEFT_BRACKET struct_declaration_list RIGHT_BRACKET \n",linea, gramaticas );}
#line 3595 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 282 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  struct_or_union_specifier: struct_or_union LEFT_BRACKET struct_declaration_list RIGHT_BRACKET\n",linea,gramaticas );}
#line 3601 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 283 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  struct_or_union_specifier: struct_or_union IDENTIFIER\n",linea, gramaticas);}
#line 3607 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 287 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  struct_or_union: STRUCT\n",linea, gramaticas);}
#line 3613 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 288 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  struct_or_union: UNION\n",linea, gramaticas);}
#line 3619 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 292 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  struct_declaration_list: struct_declaration\n",linea, gramaticas );}
#line 3625 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 293 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  struct_declaration_list: struct_declaration_list struct_declaration\n",linea, gramaticas );}
#line 3631 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 294 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  struct_declaration_list:  struct_declaration_list declaration_list\n",linea, gramaticas );}
#line 3637 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 298 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  struct_declaration: specifier_qualifier_list struct_declarator_list SEMICOLON\n",linea, gramaticas );memset(gramaticas,0,sizeof(gramaticas));}
#line 3643 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 299 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  struct_declaration: IDENTIFIER struct_declarator_list SEMICOLON \n",linea, gramaticas );memset(gramaticas,0,sizeof(gramaticas));}
#line 3649 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 303 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  specifier_qualifier_list: type_specifier specifier_qualifier_list\n",linea, gramaticas );}
#line 3655 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 304 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  specifier_qualifier_list: type_specifier\n",linea, gramaticas );}
#line 3661 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 306 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  specifier_qualifier_list: type_qualifier specifier_qualifier_list\n",linea,gramaticas);}
#line 3667 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 307 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  specifier_qualifier_list: type_qualifier\n",linea, gramaticas );}
#line 3673 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 312 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  struct_declarator_list: struct_declarator\n",linea, gramaticas );}
#line 3679 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 313 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  struct_declarator_list: struct_declarator_list COMMA struct_declarator\n",linea, gramaticas );}
#line 3685 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 317 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  struct_declarator: declarator\n",linea, gramaticas );}
#line 3691 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 318 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  struct_declarator: COLON constant_expression \n",linea, gramaticas );}
#line 3697 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 319 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  struct_declarator: declarator COLON constant_expression \n",linea, gramaticas);}
#line 3703 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 323 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  enum_specifier: ENUM LEFT_BRACKET enumerator_list RIGHT_BRACKET\n",linea, gramaticas);}
#line 3709 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 324 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  enum_specifier: ENUM IDENTIFIER LEFT_BRACKET enumerator_list RIGHT_BRACKET \n",linea,gramaticas);}
#line 3715 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 325 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  enum_specifier: ENUM IDENTIFIER\n",linea, gramaticas );}
#line 3721 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 329 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  enumerator_list: enumerator\n",linea, gramaticas);}
#line 3727 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 330 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  enumerator_list: enumerator_list COMMA enumerator\n",linea, gramaticas );}
#line 3733 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 334 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  enumerator: IDENTIFIER\n",linea, gramaticas);}
#line 3739 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 335 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  enumerator: IDENTIFIER EQU constant_expression\n",linea,gramaticas);}
#line 3745 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 339 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_qualifier: CONST\n",linea,gramaticas);}
#line 3751 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 340 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_qualifier: VOLATILE\n",linea, gramaticas);}
#line 3757 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 344 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  declarator: pointer direct_declarator \n",linea, gramaticas );}
#line 3763 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 345 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  declarator: direct_declarator\n",linea, gramaticas );}
#line 3769 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 346 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  declarator: direct_declarator declarator\n",linea, gramaticas );}
#line 3775 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 348 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  declarator: direct_declarator EQU initializer \n",linea, gramaticas );}
#line 3781 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 354 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_declarator: IDENTIFIER\n",linea, gramaticas);}
#line 3787 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 355 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_declarator: direct_declarator INC_OP\n",linea, gramaticas);}
#line 3793 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 356 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_declarator: direct_declarator DEC_OP\n",linea, gramaticas);}
#line 3799 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 357 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_declarator: direct_declarator DOT direct_declarator\n",linea, gramaticas);}
#line 3805 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 358 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_declarator: direct_declarator PTR_OP direct_declarator\n",linea, gramaticas);}
#line 3811 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 359 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_declarator: LEFT_PARENTHESIS declarator RIGHT_PARENTHESIS\n",linea, gramaticas );}
#line 3817 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 360 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_declarator: LEFT_PARENTHESIS declarator RIGHT_PARENTHESIS\n",linea, gramaticas );}
#line 3823 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 361 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_specifier: TYPE_NAME\n",linea,gramaticas);}
#line 3829 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 362 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_declarator: direct_declarator LEFT_SBRACKET constant_expression RIGHT_SBRACKET\n",linea,gramaticas);}
#line 3835 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 363 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_declarator: direct_declarator LEFT_SBRACKET RIGHT_SBRACKET\n",linea, gramaticas );}
#line 3841 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 365 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_declarator: direct_declarator LEFT_PARENTHESIS parameter_type_list RIGHT_PARENTHESIS\n",linea, gramaticas );}
#line 3847 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 366 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_declarator: direct_declarator LEFT_PARENTHESIS identifier_list RIGHT_PARENTHESIS\n",linea, gramaticas );}
#line 3853 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 369 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_declarator: direct_declarator LEFT_PARENTHESIS RIGHT_PARENTHESIS\n",linea,gramaticas);}
#line 3859 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 374 "parser.y" /* yacc.c:1646  */
    { printf("%d con %s  pointer: pointer_type\n",linea, gramaticas);}
#line 3865 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 375 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  pointer: pointer_type type_qualifier_list\n",linea, gramaticas );}
#line 3871 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 376 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  pointer: pointer_type pointer\n",linea, gramaticas );}
#line 3877 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 377 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  pointer: pointer_type type_qualifier_list pointer\n",linea,gramaticas);}
#line 3883 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 381 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  pointer_type: MUL\n",linea,gramaticas);}
#line 3889 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 382 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  pointer_type: BIT_AND\n",linea,gramaticas);}
#line 3895 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 383 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  pointer_type: MUL\n",linea,gramaticas);}
#line 3901 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 384 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  pointer_type: MUL\n",linea,gramaticas);}
#line 3907 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 386 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  pointer_type: BIT_AND\n",linea,gramaticas);}
#line 3913 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 390 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_qualifier_list: type_qualifier\n",linea,gramaticas );}
#line 3919 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 391 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_qualifier_list: type_qualifier_list type_qualifier\n",linea, gramaticas );}
#line 3925 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 396 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  parameter_type_list: parameter_list\n",linea, gramaticas );}
#line 3931 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 397 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  parameter_type_list: parameter_list COMMA ELLIPSIS\n",linea, gramaticas);}
#line 3937 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 403 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  parameter_declaration: declaration_specifiers declarator\n",linea, gramaticas );}
#line 3943 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 404 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  parameter_declaration: declaration_specifiers abstract_declarator\n",linea, gramaticas );}
#line 3949 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 405 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  parameter_declaration: declaration_specifiers\n",linea, gramaticas );}
#line 3955 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 406 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  parameter_declaration: declarator\n",linea, gramaticas );}
#line 3961 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 407 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  parameter_declaration: IDENTIFIER abstract_declarator\n",linea, gramaticas );}
#line 3967 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 408 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  parameter_declaration: IDENTIFIER abstract_declarator\n",linea, gramaticas);}
#line 3973 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 409 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  parameter_declaration: declaration_specifiers declarator\n",linea, gramaticas );}
#line 3979 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 411 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_expression: SIZEOF LEFT_PARENTHESIS type_name RIGHT_PARENTHESIS\n",linea, gramaticas );}
#line 3985 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 412 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_expression: SIZEOF LEFT_PARENTHESIS IDENTIFIER pointer RIGHT_PARENTHESIS\n",linea, gramaticas );}
#line 3991 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 413 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_expression: SIZEOF LEFT_PARENTHESIS IDENTIFIER RIGHT_PARENTHESIS\n",linea, gramaticas );}
#line 3997 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 418 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  identifier_list: IDENTIFIER COMMA identifier_list\n",linea, gramaticas);}
#line 4003 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 419 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  identifier_list: IDENTIFIER COMMA parameter_list\n",linea, gramaticas);}
#line 4009 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 422 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  parameter_list: parameter_declaration\n",linea, gramaticas);}
#line 4015 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 212:
#line 423 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  parameter_list: parameter_list COMMA parameter_declaration\n",linea, gramaticas);}
#line 4021 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 426 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_name: specifier_qualifier_list\n",linea, gramaticas);}
#line 4027 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 214:
#line 427 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_name: specifier_qualifier_list abstract_declarator\n",linea, gramaticas);}
#line 4033 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 215:
#line 432 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  abstract_declarator: pointer\n",linea, gramaticas);}
#line 4039 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 216:
#line 433 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  abstract_declarator: direct_abstract_declarator\n",linea, gramaticas );}
#line 4045 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 217:
#line 434 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  abstract_declarator: pointer direct_abstract_declarator\n",linea, gramaticas);}
#line 4051 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 218:
#line 438 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_abstract_declarator: LEFT_PARENTHESIS abstract_declarator RIGHT_PARENTHESIS \n",linea, gramaticas );}
#line 4057 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 219:
#line 439 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_abstract_declarator:  LEFT_SBRACKET RIGHT_SBRACKET \n",linea, gramaticas);}
#line 4063 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 220:
#line 440 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_abstract_declarator: LEFT_SBRACKET constant_expression RIGHT_SBRACKET \n",linea, gramaticas );}
#line 4069 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 221:
#line 441 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_abstract_declarator: direct_abstract_declarator LEFT_SBRACKET RIGHT_SBRACKET\n",linea, gramaticas );}
#line 4075 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 222:
#line 442 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_abstract_declarator: direct_abstract_declarator LEFT_SBRACKET constant_expression RIGHT_SBRACKET \n",linea, gramaticas );}
#line 4081 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 223:
#line 443 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_abstract_declarator: LEFT_PARENTHESIS RIGHT_PARENTHESIS\n",linea, gramaticas);}
#line 4087 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 224:
#line 444 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_abstract_declarator: LEFT_PARENTHESIS parameter_type_list RIGHT_PARENTHESIS \n",linea, gramaticas );}
#line 4093 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 225:
#line 445 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_abstract_declarator: direct_abstract_declarator LEFT_PARENTHESIS RIGHT_PARENTHESIS\n",linea,gramaticas );}
#line 4099 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 226:
#line 446 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_abstract_declarator: direct_abstract_declarator LEFT_PARENTHESIS parameter_type_list RIGHT_PARENTHESIS\n",linea,  gramaticas  );}
#line 4105 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 227:
#line 450 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  initializer: assignment_expression\n",linea, gramaticas );}
#line 4111 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 228:
#line 451 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  initializer: LEFT_BRACKET initializer_list RIGHT_BRACKET\n",linea,  gramaticas );}
#line 4117 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 229:
#line 452 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  initializer: LEFT_BRACKET initializer_list COMMA RIGHT_BRACKET\n",linea, gramaticas );}
#line 4123 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 230:
#line 456 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  initializer_list: initializer\n",linea, gramaticas);}
#line 4129 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 231:
#line 457 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  initializer_list: initializer_list COMMA initializer \n",linea, gramaticas);}
#line 4135 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 232:
#line 461 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  statement: labeled_statement\n",linea, gramaticas );}
#line 4141 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 233:
#line 462 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  statement: compound_statement\n",linea, gramaticas);}
#line 4147 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 234:
#line 463 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  statement: expression_statement\n",linea,gramaticas );}
#line 4153 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 235:
#line 464 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  statement: selection_statement\n",linea, gramaticas);}
#line 4159 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 236:
#line 465 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  statement: iteration_statement\n",linea, gramaticas );}
#line 4165 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 237:
#line 466 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  statement: jump_statement\n",linea, gramaticas );}
#line 4171 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 238:
#line 470 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  labeled_statement: IDENTIFIER COLON statement \n",linea, gramaticas );}
#line 4177 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 239:
#line 471 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  labeled_statement: CASE constant_expression COLON statement\n",linea, gramaticas );}
#line 4183 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 240:
#line 472 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  labeled_statement: DEFAULT COLON statement\n",linea, gramaticas );}
#line 4189 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 241:
#line 476 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  compound_statement: LEFT_BRACKET RIGHT_BRACKET\n",linea, gramaticas);}
#line 4195 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 242:
#line 477 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  compound_statement: LEFT_BRACKET statement_list RIGHT_BRACKET\n",linea, gramaticas );}
#line 4201 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 243:
#line 478 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  compound_statement: LEFT_BRACKET declaration_list RIGHT_BRACKET\n",linea, gramaticas);}
#line 4207 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 244:
#line 479 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  compound_statement: LEFT_BRACKET declaration_list statement_list RIGHT_BRACKET\n",linea, gramaticas);}
#line 4213 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 245:
#line 483 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  declaration_list: declaration\n",linea, gramaticas );}
#line 4219 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 246:
#line 485 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  declaration_list: declaration_list declaration\n",linea, gramaticas);}
#line 4225 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 247:
#line 486 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  declaration_list: declaration_list statement_list\n",linea, gramaticas);}
#line 4231 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 248:
#line 490 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  statement_list: statement\n",linea, gramaticas );}
#line 4237 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 250:
#line 492 "parser.y" /* yacc.c:1646  */
    {memset(gramaticas,0,sizeof(gramaticas)); printf("%d con %s  external_declaration: DEFINE define\n",linea, gramaticas);}
#line 4243 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 251:
#line 493 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  statement_list: statement_list statement\n",linea, gramaticas);}
#line 4249 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 252:
#line 494 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  statement_list: statement_list declaration_list\n",linea, gramaticas);}
#line 4255 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 253:
#line 498 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  expression_statement: SEMICOLON\n",linea, gramaticas );memset(gramaticas,0,sizeof(gramaticas));}
#line 4261 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 254:
#line 499 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  expression_statement: expression SEMICOLON \n",linea, gramaticas );memset(gramaticas,0,sizeof(gramaticas));}
#line 4267 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 255:
#line 504 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  selection_statement: IF LEFT_PARENTHESIS expression RIGHT_PARENTHESIS statement\n",linea,gramaticas);}
#line 4273 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 256:
#line 505 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  selection_statement: IF LEFT_PARENTHESIS expression RIGHT_PARENTHESIS statement ELSE statement\n",linea, gramaticas);}
#line 4279 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 257:
#line 506 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  selection_statement: SWITCH LEFT_PARENTHESIS expression RIGHT_PARENTHESIS statement\n",linea, gramaticas );}
#line 4285 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 258:
#line 510 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  iteration_statement: WHILE LEFT_PARENTHESIS expression RIGHT_PARENTHESIS statement\n",linea, gramaticas);}
#line 4291 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 259:
#line 511 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  iteration_statement: DO statement WHILE LEFT_PARENTHESIS expression RIGHT_PARENTHESIS SEMICOLON\n",linea, gramaticas);memset(gramaticas,0,sizeof(gramaticas));}
#line 4297 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 260:
#line 512 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  iteration_statement: FOR LEFT_PARENTHESIS expression_statement expression_statement RIGHT_PARENTHESIS statement\n",linea, gramaticas );}
#line 4303 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 261:
#line 513 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  iteration_statement: FOR LEFT_PARENTHESIS expression_statement expression_statement expression RIGHT_PARENTHESIS statement\n",linea, gramaticas);}
#line 4309 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 262:
#line 514 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  iteration_statement: FOR LEFT_PARENTHESIS expression_statement expression_statement expression RIGHT_PARENTHESIS statement\n",linea, gramaticas);}
#line 4315 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 263:
#line 515 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  iteration_statement: FOR LEFT_PARENTHESIS expression_statement expression_statement expression RIGHT_PARENTHESIS statement\n",linea, gramaticas);}
#line 4321 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 264:
#line 516 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  iteration_statement: WHILE LEFT_PARENTHESIS expression RIGHT_PARENTHESIS statement\n",linea, gramaticas);}
#line 4327 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 265:
#line 517 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  iteration_statement: FOR LEFT_PARENTHESIS expression_statement expression_statement RIGHT_PARENTHESIS statement\n",linea, gramaticas );}
#line 4333 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 266:
#line 518 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  iteration_statement: FOR LEFT_PARENTHESIS expression_statement expression_statement expression RIGHT_PARENTHESIS statement\n",linea, gramaticas);}
#line 4339 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 267:
#line 519 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  iteration_statement: FOR LEFT_PARENTHESIS expression_statement expression_statement expression RIGHT_PARENTHESIS statement\n",linea, gramaticas);}
#line 4345 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 268:
#line 520 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  iteration_statement: FOR LEFT_PARENTHESIS expression_statement expression_statement expression RIGHT_PARENTHESIS statement\n",linea, gramaticas);}
#line 4351 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 269:
#line 524 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  jump_statement: GOTO IDENTIFIER SEMICOLON\n",linea, gramaticas );memset(gramaticas,0,sizeof(gramaticas));}
#line 4357 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 270:
#line 525 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  jump_statement: CONTINUE SEMICOLON\n",linea, gramaticas);memset(gramaticas,0,sizeof(gramaticas));}
#line 4363 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 271:
#line 526 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  jump_statement: BREAK SEMICOLON\n",linea, gramaticas);memset(gramaticas,0,sizeof(gramaticas));}
#line 4369 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 272:
#line 527 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  jump_statement: RETURN SEMICOLON\n",linea, gramaticas);memset(gramaticas,0,sizeof(gramaticas));}
#line 4375 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 273:
#line 528 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  jump_statement: RETURN expression SEMICOLON\n",linea, gramaticas);memset(gramaticas,0,sizeof(gramaticas));}
#line 4381 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 274:
#line 532 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  translation_unit: Entre a external_declaration\n",linea, gramaticas);memset(gramaticas,0,sizeof(gramaticas));}
#line 4387 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 275:
#line 533 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  translation_unit: Entre a ciclo translation_unit\n",linea, gramaticas );memset(gramaticas,0,sizeof(gramaticas));}
#line 4393 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 276:
#line 534 "parser.y" /* yacc.c:1646  */
    {printf("%d  translation_unit: Archivo Vacío\n",linea );memset(gramaticas,0,sizeof(gramaticas));}
#line 4399 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 277:
#line 539 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  external_declaration: function_definition\n",linea, gramaticas);}
#line 4405 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 278:
#line 540 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  external_declaration: declaration\n",linea, gramaticas);}
#line 4411 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 279:
#line 541 "parser.y" /* yacc.c:1646  */
    {memset(gramaticas,0,sizeof(gramaticas)); printf("%d con %s  external_declaration: DEFINE define\n",linea, gramaticas);}
#line 4417 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 280:
#line 542 "parser.y" /* yacc.c:1646  */
    {memset(gramaticas,0,sizeof(gramaticas));printf("%d con %s  external_declaration: INCLUDE LITERALn\n",linea, gramaticas);}
#line 4423 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 281:
#line 543 "parser.y" /* yacc.c:1646  */
    {memset(gramaticas,0,sizeof(gramaticas));printf("%d con %s  external_declaration: INCLUDE LITERALn\n",linea, gramaticas);}
#line 4429 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 282:
#line 544 "parser.y" /* yacc.c:1646  */
    {memset(gramaticas,0,sizeof(gramaticas));printf("%d con %s  external_declaration: INCLUDE LITERALn\n",linea, gramaticas);}
#line 4435 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 283:
#line 545 "parser.y" /* yacc.c:1646  */
    {memset(gramaticas,0,sizeof(gramaticas));printf("%d con %s  external_declaration: INCLUDE LITERALn\n",linea, gramaticas);}
#line 4441 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 284:
#line 546 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  external_declaration: \\n \n",linea, gramaticas);}
#line 4447 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 285:
#line 547 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  external_declaration: SEMICOLON\n",linea, gramaticas);}
#line 4453 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 286:
#line 548 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  external_declaration: compound_statement\n",linea, gramaticas);}
#line 4459 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 287:
#line 552 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  define: define_enter\n",linea, gramaticas);}
#line 4465 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 288:
#line 553 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  define: define_options define\n",linea, gramaticas);}
#line 4471 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 372:
#line 645 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  function_definition: declaration_specifiers declarator declaration_list compound_statement\n",linea,gramaticas);}
#line 4477 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 373:
#line 646 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  function_definition: declaration_specifiers declarator compound_statement \n",linea, gramaticas);}
#line 4483 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 374:
#line 647 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  function_definition: declarator declaration_list compound_statement\n",linea, gramaticas );}
#line 4489 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 375:
#line 648 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  function_definition: declarator compound_statement\n",linea,gramaticas);}
#line 4495 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 376:
#line 649 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  function_definition: declarator declaration_list compound_statement function_definition\n",linea,gramaticas);}
#line 4501 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 377:
#line 650 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  function_definition:declaration_specifiers direct_declarator declaration_specifiers declaration compound_statement\n",linea,gramaticas);}
#line 4507 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 378:
#line 651 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  function_definition: declaration_specifiers direct_declarator declaration_specifiers declaration\n",linea,gramaticas);}
#line 4513 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 379:
#line 652 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  function_definition: declaration_specifiers direct_declarator declaration_specifiers declaration compound_statement  \n",linea,gramaticas);}
#line 4519 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 380:
#line 653 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  function_definition: direct_declarator declaration_specifiers direct_declarator declaration_specifiers declaration\n",linea,gramaticas);}
#line 4525 "parser.tab.c" /* yacc.c:1646  */
    break;


#line 4529 "parser.tab.c" /* yacc.c:1646  */
        default: break;
      }
    if (yychar_backup != yychar)
      YY_LAC_DISCARD ("yychar change");
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
                                        yyesa, &yyes, &yyes_capacity, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        if (yychar != YYEMPTY)
          YY_LAC_ESTABLISH;
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

  /* If the stack popping above didn't lose the initial context for the
     current lookahead token, the shift below will for sure.  */
  YY_LAC_DISCARD ("error recovery");

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

#if 1
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
  if (yyes != yyesa)
    YYSTACK_FREE (yyes);
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 656 "parser.y" /* yacc.c:1906  */


#include<stdio.h>
#include <stdbool.h>
