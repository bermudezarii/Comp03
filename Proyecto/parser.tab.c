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
#define YYFINAL  247
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   3945

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  90
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  67
/* YYNRULES -- Number of rules.  */
#define YYNRULES  372
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  619

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
     220,   221,   223,   224,   229,   230,   234,   235,   236,   241,
     242,   243,   244,   245,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   264,   265,   266,   270,   271,
     275,   276,   277,   281,   282,   286,   287,   289,   290,   295,
     296,   300,   301,   302,   306,   307,   308,   312,   313,   317,
     318,   322,   323,   327,   328,   329,   330,   336,   337,   338,
     339,   340,   341,   342,   343,   344,   345,   347,   348,   350,
     355,   356,   357,   358,   362,   363,   364,   365,   366,   367,
     371,   372,   377,   378,   384,   385,   386,   387,   388,   389,
     391,   392,   393,   394,   398,   399,   402,   403,   406,   407,
     412,   413,   414,   418,   419,   420,   421,   422,   423,   424,
     425,   426,   430,   431,   432,   436,   437,   441,   442,   443,
     444,   445,   446,   450,   451,   452,   456,   457,   458,   459,
     463,   465,   466,   470,   471,   472,   473,   474,   478,   479,
     483,   484,   485,   489,   490,   491,   492,   493,   494,   495,
     496,   497,   498,   499,   503,   504,   505,   506,   507,   511,
     512,   513,   518,   519,   520,   521,   522,   523,   524,   525,
     526,   530,   531,   537,   538,   539,   540,   541,   542,   543,
     544,   545,   546,   547,   548,   549,   550,   551,   552,   553,
     554,   555,   556,   557,   558,   559,   560,   561,   562,   563,
     564,   565,   566,   567,   568,   569,   570,   571,   572,   573,
     574,   575,   576,   577,   578,   579,   580,   581,   582,   583,
     584,   585,   586,   587,   588,   589,   590,   591,   592,   593,
     594,   595,   596,   597,   598,   599,   600,   601,   602,   603,
     604,   605,   606,   607,   608,   609,   610,   611,   612,   613,
     614,   615,   616,   617,   618,   619,   622,   623,   624,   625,
     626,   627,   628
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

#define YYPACT_NINF -474

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-474)))

