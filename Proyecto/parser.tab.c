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
#define YYFINAL  253
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   4344

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  90
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  67
/* YYNRULES -- Number of rules.  */
#define YYNRULES  378
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  640

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
     206,   207,   208,   209,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   224,   225,   230,   231,   235,   236,
     237,   239,   244,   245,   246,   247,   248,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   267,   268,
     269,   273,   274,   278,   279,   280,   284,   285,   289,   290,
     292,   293,   298,   299,   303,   304,   305,   309,   310,   311,
     315,   316,   320,   321,   325,   326,   330,   331,   332,   334,
     340,   341,   342,   343,   344,   345,   346,   347,   348,   349,
     351,   352,   354,   359,   360,   361,   362,   366,   367,   368,
     369,   370,   371,   375,   376,   381,   382,   388,   389,   390,
     391,   392,   393,   396,   397,   398,   399,   403,   404,   407,
     408,   411,   412,   417,   418,   419,   423,   424,   425,   426,
     427,   428,   429,   430,   431,   435,   436,   437,   441,   442,
     446,   447,   448,   449,   450,   451,   455,   456,   457,   461,
     462,   463,   464,   468,   470,   471,   475,   476,   477,   478,
     479,   483,   484,   488,   489,   490,   494,   495,   496,   497,
     498,   499,   500,   501,   502,   503,   504,   508,   509,   510,
     511,   512,   516,   517,   518,   523,   524,   525,   526,   527,
     528,   529,   530,   531,   532,   536,   537,   544,   545,   546,
     547,   548,   549,   550,   551,   552,   553,   554,   555,   556,
     557,   558,   559,   560,   561,   562,   563,   564,   565,   566,
     567,   568,   569,   570,   571,   572,   573,   574,   575,   576,
     577,   578,   579,   580,   581,   582,   583,   584,   585,   586,
     587,   588,   589,   590,   591,   592,   593,   594,   595,   596,
     597,   598,   599,   600,   601,   602,   603,   604,   605,   606,
     607,   608,   609,   610,   611,   612,   613,   614,   615,   616,
     617,   618,   619,   620,   621,   622,   623,   624,   625,   626,
     629,   630,   631,   632,   633,   634,   635,   636,   637
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

#define YYPACT_NINF -493

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-493)))