#define YYTABLE_NINF -369

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    2019,    52,  1245,  1332,  3199,  -474,    49,    48,  -474,  -474,
    -474,  -474,  -474,  -474,  -474,  -474,  -474,  -474,  -474,  -474,
    -474,  -474,  -474,  -474,  -474,  -474,  -474,    28,  -474,  -474,
     303,   158,  -474,  2093,  3452,  -474,    44,   398,  -474,  3471,
    2334,   795,    91,    21,  2609,  -474,  1085,  -474,  -474,  -474,
      -8,  -474,  -474,  -474,  -474,  -474,  -474,  -474,  -474,  -474,
    -474,  -474,  -474,  -474,  -474,  -474,  -474,  -474,  -474,  -474,
    -474,  -474,  -474,  -474,  -474,  -474,  -474,  -474,  -474,  -474,
    -474,  -474,  -474,  -474,  -474,  -474,  -474,  -474,  -474,  -474,
    -474,  -474,  -474,  -474,  -474,  -474,  -474,  -474,  -474,  -474,
    -474,  -474,  -474,  -474,  -474,  -474,  -474,  -474,  -474,  -474,
    -474,  -474,  -474,  -474,  -474,  -474,  -474,  -474,  -474,  -474,
    -474,  -474,  -474,  -474,  -474,  -474,  -474,  -474,  -474,  -474,
    -474,  -474,  -474,  -474,  -474,  -474,  1245,  -474,  1245,  -474,
    2480,  -474,  -474,  -474,    66,  -474,  -474,    37,    78,   590,
    -474,  3709,  -474,  3742,  3742,  3775,    88,   106,   141,   172,
    2028,   194,    95,   199,   223,  1098,    84,   225,   481,  3775,
    -474,   414,   145,   385,   108,   415,   265,   273,   288,   251,
      43,  -474,  -474,   184,  -474,   303,  3808,   122,  -474,  -474,
    -474,  1418,  1504,  -474,  -474,  -474,  -474,   653,   316,  3284,
     329,  3349,  -474,  -474,  -474,  -474,   282,   343,  -474,   205,
    2334,  3179,   174,  -474,  -474,  -474,   398,  2093,  1309,   349,
    2553,  1178,    12,  -474,    60,  -474,   398,  3119,   613,  -474,
     341,  -474,  1762,   808,  3282,    91,  3119,    91,  -474,  -474,
    -474,   394,  -474,  -474,    21,  -474,  2093,  -474,  -474,    76,
    -474,  -474,   964,   644,   150,   219,  3544,  3368,  3841,  -474,
     225,   215,  2028,  2626,  -474,  -474,  -474,   964,  -474,   350,
    2028,  3775,  3775,  3775,   362,   298,  2407,   392,  -474,  -474,
    -474,   237,  -474,   215,   670,  3577,  3775,   380,   413,  -474,
    -474,  -474,  -474,  -474,  -474,  -474,  -474,  -474,  -474,  -474,
    -474,  -474,  3775,  -474,  3775,  3775,  3775,  3775,  3775,  3775,
    3775,  3775,  3775,  3775,  3775,  3775,  3775,  3775,  3775,  3775,
    3775,  3775,  3775,  3775,  3775,  3775,  3775,  3775,  -474,  2699,
     252,  -474,  -474,  1590,  1245,  -474,  -474,  1762,   994,  1481,
     432,   174,  -474,  -474,  -474,   418,   462,  -474,   282,  -474,
    -474,  1762,  3265,  -474,  -474,   436,  1481,  3045,  -474,   436,
    1309,  2188,  -474,   332,   439,   252,   583,  -474,    87,   441,
    -474,   452,   454,  -474,   451,    60,  2865,  3366,  3119,   225,
    -474,  -474,  1161,  1848,  -474,  1936,   329,   456,   461,  -474,
     466,   394,  -474,   394,   808,  -474,  -474,  -474,   449,   464,
     472,   486,  3610,   215,  3775,  3775,   469,  3775,  -474,   370,
     487,   493,  2028,  -474,   327,   337,   377,   496,  1762,  3643,
    -474,  -474,   252,   215,   215,  3874,   252,  -474,   404,  -474,
     285,  -474,  -474,  -474,   265,  -474,  -474,  -474,   145,   145,
     251,   341,   341,   145,   145,   385,   385,   385,   385,   108,
     108,   415,   265,   273,   288,   115,   251,  -474,  -474,  -474,
    -474,  -474,   245,  3775,  -474,   282,   480,    32,   501,  3775,
     259,  -474,   497,  -474,   436,  -474,   168,  1762,   269,  3113,
    2261,  3907,    84,   155,   479,  1395,  2553,  -474,  -474,  -474,
    2114,  -474,  -474,  -474,   503,  -474,   504,  -474,   484,   174,
    3026,  -474,  2938,  -474,  -474,  -474,   488,   500,   509,  3775,
     107,   117,   252,  -474,  -474,   506,  -474,  3775,  -474,  2028,
    2028,  1934,  3775,  1676,  3775,  3676,   252,   252,  2772,  -474,
    3775,  -474,  -474,  3775,  -474,  -474,  -474,  -474,  -474,  -474,
     436,  -474,  3775,  -474,  -474,   936,  3544,  2845,  -474,   382,
     513,  -474,  -474,  -474,  -474,  -474,   902,  3026,  -474,   518,
    -474,   511,  3775,  -474,  -474,  -474,  -474,   458,  -474,  -474,
    -474,   411,  1934,   427,  1934,   428,   370,   530,  -474,  -474,
    -474,  -474,   274,   261,   535,  -474,   539,  -474,  -474,  -474,
    2957,   520,   306,  2028,   541,  -474,  -474,  1934,  -474,  -474,
    1934,   545,  -474,  2261,   550,  -474,  -474,  -474,  -474,  -474,
    -474,  -474,  -474,  -474,  -474,  -474,  3808,  3433,  -474
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
     271,     0,     0,     0,     0,   279,   185,   184,   167,   119,
     120,   121,   122,   123,   125,   126,   127,   128,   131,   132,
     129,   130,   161,   162,   124,   138,   139,     0,   278,   273,
       0,     0,   114,   102,   104,   133,     0,   208,   134,   112,
     116,   164,     0,   180,   105,   280,     0,   269,   272,   275,
       0,   283,   284,   285,   286,   287,   288,   289,   290,   291,
     292,   293,   294,   295,   296,   297,   298,   299,   300,   301,
     302,   303,   304,   305,   306,   307,   308,   309,   310,   311,
     312,   313,   314,   315,   316,   317,   318,   319,   320,   321,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   331,
     332,   333,   334,   335,   336,   337,   338,   339,   340,   341,
     342,   343,   344,   345,   346,   347,   348,   349,   350,   351,
     352,   353,   354,   355,   356,   357,   358,   359,   360,   361,
     362,   363,   364,   365,   281,   274,     0,     4,     0,   236,
       0,   248,    41,    40,    36,    38,    39,    37,     0,     2,
       3,     0,     6,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    10,    28,    42,     0,
      51,    52,    59,    62,    67,    70,    72,    74,    76,    78,
      80,    82,    95,     0,   240,     0,   116,     0,   243,   227,
     228,     0,     0,   229,   230,   231,   232,     0,     0,   104,
       0,   105,   189,   186,   187,   188,     0,   156,    98,     0,
     116,   164,     0,   101,   103,   106,   145,   108,     0,   137,
       0,     0,   210,   209,   211,   113,   147,     0,     2,    42,
     118,   369,     0,     0,     0,     0,     0,     0,   168,   169,
     165,   163,   190,   182,   181,   107,   109,     1,   270,     0,
     282,   244,     0,     2,     0,     0,   116,   105,     0,     2,
      29,     0,     0,     0,    33,    30,    31,     0,    97,     0,
       0,     0,     0,     0,     2,     0,     0,     0,   265,   266,
     267,     0,     7,     0,     0,     0,     0,     0,     0,    21,
      22,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,     0,    32,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   249,     0,
      11,   238,   241,     0,     0,   237,   246,   247,   146,   148,
       0,     0,   173,   172,   174,   159,     0,   157,     0,    99,
     367,     0,     0,   115,   110,     0,   146,     0,   140,     0,
       0,     0,   218,     2,     0,   203,   196,   197,   210,     0,
     206,   192,     0,   214,     0,   212,     0,     0,     0,    28,
     222,   117,   228,   242,   179,   167,   197,     0,     0,   176,
       0,   170,   166,   171,     0,   191,   183,   111,     0,     0,
       0,     0,     0,     5,     0,   174,     2,     0,   233,     2,
       0,     0,     0,   235,     0,     0,     0,     0,     0,     0,
     264,   268,     9,     0,     0,     0,    12,    17,     0,    26,
       0,    19,    20,    83,    53,    49,    50,    48,    55,    56,
      54,    57,    58,    60,    61,    63,    64,    65,    66,    68,
      69,    71,    73,    75,    77,     0,    79,    96,   239,   245,
     145,   147,     0,     0,   154,     0,     0,   228,   372,     0,
       0,   149,   151,   136,   167,   141,   208,   142,     0,     0,
       0,     0,    10,   210,   198,     0,     0,   194,   195,   219,
       0,   213,   215,   220,     0,   216,     0,   225,     0,     0,
       0,   370,     0,   177,   178,   175,     0,     0,     0,     0,
      52,     0,     8,    44,    43,     0,    34,     0,   234,     0,
       0,     0,     0,     0,   229,     0,    14,    13,     0,    23,
       0,    18,    15,     0,   100,   160,   158,   155,   371,   152,
       0,   144,     0,   143,   135,     2,   116,     0,   199,     0,
       0,   193,   207,   221,   217,   223,     0,     0,   204,   205,
     276,     0,     0,    45,    46,    47,    35,   250,   252,   259,
     253,     0,     0,     0,     0,     0,     2,     0,    27,    81,
     150,   153,   210,     2,     0,   202,     0,   200,   224,   226,
       0,     0,     0,     0,     0,   263,   258,     0,   260,   255,
       0,     0,    24,     0,     0,    34,   201,   277,    16,   251,
     254,   262,   257,   261,   256,    25,   116,   105,    35
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -474,   601,  -133,  -474,   433,  -474,  -130,    -7,  -250,    56,
     175,   242,  -200,   243,   241,  -162,  -474,  -141,  -207,  -474,
     526,  -203,    38,    23,   -25,   356,  -474,   431,  -474,  -474,
     209,  -348,   -13,  -347,    33,  -474,   229,   114,   444,    68,
     -14,     0,  -474,  -474,  -214,  -473,    79,    80,    67,    15,
    -212,  -235,  -474,   256,  -474,     7,     5,     3,  -274,  -474,
    -474,  -474,  -474,   534,  -125,  -474,   203
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   166,   167,   428,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   302,
     183,   269,   184,   185,    31,    32,    33,    34,    35,    36,
     357,   358,    37,   470,   471,    38,   346,   347,    39,   186,
      41,   261,    43,   244,   369,   370,   388,   371,    44,   372,
     224,   381,   498,   188,   189,   190,   337,   383,   193,   194,
     195,   196,    46,    47,   135,   136,    48
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      42,   392,   419,   187,    42,   209,   192,    45,   191,   475,
     375,   250,   478,   251,   268,   260,   211,   552,   374,   387,
     380,   216,   220,    30,   249,   221,   226,   198,   241,   380,
      42,   390,  -366,   230,   217,   206,  -366,   222,    29,   303,
     187,    42,     6,   243,   246,   232,    42,   231,  -184,     7,
    -184,   218,   223,    45,   203,    49,   214,   215,   438,   439,
     207,   325,   225,   443,   444,   203,   202,   245,    40,    30,
     376,   201,   200,   377,   204,   205,   219,  -185,   429,  -185,
     268,   137,    50,   202,    29,   204,   205,   282,   258,   326,
     283,    22,    23,   268,   379,   433,   398,   486,   210,     6,
     221,   197,   399,   270,   434,     6,     7,  -184,  -184,   240,
     259,   150,     7,   152,    40,   255,   271,   552,   564,     8,
     457,  -366,   452,     8,   327,   137,   304,   277,   565,   478,
     533,   475,   329,   305,   306,   307,  -185,  -185,   315,   316,
     187,   311,   312,   497,   524,   525,   308,   309,   440,   317,
     318,   272,   511,   310,   228,   150,   375,   152,   137,   327,
     209,   403,   494,   198,   456,   361,   284,   212,   221,   311,
     312,   380,   213,   241,   496,   435,   436,   437,   486,   230,
     387,   221,   273,   469,   197,    42,   216,   228,   150,     6,
     152,   187,   187,   327,   333,     6,     7,    42,   328,   217,
       8,   246,     7,   230,   276,   359,     8,   257,   256,   459,
     187,    42,    42,   278,   212,   351,   222,   350,   137,   349,
     368,   391,   215,   393,   245,   407,   222,   255,   212,   332,
     404,   223,   187,    42,   352,   285,   268,   279,   286,   382,
     354,   223,   255,   366,   396,   287,   327,   259,   150,   230,
     152,   421,   187,   402,   212,   282,   366,   246,   283,   534,
     535,   288,   289,   290,   340,   200,   539,   187,   540,   397,
     332,   375,   585,   541,   513,   514,   187,   137,   540,   240,
     245,   418,     6,   543,   603,   509,   321,   221,   367,     7,
     142,   143,   322,   401,   327,   144,   324,   532,   145,   146,
     201,   386,   147,   148,   441,   442,   259,   150,   151,   152,
     323,   153,   154,   197,   345,   327,   462,   208,   608,   400,
     256,   589,   268,   578,     6,   460,   461,   341,   268,   187,
     410,     7,   511,   187,   411,     8,   327,   187,   519,   581,
     343,    42,   220,   460,   476,   221,   327,   359,   520,   380,
     348,   187,    42,     6,   241,    42,   360,    42,   467,    42,
       7,   483,   477,   222,  -167,   412,   368,   305,   306,   307,
     375,   445,   446,   447,   448,   332,    42,   262,   484,   563,
     417,   488,    42,   187,   366,   222,   327,   514,   521,   332,
     468,     6,   579,   585,    42,   510,   340,   200,     7,   366,
     484,   268,   401,     6,   394,   499,   420,   234,   220,   515,
       7,   221,   431,   530,   235,   531,   275,   366,   187,     6,
     327,   523,   594,   472,   313,   314,     7,   472,   201,   386,
     237,   238,   239,   304,   487,   199,   327,   327,   597,   600,
     305,   306,   307,   344,   367,   432,   197,   463,   336,   485,
     500,   469,   489,   308,   309,   255,   332,     6,   319,   320,
     310,   490,   367,   492,     7,   491,   476,   503,     8,   241,
     464,   465,   504,   229,    42,   538,   368,   187,   505,    42,
     483,   506,   284,   405,   477,   211,   368,   242,   537,   465,
      42,   223,   555,   556,   449,   450,   507,   508,   516,    42,
      42,   401,    42,   366,   517,   232,   522,   231,     3,   366,
     291,   548,   542,   366,   553,   332,   554,   566,   408,   560,
     561,   187,   562,   187,   587,   366,   413,   590,   292,   293,
     294,   295,   296,   297,   298,   299,   300,   301,   593,   230,
      42,   602,   472,   591,   472,   582,   605,   257,   546,   586,
     606,   607,   550,   201,   386,   610,   615,    42,   367,   569,
     484,   618,   351,   451,   350,   454,   453,   557,   353,   479,
     367,   199,   187,   580,   187,   510,   601,   466,   255,   536,
     248,   558,   559,   604,   264,   501,   265,   266,   229,   336,
      42,     0,     0,   486,     0,   577,   221,   187,     0,     0,
     187,     0,   229,   483,     6,   262,  -167,  -167,   472,   230,
     595,     7,   598,   366,   584,     8,     0,   246,     0,   229,
       0,     0,  -167,  -167,  -167,  -167,   366,     0,   338,  -167,
    -167,     0,     0,     0,     0,   611,     0,     0,   613,   336,
     245,   339,     0,   229,     0,  -167,  -167,  -167,  -167,   356,
       0,     0,     0,     0,   229,     0,     0,     0,   367,     0,
    -167,  -167,   339,   197,   199,     6,   254,   229,   518,     0,
     617,   616,     7,   137,     6,     0,   401,  -167,  -167,  -167,
     407,     7,     0,   338,     0,     8,   423,     0,   395,   229,
       0,   281,     0,     0,   356,   424,   339,     0,   356,     0,
       0,     0,   259,   150,   425,   152,     0,   339,     0,     0,
       0,   339,     0,     0,     0,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,     0,
       0,     0,     0,     0,     0,     0,     0,   229,   229,   229,
     229,   229,   229,   229,   229,   229,   229,   229,   229,   229,
     229,   229,   229,   229,   229,   229,   229,   229,     0,   229,
     338,     0,     0,     0,     0,     0,     0,     0,     0,   356,
     356,     0,     0,   339,     0,   567,   568,   570,   254,   336,
       0,     0,   339,   339,   254,     0,     0,   356,   330,   254,
       0,   356,   199,   254,     0,     0,     0,   414,   415,   416,
     339,     0,     0,     0,   339,   233,     0,     0,   234,     0,
     229,   137,   430,     0,     0,   235,     6,     0,   329,   384,
       0,   365,     0,     7,   236,     0,     0,     8,   596,     6,
     599,   237,   238,   239,   365,   229,     7,   229,   229,     0,
     385,   150,   364,   152,     0,     0,     0,     0,     0,   609,
       0,   455,     0,   612,     0,   254,   614,     0,   529,     0,
       0,     0,   330,     0,     0,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,   422,   426,     0,   254,     0,     0,
       0,     0,     0,     0,     0,     0,   229,     0,     0,     0,
       0,     0,   229,     0,     0,   137,     0,     0,     0,   378,
     588,   199,   267,     0,   264,     0,   356,   199,   142,   143,
       0,     0,     0,   144,     0,     0,   145,   146,     0,   339,
     147,   148,     0,   254,   259,   150,   151,   152,     0,   153,
     154,     0,   229,     0,     0,     0,   220,     0,     0,   221,
     229,     0,  -167,  -167,     0,     0,     0,     6,     0,   356,
       0,     0,   482,     0,     7,     0,   229,   137,   401,  -167,
    -167,  -167,   339,     0,   252,   229,     0,   365,   356,   229,
     142,   143,     0,     0,     0,   144,     0,     0,   145,   146,
       0,   339,   147,   148,     0,   365,   253,   150,   151,   152,
       0,   153,   154,     0,   512,   342,   254,     0,     0,     0,
       0,     0,     0,     0,     0,   229,     0,     0,     0,     0,
       0,     0,     0,     0,   526,   527,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
       0,     0,     0,     0,     0,     0,     0,     0,   571,   229,
     573,   575,     0,     0,   254,     0,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
       0,     0,     0,   254,     0,     0,     0,     0,     0,     0,
       0,   482,     0,     0,   330,   247,     0,   365,   592,     1,
       2,   365,     3,     0,     0,     4,     0,     0,     0,     5,
       0,   137,     0,   365,     0,     0,     6,     0,   267,     0,
       0,     0,   280,     7,   142,   143,     0,     8,     0,   144,
       0,     0,   145,   146,     0,     0,   147,   148,     0,   254,
     259,   150,   151,   152,     0,   153,   154,     0,     0,     0,
       0,     0,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,  -368,     0,     0,     0,  -368,     0,     0,     0,     0,
       0,   197,     0,     0,    28,     0,     0,     0,     0,     0,
       0,   137,     6,     0,     0,     0,     0,     0,   267,     7,
     373,   365,     0,     8,   142,   143,     0,     0,     0,   144,
       0,     0,   145,   146,   482,     0,   147,   148,     0,     0,
     259,   150,   151,   152,     0,   153,   154,     0,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    51,     0,
    -368,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,     0,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   137,     0,   138,     0,     3,
     139,   355,   140,     0,     0,     0,   141,     0,   142,   143,
       0,     0,     0,   144,     0,     0,   145,   146,     0,     0,
     147,   148,     0,     0,   149,   150,   151,   152,     0,   153,
     154,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,     0,     0,     0,     0,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,     0,   155,
     156,   157,     0,   158,   159,   160,   161,   162,   163,   164,
     165,   137,     0,   138,     0,     3,   331,   549,   140,     0,
       0,     0,   141,     0,   142,   143,     0,     0,     0,   144,
       0,     0,   145,   146,     0,     0,   147,   148,     0,     0,
     149,   150,   151,   152,     0,   153,   154,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,     0,     0,     0,     0,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,     0,   155,   156,   157,     0,   158,
     159,   160,   161,   162,   163,   164,   165,   137,     0,   334,
       0,     3,   335,     0,   140,     0,     0,     0,   141,     0,
     142,   143,     0,     0,     0,   144,     0,     0,   145,   146,
       0,     0,   147,   148,     0,     0,   149,   150,   151,   152,
       0,   153,   154,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,     0,     0,     0,
       0,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
       0,   155,   156,   157,     0,   158,   159,   160,   161,   162,
     163,   164,   165,   137,     0,   334,     0,     3,   458,     0,
     140,     0,     0,     0,   141,     0,   142,   143,     0,     0,
       0,   144,     0,     0,   145,   146,     0,     0,   147,   148,
       0,     0,   149,   150,   151,   152,     0,   153,   154,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,     0,   155,   156,   157,
       0,   158,   159,   160,   161,   162,   163,   164,   165,   137,
       0,   334,     0,     3,     0,     0,   140,   572,     0,     0,
     141,     0,   142,   143,     0,     0,     0,   144,     0,     0,
     145,   146,     0,     0,   147,   148,     0,     0,   149,   150,
     151,   152,     0,   153,   154,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,     0,   155,   156,   157,     0,   158,   159,   160,
     161,   162,   163,   164,   165,   137,     0,   138,     0,     3,
       0,     0,   140,     0,     0,     0,   141,     0,   142,   143,
       0,     0,     0,   144,     0,     0,   145,   146,     0,     0,
     147,   148,     0,     0,   149,   150,   151,   152,     0,   153,
     154,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,     0,   155,
     156,   157,     0,   158,   159,   160,   161,   162,   163,   164,
     165,   137,     0,   334,     0,     3,     0,     0,   140,     0,
       0,     0,   141,     0,   142,   143,     0,     0,     0,   144,
       0,     0,   145,   146,     0,     0,   147,   148,     0,     0,
     149,   150,   151,   152,     0,   153,   154,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,     0,   155,   156,   157,     0,   158,
     159,   160,   161,   162,   163,   164,   165,   137,     0,    -2,
       0,     3,    -2,     0,   140,   502,   220,    -2,   141,   221,
     142,   143,     0,     0,     0,   144,     0,     6,   145,   146,
       0,     0,   147,   148,     7,     0,   149,   150,   151,   152,
       0,   153,   154,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
       0,   155,   156,   157,     0,   158,   159,   160,   161,   162,
     163,   164,   165,     1,     2,     0,     3,     0,     0,     4,
       0,   137,     0,     5,     0,     3,     0,     0,   267,     0,
       6,     0,   141,     0,   142,   143,     0,     7,     0,   144,
       0,     8,   145,   146,     0,     0,   147,   148,     0,     0,
     274,   150,   151,   152,     0,   153,   154,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   155,   156,   157,    28,   158,
     159,   160,   161,   162,   163,   164,   165,   137,     0,     0,
       0,     0,     0,     0,   329,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     6,     0,     0,     0,     0,
       0,     0,     7,     0,     0,     0,   363,   150,   364,   152,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,     0,
       0,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
     551,   137,     0,     0,     0,     0,     0,     0,   480,   362,
       0,   221,     0,     0,   142,   143,     0,     0,     0,   144,
       0,     0,   145,   146,     0,     0,   147,   148,     0,     0,
     363,   150,   481,   152,     0,   153,   154,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,   137,     0,     0,     0,     0,     0,
       0,   480,   362,     0,   221,     0,     0,   142,   143,     0,
       0,     0,   144,     0,     0,   145,   146,     0,     0,   147,
     148,     0,     0,   545,   150,   481,   152,     0,   153,   154,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,   137,     0,     0,
       0,     3,     0,     0,   140,     0,     0,     0,     0,     0,
     142,   143,     0,     0,     0,   144,     0,     0,   145,   146,
       0,     0,   147,   227,     0,     0,   228,   150,   151,   152,
       0,   153,   154,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
     137,     0,     0,     0,     0,     0,     0,   140,     0,     0,
       0,   141,     0,   142,   143,     0,     0,     0,   144,     0,
       0,   145,   146,     0,     0,   147,   148,     0,     0,   228,
     150,   151,   152,     0,   153,   154,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,   137,     0,     0,     0,     0,     0,     0,
     252,     0,     0,     0,     0,     0,   142,   143,     0,     0,
       0,   144,     0,     0,   145,   146,     0,     0,   147,   148,
       0,     0,   253,   150,   151,   152,     0,   153,   154,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,   137,     0,     0,     0,
       0,     0,     0,   361,   362,     0,   221,     0,     0,     0,
       0,     0,     0,     0,     6,     0,     0,     0,     0,     0,
       0,     7,     0,     0,     0,   363,   150,   364,   152,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,   137,
       6,     0,     0,     0,     0,     0,   267,     7,     0,     0,
       0,     0,   142,   143,     0,     0,     0,   144,     0,     0,
     145,   146,     0,     0,   147,   148,     0,     0,   409,   150,
     151,   152,     0,   153,   154,     0,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,     0,     0,     0,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,   137,     0,     0,     0,     0,     0,     0,   252,
       0,     0,     0,     0,     0,   142,   143,     0,     0,     0,
     144,     0,     0,   145,   146,     0,     0,   147,   148,     0,
       0,   228,   150,   151,   152,     0,   153,   154,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,   137,     0,     0,     0,     0,
       0,     0,   267,     0,     0,     0,     0,     0,   142,   143,
       0,     0,     0,   144,     0,     0,   145,   146,     0,     0,
     147,   148,     0,     0,   576,   150,   151,   152,     0,   153,
     154,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,   137,     0,
       0,     0,     0,     0,     0,   267,     0,     0,     0,     0,
       0,   142,   143,     0,     0,     0,   144,     0,   137,   145,
     146,     0,     0,   147,   148,   329,   493,   583,   150,   151,
     152,     0,   153,   154,     0,     0,     6,     0,     0,     0,
       0,     0,     0,     7,     0,     0,     0,   363,   150,   364,
     152,     0,     0,     0,     0,     0,     0,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,     0,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,   137,     0,     0,     0,     0,     0,     0,   329,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     6,
     137,     0,     0,     0,     0,     0,     7,   329,     0,     0,
     385,   150,   364,   152,     0,     0,     0,     0,     6,     0,
       0,     0,     0,     0,     0,     7,     0,     0,     0,   363,
     150,   364,   152,     0,     0,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,     3,     0,     0,     4,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     6,     0,     0,
       0,     0,     0,   473,     7,     4,     0,     0,     8,     0,
       0,     0,     0,     0,     0,     0,     6,     0,     0,     0,
       0,     0,     0,     7,     0,     0,     0,   474,     0,     0,
       0,     0,     0,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,   544,   137,     4,     0,     0,   378,     0,     0,   267,
       0,     0,     0,     0,     6,   142,   143,     0,     0,     0,
     144,     7,     0,   145,   146,   474,     0,   147,   148,     0,
       0,   259,   150,   151,   152,     0,   153,   154,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,   233,
       0,     0,   234,     0,     0,     0,     0,     0,     0,   235,
       6,     0,     0,     0,     0,     0,     0,     7,   236,   197,
       0,     8,     0,     0,     0,   237,   238,   239,     0,     0,
       6,     0,     0,     0,     0,     0,     0,     7,     0,     0,
       0,     8,     0,     0,     0,     0,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,     0,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,     4,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   137,     6,     0,     0,     0,
       0,     0,   267,     7,   389,   342,     0,     8,   142,   143,
       0,     0,     0,   144,     0,     6,   145,   146,     0,     0,
     147,   148,     7,     0,   259,   150,   151,   152,     0,   153,
     154,     0,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
     344,     0,     0,     0,     0,     0,     0,     0,     0,   137,
       6,     0,     0,     0,     0,     0,   267,     7,   495,   405,
       0,     0,   142,   143,     0,     0,     0,   144,     0,     6,
     145,   146,     0,     0,   147,   148,     7,     0,   259,   150,
     151,   152,     0,   153,   154,     0,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,   517,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     6,     0,     0,     0,     0,     0,
       0,     7,     0,     0,     0,     0,     0,  -146,     0,     0,
       0,     0,     0,     6,     0,     0,     0,     0,     0,     0,
       7,     0,     0,     0,     0,     0,  -148,     0,     0,     0,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,   137,     0,     0,
       0,     0,     0,     0,   267,   343,     0,     0,     0,     0,
     142,   143,     0,     0,     0,   144,     0,     0,   145,   146,
       0,     0,   147,   227,     0,     0,   259,   150,   151,   152,
     137,   153,   154,     0,     0,     0,     0,   267,   427,     0,
       0,     0,     0,   142,   143,     0,     0,     0,   144,     0,
       0,   145,   146,     0,     0,   147,   148,     0,     0,   259,
     150,   151,   152,   137,   153,   154,     0,     0,     0,     0,
     267,   509,     0,     0,     0,     0,   142,   143,     0,     0,
       0,   144,     0,     0,   145,   146,     0,     0,   147,   148,
       0,     0,   259,   150,   151,   152,   137,   153,   154,     0,
       0,     0,     0,   267,     0,     0,     0,   141,     0,   142,
     143,     0,     0,     0,   144,     0,     0,   145,   146,     0,
       0,   147,   148,     0,     0,   259,   150,   151,   152,   137,
     153,   154,     0,     0,     0,     0,   267,   574,     0,     0,
       0,     0,   142,   143,     0,     0,     0,   144,     0,     0,
     145,   146,     0,     0,   147,   148,     0,     0,   259,   150,
     151,   152,   137,   153,   154,     0,     0,     0,     0,   263,
       0,     0,     0,     0,     0,   142,   143,     0,     0,     0,
     144,     0,     0,   145,   146,     0,     0,   147,   148,     0,
       0,   259,   150,   151,   152,   137,   153,   154,     0,     0,
       0,     0,   258,     0,     0,     0,     0,     0,   142,   143,
       0,     0,     0,   144,     0,     0,   145,   146,     0,     0,
     147,   148,     0,     0,   259,   150,   151,   152,   137,   153,
     154,     0,     0,     0,     0,   267,     0,     0,     0,     0,
       0,   142,   143,     0,     0,     0,   144,     0,     0,   145,
     146,     0,     0,   147,   148,     0,     0,   259,   150,   151,
     152,   137,   153,   154,     0,     0,     0,     0,   267,     0,
       0,     0,     0,     0,   142,   143,     0,     0,     0,   144,
       0,     0,   145,   146,     0,     0,   147,   227,     0,     0,
     259,   150,   151,   152,   137,   153,   154,     0,     0,     0,
       0,   267,     0,     0,     0,     0,     0,   142,   143,     0,
       0,     0,   144,     0,     0,   145,   146,     0,     0,   147,
     148,     0,     0,   406,   150,   151,   152,   137,   153,   154,
       0,     0,     0,     0,   528,     0,     0,     0,     0,     0,
     142,   143,     0,     0,     0,   144,     0,     0,   145,   146,
       0,     0,   147,   148,     0,     0,   259,   150,   151,   152,
     137,   153,   154,     0,     0,     0,     0,   547,     0,     0,
       0,     0,     0,   142,   143,     0,     0,     0,   144,     0,
       0,   145,   146,     0,     0,   147,   148,     0,     0,   259,
     150,   151,   152,     0,   153,   154
};

static const yytype_int16 yycheck[] =
{
       0,   236,   276,     3,     4,    30,     3,     0,     3,   357,
     222,   136,   359,   138,   155,   148,    30,   490,   221,   233,
     227,    34,    10,     0,    32,    13,    39,     4,    42,   236,
      30,   234,     0,    40,    34,     7,     4,    37,     0,   169,
      40,    41,    21,    43,    44,    40,    46,    40,    11,    28,
      13,     7,    37,    46,    17,     3,    33,    34,   308,   309,
      32,    18,    39,   313,   314,    17,    17,    44,     0,    46,
      10,     4,     4,    13,    37,    38,    32,    11,   285,    13,
     221,     3,    30,    17,    46,    37,    38,     3,    10,    46,
       6,    70,    71,   234,   227,   302,    20,    10,    30,    21,
      13,    10,    26,    15,   304,    21,    28,    70,    71,    41,
      32,    33,    28,    35,    46,   140,    10,   590,    11,    32,
     327,    89,   322,    32,     9,     3,    19,    32,    11,   476,
      15,   479,    10,    26,    27,    28,    70,    71,    30,    31,
     140,    24,    25,   378,   418,   419,    39,    40,   310,    41,
      42,    10,   402,    46,    32,    33,   368,    35,     3,     9,
     185,    11,   376,   140,   326,    10,   166,     9,    13,    24,
      25,   378,    14,   187,   377,   305,   306,   307,    10,   186,
     394,    13,    10,    15,    10,   185,   199,    32,    33,    21,
      35,   191,   192,     9,   191,    21,    28,   197,    14,   199,
      32,   201,    28,   210,    10,   218,    32,   140,   140,   334,
     210,   211,   212,    14,     9,   210,   216,   210,     3,    14,
     220,   235,   199,   237,   201,    10,   226,   252,     9,   191,
      11,   216,   232,   233,   211,    10,   377,    14,    13,   232,
     217,   226,   267,   220,   244,    20,     9,    32,    33,   256,
      35,    14,   252,   253,     9,     3,   233,   257,     6,    14,
     463,    36,    37,    38,   197,   197,   469,   267,     9,   246,
     232,   483,    11,    14,   404,   405,   276,     3,     9,   211,
     257,   276,    21,    14,    10,    11,    21,    13,   220,    28,
      16,    17,    19,    32,     9,    21,    45,    12,    24,    25,
     233,   233,    28,    29,   311,   312,    32,    33,    34,    35,
      22,    37,    38,    10,    32,     9,   341,    14,    12,   252,
     252,   556,   463,   530,    21,   338,   339,    11,   469,   329,
     263,    28,   582,   333,   267,    32,     9,   337,    11,   542,
      11,   341,    10,   356,   357,    13,     9,   360,    11,   556,
       7,   351,   352,    21,   368,   355,     7,   357,   351,   359,
      28,   361,   357,   363,    32,    15,   366,    26,    27,    28,
     582,   315,   316,   317,   318,   337,   376,    15,   363,   509,
      82,   366,   382,   383,   361,   385,     9,   517,    11,   351,
     352,    21,   533,    11,   394,   402,   329,   329,    28,   376,
     385,   542,    32,    21,    10,   382,    14,    13,    10,   409,
      28,    13,    32,     9,    20,    11,   160,   394,   418,    21,
       9,   418,    11,   355,    39,    40,    28,   359,   361,   361,
      36,    37,    38,    19,   366,     4,     9,     9,    11,    11,
      26,    27,    28,    11,   376,    32,    10,    29,   192,    10,
     382,    15,    11,    39,    40,   480,   418,    21,    43,    44,
      46,     9,   394,    12,    28,    11,   479,    11,    32,   483,
       8,     9,    11,    40,   474,   468,   476,   477,    12,   479,
     480,    32,   482,    11,   479,   499,   486,    43,     8,     9,
     490,   476,     8,     9,   319,   320,    32,    11,    11,   499,
     500,    32,   502,   480,    11,   500,    10,   500,     7,   486,
      29,    32,    15,   490,    11,   477,    12,    11,   262,    31,
      20,   521,    13,   523,    11,   502,   270,     9,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    80,   546,
     540,    11,   474,    32,   476,   545,    11,   480,   480,   549,
      11,    31,   485,   486,   486,    14,    11,   557,   490,   521,
     545,    11,   557,   321,   557,   324,   323,   499,   212,   360,
     502,   140,   572,   540,   574,   582,   576,   348,   603,   465,
      46,   502,   502,   583,   151,   382,   153,   154,   155,   333,
     590,    -1,    -1,    10,    -1,   528,    13,   597,    -1,    -1,
     600,    -1,   169,   603,    21,    15,    16,    17,   540,   616,
     572,    28,   574,   590,   547,    32,    -1,   617,    -1,   186,
      -1,    -1,    32,    33,    34,    35,   603,    -1,   197,    16,
      17,    -1,    -1,    -1,    -1,   597,    -1,    -1,   600,   383,
     617,   197,    -1,   210,    -1,    32,    33,    34,    35,   218,
      -1,    -1,    -1,    -1,   221,    -1,    -1,    -1,   590,    -1,
      16,    17,   218,    10,   233,    21,   140,   234,   412,    -1,
     603,   603,    28,     3,    21,    -1,    32,    33,    34,    35,
      10,    28,    -1,   252,    -1,    32,    16,    -1,   244,   256,
      -1,   165,    -1,    -1,   263,    25,   252,    -1,   267,    -1,
      -1,    -1,    32,    33,    34,    35,    -1,   263,    -1,    -1,
      -1,   267,    -1,    -1,    -1,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   304,   305,   306,
     307,   308,   309,   310,   311,   312,   313,   314,   315,   316,
     317,   318,   319,   320,   321,   322,   323,   324,    -1,   326,
     329,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   338,
     339,    -1,    -1,   329,    -1,   519,   520,   521,   252,   523,
      -1,    -1,   338,   339,   258,    -1,    -1,   356,   187,   263,
      -1,   360,   361,   267,    -1,    -1,    -1,   271,   272,   273,
     356,    -1,    -1,    -1,   360,    10,    -1,    -1,    13,    -1,
     377,     3,   286,    -1,    -1,    20,    21,    -1,    10,    11,
      -1,   220,    -1,    28,    29,    -1,    -1,    32,   572,    21,
     574,    36,    37,    38,   233,   402,    28,   404,   405,    -1,
      32,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,   593,
      -1,   325,    -1,   597,    -1,   329,   600,    -1,   425,    -1,
      -1,    -1,   261,    -1,    -1,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,   283,   284,    -1,   361,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   463,    -1,    -1,    -1,
      -1,    -1,   469,    -1,    -1,     3,    -1,    -1,    -1,     7,
       8,   480,    10,    -1,   481,    -1,   485,   486,    16,    17,
      -1,    -1,    -1,    21,    -1,    -1,    24,    25,    -1,   485,
      28,    29,    -1,   407,    32,    33,    34,    35,    -1,    37,
      38,    -1,   509,    -1,    -1,    -1,    10,    -1,    -1,    13,
     517,    -1,    16,    17,    -1,    -1,    -1,    21,    -1,   528,
      -1,    -1,   361,    -1,    28,    -1,   533,     3,    32,    33,
      34,    35,   528,    -1,    10,   542,    -1,   376,   547,   546,
      16,    17,    -1,    -1,    -1,    21,    -1,    -1,    24,    25,
      -1,   547,    28,    29,    -1,   394,    32,    33,    34,    35,
      -1,    37,    38,    -1,   403,    11,   480,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   582,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   423,   424,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   522,   616,
     524,   525,    -1,    -1,   528,    -1,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      -1,    -1,    -1,   547,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   480,    -1,    -1,   483,     0,    -1,   486,   562,     4,
       5,   490,     7,    -1,    -1,    10,    -1,    -1,    -1,    14,
      -1,     3,    -1,   502,    -1,    -1,    21,    -1,    10,    -1,
      -1,    -1,    14,    28,    16,    17,    -1,    32,    -1,    21,
      -1,    -1,    24,    25,    -1,    -1,    28,    29,    -1,   603,
      32,    33,    34,    35,    -1,    37,    38,    -1,    -1,    -1,
      -1,    -1,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,     0,    -1,    -1,    -1,     4,    -1,    -1,    -1,    -1,
      -1,    10,    -1,    -1,    89,    -1,    -1,    -1,    -1,    -1,
      -1,     3,    21,    -1,    -1,    -1,    -1,    -1,    10,    28,
      12,   590,    -1,    32,    16,    17,    -1,    -1,    -1,    21,
      -1,    -1,    24,    25,   603,    -1,    28,    29,    -1,    -1,
      32,    33,    34,    35,    -1,    37,    38,    -1,    57,    58,
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
      -1,    -1,    32,    33,    34,    35,    -1,    37,    38,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    -1,    77,    78,    79,
      -1,    81,    82,    83,    84,    85,    86,    87,    88,     3,
      -1,     5,    -1,     7,    -1,    -1,    10,    11,    -1,    -1,
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
      88,     3,    -1,     5,    -1,     7,    -1,    -1,    10,    -1,
      -1,    -1,    14,    -1,    16,    17,    -1,    -1,    -1,    21,
      -1,    -1,    24,    25,    -1,    -1,    28,    29,    -1,    -1,
      32,    33,    34,    35,    -1,    37,    38,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    -1,    77,    78,    79,    -1,    81,
      82,    83,    84,    85,    86,    87,    88,     3,    -1,     3,
      -1,     7,     6,    -1,    10,     9,    10,    11,    14,    13,
      16,    17,    -1,    -1,    -1,    21,    -1,    21,    24,    25,
      -1,    -1,    28,    29,    28,    -1,    32,    33,    34,    35,
      -1,    37,    38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      -1,    77,    78,    79,    -1,    81,    82,    83,    84,    85,
      86,    87,    88,     4,     5,    -1,     7,    -1,    -1,    10,
      -1,     3,    -1,    14,    -1,     7,    -1,    -1,    10,    -1,
      21,    -1,    14,    -1,    16,    17,    -1,    28,    -1,    21,
      -1,    32,    24,    25,    -1,    -1,    28,    29,    -1,    -1,
      32,    33,    34,    35,    -1,    37,    38,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    77,    78,    79,    89,    81,
      82,    83,    84,    85,    86,    87,    88,     3,    -1,    -1,
      -1,    -1,    -1,    -1,    10,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    21,    -1,    -1,    -1,    -1,
      -1,    -1,    28,    -1,    -1,    -1,    32,    33,    34,    35,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    -1,
      -1,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,     3,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,
      -1,    13,    -1,    -1,    16,    17,    -1,    -1,    -1,    21,
      -1,    -1,    24,    25,    -1,    -1,    28,    29,    -1,    -1,
      32,    33,    34,    35,    -1,    37,    38,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,     3,    -1,    -1,    -1,    -1,    -1,
      -1,    10,    11,    -1,    13,    -1,    -1,    16,    17,    -1,
      -1,    -1,    21,    -1,    -1,    24,    25,    -1,    -1,    28,
      29,    -1,    -1,    32,    33,    34,    35,    -1,    37,    38,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,     3,    -1,    -1,
      -1,     7,    -1,    -1,    10,    -1,    -1,    -1,    -1,    -1,
      16,    17,    -1,    -1,    -1,    21,    -1,    -1,    24,    25,
      -1,    -1,    28,    29,    -1,    -1,    32,    33,    34,    35,
      -1,    37,    38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
       3,    -1,    -1,    -1,    -1,    -1,    -1,    10,    -1,    -1,
      -1,    14,    -1,    16,    17,    -1,    -1,    -1,    21,    -1,
      -1,    24,    25,    -1,    -1,    28,    29,    -1,    -1,    32,
      33,    34,    35,    -1,    37,    38,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,     3,    -1,    -1,    -1,    -1,    -1,    -1,
      10,    -1,    -1,    -1,    -1,    -1,    16,    17,    -1,    -1,
      -1,    21,    -1,    -1,    24,    25,    -1,    -1,    28,    29,
      -1,    -1,    32,    33,    34,    35,    -1,    37,    38,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,     3,    -1,    -1,    -1,
      -1,    -1,    -1,    10,    11,    -1,    13,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    21,    -1,    -1,    -1,    -1,    -1,
      -1,    28,    -1,    -1,    -1,    32,    33,    34,    35,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,     3,
      21,    -1,    -1,    -1,    -1,    -1,    10,    28,    -1,    -1,
      -1,    -1,    16,    17,    -1,    -1,    -1,    21,    -1,    -1,
      24,    25,    -1,    -1,    28,    29,    -1,    -1,    32,    33,
      34,    35,    -1,    37,    38,    -1,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    -1,    -1,    -1,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,     3,    -1,    -1,    -1,    -1,    -1,    -1,    10,
      -1,    -1,    -1,    -1,    -1,    16,    17,    -1,    -1,    -1,
      21,    -1,    -1,    24,    25,    -1,    -1,    28,    29,    -1,
      -1,    32,    33,    34,    35,    -1,    37,    38,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,     3,    -1,    -1,    -1,    -1,
      -1,    -1,    10,    -1,    -1,    -1,    -1,    -1,    16,    17,
      -1,    -1,    -1,    21,    -1,    -1,    24,    25,    -1,    -1,
      28,    29,    -1,    -1,    32,    33,    34,    35,    -1,    37,
      38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,     3,    -1,
      -1,    -1,    -1,    -1,    -1,    10,    -1,    -1,    -1,    -1,
      -1,    16,    17,    -1,    -1,    -1,    21,    -1,     3,    24,
      25,    -1,    -1,    28,    29,    10,    11,    32,    33,    34,
      35,    -1,    37,    38,    -1,    -1,    21,    -1,    -1,    -1,
      -1,    -1,    -1,    28,    -1,    -1,    -1,    32,    33,    34,
      35,    -1,    -1,    -1,    -1,    -1,    -1,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    -1,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,     3,    -1,    -1,    -1,    -1,    -1,    -1,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,
       3,    -1,    -1,    -1,    -1,    -1,    28,    10,    -1,    -1,
      32,    33,    34,    35,    -1,    -1,    -1,    -1,    21,    -1,
      -1,    -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,    32,
      33,    34,    35,    -1,    -1,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,     7,    -1,    -1,    10,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,    -1,    -1,
      -1,    -1,    -1,     8,    28,    10,    -1,    -1,    32,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    21,    -1,    -1,    -1,
      -1,    -1,    -1,    28,    -1,    -1,    -1,    32,    -1,    -1,
      -1,    -1,    -1,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,     8,     3,    10,    -1,    -1,     7,    -1,    -1,    10,
      -1,    -1,    -1,    -1,    21,    16,    17,    -1,    -1,    -1,
      21,    28,    -1,    24,    25,    32,    -1,    28,    29,    -1,
      -1,    32,    33,    34,    35,    -1,    37,    38,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    10,
      -1,    -1,    13,    -1,    -1,    -1,    -1,    -1,    -1,    20,
      21,    -1,    -1,    -1,    -1,    -1,    -1,    28,    29,    10,
      -1,    32,    -1,    -1,    -1,    36,    37,    38,    -1,    -1,
      21,    -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,    -1,
      -1,    32,    -1,    -1,    -1,    -1,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    -1,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    10,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,    21,    -1,    -1,    -1,
      -1,    -1,    10,    28,    12,    11,    -1,    32,    16,    17,
      -1,    -1,    -1,    21,    -1,    21,    24,    25,    -1,    -1,
      28,    29,    28,    -1,    32,    33,    34,    35,    -1,    37,
      38,    -1,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
      21,    -1,    -1,    -1,    -1,    -1,    10,    28,    12,    11,
      -1,    -1,    16,    17,    -1,    -1,    -1,    21,    -1,    21,
      24,    25,    -1,    -1,    28,    29,    28,    -1,    32,    33,
      34,    35,    -1,    37,    38,    -1,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    21,    -1,    -1,    -1,    -1,    -1,
      -1,    28,    -1,    -1,    -1,    -1,    -1,    15,    -1,    -1,
      -1,    -1,    -1,    21,    -1,    -1,    -1,    -1,    -1,    -1,
      28,    -1,    -1,    -1,    -1,    -1,    15,    -1,    -1,    -1,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,     3,    -1,    -1,
      -1,    -1,    -1,    -1,    10,    11,    -1,    -1,    -1,    -1,
      16,    17,    -1,    -1,    -1,    21,    -1,    -1,    24,    25,
      -1,    -1,    28,    29,    -1,    -1,    32,    33,    34,    35,
       3,    37,    38,    -1,    -1,    -1,    -1,    10,    11,    -1,
      -1,    -1,    -1,    16,    17,    -1,    -1,    -1,    21,    -1,
      -1,    24,    25,    -1,    -1,    28,    29,    -1,    -1,    32,
      33,    34,    35,     3,    37,    38,    -1,    -1,    -1,    -1,
      10,    11,    -1,    -1,    -1,    -1,    16,    17,    -1,    -1,
      -1,    21,    -1,    -1,    24,    25,    -1,    -1,    28,    29,
      -1,    -1,    32,    33,    34,    35,     3,    37,    38,    -1,
      -1,    -1,    -1,    10,    -1,    -1,    -1,    14,    -1,    16,
      17,    -1,    -1,    -1,    21,    -1,    -1,    24,    25,    -1,
      -1,    28,    29,    -1,    -1,    32,    33,    34,    35,     3,
      37,    38,    -1,    -1,    -1,    -1,    10,    11,    -1,    -1,
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
      32,    33,    34,    35,     3,    37,    38,    -1,    -1,    -1,
      -1,    10,    -1,    -1,    -1,    -1,    -1,    16,    17,    -1,
      -1,    -1,    21,    -1,    -1,    24,    25,    -1,    -1,    28,
      29,    -1,    -1,    32,    33,    34,    35,     3,    37,    38,
      -1,    -1,    -1,    -1,    10,    -1,    -1,    -1,    -1,    -1,
      16,    17,    -1,    -1,    -1,    21,    -1,    -1,    24,    25,
      -1,    -1,    28,    29,    -1,    -1,    32,    33,    34,    35,
       3,    37,    38,    -1,    -1,    -1,    -1,    10,    -1,    -1,
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
      85,    86,    87,    88,    89,   154,   155,     3,     5,     8,
      10,    14,    16,    17,    21,    24,    25,    28,    29,    32,
      33,    34,    35,    37,    38,    77,    78,    79,    81,    82,
      83,    84,    85,    86,    87,    88,    91,    92,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   110,   112,   113,   129,   131,   143,   144,
     145,   146,   147,   148,   149,   150,   151,    10,   113,   117,
     129,   138,    17,    17,    37,    38,     7,    32,    14,   114,
     129,   130,     9,    14,   113,   113,   122,   131,     7,    32,
      10,    13,   131,   139,   140,   113,   122,    29,    32,    94,
      97,   145,   146,    10,    13,    20,    29,    36,    37,    38,
     129,   130,   128,   131,   133,   113,   131,     0,   153,    32,
     154,   154,    10,    32,   110,   114,   129,   138,    10,    32,
      92,   131,    15,    10,    94,    94,    94,    10,   107,   111,
      15,    10,    10,    10,    32,   143,    10,    32,    14,    14,
      14,   110,     3,     6,   131,    10,    13,    20,    36,    37,
      38,    29,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,   109,    96,    19,    26,    27,    28,    39,    40,
      46,    24,    25,    39,    40,    30,    31,    41,    42,    43,
      44,    21,    19,    22,    45,    18,    46,     9,    14,    10,
      91,     8,   112,   147,     5,     8,   143,   146,   117,   128,
     138,    11,    11,    11,    11,    32,   126,   127,     7,    14,
     145,   146,   113,   115,   113,    32,   117,   120,   121,   122,
       7,    10,    11,    32,    34,    91,   113,   129,   131,   134,
     135,   137,   139,    12,   111,   140,    10,    13,     7,    92,
     108,   141,   145,   147,    11,    32,   129,   134,   136,    12,
     111,   130,   141,   130,    10,   128,   131,   113,    20,    26,
     138,    32,   131,    11,    11,    11,    32,    10,   143,    32,
     138,   138,    15,   143,   110,   110,   110,    82,   146,   148,
      14,    14,    91,    16,    25,    34,    91,    11,    93,   108,
     110,    32,    32,   108,   102,    96,    96,    96,    98,    98,
     105,    97,    97,    98,    98,    99,    99,    99,    99,   100,
     100,   101,   102,   103,   104,   110,   105,   108,     8,   154,
     122,   122,   114,    29,     8,     9,   126,   145,   112,    15,
     123,   124,   129,     8,    32,   121,   122,   146,   123,   120,
      10,    34,    91,   131,   139,    10,    10,   129,   139,    11,
       9,    11,    12,    11,   134,    12,   111,   141,   142,   113,
     129,   156,     9,    11,    11,    12,    32,    32,    11,    11,
      97,    98,    91,    96,    96,   131,    11,    11,   143,    11,
      11,    11,    10,   147,   148,   148,    91,    91,    10,    94,
       9,    11,    12,    15,    14,   111,   127,     8,   145,   111,
       9,    14,    15,    14,     8,    32,   129,    10,    32,    32,
     138,    76,   135,    11,    12,     8,     9,   129,   136,   137,
      31,    20,    13,    96,    11,    11,    11,   143,   143,   112,
     143,   110,    11,   110,    11,   110,    32,   138,   108,   107,
     124,   111,   131,    32,   138,    11,   131,    11,     8,   141,
       9,    32,   110,    80,    11,   112,   143,    11,   112,   143,
      11,   131,    11,    10,   131,    11,    11,    31,    12,   143,
      14,   112,   143,   112,   143,    11,   129,   138,    11
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
     113,   113,   113,   113,   114,   114,   115,   115,   115,   116,
     116,   116,   116,   116,   117,   117,   117,   117,   117,   117,
     117,   117,   117,   117,   117,   118,   118,   118,   119,   119,
     120,   120,   120,   121,   121,   122,   122,   122,   122,   123,
     123,   124,   124,   124,   125,   125,   125,   126,   126,   127,
     127,   128,   128,   129,   129,   129,   129,   130,   130,   130,
     130,   130,   130,   130,   130,   130,   130,   130,   130,   130,
     131,   131,   131,   131,   132,   132,   132,   132,   132,   132,
     133,   133,   134,   134,   135,   135,   135,   135,   135,   135,
     135,   135,   135,   135,   136,   136,   137,   137,   138,   138,
     139,   139,   139,   140,   140,   140,   140,   140,   140,   140,
     140,   140,   141,   141,   141,   142,   142,   143,   143,   143,
     143,   143,   143,   144,   144,   144,   145,   145,   145,   145,
     146,   146,   146,   147,   147,   147,   147,   147,   148,   148,
     149,   149,   149,   150,   150,   150,   150,   150,   150,   150,
     150,   150,   150,   150,   151,   151,   151,   151,   151,   152,
     152,   152,   153,   153,   153,   153,   153,   153,   153,   153,
     153,   154,   154,   155,   155,   155,   155,   155,   155,   155,
     155,   155,   155,   155,   155,   155,   155,   155,   155,   155,
     155,   155,   155,   155,   155,   155,   155,   155,   155,   155,
     155,   155,   155,   155,   155,   155,   155,   155,   155,   155,
     155,   155,   155,   155,   155,   155,   155,   155,   155,   155,
     155,   155,   155,   155,   155,   155,   155,   155,   155,   155,
     155,   155,   155,   155,   155,   155,   155,   155,   155,   155,
     155,   155,   155,   155,   155,   155,   155,   155,   155,   155,
     155,   155,   155,   155,   155,   155,   156,   156,   156,   156,
     156,   156,   156
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
       5,     2,     1,     2,     1,     1,     2,     2,     2,     2,
       3,     3,     1,     2,     1,     3,     1,     3,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     5,     4,     2,     1,     1,
       1,     2,     2,     3,     3,     2,     1,     2,     1,     1,
       3,     1,     2,     3,     4,     5,     2,     1,     3,     1,
       3,     1,     1,     2,     1,     2,     3,     1,     2,     2,
       3,     3,     3,     3,     3,     4,     3,     4,     4,     3,
       1,     2,     2,     3,     1,     1,     2,     2,     2,     2,
       1,     2,     1,     3,     2,     2,     1,     1,     2,     3,
       4,     5,     4,     1,     3,     3,     1,     3,     1,     2,
       1,     1,     2,     3,     2,     3,     3,     4,     2,     3,
       3,     4,     1,     3,     4,     1,     3,     1,     1,     1,
       1,     1,     1,     3,     4,     3,     2,     3,     3,     4,
       1,     2,     2,     1,     2,     3,     2,     2,     1,     2,
       5,     7,     5,     5,     7,     6,     7,     7,     6,     5,
       6,     7,     7,     6,     3,     2,     2,     2,     3,     1,
       2,     0,     1,     1,     2,     2,     6,     8,     1,     1,
       1,     1,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     4,     3,     3,     2,
       4,     5,     4
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
#line 2431 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 40 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  primary_expression: CONSTANT FINAL\n",linea,  gramaticas );*/}
#line 2437 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 41 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  LITERAL FINAL\n",linea, gramaticas );*/}
#line 2443 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 42 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  primary_expression: LEFT_PARENTHESIS FINAL expression RIGHT_PARETHESIS\n",linea, gramaticas);*/}
#line 2449 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 43 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  primary_expression: INTEGER FINAL\n",linea, gramaticas );*/}
#line 2455 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 44 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  LITERAL FINAL\n",linea, gramaticas );*/}
#line 2461 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 45 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  LITERAL FINAL\n",linea, gramaticas );*/}
#line 2467 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 51 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  postfix_expression: primary_expression\n",linea, gramaticas );*/}
#line 2473 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 52 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  postfix_expression: pointer primary_expression\n",linea, gramaticas);*/}
#line 2479 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 53 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  postfix_expression: primary_expression pointer primary_expression \n",linea, gramaticas );*/}
#line 2485 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 54 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  postfix_expression: primary_expression pointer primary_expression \n",linea, gramaticas );*/}
#line 2491 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 55 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  postfix_expression: primary_expression pointer primary_expression \n",linea, gramaticas );*/}
#line 2497 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 56 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  postfix_expression: postfix_expression RIGHT_SBRACKET expression LEFT_SBRACKET\n",linea, gramaticas);*/}
#line 2503 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 57 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  postfix_expression: postfix_expression RIGHT_SBRACKET expression LEFT_SBRACKET\n",linea, gramaticas);
}	| LEFT_BRACKET RIGHT_BRACKET {/*printf("%d con %s  postfix_expression: postfix_expression RIGHT_SBRACKET expression LEFT_SBRACKET\n",linea, gramaticas);*/}
#line 2510 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 59 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  postfix_expression: postfix_expression LEFT_PARENTHESIS RIGHT_PARENTHESIS\n",linea,gramaticas);*/}
#line 2516 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 60 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  postfix_expression: postfix_expression RIGHT_PARENTHESIS argument_expression_list LEFT_PARENTHESIS\n",linea, gramaticas);*/}
#line 2522 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 62 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  postfix_expression: postfix_expression DOT IDENTIFIER\n",linea, gramaticas);*/}
#line 2528 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 63 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  postfix_expression: postfix_expression PTR_OP IDENTIFIER\n",linea, gramaticas);*/}
#line 2534 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 64 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  postfix_expression: postfix_expression INC_OP\n",linea, gramaticas );*/}
#line 2540 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 65 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  postfix_expression: postfix_expression DEC_OP\n",linea, gramaticas );*/}
#line 2546 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 66 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  unary_expression: SIZEOF unary_expression\n",linea, gramaticas );*/}
#line 2552 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 67 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  unary_expression: SIZEOF LEFT_PARENTHESIS type_name RIGHT_PARENTHESIS\n",linea, gramaticas );*/}
#line 2558 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 68 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  unary_expression: SIZEOF LEFT_PARENTHESIS type_name RIGHT_PARENTHESIS\n",linea, gramaticas );*/}
#line 2564 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 73 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  argument_expression_list: assignment_expression\n",linea, gramaticas);*/}
#line 2570 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 74 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  argument_expression_list: argument_expression_list COMMA assignment_expression\n",linea, gramaticas);*/}
#line 2576 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 78 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  unary_expression: postfix_expression\n",linea, gramaticas );*/}
#line 2582 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 79 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  unary_expression:pointer postfix_expression\n",linea, gramaticas);*/}
#line 2588 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 80 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  unary_expression: INC_OP unary_expression\n",linea, gramaticas );*/}
#line 2594 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 81 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  unary_expression: DEC_OP unary_expression\n",linea, gramaticas );*/}
#line 2600 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 82 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  unary_expression: unary_operator cast_expression\n",linea, gramaticas );*/}
#line 2606 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 83 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  unary_expression: SIZEOF unary_expression\n",linea, gramaticas );*/}
#line 2612 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 84 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  unary_expression: SIZEOF LEFT_PARENTHESIS type_name RIGHT_PARENTHESIS\n",linea, gramaticas );*/}
#line 2618 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 85 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  unary_expression: SIZEOF LEFT_PARENTHESIS type_name RIGHT_PARENTHESIS\n",linea, gramaticas );*/}
#line 2624 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 89 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  unary_operator: BIT_AND\n",linea, gramaticas );*/}
#line 2630 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 90 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  unary_operator: MUL\n",linea, gramaticas );*/}
#line 2636 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 91 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  unary_operator: PLUS\n",linea, gramaticas );*/}
#line 2642 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 92 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  unary_operator: MINUS\n",linea, gramaticas );*/}
#line 2648 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 93 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  unary_operator: PRIME\n",linea, gramaticas );*/}
#line 2654 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 94 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  unary_operator: EXCLAMATION\n",linea, gramaticas);*/}
#line 2660 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 98 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  cast_expression: unary_expression\n",linea, gramaticas);*/}
#line 2666 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 99 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  cast_expression: LEFT_PARENTHESIS type_name RIGHT_PARENTHESIS cast_expression\n",linea, gramaticas);*/}
#line 2672 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 100 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  cast_expression: LEFT_PARENTHESIS type_name RIGHT_PARENTHESIS cast_expression\n",linea, gramaticas);*/}
#line 2678 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 101 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  cast_expression: LEFT_PARENTHESIS type_name RIGHT_PARENTHESIS cast_expression\n",linea, gramaticas);*/}
#line 2684 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 102 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  cast_expression: LEFT_PARENTHESIS type_name RIGHT_PARENTHESIS cast_expression\n",linea, gramaticas);*/}
#line 2690 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 103 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  cast_expression: LEFT_PARENTHESIS type_name RIGHT_PARENTHESIS cast_expression\n",linea, gramaticas);*/}
#line 2696 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 110 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  multiplicative_expression: multiplicative_expression MUL cast_expression\n",linea, gramaticas );*/}
#line 2702 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 111 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  multiplicative_expression: multiplicative_expression DIV cast_expression\n",linea, gramaticas );*/}
#line 2708 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 112 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  multiplicative_expression: multiplicative_expression MOD cast_expression\n",linea,gramaticas );*/}
#line 2714 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 113 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  multiplicative_expression: cast_expression\n",linea, gramaticas);*/}
#line 2720 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 117 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  additive_expression: multiplicative_expression\n",linea,gramaticas );*/}
#line 2726 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 118 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  additive_expression:multiplicative_expression UP_ARROW and_expression\n",linea,gramaticas );*/}
#line 2732 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 119 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  additive_expression:multiplicative_expression OR_OP logical_and_expression\n",linea,gramaticas );*/}
#line 2738 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 120 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  shift_expression: shift_expression LEFT_OP additive_expression\n",linea, gramaticas);*/}
#line 2744 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 121 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  shift_expression: shift_expression LEFT_OP additive_expression\n",linea, gramaticas);*/}
#line 2750 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 122 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  additive_expression: additive_expression PLUS multiplicative_expression\n",linea,gramaticas) ;*/}
#line 2756 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 123 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  additive_expression: additive_expression MINUS multiplicative_expression\n",linea, gramaticas) ;*/}
#line 2762 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 127 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  shift_expression: additive_expression\n",linea, gramaticas );*/}
#line 2768 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 128 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  shift_expression: shift_expression LEFT_OP additive_expression\n",linea, gramaticas);*/}
#line 2774 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 129 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  shift_expression: shift_expression RIGHT_OP additive_expression \n",linea, gramaticas);*/}
#line 2780 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 133 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  relational_expression: shift_expression\n",linea, gramaticas);*/}
#line 2786 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 134 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  relational_expression: relational_expression LESS shift_expression\n",linea, gramaticas);*/}
#line 2792 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 135 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  relational_expression: relational_expression GREATER shift_expression\n",linea, gramaticas );*/}
#line 2798 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 136 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  relational_expression: relational_expression LE_OP shift_expression\n",linea, gramaticas);*/}
#line 2804 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 137 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  relational_expression: relational_expression GE_OP shift_expression\n",linea, gramaticas );*/}
#line 2810 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 141 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  equality_expression: relational_expression\n",linea, gramaticas);*/}
#line 2816 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 142 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  equality_expression: equality_expression EQ_OP relational_expression\n",linea, gramaticas );*/}
#line 2822 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 143 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  equality_expression: equality_expression NE_OP relational_expression\n",linea, gramaticas);*/}
#line 2828 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 147 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  and_expression: equality_expression\n",linea, gramaticas );*/}
#line 2834 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 148 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  and_expression: and_expression BIT_AND equality_expression\n",linea, gramaticas);*/}
#line 2840 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 152 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  exclusive_or_expression: and_expression\n",linea, gramaticas );*/}
#line 2846 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 153 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  exclusive_or_expression: exclusive_or_expression UP_ARROW and_expression\n",linea, gramaticas );*/}
#line 2852 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 157 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  inclusive_or_expression: exclusive_or_expression\n",linea, gramaticas);*/}
#line 2858 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 158 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  inclusive_or_expression: inclusive_or_expression BIT_OR exclusive_or_expression\n",linea, gramaticas );*/}
#line 2864 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 162 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  logical_and_expression: inclusive_or_expression\n",linea,gramaticas );*/}
#line 2870 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 163 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  logical_and_expression: logical_and_expression AND_OP inclusive_or_expression\n",linea, gramaticas);*/}
#line 2876 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 167 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  logical_or_expression: logical_and_expression\n",linea,gramaticas);*/}
#line 2882 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 168 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  logical_or_expression: logical_or_expression OR_OP logical_and_expression\n",linea, gramaticas );*/}
#line 2888 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 172 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  conditional_expression: logical_or_expression\n",linea, gramaticas);*/}
#line 2894 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 173 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  conditional_expression: logical_or_expression INTERROGATION expression COLON conditional_expression\n",linea,gramaticas);*/}
#line 2900 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 177 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  assignment_expression: conditional_expression\n",linea, gramaticas);*/}
#line 2906 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 178 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  assignment_expression: unary_expression assignment_operator assignment_expression\n",linea,gramaticas);*/}
#line 2912 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 182 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  assignment_operator: EQU\n",linea, gramaticas);*/}
#line 2918 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 183 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  assignment_operator: MUL_ASSIGN\n",linea,gramaticas );*/}
#line 2924 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 184 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  assignment_operator: DIV_ASSIGN\n",linea,gramaticas);*/}
#line 2930 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 185 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  assignment_operator: MOD_ASSIGN\n",linea,gramaticas);*/}
#line 2936 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 186 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  assignment_operator: ADD_ASSIGN\n",linea, gramaticas);*/}
#line 2942 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 187 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  assignment_operator: SUB_ASSIGN\n",linea, gramaticas);*/}
#line 2948 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 188 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  assignment_operator: LEFT_ASSIGN\n",linea, gramaticas);*/}
#line 2954 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 189 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  assignment_operator: RIGHT_ASSIGN\n",linea,gramaticas);*/}
#line 2960 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 190 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  assignment_operator: AND_ASSIGN\n",linea, gramaticas);*/}
#line 2966 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 191 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  assignment_operator: XOR_ASSIGN\n",linea, gramaticas);*/}
#line 2972 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 192 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  assignment_operator: OR_ASSIGN\n",linea, gramaticas);*/}
#line 2978 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 196 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  expression: assignment_expression\n",linea, gramaticas);*/}
#line 2984 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 197 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  expression: expression COMMA assignment_expression\n",linea,gramaticas);*/}
#line 2990 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 201 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  constant_expression: conditional_expression\n",linea, gramaticas );*/}
#line 2996 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 205 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  declaration: declaration_specifiers SEMICOLON \n",linea, gramaticas );memset(gramaticas,0,sizeof(gramaticas));*/}
#line 3002 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 206 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  declaration: declaration_specifiers init_declarator_list SEMICOLON\n",linea, gramaticas);memset(gramaticas,0,sizeof(gramaticas));*/}
#line 3008 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 207 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  declaration: LEFT_PARENTHESIS declaration_specifiers RIGHT_PARENTHESIS init_declarator_list SEMICOLON \n",linea, gramaticas);memset(gramaticas,0,sizeof(gramaticas));*/}
#line 3014 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 208 "parser.y" /* yacc.c:1646  */
    {memset(gramaticas,0,sizeof(gramaticas));/*printf("%d con %s  declaration: LEFT_PARENTHESIS declaration_specifiers RIGHT_PARENTHESIS init_declarator_list SEMICOLON \n",linea, gramaticas);memset(gramaticas,0,sizeof(gramaticas));*/}