#define YYTABLE_NINF -373

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    2134,    52,  1274,  1361,  3390,  -493,     7,    59,  -493,  -493,
    -493,  -493,  -493,  -493,  -493,  -493,  -493,  -493,  -493,  -493,
    -493,  -493,  -493,  -493,  -493,  -493,  -493,    51,  -493,  -493,
     351,   124,  -493,  2208,  2724,  -493,    58,   278,  -493,  2208,
    2449,  3370,    13,    21,  2724,  -493,  1113,  -493,  -493,  -493,
      15,  -493,  -493,  -493,  -493,  -493,  -493,  -493,  -493,  -493,
    -493,  -493,  -493,  -493,  -493,  -493,  -493,  -493,  -493,  -493,
    -493,  -493,  -493,  -493,  -493,  -493,  -493,  -493,  -493,  -493,
    -493,  -493,  -493,  -493,  -493,  -493,  -493,  -493,  -493,  -493,
    -493,  -493,  -493,  -493,  -493,  -493,  -493,  -493,  -493,  -493,
    -493,  -493,  -493,  -493,  -493,  -493,  -493,  -493,  -493,  -493,
    -493,  -493,  -493,  -493,  -493,  -493,  -493,  -493,  -493,  -493,
    -493,  -493,  -493,  -493,  -493,  -493,  -493,  -493,  -493,  -493,
    -493,  -493,  -493,  -493,  -493,  -493,  1274,  -493,  1274,  1447,
    -493,  2668,  -493,  -493,  -493,    76,  -493,  -493,    37,   408,
     446,  -493,  4075,  -493,  4108,  4108,  4141,    54,    96,   100,
     126,  2143,   141,   130,    72,   165,  3473,   308,   215,  1039,
    4141,  -493,   517,   315,   337,   112,   346,   149,   170,   174,
     160,    38,  -493,  -493,   152,  -493,   351,  3557,   727,    28,
    -493,  -493,  -493,  1533,  1619,  -493,  -493,  -493,  -493,   798,
     202,  3475,   212,  3540,  -493,  -493,  -493,  -493,   209,   227,
    -493,  4141,   203,   240,  2522,  3370,   234,  -493,  -493,  -493,
     278,  2208,  1171,   241,  3033,  3634,    22,  -493,   135,  -493,
     278,  4174,  4174,   871,  -493,   304,  -493,  1877,  3052,  3745,
      13,  4174,    13,  -493,  -493,  3456,  -493,   656,  -493,  -493,
      21,  -493,  2208,  -493,  -493,   156,  -493,  -493,  3691,   287,
     940,   788,   115,   200,  1021,  3559,  4207,  -493,   215,    99,
    2143,  2741,  -493,  -493,  -493,   940,  -493,   289,  2143,  4141,
    4141,  4141,   303,   244,  2595,   329,  -493,  -493,  -493,   222,
    -493,    99,  4240,  3778,  4141,   328,   330,  -493,  -493,  -493,
    -493,  -493,  -493,  -493,  -493,  -493,  -493,  -493,  -493,  -493,
    4141,  -493,  4141,  4141,  4141,  4141,  4141,  4141,  4141,  4141,
    4141,  4141,  4141,  4141,  4141,  4141,  4141,  4141,  4141,  4141,
    4141,  4141,  4141,  4141,  4141,  4141,  -493,  3811,  2814,   177,
    -493,  -493,  1705,  1274,  -493,  -493,  1877,  1426,  1510,   363,
     234,  -493,  -493,  -493,   368,   413,  -493,   209,  -493,  -493,
    -493,  4174,  -493,  1877,  3456,  -493,  -493,   399,  1510,  1094,
    -493,   399,  1171,  2303,  -493,   445,   370,   177,   475,  -493,
      88,   381,  -493,   393,   394,  -493,   395,   135,  3125,  3844,
    3877,  -493,  -493,   215,  -493,  1190,  1963,  -493,   830,   212,
     401,   412,  -493,   398,   656,  -493,   656,  -493,  3052,  -493,
    -493,  -493,   396,   403,   406,  -493,   419,   422,  3910,    99,
    4141,  4141,   417,  4141,  -493,   236,   433,   440,  2143,  -493,
     263,   276,   292,   450,  1877,  3943,  -493,  -493,   177,    99,
      99,  4273,  -493,  -493,   306,  -493,   231,  -493,  -493,  -493,
     149,  -493,  -493,  -493,   315,   315,   160,   304,   304,   315,
     315,   337,   337,   337,   337,   112,   112,   346,   149,   170,
     174,    62,   160,  -493,  -493,  -493,  -493,  -493,   249,  4141,
    -493,   209,   459,  -493,  -493,    29,   468,  3976,   280,  -493,
     467,  -493,   399,  -493,   372,  1877,   288,  3304,  2376,  4306,
     308,   194,   234,  1338,  3033,  -493,  -493,  -493,  2229,  -493,
    -493,  -493,   473,  -493,   474,  -493,   463,   234,  3236,  -493,
    3144,  -493,  -493,  -493,   460,   470,   479,   480,  4141,   281,
     104,   177,  -493,  -493,   490,  -493,  4141,  -493,  2143,  2143,
    2049,  4141,  1791,  4141,  4009,   177,   177,  2887,  -493,  4141,
    -493,  -493,  4141,  -493,  -493,  -493,  -493,  -493,  -493,   399,
    -493,  4141,  -493,  -493,   597,  1021,  2960,  -493,    93,   510,
    -493,  -493,  -493,  -493,  -493,  4042,  3236,  -493,   514,  -493,
     492,   493,  4141,  -493,  -493,  -493,  -493,   447,  -493,  -493,
    -493,   314,  2049,   326,  2049,   348,   236,   518,  -493,  -493,
    -493,  3310,   163,   520,  -493,   521,  -493,  -493,  -493,  3217,
     502,   504,   264,  2143,   523,  -493,  -493,  2049,  -493,  -493,
    2049,   528,  -493,  2376,   530,  -493,  -493,  -493,  -493,  -493,
    -493,  -493,  -493,  -493,  -493,  -493,  -493,  3557,  3624,  -493
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
     274,     0,     0,     0,     0,   283,   188,   187,   170,   122,
     123,   124,   125,   126,   128,   129,   130,   131,   134,   135,
     132,   133,   164,   165,   127,   141,   142,     0,   282,   276,
       0,     0,   116,   104,   106,   136,     0,   211,   137,   114,
     118,   167,     0,   183,   107,   284,     0,   272,   275,   278,
       0,   287,   288,   289,   290,   291,   292,   293,   294,   295,
     296,   297,   298,   299,   300,   301,   302,   303,   304,   305,
     306,   307,   308,   309,   310,   311,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,   333,   334,   335,
     336,   337,   338,   339,   340,   341,   342,   343,   344,   345,
     346,   347,   348,   349,   350,   351,   352,   353,   354,   355,
     356,   357,   358,   359,   360,   361,   362,   363,   364,   365,
     366,   367,   368,   369,   285,   277,     0,     4,     0,     0,
     239,     0,   251,    42,    41,    37,    39,    40,    38,     0,
       2,     3,     0,     6,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    10,    29,    43,
       0,    52,    53,    60,    63,    68,    71,    73,    75,    77,
      79,    81,    83,    96,     0,   243,     0,   118,   167,     0,
     246,   230,   231,     0,     0,   232,   233,   234,   235,     0,
       0,   106,     0,   107,   192,   189,   190,   191,     0,   159,
      99,     0,     0,     0,   118,   167,     0,   102,   105,   108,
     148,   110,     0,   140,     0,     0,   213,   212,   214,   115,
     150,     0,     0,     2,    43,   121,   373,     0,     0,     0,
       0,     0,     0,   171,   172,     0,   168,   166,   193,   185,
     184,   109,   111,     1,   273,     0,   286,   247,   239,     0,
       0,     2,     0,     0,   118,   107,     0,     2,    30,     0,
       0,     0,    34,    31,    32,     0,    98,     0,     0,     0,
       0,     0,     2,     0,     0,     0,   268,   269,   270,     0,
       7,     0,     0,     0,     0,     0,     0,    21,    22,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
       0,    33,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   252,   118,     0,    11,
     241,   244,     0,     0,   240,   249,   250,   149,   151,     0,
       0,   176,   175,   177,   162,     0,   160,     0,   155,   100,
     103,     0,   371,     0,     0,   117,   112,     0,   149,     0,
     143,     0,     0,     0,   221,     2,     0,   206,   199,   200,
     213,     0,   209,   195,     0,   217,     0,   215,     0,     0,
       0,   225,   120,    29,   119,   231,   245,   182,   170,   200,
       0,     0,   179,     0,   173,   169,   174,   378,     0,   194,
     186,   113,     0,     0,     0,    16,     0,     0,     0,     5,
       0,   177,     2,     0,   236,     2,     0,     0,     0,   238,
       0,     0,     0,     0,     0,     0,   267,   271,     9,    42,
      40,     0,    26,    17,     0,    27,     0,    19,    20,    84,
      54,    50,    51,    49,    56,    57,    55,    58,    59,    61,
      62,    64,    65,    66,    67,    69,    70,    72,    74,    76,
      78,     0,    80,    97,   242,   248,   148,   150,     0,     0,
     157,     0,     0,    83,   156,   231,   376,   118,     0,   152,
     154,   139,   170,   144,   211,   145,     0,     0,     0,     0,
      10,   213,   201,     0,     0,   197,   198,   222,     0,   216,
     218,   223,     0,   219,     0,   228,     0,     0,     0,   374,
       0,   180,   181,   178,     0,     0,     0,     0,     0,    53,
       0,     8,    45,    44,     0,    35,     0,   237,     0,     0,
       0,     0,     0,   232,     0,    13,    12,     0,    23,     0,
      18,    14,     0,   101,   163,   161,   158,   375,   377,     0,
     147,     0,   146,   138,     2,   118,     0,   202,     0,     0,
     196,   210,   224,   220,   226,     0,     0,   207,   208,   279,
       0,     0,     0,    46,    47,    48,    36,   253,   255,   262,
     256,     0,     0,     0,     0,     0,     2,     0,    28,    82,
     153,   213,     2,     0,   205,     0,   203,   227,   229,     0,
       0,     0,     0,     0,     0,   266,   261,     0,   263,   258,
       0,     0,    24,     0,     0,    35,   204,   281,   280,    15,
     254,   257,   265,   260,   264,   259,    25,   118,   107,    36
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -493,   608,  -137,  -493,   397,  -493,  -142,   137,  -249,   187,
     178,   217,  -291,   216,   218,  -240,  -493,   -33,  -205,  -493,
     519,   -76,    53,    18,   -28,   338,  -493,   420,  -493,  -493,
     190,  -360,   -14,  -354,   -29,  -493,   213,    91,   404,    81,
      70,     0,  -493,  -493,  -233,  -492,    49,    60,    11,   -30,
    -220,  -222,  -493,   483,  -493,    79,    63,     5,  -270,  -493,
    -493,  -493,  -493,   532,  -125,  -493,   179
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   167,   168,   444,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   310,
     184,   484,   185,   186,    31,    32,    33,    34,    35,    36,
     369,   370,    37,   488,   489,    38,   355,   356,    39,   187,
     188,   269,    43,   250,   381,   382,   401,   383,    44,   384,
     228,   392,   516,   190,   191,   192,   346,   396,   195,   196,
     197,   198,    46,    47,   135,   136,    48
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      42,   213,   212,   189,    42,   400,   387,   227,   194,   493,
     394,   256,   268,   257,   435,   203,   571,   496,    30,   405,
     220,   450,   200,   199,   204,   230,   391,   391,   311,  -370,
      42,   137,   224,  -370,   221,   225,   391,   226,   338,   468,
     189,    42,     6,   249,   252,     8,    42,   255,  -187,     7,
    -187,   218,   219,    29,   205,    49,   333,   229,   208,   245,
     233,   151,   251,   153,    30,   222,   193,   454,   455,   278,
      41,   335,   459,   460,   206,   207,   205,   552,   456,    45,
     277,    40,    50,   209,   334,   202,   286,  -188,   445,  -188,
     223,    22,    23,   204,   472,   393,   206,   207,   504,    29,
     215,   225,   137,   237,   604,   449,   279,  -187,  -187,   423,
     280,   214,   247,   263,     6,   585,    41,   571,  -370,   236,
       8,     7,   246,   276,   335,    45,   419,    40,   319,   320,
     473,   267,   151,   216,   153,   358,   281,   493,   217,   189,
     496,   189,   323,   324,   194,   388,  -188,  -188,   389,   386,
     442,   284,   265,   325,   326,   512,   391,   213,   212,   200,
     387,   335,   285,   403,   543,   544,   336,   292,   515,   530,
     329,   451,   452,   453,   604,   400,   412,   235,   276,   287,
     290,   413,   414,   291,     6,   391,    42,   220,    42,   330,
     227,     7,   276,   189,   189,   417,   331,   137,   342,    42,
     227,   221,   193,   252,   373,   332,   276,   225,   371,   216,
     349,   420,   216,   350,   189,    42,    42,   359,   475,   219,
     226,   251,   264,   352,   380,   293,   233,   151,   294,   153,
     226,   335,   263,   364,   357,   295,   437,   189,    42,   366,
     335,   354,   378,   551,   199,    42,   341,   263,   372,   203,
     410,   296,   297,   298,   360,     6,   378,     6,   216,   247,
     189,   418,     7,   553,     7,   252,     8,   337,   417,   246,
     411,   416,   335,   335,   538,   189,   629,   363,   532,   533,
     202,   387,   426,   251,   189,   335,   427,   539,   224,   559,
     341,   225,   584,   362,   560,   415,   246,   559,   407,     6,
     312,   335,   562,   540,   428,   379,     7,   313,   314,   315,
     404,   290,   406,   514,   291,   549,   395,   550,   270,   399,
     316,   317,   478,   335,   235,   614,   433,   318,   483,     6,
     313,   314,   315,   476,   477,   335,     7,   617,   189,   319,
     320,   264,   189,   436,   598,   502,   189,   434,   506,   349,
      42,   235,   530,   608,   476,   494,   276,   335,   371,   620,
     447,   199,   448,   189,    42,   210,   211,    42,   502,    42,
     391,    42,     6,   501,   353,   226,   321,   322,   380,     7,
     503,   387,   504,     8,   203,   225,   583,   211,    42,   327,
     328,   378,   507,     6,   533,    42,   189,   479,   226,   341,
       7,   235,   508,   554,     8,   509,   378,   510,    42,   199,
     523,   137,   521,   517,   211,   259,   341,   486,   266,   202,
       6,   480,   481,   522,   201,   534,   378,     7,   524,     6,
     421,     8,   495,   527,   189,   525,     7,   234,   526,   542,
     267,   151,   485,   153,   535,   487,   276,   248,   490,   417,
     247,   536,   490,  -170,   399,   224,   457,   458,   225,   505,
     541,   270,  -170,  -170,   227,    41,     6,   556,   481,   379,
     263,   574,   575,     7,   235,     3,   518,  -170,  -170,  -170,
    -170,  -170,   561,   494,   572,   504,   573,   341,   225,   379,
     580,   579,    42,   582,   380,   189,     6,    42,   501,   581,
     292,   586,    42,     7,   380,   465,   466,     8,    42,   265,
     461,   462,   463,   464,   569,   203,   378,    42,    42,   599,
      42,   606,   378,   609,   610,   611,   378,   613,   276,   622,
     600,   625,   626,   627,   502,   628,   312,   631,   378,   636,
     189,   639,   189,   313,   314,   315,   467,   469,   341,   272,
     470,   273,   274,   234,   365,   529,   316,   317,   597,    42,
     495,   201,   497,   318,   601,   557,   558,   234,   605,   577,
     482,   247,   555,   490,   519,   490,    42,   603,   254,   565,
     578,   237,     0,   567,   234,   399,     0,   215,     0,   379,
       0,     0,   189,   589,   189,   263,   621,   236,   576,     0,
       0,   379,   624,   348,  -170,     0,     0,   224,   234,    42,
     225,   234,  -170,  -170,  -170,     0,     0,   189,     6,   347,
     189,     0,   234,   501,   235,     7,   348,   378,     0,   417,
    -170,  -170,  -170,     0,   638,     0,   234,     0,   252,   363,
     490,   378,   368,     0,   283,   615,     0,   618,     0,     0,
       0,     0,     0,     0,   409,   362,   251,     0,   201,     0,
     262,   234,     0,     0,   348,     0,   408,     0,     0,   239,
     632,     0,     0,   634,     0,   348,   240,   345,     0,   348,
     347,     0,     0,     0,     0,   289,     0,     0,     0,   234,
     379,   368,   242,   243,   244,   368,     0,     0,     0,     0,
       0,     0,   235,     0,   637,     0,     0,     0,     0,   234,
     234,   234,   234,   234,   234,   234,   234,   234,   234,   234,
     234,   234,   234,   234,   234,   234,   234,   234,   234,   234,
       0,   234,     0,     0,   234,     0,     0,   238,   529,     0,
     239,     0,   348,     0,     0,     0,     0,   240,     6,     0,
       0,   348,   348,   424,     0,     7,   241,     0,   347,     8,
       0,   429,     0,   242,   243,   244,     0,   368,   368,     0,
       0,     0,   348,     0,   235,     0,   348,     0,     0,   262,
       0,     0,     0,     0,     0,   262,   234,     0,   368,     0,
     262,     0,   368,   201,   262,  -170,     0,   339,   430,   431,
     432,     0,     0,  -170,  -170,  -170,     0,     0,   199,     6,
       0,     0,     0,   446,     0,   234,     7,   234,   234,     6,
     417,  -170,  -170,  -170,     0,   345,     7,     0,     0,     0,
       8,     0,   377,    -2,     0,     0,    -2,     0,   548,   520,
     224,    -2,     0,   225,     0,     0,   377,     0,     0,     0,
       0,     6,   471,     0,     0,     0,     0,   262,     7,     0,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,     0,     0,   234,   339,  -170,   345,
       0,     0,     0,     0,   234,     0,  -170,  -170,  -170,     0,
       0,     0,   262,     0,     0,     0,   272,     0,     0,   438,
       0,     0,     0,  -170,  -170,  -170,  -170,   348,     0,     0,
       0,   537,     0,     0,     0,     0,     0,     0,   201,     0,
       0,     0,     0,   368,   201,   234,     0,     0,     0,     0,
       0,     0,     0,   234,     0,     0,     0,     0,     0,     0,
       0,     0,   262,   137,     0,     0,     0,   259,     0,   234,
     260,   348,     0,     0,     0,     0,   143,   144,   234,     0,
       0,   145,   234,     0,   146,   147,     0,   368,   148,   149,
     348,     0,   261,   151,   152,   153,     0,   154,   155,     0,
       0,   500,     0,     0,     0,     0,   368,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   377,     0,   234,     0,
       0,     0,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,   377,   262,     0,     0,
       0,   587,   588,   590,   137,   345,     0,   531,   259,     0,
       0,   275,   352,     0,   234,     0,   231,   143,   144,     0,
       0,     0,   145,     0,     0,   146,   147,   545,   546,   148,
     232,     0,     0,   267,   151,   152,   153,     0,   154,   155,
     591,     0,   593,   595,     0,     0,   262,     0,   299,     0,
       0,     0,     0,     0,     0,   616,     0,   619,     0,     0,
       0,     0,     0,     0,     0,   262,   300,   301,   302,   303,
     304,   305,   306,   307,   308,   309,   630,     0,     0,     0,
     633,   612,   491,   635,     4,     0,   500,     0,     0,   339,
       0,     0,   377,   253,     0,     6,   377,     1,     2,     0,
       3,     0,     7,     4,     0,     0,   492,     5,   377,     0,
       0,     0,     0,     0,     6,     0,     0,     0,     0,     0,
       0,     7,   262,     0,     0,     8,     0,     0,     0,     0,
       0,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,     0,
    -372,     0,     0,     0,  -372,     0,     0,     0,     0,     0,
     199,     0,    28,   367,     0,     0,     0,     0,     0,     0,
       0,     6,     0,     0,     0,     0,     0,   377,     7,     0,
       0,     0,     8,     0,     0,     0,     0,     0,     0,     0,
       0,   500,     0,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    51,     0,  -372,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,     0,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   137,     0,   138,     0,   139,   140,
     568,   141,     0,     0,     0,   142,     0,   143,   144,     0,
       0,     0,   145,     0,     0,   146,   147,     0,     0,   148,
     149,     0,     0,   150,   151,   152,   153,     0,   154,   155,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,     0,     0,     0,     0,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,   351,   156,   157,
     158,     0,   159,   160,   161,   162,   163,   164,   165,   166,
     137,     0,   138,     0,   139,   258,     0,   141,     0,     0,
       0,   142,     0,   143,   144,     0,     0,     0,   145,     0,
       0,   146,   147,     0,     0,   148,   149,     0,     0,   150,
     151,   152,   153,     0,   154,   155,     0,     0,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,     0,     0,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,     0,   156,   157,   158,     0,   159,   160,
     161,   162,   163,   164,   165,   166,   137,     0,   138,     0,
     139,   340,     0,   141,     0,     0,     0,   142,     0,   143,
     144,     0,     0,     0,   145,     0,     0,   146,   147,     0,
       0,   148,   149,     0,     0,   150,   151,   152,   153,     0,
     154,   155,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,     0,     0,     0,     0,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,     0,
     156,   157,   158,     0,   159,   160,   161,   162,   163,   164,
     165,   166,   137,     0,   343,     0,   139,   344,     0,   141,
       0,     0,     0,   142,     0,   143,   144,     0,     0,     0,
     145,     0,     0,   146,   147,     0,     0,   148,   149,     0,
       0,   150,   151,   152,   153,     0,   154,   155,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,     0,   156,   157,   158,     0,
     159,   160,   161,   162,   163,   164,   165,   166,   137,     0,
     343,     0,   139,   474,     0,   141,     0,     0,     0,   142,
       0,   143,   144,     0,     0,     0,   145,     0,     0,   146,
     147,     0,     0,   148,   149,     0,     0,   150,   151,   152,
     153,     0,   154,   155,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,     0,   156,   157,   158,     0,   159,   160,   161,   162,
     163,   164,   165,   166,   137,     0,   343,     0,   139,     0,
       0,   141,   592,     0,     0,   142,     0,   143,   144,     0,
       0,     0,   145,     0,     0,   146,   147,     0,     0,   148,
     149,     0,     0,   150,   151,   152,   153,     0,   154,   155,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,     0,   156,   157,
     158,     0,   159,   160,   161,   162,   163,   164,   165,   166,
     137,     0,   138,     0,   139,     0,     0,   141,     0,     0,
       0,   142,     0,   143,   144,     0,     0,     0,   145,     0,
       0,   146,   147,     0,     0,   148,   149,     0,     0,   150,
     151,   152,   153,     0,   154,   155,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,     0,   156,   157,   158,     0,   159,   160,
     161,   162,   163,   164,   165,   166,   137,     0,   343,     0,
     139,     0,     0,   141,     0,     0,     0,   142,     0,   143,
     144,     0,     0,     0,   145,     0,     0,   146,   147,     0,
       0,   148,   149,     0,     0,   150,   151,   152,   153,     0,
     154,   155,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,     0,
     156,   157,   158,     0,   159,   160,   161,   162,   163,   164,
     165,   166,   137,     0,     0,     0,   139,     0,     0,   141,
       0,     0,     0,   142,     0,   143,   144,     0,     0,     0,
     145,     0,     0,   146,   147,     0,     0,   148,   149,     0,
       0,   150,   151,   152,   153,     0,   154,   155,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,     0,   156,   157,   158,     0,
     159,   160,   161,   162,   163,   164,   165,   166,     1,     2,
       0,     3,     0,     0,     4,     0,   137,     0,     5,     0,
     139,     0,     0,   275,     0,     6,     0,   142,     0,   143,
     144,     0,     7,     0,   145,     0,     8,   146,   147,     0,
       0,   148,   149,     0,     0,   282,   151,   152,   153,     0,
     154,   155,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     156,   157,   158,    28,   159,   160,   161,   162,   163,   164,
     165,   166,   137,     0,     0,     0,     0,     0,     0,   338,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       6,     0,     0,     0,     0,     0,     0,     7,     0,     0,
       0,   375,   151,   376,   153,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,     0,     0,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,   570,   137,     0,     0,     0,
     259,     0,     0,   498,   374,     0,   225,     0,     0,   143,
     144,     0,     0,     0,   145,     0,     0,   146,   147,     0,
       0,   148,   149,     0,     0,   375,   151,   499,   153,     0,
     154,   155,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,   137,
       0,     0,     0,   259,     0,     0,   498,   374,     0,   225,
       0,     0,   143,   144,     0,     0,     0,   145,     0,     0,
     146,   147,     0,     0,   148,   149,     0,     0,   564,   151,
     499,   153,     0,   154,   155,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,   137,     0,     0,     0,   139,     0,     0,   141,
       0,     0,     0,     0,   231,   143,   144,     0,     0,     0,
     145,     0,     0,   146,   147,     0,     0,   148,   232,     0,
       0,   233,   151,   152,   153,     0,   154,   155,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,   137,     0,     0,     0,   139,
       0,     0,   141,     0,     0,     0,     0,   361,   143,   144,
       0,     0,     0,   145,     0,     0,   146,   147,     0,     0,
     148,   232,     0,     0,   233,   151,   152,   153,     0,   154,
     155,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,   137,     0,
       0,     0,   259,     0,     0,   141,     0,     0,     0,   142,
       0,   143,   144,     0,     0,     0,   145,     0,     0,   146,
     147,     0,     0,   148,   149,     0,     0,   233,   151,   152,
     153,     0,   154,   155,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,   137,     0,     0,     0,   259,     0,     0,   260,     0,
       0,     0,     0,     0,   143,   144,     0,     0,     0,   145,
       0,     0,   146,   147,     0,     0,   148,   149,     0,     0,
     261,   151,   152,   153,     0,   154,   155,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,   137,     6,     0,     0,   259,     0,
       0,   275,     7,     0,     0,     0,     0,   143,   144,     0,
       0,     0,   145,     0,     0,   146,   147,     0,     0,   148,
     149,     0,     0,   425,   151,   152,   153,     0,   154,   155,
       0,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
       0,     0,     0,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,   137,     0,     0,
       0,   259,     0,     0,   260,     0,     0,     0,     0,     0,
     143,   144,     0,     0,     0,   145,     0,     0,   146,   147,
       0,     0,   148,   149,     0,     0,   233,   151,   152,   153,
       0,   154,   155,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
     137,     0,     0,     0,   259,     0,     0,   275,     0,     0,
       0,     0,     0,   143,   144,     0,     0,     0,   145,     0,
       0,   146,   147,     0,     0,   148,   149,     0,     0,   596,
     151,   152,   153,     0,   154,   155,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,   137,     0,     0,     0,   259,     0,     0,
     275,     0,     0,     0,     0,     0,   143,   144,     0,     0,
       0,   145,     0,     0,   146,   147,     0,     0,   148,   149,
       0,     0,   602,   151,   152,   153,     0,   154,   155,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,   137,     0,     0,     0,
       0,     0,     0,   373,   374,     0,   225,     0,     0,     0,
       0,     0,     0,     0,     6,   137,     0,     0,     0,     0,
       0,     7,   338,   397,     0,   375,   151,   376,   153,     0,
       0,     0,     0,     6,     0,     0,     0,     0,     0,     0,
       7,     0,     0,     0,   398,   151,   376,   153,     0,     0,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,   137,     0,
       0,     0,     0,     0,     0,   338,   511,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     6,   137,     0,     0,
       0,     0,     0,     7,   338,     0,     0,   375,   151,   376,
     153,     0,     0,     0,     0,     6,     0,     0,     0,     0,
       0,     0,     7,     0,     0,     0,   398,   151,   376,   153,
       0,     0,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
     137,     0,     0,     0,     0,     0,     0,   338,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     6,     0,
       0,     0,     0,     3,     0,     7,     4,     0,     0,   375,
     151,   376,   153,     0,     0,     0,     0,     6,     0,     0,
       0,     0,     0,     0,     7,     0,     0,     0,     8,     0,
       0,     0,     0,     0,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,   563,   137,     4,     0,     0,   259,     0,     0,
     623,   528,     0,   225,     0,     6,   143,   144,     0,     0,
       0,   145,     7,     0,   146,   147,   492,     0,   148,   149,
       0,     0,   267,   151,   152,   153,     0,   154,   155,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
     238,     0,     0,   239,     0,     0,     0,     0,     0,     0,
     240,     6,     0,     0,     0,     0,     0,     0,     7,   241,
     199,     0,     8,     0,     0,     0,   242,   243,   244,     0,
       0,     6,     0,     0,     0,     0,     0,     0,     7,     0,
       0,     0,     8,     0,     0,     0,     0,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,     0,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,     4,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   137,     6,     0,     0,
     259,     0,     0,   275,     7,     0,   351,   288,     8,   143,
     144,     0,     0,     0,   145,     0,     6,   146,   147,     0,
       0,   148,   149,     7,     0,   267,   151,   152,   153,     0,
     154,   155,     0,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,   353,     0,     0,     0,     0,     0,     0,     0,     0,
     137,     6,     0,     0,   259,     0,     0,   275,     7,     0,
     421,     0,   231,   143,   144,     0,     0,     0,   145,     0,
       6,   146,   147,     0,     0,   148,   232,     7,     0,   267,
     151,   152,   153,     0,   154,   155,     0,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,   536,     0,   137,     0,     0,
       0,   259,     0,     0,   275,     6,   385,     0,     0,     0,
     143,   144,     7,     0,     0,   145,     0,     0,   146,   147,
       0,     0,   148,   149,     0,     0,   267,   151,   152,   153,
       0,   154,   155,     0,     0,     0,     0,     0,     0,     0,
       0,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
     -16,   -16,     0,     0,   -16,   -16,     0,     0,     0,   -16,
     -16,   -16,   -16,   -16,     0,   -16,   -16,   -16,   -16,   -16,
     -16,   -16,   -16,     0,     0,     0,     0,   -16,   -16,   -16,
     -16,   -16,   -16,   -16,   -16,   -16,   -16,   -16,   -16,   -16,
     -16,   -16,   -16,   -16,   -16,   -16,   -16,   -16,   137,     0,
       0,     0,   259,     0,     0,   275,     0,   402,     0,     0,
       0,   143,   144,     0,     0,     0,   145,     0,     0,   146,
     147,     0,     0,   148,   149,     0,     0,   267,   151,   152,
     153,   137,   154,   155,     0,   259,     0,     0,   275,   443,
       0,     0,     0,     0,   143,   144,     0,     0,     0,   145,
       0,     0,   146,   147,     0,     0,   148,   149,     0,     0,
     267,   151,   152,   153,   137,   154,   155,     0,   259,     0,
       0,   275,     0,     0,     0,     0,   361,   143,   144,     0,
       0,     0,   145,     0,     0,   146,   147,     0,     0,   148,
     232,     0,     0,   267,   151,   152,   153,   137,   154,   155,
       0,   259,     0,     0,   275,     0,   513,     0,     0,     0,
     143,   144,     0,     0,     0,   145,     0,     0,   146,   147,
       0,     0,   148,   149,     0,     0,   267,   151,   152,   153,
     137,   154,   155,     0,   390,   415,     0,   275,     0,     0,
       0,     0,     0,   143,   144,     0,     0,     0,   145,     0,
       0,   146,   147,     0,     0,   148,   149,     0,     0,   267,
     151,   152,   153,   137,   154,   155,     0,   259,     0,     0,
     275,   528,     0,     0,     0,     0,   143,   144,     0,     0,
       0,   145,     0,     0,   146,   147,     0,     0,   148,   149,
       0,     0,   267,   151,   152,   153,   137,   154,   155,     0,
     259,     0,     0,   275,     0,     0,     0,   142,     0,   143,
     144,     0,     0,     0,   145,     0,     0,   146,   147,     0,
       0,   148,   149,     0,     0,   267,   151,   152,   153,   137,
     154,   155,     0,   139,     0,     0,   275,     0,     0,     0,
       0,   231,   143,   144,     0,     0,     0,   145,     0,     0,
     146,   147,     0,     0,   148,   232,     0,     0,   267,   151,
     152,   153,   137,   154,   155,     0,   259,     0,     0,   275,
     594,     0,     0,     0,     0,   143,   144,     0,     0,     0,
     145,     0,     0,   146,   147,     0,     0,   148,   149,     0,
       0,   267,   151,   152,   153,   137,   154,   155,     0,   390,
     607,     0,   275,     0,     0,     0,     0,     0,   143,   144,
       0,     0,     0,   145,     0,     0,   146,   147,     0,     0,
     148,   149,     0,     0,   267,   151,   152,   153,   137,   154,
     155,     0,   259,     0,     0,   271,     0,     0,     0,     0,
       0,   143,   144,     0,     0,     0,   145,     0,     0,   146,
     147,     0,     0,   148,   149,     0,     0,   267,   151,   152,
     153,   137,   154,   155,     0,   259,     0,     0,   266,     0,
       0,     0,     0,     0,   143,   144,     0,     0,     0,   145,
       0,     0,   146,   147,     0,     0,   148,   149,     0,     0,
     267,   151,   152,   153,   137,   154,   155,     0,   259,     0,
       0,   275,     0,     0,     0,     0,     0,   143,   144,     0,
       0,     0,   145,     0,     0,   146,   147,     0,     0,   148,
     149,     0,     0,   267,   151,   152,   153,   137,   154,   155,
       0,   390,     0,     0,   275,     0,     0,     0,     0,     0,
     143,   144,     0,     0,     0,   145,     0,     0,   146,   147,
       0,     0,   148,   149,     0,     0,   267,   151,   152,   153,
     137,   154,   155,     0,   259,     0,     0,   275,     0,     0,
       0,     0,     0,   143,   144,     0,     0,     0,   145,     0,
       0,   146,   147,     0,     0,   148,   149,     0,     0,   422,
     151,   152,   153,   137,   154,   155,     0,   259,     0,     0,
     275,     0,     0,     0,     0,     0,   439,   144,     0,     0,
       0,   145,     0,     0,   146,   440,     0,     0,   148,   149,
       0,     0,   267,   151,   441,   153,   137,   154,   155,     0,
     259,     0,     0,   547,     0,     0,     0,     0,     0,   143,
     144,     0,     0,     0,   145,     0,     0,   146,   147,     0,
       0,   148,   149,     0,     0,   267,   151,   152,   153,   137,
     154,   155,     0,   259,     0,     0,   566,     0,     0,     0,
       0,     0,   143,   144,     0,     0,     0,   145,     0,     0,
     146,   147,     0,     0,   148,   149,     0,     0,   267,   151,
     152,   153,     0,   154,   155
};