#line 3020 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 212 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  declaration_specifiers: storage_class_specifier \n",linea, gramaticas);*/}
#line 3026 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 213 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  declaration_specifiers: storage_class_specifier declaration_specifiers\n",linea, gramaticas);*/}
#line 3032 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 214 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  declaration_specifiers: type_specifier\n",linea, gramaticas);*/}
#line 3038 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 216 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  declaration_specifiers: type_specifier declaration_specifiers {\n",linea, gramaticas);*/}
#line 3044 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 218 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  declaration_specifiers: type_specifier\n",linea, gramaticas);*/}
#line 3050 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 220 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  declaration_specifiers: type_specifier declaration_specifiers {\n",linea, gramaticas);*/}
#line 3056 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 221 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  declaration_specifiers: type_specifier declaration_specifiers {\n",linea, gramaticas);*/}
#line 3062 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 223 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  declaration_specifiers: type_qualifier\n",linea, gramaticas );*/}
#line 3068 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 224 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  declaration_specifiers: type_qualifier declaration_specifiers\n",linea, gramaticas );*/}
#line 3074 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 229 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  init_declarator_list: init_declarator\n",linea, gramaticas );*/}
#line 3080 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 230 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  init_declarator_list: init_declarator_list COMMA init_declarator\n",linea,gramaticas);*/}
#line 3086 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 234 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  init_declarator: declarator\n",linea, gramaticas );*/}
#line 3092 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 235 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  init_declarator: declarator EQU initializer\n",linea, gramaticas );*/}
#line 3098 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 236 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  init_declarator: multiplicative_expression\n",linea, gramaticas );*/}
#line 3104 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 241 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  storage_class_specifier: TYPEDEF\n",linea, gramaticas);*/}
#line 3110 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 242 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  storage_class_specifier: EXTERN\n",linea, gramaticas);*/}
#line 3116 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 243 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  storage_class_specifier: STATIC\n",linea,gramaticas);*/}
#line 3122 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 244 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  storage_class_specifier: AUTO\n",linea, gramaticas);*/}
#line 3128 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 245 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  storage_class_specifier: REGISTER\n",linea, gramaticas);*/}
#line 3134 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 249 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  type_specifier: VOID\n",linea, gramaticas);*/}
#line 3140 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 250 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  type_specifier: CHAR\n",linea, gramaticas);*/}
#line 3146 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 251 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  type_specifier: SHORT\n",linea, gramaticas);*/}
#line 3152 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 252 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  type_specifier: INT\n",linea, gramaticas);*/}
#line 3158 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 253 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  type_specifier: LONG\n",linea, gramaticas);*/}
#line 3164 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 254 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  type_specifier: FLOAT\n",linea, gramaticas);*/}
#line 3170 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 255 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  type_specifier: DOUBLE\n",linea, gramaticas);*/}
#line 3176 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 256 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  type_specifier: SIGNED\n",linea, gramaticas);*/}
#line 3182 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 257 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  type_specifier: UNSIGNED\n",linea, gramaticas);*/}
#line 3188 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 258 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  type_specifier: struct_or_union_specifier\n",linea, gramaticas );*/}
#line 3194 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 259 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  type_specifier: enum_specifier\n",linea, gramaticas );*/}
#line 3200 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 264 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  struct_or_union_specifier: struct_or_union IDENTIFIER LEFT_BRACKET struct_declaration_list RIGHT_BRACKET \n",linea, gramaticas );*/}
#line 3206 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 265 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  struct_or_union_specifier: struct_or_union LEFT_BRACKET struct_declaration_list RIGHT_BRACKET\n",linea,gramaticas );*/}
#line 3212 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 266 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  struct_or_union_specifier: struct_or_union IDENTIFIER\n",linea, gramaticas);*/}
#line 3218 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 270 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  struct_or_union: STRUCT\n",linea, gramaticas);*/}
#line 3224 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 271 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  struct_or_union: UNION\n",linea, gramaticas);*/}
#line 3230 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 275 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  struct_declaration_list: struct_declaration\n",linea, gramaticas );*/}
#line 3236 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 276 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  struct_declaration_list: struct_declaration_list struct_declaration\n",linea, gramaticas );*/}
#line 3242 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 277 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  struct_declaration_list:  struct_declaration_list declaration_list\n",linea, gramaticas );*/}
#line 3248 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 281 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  struct_declaration: specifier_qualifier_list struct_declarator_list SEMICOLON\n",linea, gramaticas );memset(gramaticas,0,sizeof(gramaticas));*/}
#line 3254 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 282 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  struct_declaration: IDENTIFIER struct_declarator_list SEMICOLON \n",linea, gramaticas );memset(gramaticas,0,sizeof(gramaticas));*/}
#line 3260 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 286 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  specifier_qualifier_list: type_specifier specifier_qualifier_list\n",linea, gramaticas );*/}
#line 3266 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 287 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  specifier_qualifier_list: type_specifier\n",linea, gramaticas );*/}
#line 3272 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 289 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  specifier_qualifier_list: type_qualifier specifier_qualifier_list\n",linea,gramaticas);*/}
#line 3278 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 290 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  specifier_qualifier_list: type_qualifier\n",linea, gramaticas );*/}
#line 3284 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 295 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  struct_declarator_list: struct_declarator\n",linea, gramaticas );*/}
#line 3290 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 296 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  struct_declarator_list: struct_declarator_list COMMA struct_declarator\n",linea, gramaticas );*/}
#line 3296 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 300 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  struct_declarator: declarator\n",linea, gramaticas );*/}
#line 3302 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 301 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  struct_declarator: COLON constant_expression \n",linea, gramaticas );*/}
#line 3308 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 302 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  struct_declarator: declarator COLON constant_expression \n",linea, gramaticas);*/}
#line 3314 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 306 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  enum_specifier: ENUM LEFT_BRACKET enumerator_list RIGHT_BRACKET\n",linea, gramaticas);*/}
#line 3320 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 307 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  enum_specifier: ENUM IDENTIFIER LEFT_BRACKET enumerator_list RIGHT_BRACKET \n",linea,gramaticas);*/}
#line 3326 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 308 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  enum_specifier: ENUM IDENTIFIER\n",linea, gramaticas );*/}
#line 3332 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 312 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  enumerator_list: enumerator\n",linea, gramaticas);*/}
#line 3338 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 313 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  enumerator_list: enumerator_list COMMA enumerator\n",linea, gramaticas );*/}
#line 3344 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 317 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  enumerator: IDENTIFIER\n",linea, gramaticas);*/}
#line 3350 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 318 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  enumerator: IDENTIFIER EQU constant_expression\n",linea,gramaticas);*/}
#line 3356 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 322 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  type_qualifier: CONST\n",linea,gramaticas);*/}
#line 3362 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 323 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  type_qualifier: VOLATILE\n",linea, gramaticas);*/}
#line 3368 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 327 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  declarator: pointer direct_declarator \n",linea, gramaticas );*/}
#line 3374 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 328 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  declarator: direct_declarator\n",linea, gramaticas );*/}
#line 3380 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 329 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  declarator: declarator direct_declarator\n",linea, gramaticas );*/}
#line 3386 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 330 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  declarator: direct_declarator EQU initializer \n",linea, gramaticas );*/}
#line 3392 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 336 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  direct_declarator: IDENTIFIER\n",linea, gramaticas);*/}
#line 3398 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 337 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  direct_declarator: direct_declarator INC_OP\n",linea, gramaticas);*/}
#line 3404 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 338 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  direct_declarator: direct_declarator DEC_OP\n",linea, gramaticas);*/}
#line 3410 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 339 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  direct_declarator: direct_declarator DOT direct_declarator\n",linea, gramaticas);*/}
#line 3416 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 340 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  direct_declarator: direct_declarator PTR_OP direct_declarator\n",linea, gramaticas);*/}
#line 3422 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 341 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  direct_declarator: LEFT_PARENTHESIS declarator RIGHT_PARENTHESIS\n",linea, gramaticas );*/}
#line 3428 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 342 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  direct_declarator: LEFT_PARENTHESIS declarator RIGHT_PARENTHESIS\n",linea, gramaticas );*/}
#line 3434 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 343 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  type_specifier: TYPE_NAME\n",linea,gramaticas);*/}
#line 3440 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 344 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  direct_declarator: direct_declarator LEFT_SBRACKET constant_expression RIGHT_SBRACKET\n",linea,gramaticas);*/}
#line 3446 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 345 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  direct_declarator: direct_declarator LEFT_SBRACKET RIGHT_SBRACKET\n",linea, gramaticas );*/}
#line 3452 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 347 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  direct_declarator: direct_declarator LEFT_PARENTHESIS parameter_type_list RIGHT_PARENTHESIS\n",linea, gramaticas );*/}
#line 3458 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 348 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  direct_declarator: direct_declarator LEFT_PARENTHESIS identifier_list RIGHT_PARENTHESIS\n",linea, gramaticas );*/}
#line 3464 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 350 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  direct_declarator: direct_declarator LEFT_PARENTHESIS RIGHT_PARENTHESIS\n",linea,gramaticas);*/}
#line 3470 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 355 "parser.y" /* yacc.c:1646  */
    { /*printf("%d con %s  pointer: pointer_type\n",linea, gramaticas);*/}
#line 3476 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 356 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  pointer: pointer_type type_qualifier_list\n",linea, gramaticas );*/}
#line 3482 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 357 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  pointer: pointer_type pointer\n",linea, gramaticas );*/}
#line 3488 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 358 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  pointer: pointer_type type_qualifier_list pointer\n",linea,gramaticas);*/}
#line 3494 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 362 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  pointer_type: MUL\n",linea,gramaticas);*/}
#line 3500 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 363 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  pointer_type: BIT_AND\n",linea,gramaticas);*/}
#line 3506 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 364 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  pointer_type: MUL\n",linea,gramaticas);*/}
#line 3512 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 365 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  pointer_type: MUL\n",linea,gramaticas);*/}
#line 3518 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 367 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  pointer_type: BIT_AND\n",linea,gramaticas);*/}
#line 3524 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 371 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  type_qualifier_list: type_qualifier\n",linea,gramaticas );*/}
#line 3530 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 372 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  type_qualifier_list: type_qualifier_list type_qualifier\n",linea, gramaticas );*/}
#line 3536 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 377 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  parameter_type_list: parameter_list\n",linea, gramaticas );*/}
#line 3542 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 378 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  parameter_type_list: parameter_list COMMA ELLIPSIS\n",linea, gramaticas);*/}
#line 3548 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 384 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  parameter_declaration: declaration_specifiers declarator\n",linea, gramaticas );*/}
#line 3554 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 385 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  parameter_declaration: declaration_specifiers abstract_declarator\n",linea, gramaticas );*/}
#line 3560 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 386 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  parameter_declaration: declaration_specifiers\n",linea, gramaticas );*/}
#line 3566 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 387 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  parameter_declaration: declarator\n",linea, gramaticas );*/}
#line 3572 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 388 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  parameter_declaration: IDENTIFIER abstract_declarator\n",linea, gramaticas );*/}
#line 3578 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 389 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  parameter_declaration: IDENTIFIER abstract_declarator\n",linea, gramaticas
	 );*/}