static const yytype_int16 yycheck[] =
{
       0,    30,    30,     3,     4,   238,   226,    37,     3,   369,
     232,   136,   149,   138,   284,     4,   508,   371,     0,   241,
      34,   312,     4,    10,    17,    39,   231,   232,   170,     0,
      30,     3,    10,     4,    34,    13,   241,    37,    10,   330,
      40,    41,    21,    43,    44,    32,    46,    32,    11,    28,
      13,    33,    34,     0,    17,     3,    18,    39,     7,    41,
      32,    33,    44,    35,    46,     7,     3,   316,   317,    15,
       0,     9,   321,   322,    37,    38,    17,    15,   318,     0,
     156,     0,    30,    32,    46,     4,    14,    11,   293,    13,
      32,    70,    71,    17,   334,   232,    37,    38,    10,    46,
      30,    13,     3,    40,    11,   310,    10,    70,    71,    10,
      10,    30,    42,   141,    21,    11,    46,   609,    89,    40,
      32,    28,    41,   156,     9,    46,    11,    46,    24,    25,
     335,    32,    33,     9,    35,   211,    10,   497,    14,   139,
     494,   141,    30,    31,   139,    10,    70,    71,    13,   225,
     292,    10,   141,    41,    42,   388,   361,   186,   186,   141,
     380,     9,    32,   239,   434,   435,    14,   167,   390,   418,
      21,   313,   314,   315,    11,   408,    20,    40,   211,    14,
       3,    25,    26,     6,    21,   390,   186,   201,   188,    19,
     220,    28,   225,   193,   194,    32,    22,     3,   193,   199,
     230,   201,   139,   203,    10,    45,   239,    13,   222,     9,
     199,    11,     9,    11,   214,   215,   216,    14,   343,   201,
     220,   203,   141,    11,   224,    10,    32,    33,    13,    35,
     230,     9,   260,   215,     7,    20,    14,   237,   238,   221,
       9,    32,   224,    12,    10,   245,   193,   275,     7,   238,
     250,    36,    37,    38,    14,    21,   238,    21,     9,   189,
     260,   261,    28,    14,    28,   265,    32,   186,    32,   188,
     252,   260,     9,     9,    11,   275,    12,   214,   420,   421,
     199,   501,   271,   265,   284,     9,   275,    11,    10,     9,
     237,    13,    11,   214,    14,     8,   215,     9,   245,    21,
      19,     9,    14,    11,    15,   224,    28,    26,    27,    28,
     240,     3,   242,   389,     6,     9,   237,    11,    15,   238,
      39,    40,   350,     9,   187,    11,    82,    46,   361,    21,
      26,    27,    28,   347,   348,     9,    28,    11,   338,    24,
      25,   260,   342,    14,   549,   375,   346,   284,   378,   338,
     350,   214,   601,   575,   368,   369,   389,     9,   372,    11,
      32,    10,    32,   363,   364,    14,    15,   367,   398,   369,
     575,   371,    21,   373,    11,   375,    39,    40,   378,    28,
      10,   601,    10,    32,   373,    13,   528,    15,   388,    43,
      44,   373,    11,    21,   536,   395,   396,    29,   398,   346,
      28,   264,     9,   479,    32,    11,   388,    12,   408,    10,
      12,     3,    11,   395,    15,     7,   363,   364,    10,   338,
      21,     8,     9,    11,     4,   425,   408,    28,    32,    21,
      11,    32,   369,    11,   434,    32,    28,    40,    32,   434,
      32,    33,   363,    35,    11,   364,   479,    43,   367,    32,
     380,    11,   371,     7,   373,    10,   319,   320,    13,   378,
      10,    15,    16,    17,   494,   395,    21,     8,     9,   388,
     498,     8,     9,    28,   337,     7,   395,    32,    32,    33,
      34,    35,    15,   497,    11,    10,    12,   434,    13,   408,
      20,    31,   492,    13,   494,   495,    21,   497,   498,    20,
     500,    11,   502,    28,   504,   327,   328,    32,   508,   498,
     323,   324,   325,   326,   503,   504,   498,   517,   518,   552,
     520,    11,   504,     9,    32,    32,   508,    80,   561,    11,
     559,    11,    11,    31,   564,    31,    19,    14,   520,    11,
     540,    11,   542,    26,    27,    28,   329,   331,   495,   152,
     332,   154,   155,   156,   216,   418,    39,    40,   547,   559,
     497,   141,   372,    46,   564,   486,   487,   170,   568,   520,
     357,   501,   481,   492,   395,   494,   576,   566,    46,   498,
     520,   518,    -1,   502,   187,   504,    -1,   517,    -1,   508,
      -1,    -1,   592,   540,   594,   623,   596,   518,   517,    -1,
      -1,   520,   602,   199,     7,    -1,    -1,    10,   211,   609,
      13,   214,    15,    16,    17,    -1,    -1,   617,    21,   199,
     620,    -1,   225,   623,   487,    28,   222,   609,    -1,    32,
      33,    34,    35,    -1,   623,    -1,   239,    -1,   638,   576,
     559,   623,   222,    -1,   161,   592,    -1,   594,    -1,    -1,
      -1,    -1,    -1,    -1,   250,   576,   638,    -1,   238,    -1,
     141,   264,    -1,    -1,   260,    -1,    10,    -1,    -1,    13,
     617,    -1,    -1,   620,    -1,   271,    20,   194,    -1,   275,
     260,    -1,    -1,    -1,    -1,   166,    -1,    -1,    -1,   292,
     609,   271,    36,    37,    38,   275,    -1,    -1,    -1,    -1,
      -1,    -1,   565,    -1,   623,    -1,    -1,    -1,    -1,   312,
     313,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   332,
      -1,   334,    -1,    -1,   337,    -1,    -1,    10,   601,    -1,
      13,    -1,   338,    -1,    -1,    -1,    -1,    20,    21,    -1,
      -1,   347,   348,   270,    -1,    28,    29,    -1,   338,    32,
      -1,   278,    -1,    36,    37,    38,    -1,   347,   348,    -1,
      -1,    -1,   368,    -1,   637,    -1,   372,    -1,    -1,   260,
      -1,    -1,    -1,    -1,    -1,   266,   389,    -1,   368,    -1,
     271,    -1,   372,   373,   275,     7,    -1,   189,   279,   280,
     281,    -1,    -1,    15,    16,    17,    -1,    -1,    10,    21,
      -1,    -1,    -1,   294,    -1,   418,    28,   420,   421,    21,
      32,    33,    34,    35,    -1,   342,    28,    -1,    -1,    -1,
      32,    -1,   224,     3,    -1,    -1,     6,    -1,   441,     9,
      10,    11,    -1,    13,    -1,    -1,   238,    -1,    -1,    -1,
      -1,    21,   333,    -1,    -1,    -1,    -1,   338,    28,    -1,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    -1,    -1,   479,   269,     7,   396,
      -1,    -1,    -1,    -1,   487,    -1,    15,    16,    17,    -1,
      -1,    -1,   373,    -1,    -1,    -1,   499,    -1,    -1,   291,
      -1,    -1,    -1,    32,    33,    34,    35,   503,    -1,    -1,
      -1,   428,    -1,    -1,    -1,    -1,    -1,    -1,   498,    -1,
      -1,    -1,    -1,   503,   504,   528,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   536,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   423,     3,    -1,    -1,    -1,     7,    -1,   552,
      10,   547,    -1,    -1,    -1,    -1,    16,    17,   561,    -1,
      -1,    21,   565,    -1,    24,    25,    -1,   547,    28,    29,
     566,    -1,    32,    33,    34,    35,    -1,    37,    38,    -1,
      -1,   373,    -1,    -1,    -1,    -1,   566,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   388,    -1,   601,    -1,
      -1,    -1,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,   408,   498,    -1,    -1,
      -1,   538,   539,   540,     3,   542,    -1,   419,     7,    -1,
      -1,    10,    11,    -1,   637,    -1,    15,    16,    17,    -1,
      -1,    -1,    21,    -1,    -1,    24,    25,   439,   440,    28,
      29,    -1,    -1,    32,    33,    34,    35,    -1,    37,    38,
     541,    -1,   543,   544,    -1,    -1,   547,    -1,    29,    -1,
      -1,    -1,    -1,    -1,    -1,   592,    -1,   594,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   566,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,   613,    -1,    -1,    -1,
     617,   582,     8,   620,    10,    -1,   498,    -1,    -1,   501,
      -1,    -1,   504,     0,    -1,    21,   508,     4,     5,    -1,
       7,    -1,    28,    10,    -1,    -1,    32,    14,   520,    -1,
      -1,    -1,    -1,    -1,    21,    -1,    -1,    -1,    -1,    -1,
      -1,    28,   623,    -1,    -1,    32,    -1,    -1,    -1,    -1,
      -1,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    -1,
       0,    -1,    -1,    -1,     4,    -1,    -1,    -1,    -1,    -1,
      10,    -1,    89,    32,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    21,    -1,    -1,    -1,    -1,    -1,   609,    28,    -1,
      -1,    -1,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   623,    -1,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,    -1,    89,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    -1,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,     3,    -1,     5,    -1,     7,     8,
      32,    10,    -1,    -1,    -1,    14,    -1,    16,    17,    -1,
      -1,    -1,    21,    -1,    -1,    24,    25,    -1,    -1,    28,
      29,    -1,    -1,    32,    33,    34,    35,    -1,    37,    38,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    -1,    -1,    -1,    -1,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    11,    77,    78,
      79,    -1,    81,    82,    83,    84,    85,    86,    87,    88,
       3,    -1,     5,    -1,     7,     8,    -1,    10,    -1,    -1,
      -1,    14,    -1,    16,    17,    -1,    -1,    -1,    21,    -1,
      -1,    24,    25,    -1,    -1,    28,    29,    -1,    -1,    32,
      33,    34,    35,    -1,    37,    38,    -1,    -1,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    -1,    -1,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    -1,    77,    78,    79,    -1,    81,    82,
      83,    84,    85,    86,    87,    88,     3,    -1,     5,    -1,
       7,     8,    -1,    10,    -1,    -1,    -1,    14,    -1,    16,
      17,    -1,    -1,    -1,    21,    -1,    -1,    24,    25,    -1,
      -1,    28,    29,    -1,    -1,    32,    33,    34,    35,    -1,
      37,    38,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    -1,    -1,    -1,    -1,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    -1,
      77,    78,    79,    -1,    81,    82,    83,    84,    85,    86,
      87,    88,     3,    -1,     5,    -1,     7,     8,    -1,    10,
      -1,    -1,    -1,    14,    -1,    16,    17,    -1,    -1,    -1,
      21,    -1,    -1,    24,    25,    -1,    -1,    28,    29,    -1,
      -1,    32,    33,    34,    35,    -1,    37,    38,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    -1,    77,    78,    79,    -1,
      81,    82,    83,    84,    85,    86,    87,    88,     3,    -1,
       5,    -1,     7,     8,    -1,    10,    -1,    -1,    -1,    14,
      -1,    16,    17,    -1,    -1,    -1,    21,    -1,    -1,    24,
      25,    -1,    -1,    28,    29,    -1,    -1,    32,    33,    34,
      35,    -1,    37,    38,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    -1,    77,    78,    79,    -1,    81,    82,    83,    84,
      85,    86,    87,    88,     3,    -1,     5,    -1,     7,    -1,
      -1,    10,    11,    -1,    -1,    14,    -1,    16,    17,    -1,
      -1,    -1,    21,    -1,    -1,    24,    25,    -1,    -1,    28,
      29,    -1,    -1,    32,    33,    34,    35,    -1,    37,    38,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    -1,    77,    78,
      79,    -1,    81,    82,    83,    84,    85,    86,    87,    88,
       3,    -1,     5,    -1,     7,    -1,    -1,    10,    -1,    -1,
      -1,    14,    -1,    16,    17,    -1,    -1,    -1,    21,    -1,
      -1,    24,    25,    -1,    -1,    28,    29,    -1,    -1,    32,
      33,    34,    35,    -1,    37,    38,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    -1,    77,    78,    79,    -1,    81,    82,
      83,    84,    85,    86,    87,    88,     3,    -1,     5,    -1,
       7,    -1,    -1,    10,    -1,    -1,    -1,    14,    -1,    16,
      17,    -1,    -1,    -1,    21,    -1,    -1,    24,    25,    -1,
      -1,    28,    29,    -1,    -1,    32,    33,    34,    35,    -1,
      37,    38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    -1,
      77,    78,    79,    -1,    81,    82,    83,    84,    85,    86,
      87,    88,     3,    -1,    -1,    -1,     7,    -1,    -1,    10,
      -1,    -1,    -1,    14,    -1,    16,    17,    -1,    -1,    -1,
      21,    -1,    -1,    24,    25,    -1,    -1,    28,    29,    -1,
      -1,    32,    33,    34,    35,    -1,    37,    38,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    -1,    77,    78,    79,    -1,
      81,    82,    83,    84,    85,    86,    87,    88,     4,     5,
      -1,     7,    -1,    -1,    10,    -1,     3,    -1,    14,    -1,
       7,    -1,    -1,    10,    -1,    21,    -1,    14,    -1,    16,
      17,    -1,    28,    -1,    21,    -1,    32,    24,    25,    -1,
      -1,    28,    29,    -1,    -1,    32,    33,    34,    35,    -1,
      37,    38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      77,    78,    79,    89,    81,    82,    83,    84,    85,    86,
      87,    88,     3,    -1,    -1,    -1,    -1,    -1,    -1,    10,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      21,    -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,    -1,
      -1,    32,    33,    34,    35,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    -1,    -1,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,     3,    -1,    -1,    -1,
       7,    -1,    -1,    10,    11,    -1,    13,    -1,    -1,    16,
      17,    -1,    -1,    -1,    21,    -1,    -1,    24,    25,    -1,
      -1,    28,    29,    -1,    -1,    32,    33,    34,    35,    -1,
      37,    38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,     3,
      -1,    -1,    -1,     7,    -1,    -1,    10,    11,    -1,    13,
      -1,    -1,    16,    17,    -1,    -1,    -1,    21,    -1,    -1,
      24,    25,    -1,    -1,    28,    29,    -1,    -1,    32,    33,
      34,    35,    -1,    37,    38,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,     3,    -1,    -1,    -1,     7,    -1,    -1,    10,
      -1,    -1,    -1,    -1,    15,    16,    17,    -1,    -1,    -1,
      21,    -1,    -1,    24,    25,    -1,    -1,    28,    29,    -1,
      -1,    32,    33,    34,    35,    -1,    37,    38,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,     3,    -1,    -1,    -1,     7,
      -1,    -1,    10,    -1,    -1,    -1,    -1,    15,    16,    17,
      -1,    -1,    -1,    21,    -1,    -1,    24,    25,    -1,    -1,
      28,    29,    -1,    -1,    32,    33,    34,    35,    -1,    37,
      38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,     3,    -1,
      -1,    -1,     7,    -1,    -1,    10,    -1,    -1,    -1,    14,
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
      -1,    -1,    28,    29,    -1,    -1,    32,    33,    34,    35,
      -1,    37,    38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
       3,    -1,    -1,    -1,     7,    -1,    -1,    10,    -1,    -1,
      -1,    -1,    -1,    16,    17,    -1,    -1,    -1,    21,    -1,
      -1,    24,    25,    -1,    -1,    28,    29,    -1,    -1,    32,
      33,    34,    35,    -1,    37,    38,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,     3,    -1,    -1,    -1,     7,    -1,    -1,
      10,    -1,    -1,    -1,    -1,    -1,    16,    17,    -1,    -1,
      -1,    21,    -1,    -1,    24,    25,    -1,    -1,    28,    29,
      -1,    -1,    32,    33,    34,    35,    -1,    37,    38,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,     3,    -1,    -1,    -1,
      -1,    -1,    -1,    10,    11,    -1,    13,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    21,     3,    -1,    -1,    -1,    -1,
      -1,    28,    10,    11,    -1,    32,    33,    34,    35,    -1,
      -1,    -1,    -1,    21,    -1,    -1,    -1,    -1,    -1,    -1,
      28,    -1,    -1,    -1,    32,    33,    34,    35,    -1,    -1,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,     3,    -1,
      -1,    -1,    -1,    -1,    -1,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    21,     3,    -1,    -1,
      -1,    -1,    -1,    28,    10,    -1,    -1,    32,    33,    34,
      35,    -1,    -1,    -1,    -1,    21,    -1,    -1,    -1,    -1,
      -1,    -1,    28,    -1,    -1,    -1,    32,    33,    34,    35,
      -1,    -1,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
       3,    -1,    -1,    -1,    -1,    -1,    -1,    10,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,    -1,
      -1,    -1,    -1,     7,    -1,    28,    10,    -1,    -1,    32,
      33,    34,    35,    -1,    -1,    -1,    -1,    21,    -1,    -1,
      -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,    32,    -1,
      -1,    -1,    -1,    -1,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,     8,     3,    10,    -1,    -1,     7,    -1,    -1,
      10,    11,    -1,    13,    -1,    21,    16,    17,    -1,    -1,
      -1,    21,    28,    -1,    24,    25,    32,    -1,    28,    29,
      -1,    -1,    32,    33,    34,    35,    -1,    37,    38,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    57,    58,    59,    60,    61,    62,    63,    64,    65,
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
      -1,    -1,    -1,    -1,    -1,    -1,     3,    21,    -1,    -1,
       7,    -1,    -1,    10,    28,    -1,    11,    14,    32,    16,
      17,    -1,    -1,    -1,    21,    -1,    21,    24,    25,    -1,
      -1,    28,    29,    28,    -1,    32,    33,    34,    35,    -1,
      37,    38,    -1,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,    21,    -1,    -1,     7,    -1,    -1,    10,    28,    -1,
      11,    -1,    15,    16,    17,    -1,    -1,    -1,    21,    -1,
      21,    24,    25,    -1,    -1,    28,    29,    28,    -1,    32,
      33,    34,    35,    -1,    37,    38,    -1,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    11,    -1,     3,    -1,    -1,
      -1,     7,    -1,    -1,    10,    21,    12,    -1,    -1,    -1,
      16,    17,    28,    -1,    -1,    21,    -1,    -1,    24,    25,
      -1,    -1,    28,    29,    -1,    -1,    32,    33,    34,    35,
      -1,    37,    38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
       9,    10,    -1,    -1,    13,    14,    -1,    -1,    -1,    18,
      19,    20,    21,    22,    -1,    24,    25,    26,    27,    28,
      29,    30,    31,    -1,    -1,    -1,    -1,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,     3,    -1,
      -1,    -1,     7,    -1,    -1,    10,    -1,    12,    -1,    -1,
      -1,    16,    17,    -1,    -1,    -1,    21,    -1,    -1,    24,
      25,    -1,    -1,    28,    29,    -1,    -1,    32,    33,    34,
      35,     3,    37,    38,    -1,     7,    -1,    -1,    10,    11,
      -1,    -1,    -1,    -1,    16,    17,    -1,    -1,    -1,    21,
      -1,    -1,    24,    25,    -1,    -1,    28,    29,    -1,    -1,
      32,    33,    34,    35,     3,    37,    38,    -1,     7,    -1,
      -1,    10,    -1,    -1,    -1,    -1,    15,    16,    17,    -1,
      -1,    -1,    21,    -1,    -1,    24,    25,    -1,    -1,    28,
      29,    -1,    -1,    32,    33,    34,    35,     3,    37,    38,
      -1,     7,    -1,    -1,    10,    -1,    12,    -1,    -1,    -1,
      16,    17,    -1,    -1,    -1,    21,    -1,    -1,    24,    25,
      -1,    -1,    28,    29,    -1,    -1,    32,    33,    34,    35,
       3,    37,    38,    -1,     7,     8,    -1,    10,    -1,    -1,
      -1,    -1,    -1,    16,    17,    -1,    -1,    -1,    21,    -1,
      -1,    24,    25,    -1,    -1,    28,    29,    -1,    -1,    32,
      33,    34,    35,     3,    37,    38,    -1,     7,    -1,    -1,
      10,    11,    -1,    -1,    -1,    -1,    16,    17,    -1,    -1,
      -1,    21,    -1,    -1,    24,    25,    -1,    -1,    28,    29,
      -1,    -1,    32,    33,    34,    35,     3,    37,    38,    -1,
       7,    -1,    -1,    10,    -1,    -1,    -1,    14,    -1,    16,
      17,    -1,    -1,    -1,    21,    -1,    -1,    24,    25,    -1,
      -1,    28,    29,    -1,    -1,    32,    33,    34,    35,     3,
      37,    38,    -1,     7,    -1,    -1,    10,    -1,    -1,    -1,
      -1,    15,    16,    17,    -1,    -1,    -1,    21,    -1,    -1,
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
      34,    35,    -1,    37,    38
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
     122,   131,     7,    32,    10,    13,   131,   139,   140,   113,
     122,    15,    29,    32,    94,    97,   145,   146,    10,    13,
      20,    29,    36,    37,    38,   113,   129,   130,   128,   131,
     133,   113,   131,     0,   153,    32,   154,   154,     8,     7,
      10,    32,   110,   114,   129,   138,    10,    32,    92,   131,
      15,    10,    94,    94,    94,    10,   107,   111,    15,    10,
      10,    10,    32,   143,    10,    32,    14,    14,    14,   110,
       3,     6,   131,    10,    13,    20,    36,    37,    38,    29,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
     109,    96,    19,    26,    27,    28,    39,    40,    46,    24,
      25,    39,    40,    30,    31,    41,    42,    43,    44,    21,
      19,    22,    45,    18,    46,     9,    14,   129,    10,    91,
       8,   112,   147,     5,     8,   143,   146,   117,   128,   138,
      11,    11,    11,    11,    32,   126,   127,     7,   111,    14,
      14,    15,   145,   146,   113,   115,   113,    32,   117,   120,
     121,   122,     7,    10,    11,    32,    34,    91,   113,   129,
     131,   134,   135,   137,   139,    12,   111,   140,    10,    13,
       7,   108,   141,    92,   141,   145,   147,    11,    32,   129,
     134,   136,    12,   111,   130,   141,   130,   112,    10,   128,
     131,   113,    20,    25,    26,     8,   138,    32,   131,    11,
      11,    11,    32,    10,   143,    32,   138,   138,    15,   143,
     110,   110,   110,    82,   146,   148,    14,    14,    91,    16,
      25,    34,    96,    11,    93,   108,   110,    32,    32,   108,
     102,    96,    96,    96,    98,    98,   105,    97,    97,    98,
      98,    99,    99,    99,    99,   100,   100,   101,   102,   103,
     104,   110,   105,   108,     8,   154,   122,   122,   114,    29,
       8,     9,   126,   107,   111,   145,   112,   129,   123,   124,
     129,     8,    32,   121,   122,   146,   123,   120,    10,    34,
      91,   131,   139,    10,    10,   129,   139,    11,     9,    11,
      12,    11,   134,    12,   111,   141,   142,   113,   129,   156,
       9,    11,    11,    12,    32,    32,    32,    11,    11,    97,
      98,    91,    96,    96,   131,    11,    11,   143,    11,    11,
      11,    10,   147,   148,   148,    91,    91,    10,    94,     9,
      11,    12,    15,    14,   111,   127,     8,   145,   145,     9,
      14,    15,    14,     8,    32,   129,    10,   129,    32,   138,
      76,   135,    11,    12,     8,     9,   129,   136,   137,    31,
      20,    20,    13,    96,    11,    11,    11,   143,   143,   112,
     143,   110,    11,   110,    11,   110,    32,   138,   108,   107,
     124,   131,    32,   138,    11,   131,    11,     8,   141,     9,
      32,    32,   110,    80,    11,   112,   143,    11,   112,   143,
      11,   131,    11,    10,   131,    11,    11,    31,    31,    12,
     143,    14,   112,   143,   112,   143,    11,   129,   138,    11
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
     112,   112,   112,   112,   113,   113,   113,   113,   113,   113,
     113,   113,   113,   113,   113,   113,   114,   114,   115,   115,
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
     151,   151,   152,   152,   152,   153,   153,   153,   153,   153,
     153,   153,   153,   153,   153,   154,   154,   155,   155,   155,
     155,   155,   155,   155,   155,   155,   155,   155,   155,   155,
     155,   155,   155,   155,   155,   155,   155,   155,   155,   155,
     155,   155,   155,   155,   155,   155,   155,   155,   155,   155,
     155,   155,   155,   155,   155,   155,   155,   155,   155,   155,
     155,   155,   155,   155,   155,   155,   155,   155,   155,   155,
     155,   155,   155,   155,   155,   155,   155,   155,   155,   155,
     155,   155,   155,   155,   155,   155,   155,   155,   155,   155,
     155,   155,   155,   155,   155,   155,   155,   155,   155,   155,
     156,   156,   156,   156,   156,   156,   156,   156,   156
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
       3,     5,     2,     3,     1,     2,     1,     1,     2,     2,
       2,     2,     3,     3,     1,     2,     1,     3,     1,     3,
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
       2,     3,     1,     2,     0,     1,     1,     2,     2,     6,
       8,     8,     1,     1,     1,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       4,     3,     3,     2,     4,     5,     4,     5,     3
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
#line 2517 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 40 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  primary_expression: CONSTANT FINAL\n",linea,  gramaticas );}
#line 2523 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 41 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  LITERAL FINAL\n",linea, gramaticas );}
#line 2529 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 42 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  primary_expression: LEFT_PARENTHESIS FINAL expression RIGHT_PARETHESIS\n",linea, gramaticas);}
#line 2535 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 43 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  primary_expression: INTEGER FINAL\n",linea, gramaticas );}
#line 2541 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 44 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  LITERAL FINAL\n",linea, gramaticas );}
#line 2547 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 45 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  LITERAL FINAL\n",linea, gramaticas );}
#line 2553 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 46 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  primary_expression SLASH primary_expression\n",linea, gramaticas );}
#line 2559 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 51 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  postfix_expression: primary_expression\n",linea, gramaticas );}
#line 2565 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 52 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  postfix_expression: pointer primary_expression\n",linea, gramaticas);}
#line 2571 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 53 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  postfix_expression: primary_expression pointer primary_expression \n",linea, gramaticas );}
#line 2577 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 54 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  postfix_expression: primary_expression pointer primary_expression \n",linea, gramaticas );}
#line 2583 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 55 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  postfix_expression: postfix_expression RIGHT_SBRACKET expression LEFT_SBRACKET\n",linea, gramaticas);}
#line 2589 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 56 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  postfix_expression: postfix_expression RIGHT_SBRACKET expression LEFT_SBRACKET\n",linea, gramaticas);
}
#line 2596 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 57 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  postfix_expression: postfix_expression RIGHT_SBRACKET expression LEFT_SBRACKET\n",linea, gramaticas);}
#line 2602 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 58 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  postfix_expression: postfix_expression LEFT_PARENTHESIS RIGHT_PARENTHESIS\n",linea,gramaticas);}
#line 2608 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 59 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  postfix_expression: postfix_expression RIGHT_PARENTHESIS argument_expression_list LEFT_PARENTHESIS\n",linea, gramaticas);}
#line 2614 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 61 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  postfix_expression: postfix_expression DOT IDENTIFIER\n",linea, gramaticas);}
#line 2620 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 62 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  postfix_expression: postfix_expression PTR_OP IDENTIFIER\n",linea, gramaticas);}
#line 2626 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 63 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  postfix_expression: postfix_expression INC_OP\n",linea, gramaticas );}
#line 2632 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 64 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  postfix_expression: postfix_expression DEC_OP\n",linea, gramaticas );}
#line 2638 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 65 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_expression: SIZEOF unary_expression\n",linea, gramaticas );}
#line 2644 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 66 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_expression: SIZEOF LEFT_PARENTHESIS type_name RIGHT_PARENTHESIS\n",linea, gramaticas );}
#line 2650 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 67 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_expression: SIZEOF LEFT_PARENTHESIS type_name RIGHT_PARENTHESIS\n",linea, gramaticas );}
#line 2656 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 68 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  postfix_expression: primary_expression pointer cast_expression\n",linea, gramaticas);}
#line 2662 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 73 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  argument_expression_list: assignment_expression\n",linea, gramaticas);}
#line 2668 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 74 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  argument_expression_list: argument_expression_list COMMA assignment_expression\n",linea, gramaticas);}
#line 2674 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 78 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_expression: postfix_expression\n",linea, gramaticas );}
#line 2680 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 79 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_expression:pointer postfix_expression\n",linea, gramaticas);}
#line 2686 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 80 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_expression: INC_OP unary_expression\n",linea, gramaticas );}
#line 2692 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 81 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_expression: DEC_OP unary_expression\n",linea, gramaticas );}
#line 2698 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 82 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_expression: unary_operator cast_expression\n",linea, gramaticas );}
#line 2704 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 83 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_expression: SIZEOF unary_expression\n",linea, gramaticas );}
#line 2710 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 84 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_expression: SIZEOF LEFT_PARENTHESIS type_name RIGHT_PARENTHESIS\n",linea, gramaticas );}
#line 2716 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 85 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_expression: SIZEOF LEFT_PARENTHESIS type_name RIGHT_PARENTHESIS\n",linea, gramaticas );}
#line 2722 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 89 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_operator: BIT_AND\n",linea, gramaticas );}
#line 2728 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 90 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_operator: MUL\n",linea, gramaticas );}
#line 2734 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 91 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_operator: PLUS\n",linea, gramaticas );}
#line 2740 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 92 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_operator: MINUS\n",linea, gramaticas );}
#line 2746 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 93 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_operator: PRIME\n",linea, gramaticas );}
#line 2752 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 94 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_operator: EXCLAMATION\n",linea, gramaticas);}
#line 2758 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 98 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  cast_expression: unary_expression\n",linea, gramaticas);}
#line 2764 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 99 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  cast_expression: LEFT_PARENTHESIS type_name RIGHT_PARENTHESIS cast_expression\n",linea, gramaticas);}
#line 2770 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 100 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  cast_expression: LEFT_PARENTHESIS type_name RIGHT_PARENTHESIS cast_expression\n",linea, gramaticas);}
#line 2776 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 101 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  cast_expression: LEFT_PARENTHESIS type_name RIGHT_PARENTHESIS cast_expression\n",linea, gramaticas);}
#line 2782 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 102 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  cast_expression: LEFT_PARENTHESIS type_name RIGHT_PARENTHESIS cast_expression\n",linea, gramaticas);}
#line 2788 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 103 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  cast_expression: LEFT_PARENTHESIS type_name RIGHT_PARENTHESIS cast_expression\n",linea, gramaticas);}
#line 2794 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 110 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  multiplicative_expression: multiplicative_expression MUL cast_expression\n",linea, gramaticas );}
#line 2800 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 111 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  multiplicative_expression: multiplicative_expression DIV cast_expression\n",linea, gramaticas );}
#line 2806 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 112 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  multiplicative_expression: multiplicative_expression MOD cast_expression\n",linea,gramaticas );}
#line 2812 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 113 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  multiplicative_expression: cast_expression\n",linea, gramaticas);}
#line 2818 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 117 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  additive_expression: multiplicative_expression\n",linea,gramaticas );}
#line 2824 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 118 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  additive_expression:multiplicative_expression UP_ARROW and_expression\n",linea,gramaticas );}
#line 2830 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 119 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  additive_expression:multiplicative_expression OR_OP logical_and_expression\n",linea,gramaticas );}
#line 2836 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 120 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  shift_expression: shift_expression LEFT_OP additive_expression\n",linea, gramaticas);}
#line 2842 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 121 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  shift_expression: shift_expression LEFT_OP additive_expression\n",linea, gramaticas);}
#line 2848 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 122 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  additive_expression: additive_expression PLUS multiplicative_expression\n",linea,gramaticas) ;}
#line 2854 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 123 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  additive_expression: additive_expression MINUS multiplicative_expression\n",linea, gramaticas) ;}
#line 2860 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 127 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  shift_expression: additive_expression\n",linea, gramaticas );}
#line 2866 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 128 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  shift_expression: shift_expression LEFT_OP additive_expression\n",linea, gramaticas);}
#line 2872 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 129 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  shift_expression: shift_expression RIGHT_OP additive_expression \n",linea, gramaticas);}
#line 2878 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 133 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  relational_expression: shift_expression\n",linea, gramaticas);}
#line 2884 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 134 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  relational_expression: relational_expression LESS shift_expression\n",linea, gramaticas);}
#line 2890 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 135 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  relational_expression: relational_expression GREATER shift_expression\n",linea, gramaticas );}
#line 2896 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 136 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  relational_expression: relational_expression LE_OP shift_expression\n",linea, gramaticas);}
#line 2902 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 137 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  relational_expression: relational_expression GE_OP shift_expression\n",linea, gramaticas );}
#line 2908 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 141 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  equality_expression: relational_expression\n",linea, gramaticas);}
#line 2914 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 142 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  equality_expression: equality_expression EQ_OP relational_expression\n",linea, gramaticas );}
#line 2920 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 143 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  equality_expression: equality_expression NE_OP relational_expression\n",linea, gramaticas);}
#line 2926 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 147 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  and_expression: equality_expression\n",linea, gramaticas );}
#line 2932 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 148 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  and_expression: and_expression BIT_AND equality_expression\n",linea, gramaticas);}
#line 2938 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 152 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  exclusive_or_expression: and_expression\n",linea, gramaticas );}
#line 2944 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 153 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  exclusive_or_expression: exclusive_or_expression UP_ARROW and_expression\n",linea, gramaticas );}
#line 2950 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 157 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  inclusive_or_expression: exclusive_or_expression\n",linea, gramaticas);}
#line 2956 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 158 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  inclusive_or_expression: inclusive_or_expression BIT_OR exclusive_or_expression\n",linea, gramaticas );}
#line 2962 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 162 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  logical_and_expression: inclusive_or_expression\n",linea,gramaticas );}
#line 2968 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 163 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  logical_and_expression: logical_and_expression AND_OP inclusive_or_expression\n",linea, gramaticas);}
#line 2974 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 167 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  logical_or_expression: logical_and_expression\n",linea,gramaticas);}
#line 2980 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 168 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  logical_or_expression: logical_or_expression OR_OP logical_and_expression\n",linea, gramaticas );}
#line 2986 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 172 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  conditional_expression: logical_or_expression\n",linea, gramaticas);}
#line 2992 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 173 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  conditional_expression: logical_or_expression INTERROGATION expression COLON conditional_expression\n",linea,gramaticas);}
#line 2998 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 177 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  assignment_expression: conditional_expression\n",linea, gramaticas);}
#line 3004 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 178 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  assignment_expression: unary_expression assignment_operator assignment_expression\n",linea,gramaticas);}
#line 3010 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 182 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  assignment_operator: EQU\n",linea, gramaticas);}
#line 3016 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 183 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  assignment_operator: MUL_ASSIGN\n",linea,gramaticas );}
#line 3022 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 184 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  assignment_operator: DIV_ASSIGN\n",linea,gramaticas);}
#line 3028 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 185 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  assignment_operator: MOD_ASSIGN\n",linea,gramaticas);}
#line 3034 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 186 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  assignment_operator: ADD_ASSIGN\n",linea, gramaticas);}
#line 3040 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 187 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  assignment_operator: SUB_ASSIGN\n",linea, gramaticas);}
#line 3046 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 188 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  assignment_operator: LEFT_ASSIGN\n",linea, gramaticas);}
#line 3052 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 189 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  assignment_operator: RIGHT_ASSIGN\n",linea,gramaticas);}
#line 3058 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 190 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  assignment_operator: AND_ASSIGN\n",linea, gramaticas);}
#line 3064 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 191 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  assignment_operator: XOR_ASSIGN\n",linea, gramaticas);}
#line 3070 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 192 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  assignment_operator: OR_ASSIGN\n",linea, gramaticas);}
#line 3076 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 196 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  expression: assignment_expression\n",linea, gramaticas);}
#line 3082 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 197 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  expression: expression COMMA assignment_expression\n",linea,gramaticas);}
#line 3088 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 201 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  constant_expression: conditional_expression\n",linea, gramaticas );}
#line 3094 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 205 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  declaration: declaration_specifiers SEMICOLON \n",linea, gramaticas );memset(gramaticas,0,sizeof(gramaticas));}
#line 3100 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 206 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  declaration: declaration_specifiers init_declarator_list SEMICOLON\n",linea, gramaticas);memset(gramaticas,0,sizeof(gramaticas));}
#line 3106 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 207 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  declaration: LEFT_PARENTHESIS declaration_specifiers RIGHT_PARENTHESIS init_declarator_list SEMICOLON \n",linea, gramaticas);memset(gramaticas,0,sizeof(gramaticas));}
#line 3112 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 208 "parser.y" /* yacc.c:1646  */
    {memset(gramaticas,0,sizeof(gramaticas));printf("%d con %s  declaration: init_declarator_list SEMICOLON \n",linea, gramaticas);memset(gramaticas,0,sizeof(gramaticas));}
#line 3118 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 209 "parser.y" /* yacc.c:1646  */
    {memset(gramaticas,0,sizeof(gramaticas));printf("%d con %s  declaration: declaration_specifiers struct_declarator SEMICOLON\n",linea, gramaticas);memset(gramaticas,0,sizeof(gramaticas));}
#line 3124 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 213 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  declaration_specifiers: storage_class_specifier \n",linea, gramaticas);}
#line 3130 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 214 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  declaration_specifiers: storage_class_specifier declaration_specifiers\n",linea, gramaticas);}
#line 3136 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 215 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  declaration_specifiers: type_specifier\n",linea, gramaticas);}
#line 3142 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 217 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  declaration_specifiers: type_specifier declaration_specifiers {\n",linea, gramaticas);}
#line 3148 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 219 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  declaration_specifiers: type_specifier\n",linea, gramaticas);}
#line 3154 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 221 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  declaration_specifiers: type_specifier declaration_specifiers {\n",linea, gramaticas);}
#line 3160 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 222 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  declaration_specifiers: type_specifier declaration_specifiers {\n",linea, gramaticas);}
#line 3166 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 224 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  declaration_specifiers: type_qualifier\n",linea, gramaticas );}
#line 3172 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 225 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  declaration_specifiers: type_qualifier declaration_specifiers\n",linea, gramaticas );}
#line 3178 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 230 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  init_declarator_list: init_declarator\n",linea, gramaticas );}
#line 3184 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 231 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  init_declarator_list: init_declarator_list COMMA init_declarator\n",linea,gramaticas);}
#line 3190 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 235 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  init_declarator: declarator\n",linea, gramaticas );}
#line 3196 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 236 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  init_declarator: declarator EQU initializer\n",linea, gramaticas );}
#line 3202 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 237 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  init_declarator: declarator COLON initializer\n",linea, gramaticas );}
#line 3208 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 239 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  init_declarator: multiplicative_expression\n",linea, gramaticas );}
#line 3214 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 244 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  storage_class_specifier: TYPEDEF\n",linea, gramaticas);}
#line 3220 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 245 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  storage_class_specifier: EXTERN\n",linea, gramaticas);}
#line 3226 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 246 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  storage_class_specifier: STATIC\n",linea,gramaticas);}
#line 3232 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 247 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  storage_class_specifier: AUTO\n",linea, gramaticas);}
#line 3238 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 248 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  storage_class_specifier: REGISTER\n",linea, gramaticas);}
#line 3244 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 252 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_specifier: VOID\n",linea, gramaticas);}
#line 3250 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 253 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_specifier: CHAR\n",linea, gramaticas);}
#line 3256 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 254 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_specifier: SHORT\n",linea, gramaticas);}
#line 3262 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 255 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_specifier: INT\n",linea, gramaticas);}
#line 3268 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 256 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_specifier: LONG\n",linea, gramaticas);}
#line 3274 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 257 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_specifier: FLOAT\n",linea, gramaticas);}
#line 3280 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 258 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_specifier: DOUBLE\n",linea, gramaticas);}
#line 3286 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 259 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_specifier: SIGNED\n",linea, gramaticas);}
#line 3292 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 260 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_specifier: UNSIGNED\n",linea, gramaticas);}
#line 3298 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 261 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_specifier: struct_or_union_specifier\n",linea, gramaticas );}
#line 3304 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 262 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_specifier: enum_specifier\n",linea, gramaticas );}
#line 3310 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 267 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  struct_or_union_specifier: struct_or_union IDENTIFIER LEFT_BRACKET struct_declaration_list RIGHT_BRACKET \n",linea, gramaticas );}
#line 3316 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 268 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  struct_or_union_specifier: struct_or_union LEFT_BRACKET struct_declaration_list RIGHT_BRACKET\n",linea,gramaticas );}
#line 3322 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 269 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  struct_or_union_specifier: struct_or_union IDENTIFIER\n",linea, gramaticas);}
#line 3328 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 273 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  struct_or_union: STRUCT\n",linea, gramaticas);}
#line 3334 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 274 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  struct_or_union: UNION\n",linea, gramaticas);}
#line 3340 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 278 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  struct_declaration_list: struct_declaration\n",linea, gramaticas );}
#line 3346 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 279 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  struct_declaration_list: struct_declaration_list struct_declaration\n",linea, gramaticas );}
#line 3352 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 280 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  struct_declaration_list:  struct_declaration_list declaration_list\n",linea, gramaticas );}
#line 3358 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 284 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  struct_declaration: specifier_qualifier_list struct_declarator_list SEMICOLON\n",linea, gramaticas );memset(gramaticas,0,sizeof(gramaticas));}
#line 3364 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 285 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  struct_declaration: IDENTIFIER struct_declarator_list SEMICOLON \n",linea, gramaticas );memset(gramaticas,0,sizeof(gramaticas));}
#line 3370 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 289 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  specifier_qualifier_list: type_specifier specifier_qualifier_list\n",linea, gramaticas );}
#line 3376 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 290 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  specifier_qualifier_list: type_specifier\n",linea, gramaticas );}
#line 3382 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 292 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  specifier_qualifier_list: type_qualifier specifier_qualifier_list\n",linea,gramaticas);}
#line 3388 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 293 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  specifier_qualifier_list: type_qualifier\n",linea, gramaticas );}
#line 3394 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 298 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  struct_declarator_list: struct_declarator\n",linea, gramaticas );}
#line 3400 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 299 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  struct_declarator_list: struct_declarator_list COMMA struct_declarator\n",linea, gramaticas );}
#line 3406 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 303 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  struct_declarator: declarator\n",linea, gramaticas );}
#line 3412 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 304 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  struct_declarator: COLON constant_expression \n",linea, gramaticas );}
#line 3418 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 305 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  struct_declarator: declarator COLON constant_expression \n",linea, gramaticas);}
#line 3424 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 309 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  enum_specifier: ENUM LEFT_BRACKET enumerator_list RIGHT_BRACKET\n",linea, gramaticas);}
#line 3430 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 310 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  enum_specifier: ENUM IDENTIFIER LEFT_BRACKET enumerator_list RIGHT_BRACKET \n",linea,gramaticas);}
#line 3436 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 311 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  enum_specifier: ENUM IDENTIFIER\n",linea, gramaticas );}
#line 3442 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 315 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  enumerator_list: enumerator\n",linea, gramaticas);}
#line 3448 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 316 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  enumerator_list: enumerator_list COMMA enumerator\n",linea, gramaticas );}
#line 3454 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 320 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  enumerator: IDENTIFIER\n",linea, gramaticas);}
#line 3460 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 321 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  enumerator: IDENTIFIER EQU constant_expression\n",linea,gramaticas);}
#line 3466 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 325 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_qualifier: CONST\n",linea,gramaticas);}
#line 3472 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 326 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_qualifier: VOLATILE\n",linea, gramaticas);}
#line 3478 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 330 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  declarator: pointer direct_declarator \n",linea, gramaticas );}
#line 3484 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 331 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  declarator: direct_declarator\n",linea, gramaticas );}
#line 3490 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 332 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  declarator: direct_declarator declarator\n",linea, gramaticas );}
#line 3496 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 334 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  declarator: direct_declarator EQU initializer \n",linea, gramaticas );}
#line 3502 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 340 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_declarator: IDENTIFIER\n",linea, gramaticas);}
#line 3508 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 341 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_declarator: direct_declarator INC_OP\n",linea, gramaticas);}
#line 3514 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 342 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_declarator: direct_declarator DEC_OP\n",linea, gramaticas);}
#line 3520 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 343 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_declarator: direct_declarator DOT direct_declarator\n",linea, gramaticas);}
#line 3526 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 344 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_declarator: direct_declarator PTR_OP direct_declarator\n",linea, gramaticas);}
#line 3532 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 345 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_declarator: LEFT_PARENTHESIS declarator RIGHT_PARENTHESIS\n",linea, gramaticas );}
#line 3538 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 346 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_declarator: LEFT_PARENTHESIS declarator RIGHT_PARENTHESIS\n",linea, gramaticas );}
#line 3544 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 347 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_specifier: TYPE_NAME\n",linea,gramaticas);}
#line 3550 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 348 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_declarator: direct_declarator LEFT_SBRACKET constant_expression RIGHT_SBRACKET\n",linea,gramaticas);}
#line 3556 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 349 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_declarator: direct_declarator LEFT_SBRACKET RIGHT_SBRACKET\n",linea, gramaticas );}
#line 3562 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 351 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_declarator: direct_declarator LEFT_PARENTHESIS parameter_type_list RIGHT_PARENTHESIS\n",linea, gramaticas );}
#line 3568 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 352 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_declarator: direct_declarator LEFT_PARENTHESIS identifier_list RIGHT_PARENTHESIS\n",linea, gramaticas );}
#line 3574 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 354 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_declarator: direct_declarator LEFT_PARENTHESIS RIGHT_PARENTHESIS\n",linea,gramaticas);}
#line 3580 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 359 "parser.y" /* yacc.c:1646  */
    { printf("%d con %s  pointer: pointer_type\n",linea, gramaticas);}