#line 3585 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 391 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  unary_expression: SIZEOF LEFT_PARENTHESIS type_name RIGHT_PARENTHESIS\n",linea, gramaticas );*/}
#line 3591 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 392 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  unary_expression: SIZEOF LEFT_PARENTHESIS IDENTIFIER pointer RIGHT_PARENTHESIS\n",linea, gramaticas );*/}
#line 3597 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 393 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  unary_expression: SIZEOF LEFT_PARENTHESIS IDENTIFIER RIGHT_PARENTHESIS\n",linea, gramaticas );*/}
#line 3603 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 398 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  identifier_list: IDENTIFIER COMMA identifier_list\n",linea, gramaticas);*/}
#line 3609 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 399 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  identifier_list: IDENTIFIER COMMA parameter_list\n",linea, gramaticas);*/}
#line 3615 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 402 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  parameter_list: parameter_declaration\n",linea, gramaticas);*/}
#line 3621 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 403 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  parameter_list: parameter_list COMMA parameter_declaration\n",linea, gramaticas);*/}
#line 3627 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 406 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  type_name: specifier_qualifier_list\n",linea, gramaticas);*/}
#line 3633 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 407 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  type_name: specifier_qualifier_list abstract_declarator\n",linea, gramaticas);*/}
#line 3639 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 412 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  abstract_declarator: pointer\n",linea, gramaticas);*/}
#line 3645 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 413 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  abstract_declarator: direct_abstract_declarator\n",linea, gramaticas );*/}
#line 3651 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 212:
#line 414 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  abstract_declarator: pointer direct_abstract_declarator\n",linea, gramaticas);*/}
#line 3657 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 418 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  direct_abstract_declarator: LEFT_PARENTHESIS abstract_declarator RIGHT_PARENTHESIS \n",linea, gramaticas );*/}
#line 3663 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 214:
#line 419 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  direct_abstract_declarator:  LEFT_SBRACKET RIGHT_SBRACKET \n",linea, gramaticas);*/}
#line 3669 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 215:
#line 420 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  direct_abstract_declarator: LEFT_SBRACKET constant_expression RIGHT_SBRACKET \n",linea, gramaticas );*/}
#line 3675 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 216:
#line 421 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  direct_abstract_declarator: direct_abstract_declarator LEFT_SBRACKET RIGHT_SBRACKET\n",linea, gramaticas );*/}
#line 3681 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 217:
#line 422 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  direct_abstract_declarator: direct_abstract_declarator LEFT_SBRACKET constant_expression RIGHT_SBRACKET \n",linea, gramaticas );*/}
#line 3687 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 218:
#line 423 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  direct_abstract_declarator: LEFT_PARENTHESIS RIGHT_PARENTHESIS\n",linea, gramaticas);*/}
#line 3693 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 219:
#line 424 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  direct_abstract_declarator: LEFT_PARENTHESIS parameter_type_list RIGHT_PARENTHESIS \n",linea, gramaticas );*/}
#line 3699 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 220:
#line 425 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  direct_abstract_declarator: direct_abstract_declarator LEFT_PARENTHESIS RIGHT_PARENTHESIS\n",linea,gramaticas );*/}
#line 3705 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 221:
#line 426 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  direct_abstract_declarator: direct_abstract_declarator LEFT_PARENTHESIS parameter_type_list RIGHT_PARENTHESIS\n",linea,  gramaticas  );*/}
#line 3711 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 222:
#line 430 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  initializer: assignment_expression\n",linea, gramaticas );*/}
#line 3717 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 223:
#line 431 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  initializer: LEFT_BRACKET initializer_list RIGHT_BRACKET\n",linea,  gramaticas );*/}
#line 3723 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 224:
#line 432 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  initializer: LEFT_BRACKET initializer_list COMMA RIGHT_BRACKET\n",linea, gramaticas );*/}
#line 3729 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 225:
#line 436 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  initializer_list: initializer\n",linea, gramaticas);*/}
#line 3735 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 226:
#line 437 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  initializer_list: initializer_list COMMA initializer \n",linea, gramaticas);*/}
#line 3741 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 227:
#line 441 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  statement: labeled_statement\n",linea, gramaticas );*/}
#line 3747 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 228:
#line 442 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  statement: compound_statement\n",linea, gramaticas);*/}
#line 3753 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 229:
#line 443 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  statement: expression_statement\n",linea,gramaticas );*/}
#line 3759 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 230:
#line 444 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  statement: selection_statement\n",linea, gramaticas);*/}
#line 3765 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 231:
#line 445 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  statement: iteration_statement\n",linea, gramaticas );*/}
#line 3771 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 232:
#line 446 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  statement: jump_statement\n",linea, gramaticas );*/}
#line 3777 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 233:
#line 450 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  labeled_statement: IDENTIFIER COLON statement \n",linea, gramaticas );*/}
#line 3783 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 234:
#line 451 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  labeled_statement: CASE constant_expression COLON statement\n",linea, gramaticas );*/}
#line 3789 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 235:
#line 452 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  labeled_statement: DEFAULT COLON statement\n",linea, gramaticas );*/}
#line 3795 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 236:
#line 456 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  compound_statement: LEFT_BRACKET RIGHT_BRACKET\n",linea, gramaticas);*/}
#line 3801 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 237:
#line 457 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  compound_statement: LEFT_BRACKET statement_list RIGHT_BRACKET\n",linea, gramaticas );*/}
#line 3807 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 238:
#line 458 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  compound_statement: LEFT_BRACKET declaration_list RIGHT_BRACKET\n",linea, gramaticas);*/}
#line 3813 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 239:
#line 459 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  compound_statement: LEFT_BRACKET declaration_list statement_list RIGHT_BRACKET\n",linea, gramaticas);*/}
#line 3819 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 240:
#line 463 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  declaration_list: declaration\n",linea, gramaticas );*/}
#line 3825 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 241:
#line 465 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  declaration_list: declaration_list declaration\n",linea, gramaticas);*/}
#line 3831 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 242:
#line 466 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  declaration_list: declaration_list statement_list\n",linea, gramaticas);*/}
#line 3837 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 243:
#line 470 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  statement_list: statement\n",linea, gramaticas );*/}
#line 3843 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 245:
#line 472 "parser.y" /* yacc.c:1646  */
    {memset(gramaticas,0,sizeof(gramaticas)); /*printf("%d con %s  external_declaration: DEFINE define\n",linea, gramaticas);*/}