#line 3586 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 360 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  pointer: pointer_type type_qualifier_list\n",linea, gramaticas );}
#line 3592 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 361 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  pointer: pointer_type pointer\n",linea, gramaticas );}
#line 3598 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 362 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  pointer: pointer_type type_qualifier_list pointer\n",linea,gramaticas);}
#line 3604 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 366 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  pointer_type: MUL\n",linea,gramaticas);}
#line 3610 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 367 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  pointer_type: BIT_AND\n",linea,gramaticas);}
#line 3616 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 368 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  pointer_type: MUL\n",linea,gramaticas);}
#line 3622 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 369 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  pointer_type: MUL\n",linea,gramaticas);}
#line 3628 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 371 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  pointer_type: BIT_AND\n",linea,gramaticas);}
#line 3634 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 375 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_qualifier_list: type_qualifier\n",linea,gramaticas );}
#line 3640 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 376 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_qualifier_list: type_qualifier_list type_qualifier\n",linea, gramaticas );}
#line 3646 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 381 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  parameter_type_list: parameter_list\n",linea, gramaticas );}
#line 3652 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 382 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  parameter_type_list: parameter_list COMMA ELLIPSIS\n",linea, gramaticas);}
#line 3658 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 388 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  parameter_declaration: declaration_specifiers declarator\n",linea, gramaticas );}
#line 3664 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 389 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  parameter_declaration: declaration_specifiers abstract_declarator\n",linea, gramaticas );}
#line 3670 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 390 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  parameter_declaration: declaration_specifiers\n",linea, gramaticas );}
#line 3676 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 391 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  parameter_declaration: declarator\n",linea, gramaticas );}
#line 3682 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 392 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  parameter_declaration: IDENTIFIER abstract_declarator\n",linea, gramaticas );}
#line 3688 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 393 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  parameter_declaration: IDENTIFIER abstract_declarator\n",linea, gramaticas
	 );}
#line 3695 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 396 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_expression: SIZEOF LEFT_PARENTHESIS type_name RIGHT_PARENTHESIS\n",linea, gramaticas );}
#line 3701 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 397 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_expression: SIZEOF LEFT_PARENTHESIS IDENTIFIER pointer RIGHT_PARENTHESIS\n",linea, gramaticas );}
#line 3707 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 398 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_expression: SIZEOF LEFT_PARENTHESIS IDENTIFIER RIGHT_PARENTHESIS\n",linea, gramaticas );}
#line 3713 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 403 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  identifier_list: IDENTIFIER COMMA identifier_list\n",linea, gramaticas);}
#line 3719 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 404 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  identifier_list: IDENTIFIER COMMA parameter_list\n",linea, gramaticas);}
#line 3725 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 407 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  parameter_list: parameter_declaration\n",linea, gramaticas);}
#line 3731 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 408 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  parameter_list: parameter_list COMMA parameter_declaration\n",linea, gramaticas);}
#line 3737 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 411 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_name: specifier_qualifier_list\n",linea, gramaticas);}
#line 3743 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 212:
#line 412 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_name: specifier_qualifier_list abstract_declarator\n",linea, gramaticas);}
#line 3749 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 417 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  abstract_declarator: pointer\n",linea, gramaticas);}
#line 3755 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 214:
#line 418 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  abstract_declarator: direct_abstract_declarator\n",linea, gramaticas );}
#line 3761 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 215:
#line 419 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  abstract_declarator: pointer direct_abstract_declarator\n",linea, gramaticas);}
#line 3767 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 216:
#line 423 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_abstract_declarator: LEFT_PARENTHESIS abstract_declarator RIGHT_PARENTHESIS \n",linea, gramaticas );}
#line 3773 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 217:
#line 424 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_abstract_declarator:  LEFT_SBRACKET RIGHT_SBRACKET \n",linea, gramaticas);}
#line 3779 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 218:
#line 425 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_abstract_declarator: LEFT_SBRACKET constant_expression RIGHT_SBRACKET \n",linea, gramaticas );}
#line 3785 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 219:
#line 426 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_abstract_declarator: direct_abstract_declarator LEFT_SBRACKET RIGHT_SBRACKET\n",linea, gramaticas );}
#line 3791 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 220:
#line 427 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_abstract_declarator: direct_abstract_declarator LEFT_SBRACKET constant_expression RIGHT_SBRACKET \n",linea, gramaticas );}
#line 3797 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 221:
#line 428 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_abstract_declarator: LEFT_PARENTHESIS RIGHT_PARENTHESIS\n",linea, gramaticas);}
#line 3803 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 222:
#line 429 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_abstract_declarator: LEFT_PARENTHESIS parameter_type_list RIGHT_PARENTHESIS \n",linea, gramaticas );}
#line 3809 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 223:
#line 430 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_abstract_declarator: direct_abstract_declarator LEFT_PARENTHESIS RIGHT_PARENTHESIS\n",linea,gramaticas );}
#line 3815 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 224:
#line 431 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_abstract_declarator: direct_abstract_declarator LEFT_PARENTHESIS parameter_type_list RIGHT_PARENTHESIS\n",linea,  gramaticas  );}
#line 3821 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 225:
#line 435 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  initializer: assignment_expression\n",linea, gramaticas );}
#line 3827 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 226:
#line 436 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  initializer: LEFT_BRACKET initializer_list RIGHT_BRACKET\n",linea,  gramaticas );}
#line 3833 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 227:
#line 437 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  initializer: LEFT_BRACKET initializer_list COMMA RIGHT_BRACKET\n",linea, gramaticas );}
#line 3839 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 228:
#line 441 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  initializer_list: initializer\n",linea, gramaticas);}
#line 3845 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 229:
#line 442 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  initializer_list: initializer_list COMMA initializer \n",linea, gramaticas);}
#line 3851 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 230:
#line 446 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  statement: labeled_statement\n",linea, gramaticas );}
#line 3857 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 231:
#line 447 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  statement: compound_statement\n",linea, gramaticas);}
#line 3863 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 232:
#line 448 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  statement: expression_statement\n",linea,gramaticas );}
#line 3869 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 233:
#line 449 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  statement: selection_statement\n",linea, gramaticas);}
#line 3875 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 234:
#line 450 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  statement: iteration_statement\n",linea, gramaticas );}
#line 3881 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 235:
#line 451 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  statement: jump_statement\n",linea, gramaticas );}
#line 3887 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 236:
#line 455 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  labeled_statement: IDENTIFIER COLON statement \n",linea, gramaticas );}
#line 3893 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 237:
#line 456 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  labeled_statement: CASE constant_expression COLON statement\n",linea, gramaticas );}
#line 3899 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 238:
#line 457 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  labeled_statement: DEFAULT COLON statement\n",linea, gramaticas );}
#line 3905 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 239:
#line 461 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  compound_statement: LEFT_BRACKET RIGHT_BRACKET\n",linea, gramaticas);}
#line 3911 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 240:
#line 462 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  compound_statement: LEFT_BRACKET statement_list RIGHT_BRACKET\n",linea, gramaticas );}
#line 3917 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 241:
#line 463 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  compound_statement: LEFT_BRACKET declaration_list RIGHT_BRACKET\n",linea, gramaticas);}
#line 3923 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 242:
#line 464 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  compound_statement: LEFT_BRACKET declaration_list statement_list RIGHT_BRACKET\n",linea, gramaticas);}
#line 3929 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 243:
#line 468 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  declaration_list: declaration\n",linea, gramaticas );}
#line 3935 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 244:
#line 470 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  declaration_list: declaration_list declaration\n",linea, gramaticas);}
#line 3941 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 245:
#line 471 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  declaration_list: declaration_list statement_list\n",linea, gramaticas);}
#line 3947 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 246:
#line 475 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  statement_list: statement\n",linea, gramaticas );}
#line 3953 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 248:
#line 477 "parser.y" /* yacc.c:1646  */
    {memset(gramaticas,0,sizeof(gramaticas)); printf("%d con %s  external_declaration: DEFINE define\n",linea, gramaticas);}