#line 3849 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 246:
#line 473 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  statement_list: statement_list statement\n",linea, gramaticas);*/}
#line 3855 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 247:
#line 474 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  statement_list: statement_list declaration_list\n",linea, gramaticas);*/}
#line 3861 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 248:
#line 478 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  expression_statement: SEMICOLON\n",linea, gramaticas );memset(gramaticas,0,sizeof(gramaticas));*/}
#line 3867 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 249:
#line 479 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  expression_statement: expression SEMICOLON \n",linea, gramaticas );memset(gramaticas,0,sizeof(gramaticas));*/}
#line 3873 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 250:
#line 483 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  selection_statement: IF LEFT_PARENTHESIS expression RIGHT_PARENTHESIS statement\n",linea,gramaticas);*/}
#line 3879 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 251:
#line 484 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  selection_statement: IF LEFT_PARENTHESIS expression RIGHT_PARENTHESIS statement ELSE statement\n",linea, gramaticas);*/}
#line 3885 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 252:
#line 485 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  selection_statement: SWITCH LEFT_PARENTHESIS expression RIGHT_PARENTHESIS statement\n",linea, gramaticas );*/}
#line 3891 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 253:
#line 489 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  iteration_statement: WHILE LEFT_PARENTHESIS expression RIGHT_PARENTHESIS statement\n",linea, gramaticas);*/}
#line 3897 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 254:
#line 490 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  iteration_statement: DO statement WHILE LEFT_PARENTHESIS expression RIGHT_PARENTHESIS SEMICOLON\n",linea, gramaticas);memset(gramaticas,0,sizeof(gramaticas));*/}
#line 3903 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 255:
#line 491 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  iteration_statement: FOR LEFT_PARENTHESIS expression_statement expression_statement RIGHT_PARENTHESIS statement\n",linea, gramaticas );*/}
#line 3909 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 256:
#line 492 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  iteration_statement: FOR LEFT_PARENTHESIS expression_statement expression_statement expression RIGHT_PARENTHESIS statement\n",linea, gramaticas);*/}
#line 3915 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 257:
#line 493 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  iteration_statement: FOR LEFT_PARENTHESIS expression_statement expression_statement expression RIGHT_PARENTHESIS statement\n",linea, gramaticas);*/}
#line 3921 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 258:
#line 494 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  iteration_statement: FOR LEFT_PARENTHESIS expression_statement expression_statement expression RIGHT_PARENTHESIS statement\n",linea, gramaticas);*/}
#line 3927 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 259:
#line 495 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  iteration_statement: WHILE LEFT_PARENTHESIS expression RIGHT_PARENTHESIS statement\n",linea, gramaticas);*/}
#line 3933 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 260:
#line 496 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  iteration_statement: FOR LEFT_PARENTHESIS expression_statement expression_statement RIGHT_PARENTHESIS statement\n",linea, gramaticas );*/}
#line 3939 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 261:
#line 497 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  iteration_statement: FOR LEFT_PARENTHESIS expression_statement expression_statement expression RIGHT_PARENTHESIS statement\n",linea, gramaticas);*/}
#line 3945 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 262:
#line 498 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  iteration_statement: FOR LEFT_PARENTHESIS expression_statement expression_statement expression RIGHT_PARENTHESIS statement\n",linea, gramaticas);*/}
#line 3951 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 263:
#line 499 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  iteration_statement: FOR LEFT_PARENTHESIS expression_statement expression_statement expression RIGHT_PARENTHESIS statement\n",linea, gramaticas);*/}
#line 3957 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 264:
#line 503 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  jump_statement: GOTO IDENTIFIER SEMICOLON\n",linea, gramaticas );memset(gramaticas,0,sizeof(gramaticas));*/}
#line 3963 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 265:
#line 504 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  jump_statement: CONTINUE SEMICOLON\n",linea, gramaticas);memset(gramaticas,0,sizeof(gramaticas));*/}
#line 3969 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 266:
#line 505 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  jump_statement: BREAK SEMICOLON\n",linea, gramaticas);memset(gramaticas,0,sizeof(gramaticas));*/}
#line 3975 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 267:
#line 506 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  jump_statement: RETURN SEMICOLON\n",linea, gramaticas);memset(gramaticas,0,sizeof(gramaticas));*/}
#line 3981 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 268:
#line 507 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  jump_statement: RETURN expression SEMICOLON\n",linea, gramaticas);memset(gramaticas,0,sizeof(gramaticas));*/}
#line 3987 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 269:
#line 511 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  translation_unit: Entre a external_declaration\n",linea, gramaticas);memset(gramaticas,0,sizeof(gramaticas));*/}
#line 3993 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 270:
#line 512 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  translation_unit: Entre a ciclo translation_unit\n",linea, gramaticas );memset(gramaticas,0,sizeof(gramaticas));*/}
#line 3999 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 271:
#line 513 "parser.y" /* yacc.c:1646  */
    {/*printf("%d  translation_unit: Archivo Vacío\n",linea );memset(gramaticas,0,sizeof(gramaticas));*/}