#line 3959 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 249:
#line 478 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  statement_list: statement_list statement\n",linea, gramaticas);}
#line 3965 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 250:
#line 479 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  statement_list: statement_list declaration_list\n",linea, gramaticas);}
#line 3971 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 251:
#line 483 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  expression_statement: SEMICOLON\n",linea, gramaticas );memset(gramaticas,0,sizeof(gramaticas));}
#line 3977 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 252:
#line 484 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  expression_statement: expression SEMICOLON \n",linea, gramaticas );memset(gramaticas,0,sizeof(gramaticas));}
#line 3983 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 253:
#line 488 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  selection_statement: IF LEFT_PARENTHESIS expression RIGHT_PARENTHESIS statement\n",linea,gramaticas);}
#line 3989 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 254:
#line 489 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  selection_statement: IF LEFT_PARENTHESIS expression RIGHT_PARENTHESIS statement ELSE statement\n",linea, gramaticas);}
#line 3995 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 255:
#line 490 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  selection_statement: SWITCH LEFT_PARENTHESIS expression RIGHT_PARENTHESIS statement\n",linea, gramaticas );}
#line 4001 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 256:
#line 494 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  iteration_statement: WHILE LEFT_PARENTHESIS expression RIGHT_PARENTHESIS statement\n",linea, gramaticas);}
#line 4007 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 257:
#line 495 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  iteration_statement: DO statement WHILE LEFT_PARENTHESIS expression RIGHT_PARENTHESIS SEMICOLON\n",linea, gramaticas);memset(gramaticas,0,sizeof(gramaticas));}
#line 4013 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 258:
#line 496 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  iteration_statement: FOR LEFT_PARENTHESIS expression_statement expression_statement RIGHT_PARENTHESIS statement\n",linea, gramaticas );}
#line 4019 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 259:
#line 497 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  iteration_statement: FOR LEFT_PARENTHESIS expression_statement expression_statement expression RIGHT_PARENTHESIS statement\n",linea, gramaticas);}
#line 4025 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 260:
#line 498 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  iteration_statement: FOR LEFT_PARENTHESIS expression_statement expression_statement expression RIGHT_PARENTHESIS statement\n",linea, gramaticas);}
#line 4031 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 261:
#line 499 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  iteration_statement: FOR LEFT_PARENTHESIS expression_statement expression_statement expression RIGHT_PARENTHESIS statement\n",linea, gramaticas);}
#line 4037 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 262:
#line 500 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  iteration_statement: WHILE LEFT_PARENTHESIS expression RIGHT_PARENTHESIS statement\n",linea, gramaticas);}
#line 4043 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 263:
#line 501 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  iteration_statement: FOR LEFT_PARENTHESIS expression_statement expression_statement RIGHT_PARENTHESIS statement\n",linea, gramaticas );}
#line 4049 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 264:
#line 502 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  iteration_statement: FOR LEFT_PARENTHESIS expression_statement expression_statement expression RIGHT_PARENTHESIS statement\n",linea, gramaticas);}
#line 4055 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 265:
#line 503 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  iteration_statement: FOR LEFT_PARENTHESIS expression_statement expression_statement expression RIGHT_PARENTHESIS statement\n",linea, gramaticas);}
#line 4061 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 266:
#line 504 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  iteration_statement: FOR LEFT_PARENTHESIS expression_statement expression_statement expression RIGHT_PARENTHESIS statement\n",linea, gramaticas);}
#line 4067 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 267:
#line 508 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  jump_statement: GOTO IDENTIFIER SEMICOLON\n",linea, gramaticas );memset(gramaticas,0,sizeof(gramaticas));}
#line 4073 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 268:
#line 509 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  jump_statement: CONTINUE SEMICOLON\n",linea, gramaticas);memset(gramaticas,0,sizeof(gramaticas));}
#line 4079 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 269:
#line 510 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  jump_statement: BREAK SEMICOLON\n",linea, gramaticas);memset(gramaticas,0,sizeof(gramaticas));}
#line 4085 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 270:
#line 511 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  jump_statement: RETURN SEMICOLON\n",linea, gramaticas);memset(gramaticas,0,sizeof(gramaticas));}
#line 4091 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 271:
#line 512 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  jump_statement: RETURN expression SEMICOLON\n",linea, gramaticas);memset(gramaticas,0,sizeof(gramaticas));}
#line 4097 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 272:
#line 516 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  translation_unit: Entre a external_declaration\n",linea, gramaticas);memset(gramaticas,0,sizeof(gramaticas));}
#line 4103 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 273:
#line 517 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  translation_unit: Entre a ciclo translation_unit\n",linea, gramaticas );memset(gramaticas,0,sizeof(gramaticas));}
#line 4109 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 274:
#line 518 "parser.y" /* yacc.c:1646  */
    {printf("%d  translation_unit: Archivo Vacío\n",linea );memset(gramaticas,0,sizeof(gramaticas));}