#line 4005 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 272:
#line 518 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  external_declaration: function_definition\n",linea, gramaticas);*/}
#line 4011 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 273:
#line 519 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  external_declaration: declaration\n",linea, gramaticas);*/}
#line 4017 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 274:
#line 520 "parser.y" /* yacc.c:1646  */
    {memset(gramaticas,0,sizeof(gramaticas)); /*printf("%d con %s  external_declaration: DEFINE define\n",linea, gramaticas);*/}
#line 4023 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 275:
#line 521 "parser.y" /* yacc.c:1646  */
    {memset(gramaticas,0,sizeof(gramaticas));/*printf("%d con %s  external_declaration: INCLUDE LITERALn\n",linea, gramaticas);*/}
#line 4029 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 276:
#line 522 "parser.y" /* yacc.c:1646  */
    {memset(gramaticas,0,sizeof(gramaticas));/*printf("%d con %s  external_declaration: INCLUDE LITERALn\n",linea, gramaticas);*/}
#line 4035 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 277:
#line 523 "parser.y" /* yacc.c:1646  */
    {memset(gramaticas,0,sizeof(gramaticas));/*printf("%d con %s  external_declaration: INCLUDE LITERALn\n",linea, gramaticas);*/}
#line 4041 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 278:
#line 524 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  external_declaration: \\n \n",linea, gramaticas);*/}
#line 4047 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 279:
#line 525 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  external_declaration: SEMICOLON\n",linea, gramaticas);*/}
#line 4053 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 280:
#line 526 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  external_declaration: compound_statement\n",linea, gramaticas);*/}
#line 4059 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 281:
#line 530 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  define: define_enter\n",linea, gramaticas);*/}
#line 4065 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 366:
#line 622 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  function_definition: declaration_specifiers declarator declaration_list compound_statement\n",linea,gramaticas);*/}
#line 4071 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 367:
#line 623 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  function_definition: declaration_specifiers declarator compound_statement \n",linea, gramaticas);*/}
#line 4077 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 368:
#line 624 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  function_definition: declarator declaration_list compound_statement\n",linea, gramaticas );*/}
#line 4083 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 369:
#line 625 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  function_definition: declarator compound_statement\n",linea,gramaticas);*/}
#line 4089 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 370:
#line 626 "parser.y" /* yacc.c:1646  */
    {/*printf("%d con %s  function_definition: declarator declaration_list compound_statement function_definition\n",linea,gramaticas);*/}
#line 4095 "parser.tab.c" /* yacc.c:1646  */
    break;


#line 4099 "parser.tab.c" /* yacc.c:1646  */
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
#line 631 "parser.y" /* yacc.c:1906  */


#include<stdio.h>
#include <stdbool.h>