#line 4115 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 275:
#line 523 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  external_declaration: function_definition\n",linea, gramaticas);}
#line 4121 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 276:
#line 524 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  external_declaration: declaration\n",linea, gramaticas);}
#line 4127 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 277:
#line 525 "parser.y" /* yacc.c:1646  */
    {memset(gramaticas,0,sizeof(gramaticas)); printf("%d con %s  external_declaration: DEFINE define\n",linea, gramaticas);}
#line 4133 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 278:
#line 526 "parser.y" /* yacc.c:1646  */
    {memset(gramaticas,0,sizeof(gramaticas));printf("%d con %s  external_declaration: INCLUDE LITERALn\n",linea, gramaticas);}
#line 4139 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 279:
#line 527 "parser.y" /* yacc.c:1646  */
    {memset(gramaticas,0,sizeof(gramaticas));printf("%d con %s  external_declaration: INCLUDE LITERALn\n",linea, gramaticas);}
#line 4145 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 280:
#line 528 "parser.y" /* yacc.c:1646  */
    {memset(gramaticas,0,sizeof(gramaticas));printf("%d con %s  external_declaration: INCLUDE LITERALn\n",linea, gramaticas);}
#line 4151 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 281:
#line 529 "parser.y" /* yacc.c:1646  */
    {memset(gramaticas,0,sizeof(gramaticas));printf("%d con %s  external_declaration: INCLUDE LITERALn\n",linea, gramaticas);}
#line 4157 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 282:
#line 530 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  external_declaration: \\n \n",linea, gramaticas);}
#line 4163 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 283:
#line 531 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  external_declaration: SEMICOLON\n",linea, gramaticas);}
#line 4169 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 284:
#line 532 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  external_declaration: compound_statement\n",linea, gramaticas);}
#line 4175 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 285:
#line 536 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  define: define_enter\n",linea, gramaticas);}
#line 4181 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 286:
#line 537 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  define: define_options define\n",linea, gramaticas);}
#line 4187 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 370:
#line 629 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  function_definition: declaration_specifiers declarator declaration_list compound_statement\n",linea,gramaticas);}
#line 4193 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 371:
#line 630 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  function_definition: declaration_specifiers declarator compound_statement \n",linea, gramaticas);}
#line 4199 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 372:
#line 631 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  function_definition: declarator declaration_list compound_statement\n",linea, gramaticas );}
#line 4205 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 373:
#line 632 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  function_definition: declarator compound_statement\n",linea,gramaticas);}
#line 4211 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 374:
#line 633 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  function_definition: declarator declaration_list compound_statement function_definition\n",linea,gramaticas);}
#line 4217 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 375:
#line 634 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  function_definition:declaration_specifiers direct_declarator declaration_specifiers declaration compound_statement\n",linea,gramaticas);}
#line 4223 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 376:
#line 635 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  function_definition: declaration_specifiers direct_declarator declaration_specifiers declaration\n",linea,gramaticas);}
#line 4229 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 377:
#line 636 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  function_definition: declaration_specifiers direct_declarator declaration_specifiers declaration compound_statement  \n",linea,gramaticas);}
#line 4235 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 378:
#line 637 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  function_definition: direct_declarator declaration_specifiers direct_declarator declaration_specifiers declaration\n",linea,gramaticas);}
#line 4241 "parser.tab.c" /* yacc.c:1646  */
    break;


#line 4245 "parser.tab.c" /* yacc.c:1646  */
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
#line 640 "parser.y" /* yacc.c:1906  */


#include<stdio.h>
#include <stdbool.h>
