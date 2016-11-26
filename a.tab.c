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
#line 1 "a.y" /* yacc.c:339  */

  #include <stdio.h>
  #include "ts.h"
  //Useful functions
  char* getSignByType(int type);
  int getTypeBySign(char* sign);
  //End
  extern FILE* yyin;
  extern int yylineno;
  extern TS* L;
  //Useful variables
  int i=-1;
  int natIDF;
  int typeIDF;
  int typeSTR;
  int sizeIDF;
  int AffleftType;
  int AffRightType;
  int IDFcst;
  //End
  #define RED   "\x1B[31m"
  #define GRN   "\x1B[32m"
  #define YEL   "\x1B[33m"
  #define BLU   "\x1B[34m"
  #define MAG   "\x1B[35m"
  #define CYN   "\x1B[36m"
  #define WHT   "\x1B[37m"
  #define RESET "\x1B[0m"

#line 96 "a.tab.c" /* yacc.c:339  */

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
   by #include "a.tab.h".  */
#ifndef YY_YY_A_TAB_H_INCLUDED
# define YY_YY_A_TAB_H_INCLUDED
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
    Main = 258,
    Import = 259,
    MiniLlang = 260,
    MiniLio = 261,
    public = 262,
    protected = 263,
    class = 264,
    INTEGER = 265,
    REAL = 266,
    STR = 267,
    CONST = 268,
    For = 269,
    In = 270,
    Out = 271,
    Affect = 272,
    different = 273,
    lessEq = 274,
    greatEq = 275,
    doubleSLash = 276,
    IDF = 277,
    str = 278,
    Entier = 279,
    real = 280
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 31 "a.y" /* yacc.c:355  */

  char* chaine;
  char car;
  int entier;
  float Real;


#line 170 "a.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_A_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 187 "a.tab.c" /* yacc.c:358  */

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
#define YYFINAL  7
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   166

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  44
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  31
/* YYNRULES -- Number of rules.  */
#define YYNRULES  78
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  167

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   280

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    30,     2,     2,     2,     2,    28,     2,
      35,    34,    20,    18,    32,    19,     2,    21,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    33,
      23,    24,    22,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    36,     2,    37,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    38,    29,    39,     2,     2,     2,     2,
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
      15,    16,    17,    25,    26,    27,    31,    40,    41,    42,
      43
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    52,    52,    60,    61,    65,    66,    71,    72,    77,
      78,    82,    83,    84,    88,    89,    93,    94,    98,   102,
     107,   115,   121,   128,   129,   130,   134,   135,   136,   140,
     141,   145,   146,   147,   148,   149,   153,   160,   164,   173,
     186,   195,   205,   209,   210,   214,   222,   233,   234,   238,
     239,   240,   241,   242,   243,   244,   248,   249,   250,   251,
     252,   256,   257,   261,   262,   266,   270,   271,   272,   276,
     277,   278,   282,   286,   295,   296,   297,   298,   299
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "Main", "Import", "MiniLlang", "MiniLio",
  "public", "protected", "class", "INTEGER", "REAL", "STR", "CONST", "For",
  "In", "Out", "Affect", "'+'", "'-'", "'*'", "'/'", "'>'", "'<'", "'='",
  "different", "lessEq", "greatEq", "'&'", "'|'", "'!'", "doubleSLash",
  "','", "';'", "')'", "'('", "'['", "']'", "'{'", "'}'", "IDF", "str",
  "Entier", "real", "$accept", "S", "imp", "H", "modif", "DEC", "nat",
  "simple", "loopSimple", "tab", "cst", "loopCst", "Val", "type", "INST",
  "ty", "Aff", "Loop", "Lect", "Ecrit", "Init", "IDFa", "Condf", "Cond",
  "comparator", "binary", "Incf", "Inc", "Expression", "Term", "Factor", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,    43,    45,
      42,    47,    62,    60,    61,   273,   274,   275,    38,   124,
      33,   276,    44,    59,    41,    40,    91,    93,   123,   125,
     277,   278,   279,   280
};
# endif

#define YYPACT_NINF -100

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-100)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int8 yypact[] =
{
      17,    70,     8,    84,    17,    18,    24,  -100,  -100,  -100,
      20,  -100,  -100,  -100,    22,    33,    36,  -100,  -100,  -100,
      14,    74,    36,  -100,  -100,  -100,    62,    63,    66,  -100,
     -14,    88,    -9,    67,  -100,    64,    -4,    73,    76,    77,
      78,    71,    -9,  -100,  -100,  -100,  -100,    92,    81,    82,
      80,  -100,  -100,  -100,    61,    85,    83,    87,    89,    90,
    -100,     1,    67,  -100,    86,    93,  -100,    97,    99,    94,
      40,    95,  -100,     1,     1,    98,  -100,  -100,  -100,    -5,
      75,  -100,  -100,  -100,   103,   102,    10,     1,    96,   100,
     104,  -100,  -100,    -7,   101,     1,     1,  -100,     1,     1,
      -4,  -100,    10,    10,  -100,  -100,  -100,   105,    41,    -2,
      52,    53,  -100,  -100,   107,    75,    75,  -100,  -100,   109,
      56,    32,    85,  -100,  -100,  -100,  -100,  -100,  -100,  -100,
      10,    10,    10,    85,   106,   108,   112,   110,  -100,    93,
    -100,   125,   113,   114,  -100,    56,    56,  -100,  -100,   111,
    -100,   116,  -100,     1,   117,    85,   115,   120,    79,    -9,
    -100,   118,   123,   119,  -100,  -100,  -100
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     4,     0,     0,     1,     7,     8,
       0,     3,     5,     6,     0,     0,     0,    26,    27,    28,
       0,     0,    10,    11,    12,    13,     0,     0,     0,     9,
       0,     0,    35,     0,    15,     0,     0,     0,     0,     0,
      45,     0,    30,    31,    32,    33,    34,     0,    17,     0,
       0,    24,    23,    25,     0,     0,     0,     0,     0,     0,
      29,     0,     0,    14,     0,     0,    20,     0,     0,     0,
       0,     0,     2,     0,     0,    72,    76,    74,    75,     0,
      68,    71,    16,    18,     0,     0,     0,     0,     0,     0,
       0,    46,    78,     0,     0,     0,     0,    36,     0,     0,
       0,    19,     0,     0,    54,    55,    53,     0,    48,    44,
       0,     0,    42,    77,     0,    66,    67,    69,    70,    22,
      50,     0,     0,    56,    58,    60,    59,    57,    61,    62,
       0,     0,     0,     0,     0,     0,     0,     0,    73,     0,
      49,     0,     0,    64,    47,    51,    52,    43,    38,     0,
      40,     0,    21,     0,     0,     0,     0,     0,    65,    35,
      63,     0,     0,     0,    39,    41,    37
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -100,  -100,   153,  -100,  -100,   137,  -100,  -100,    59,  -100,
    -100,   -17,    60,   141,   -41,  -100,  -100,  -100,  -100,  -100,
      29,   -32,    34,   -99,  -100,  -100,    11,  -100,   -72,     4,
     -64
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     4,    10,    21,    22,    23,    49,    24,
      25,    85,    54,    26,    41,    42,    43,    44,    45,    46,
      67,   106,   107,   108,   131,   132,   142,   143,    79,    80,
      81
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      47,    60,    93,   120,   121,    37,    38,    39,     7,    92,
      47,    95,    96,    95,    96,   109,    95,    96,    33,    34,
      73,     1,    35,    68,    17,    18,    19,   113,    97,    14,
     133,    40,   145,   146,   117,   118,    74,    51,    52,    53,
     102,    75,    76,    77,    78,   103,    17,    18,    19,    20,
      40,    12,   104,   105,   123,   124,   125,    13,   126,   127,
     128,   129,    15,   123,   124,   125,   140,   126,   127,   128,
     129,    16,    89,   130,    90,     5,     6,    28,   123,   124,
     125,   158,   126,   127,   128,   129,   134,   136,   135,   137,
     141,     8,     9,    65,    66,    98,    99,    95,    96,   115,
     116,    68,    30,    31,    32,    36,    50,    48,    55,    61,
      59,    56,    57,    62,    58,    63,    87,    64,   163,    83,
     100,    82,   152,   141,    69,    40,    88,    47,    70,    72,
      86,    71,    91,    84,    94,   101,   110,   112,   122,   148,
     111,   139,   153,   114,   138,   150,   155,   154,   156,   161,
     149,   164,   151,   157,   162,   159,   165,    11,   166,    29,
     119,    27,   147,     0,   144,     0,   160
};

static const yytype_int16 yycheck[] =
{
      32,    42,    74,   102,   103,    14,    15,    16,     0,    73,
      42,    18,    19,    18,    19,    87,    18,    19,    32,    33,
      19,     4,    36,    55,    10,    11,    12,    34,    33,     9,
      32,    40,   131,   132,    98,    99,    35,    41,    42,    43,
      30,    40,    41,    42,    43,    35,    10,    11,    12,    13,
      40,    33,    42,    43,    22,    23,    24,    33,    26,    27,
      28,    29,    40,    22,    23,    24,    34,    26,    27,    28,
      29,    38,    32,    32,    34,     5,     6,     3,    22,    23,
      24,   153,    26,    27,    28,    29,    34,    34,    36,    36,
     122,     7,     8,    32,    33,    20,    21,    18,    19,    95,
      96,   133,    40,    40,    38,    17,    42,    40,    35,    17,
      39,    35,    35,    32,    36,    33,    17,    37,   159,    33,
      17,    62,   139,   155,    41,    40,    32,   159,    41,    39,
      33,    42,    37,    40,    36,    33,    40,    33,    33,    33,
      40,    32,    17,    42,    37,    33,    32,    34,    37,    34,
      42,    33,    42,    37,    34,    38,    33,     4,    39,    22,
     100,    20,   133,    -1,   130,    -1,   155
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     4,    45,    46,    47,     5,     6,     0,     7,     8,
      48,    46,    33,    33,     9,    40,    38,    10,    11,    12,
      13,    49,    50,    51,    53,    54,    57,    57,     3,    49,
      40,    40,    38,    32,    33,    36,    17,    14,    15,    16,
      40,    58,    59,    60,    61,    62,    63,    65,    40,    52,
      42,    41,    42,    43,    56,    35,    35,    35,    36,    39,
      58,    17,    32,    33,    37,    32,    33,    64,    65,    41,
      41,    42,    39,    19,    35,    40,    41,    42,    43,    72,
      73,    74,    52,    33,    40,    55,    33,    17,    32,    32,
      34,    37,    74,    72,    36,    18,    19,    33,    20,    21,
      17,    33,    30,    35,    42,    43,    65,    66,    67,    72,
      40,    40,    33,    34,    42,    73,    73,    74,    74,    56,
      67,    67,    33,    22,    23,    24,    26,    27,    28,    29,
      32,    68,    69,    32,    34,    36,    34,    36,    37,    32,
      34,    65,    70,    71,    66,    67,    67,    64,    33,    42,
      33,    42,    55,    17,    34,    32,    37,    37,    72,    38,
      70,    34,    34,    58,    33,    33,    39
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    44,    45,    46,    46,    47,    47,    48,    48,    49,
      49,    50,    50,    50,    51,    51,    52,    52,    53,    54,
      54,    55,    55,    56,    56,    56,    57,    57,    57,    58,
      58,    59,    59,    59,    59,    59,    60,    61,    62,    62,
      63,    63,    63,    64,    64,    65,    65,    66,    66,    67,
      67,    67,    67,    67,    67,    67,    68,    68,    68,    68,
      68,    69,    69,    70,    70,    71,    72,    72,    72,    73,
      73,    73,    74,    74,    74,    74,    74,    74,    74
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,    11,     2,     1,     3,     3,     1,     1,     2,
       1,     1,     1,     1,     5,     3,     3,     1,     6,     8,
       6,     5,     3,     1,     1,     1,     1,     1,     1,     2,
       1,     1,     1,     1,     1,     0,     4,    11,     7,    10,
       7,    10,     5,     5,     3,     1,     4,     3,     1,     3,
       2,     3,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     1,     3,     3,     3,     1,     3,
       3,     1,     1,     4,     1,     1,     1,     3,     2
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
#line 53 "a.y" /* yacc.c:1646  */
    {
   printf(GRN "\n****programme correcte syntaxiquement****\n\n" RESET);
   return EXIT_SUCCESS;
 }
#line 1376 "a.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 88 "a.y" /* yacc.c:1646  */
    { if (srch(L,(yyvsp[-3].chaine))==1) {printf(RED"\n-----> ligne %d .ERREUR : l'IDF %s déjà déclaré\n\n" RESET,yylineno,(yyvsp[-3].chaine)); return 0;} inst(&L,(yyvsp[-3].chaine),i,0,1);}
#line 1382 "a.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 89 "a.y" /* yacc.c:1646  */
    { if (srch(L,(yyvsp[-1].chaine))==1) {printf(RED"\n-----> ligne %d .ERREUR : l'IDF %s déjà déclaré\n\n" RESET,yylineno,(yyvsp[-1].chaine)); return 0;} inst(&L,(yyvsp[-1].chaine),i,0,1);}
#line 1388 "a.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 93 "a.y" /* yacc.c:1646  */
    { if (srch(L,(yyvsp[-2].chaine))==1) {printf(RED"\n-----> ligne %d .ERREUR : l'IDF %s déjà déclaré\n\n" RESET,yylineno,(yyvsp[-2].chaine)); return 0 ;} inst(&L,(yyvsp[-2].chaine),i,0,1);}
#line 1394 "a.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 94 "a.y" /* yacc.c:1646  */
    { if (srch(L,(yyvsp[0].chaine))==1) {printf(RED"\n-----> ligne %d .ERREUR : l'IDF %s déjà déclaré\n\n" RESET,yylineno,(yyvsp[0].chaine)); return 0 ;} inst(&L,(yyvsp[0].chaine),i,0,1);}
#line 1400 "a.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 98 "a.y" /* yacc.c:1646  */
    { if (srch(L,(yyvsp[-4].chaine))==1) {printf(RED"\n-----> ligne %d .ERREUR : l'IDF \"%s\" déjà déclaré\n\n" RESET,yylineno,(yyvsp[-4].chaine)); return 0;} inst(&L,(yyvsp[-4].chaine),i,1,(yyvsp[-2].entier));}
#line 1406 "a.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 102 "a.y" /* yacc.c:1646  */
    {
                                               if (srch(L,(yyvsp[-5].chaine))==1) {printf(RED"\n-----> ligne %d .ERREUR : l'IDF %s déjà déclaré\n\n" RESET,yylineno,(yyvsp[-5].chaine)); return 0;} inst(&L,(yyvsp[-5].chaine),i,2,1);
                                               if (getType(L,(yyvsp[-5].chaine))!=AffRightType) {printf(RED"\n-----> ligne %d .ERREUR :  types incompatibles \n\n" RESET,yylineno); return 0;}
                                             }
#line 1415 "a.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 107 "a.y" /* yacc.c:1646  */
    {
                                               if (srch(L,(yyvsp[-3].chaine))==1) {printf(RED"\n-----> ligne %d .ERREUR : l'IDF %s déjà déclaré\n\n" RESET,yylineno,(yyvsp[-3].chaine)); return 0;} inst(&L,(yyvsp[-3].chaine),i,2,1);
                                               if (getType(L,(yyvsp[-3].chaine))!=AffRightType) {printf(RED"\n-----> ligne %d .ERREUR :  types incompatibles \n\n" RESET,yylineno); return 0;}

                                             }
#line 1425 "a.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 115 "a.y" /* yacc.c:1646  */
    {
                                if (srch(L,(yyvsp[-4].chaine))==1) {printf(RED"\n-----> ligne %d .ERREUR : l'IDF %s déjà déclaré\n\n" RESET,yylineno,(yyvsp[-4].chaine)); return 0;} inst(&L,(yyvsp[-4].chaine),i,2,1);
                                if (getType(L,(yyvsp[-4].chaine))!=AffRightType) {printf(RED"\n-----> ligne %d .ERREUR :  types incompatibles \n\n" RESET,yylineno); return 0;}

                              }
#line 1435 "a.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 121 "a.y" /* yacc.c:1646  */
    {
                                if (srch(L,(yyvsp[-2].chaine))==1) {printf(RED"\n-----> ligne %d .ERREUR : l'IDF %s déjà déclaré\n\n" RESET,yylineno,(yyvsp[-2].chaine)); return 0;} inst(&L,(yyvsp[-2].chaine),i,2,1);
                                if (getType(L,(yyvsp[-2].chaine))!=AffRightType) {printf(RED"\n-----> ligne %d .ERREUR :  types incompatibles \n\n" RESET,yylineno); return 0;}
                              }
#line 1444 "a.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 128 "a.y" /* yacc.c:1646  */
    {AffRightType=0;}
#line 1450 "a.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 129 "a.y" /* yacc.c:1646  */
    {AffRightType=2;}
#line 1456 "a.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 130 "a.y" /* yacc.c:1646  */
    {AffRightType=1;}
#line 1462 "a.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 134 "a.y" /* yacc.c:1646  */
    {i=0;}
#line 1468 "a.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 135 "a.y" /* yacc.c:1646  */
    {i=1;}
#line 1474 "a.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 136 "a.y" /* yacc.c:1646  */
    {i=2;}
#line 1480 "a.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 153 "a.y" /* yacc.c:1646  */
    {
                                 if(AffleftType!=AffRightType) {printf(RED"\n-----> ligne %d .ERREUR :  types incompatibles \n\n" RESET,yylineno); return 0;}
                                 if(IDFcst==1) {printf(RED"\n-----> ligne %d .ERREUR constante non modifiable \n\n" RESET,yylineno); return 0;}
                              }
#line 1489 "a.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 164 "a.y" /* yacc.c:1646  */
    {
                                               natIDF=getNat(L,(yyvsp[-2].chaine));
                                               typeIDF=getType(L,(yyvsp[-2].chaine));
                                               typeSTR=getTypeBySign((yyvsp[-4].chaine));
                                               if (srch(L,(yyvsp[-2].chaine))==0) {printf(RED"\n-----> ligne %d .ERREUR : l'IDF \"%s\" non déclaré\n\n" RESET,yylineno,(yyvsp[-2].chaine)); return 0;}
                                               if (natIDF==2)     {printf(RED"\n-----> ligne %d .ERREUR : la constante \"%s\" ne peut pas être modifiée\n\n" RESET,yylineno,(yyvsp[-2].chaine)); return 0;}
                                               if(typeIDF!=typeSTR) {printf(RED"\n-----> ligne %d .ERREUR :  types incompatibles entre %s et %s \n\n" RESET,yylineno,getSignByType(typeIDF),(yyvsp[-4].chaine)); return 0;}
                                             }
#line 1502 "a.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 173 "a.y" /* yacc.c:1646  */
    {
                                               natIDF=getNat(L,(yyvsp[-5].chaine));
                                               typeIDF=getType(L,(yyvsp[-5].chaine));
                                               typeSTR=getTypeBySign((yyvsp[-7].chaine));
                                               sizeIDF=getSize(L,(yyvsp[-5].chaine));
                                               if (srch(L,(yyvsp[-5].chaine))==0)   {printf(RED"\n-----> ligne %d .ERREUR : l'IDF \"%s\" non déclaré\n\n" RESET,yylineno,(yyvsp[-5].chaine)); return 0;}
                                               if (natIDF!=1) {printf(RED"\n-----> ligne %d .ERREUR : l'IDF \"%s\" n'est pas un tableau\n\n" RESET,yylineno,(yyvsp[-5].chaine)); return 0;}
                                               if ((yyvsp[-3].entier)>=sizeIDF) {printf(RED"\n-----> ligne %d .ERREUR : Dérnier indice du tableau %s dépassé de %d \n\n" RESET,yylineno,(yyvsp[-5].chaine),(yyvsp[-3].entier)-sizeIDF+1); return 0;}
                                               if(typeIDF!=typeSTR) {printf(RED"\n-----> ligne %d .ERREUR : types incompatibles entre %s et %s \n\n" RESET,yylineno,getSignByType(typeIDF),(yyvsp[-7].chaine)); return 0;}
                                             }
#line 1517 "a.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 186 "a.y" /* yacc.c:1646  */
    {
                                               natIDF=getNat(L,(yyvsp[-2].chaine));
                                               typeIDF=getType(L,(yyvsp[-2].chaine));
                                               //typeSTR=getTypeBySign( strcat(  strstr($3,"%")  ,  *(strstr($3,"%")+1) ) );
                                               if (srch(L,(yyvsp[-2].chaine))==0) {printf(RED"\n-----> ligne %d .ERREUR : l'IDF \"%s\" non déclaré\n\n" RESET,yylineno,(yyvsp[-2].chaine)); return 0;}
                                               if (natIDF==2)     {printf(RED"\n-----> ligne %d .ERREUR : la constante \"%s\" ne peut pas être modifiée\n\n" RESET,yylineno,(yyvsp[-2].chaine)); return 0;}
                                               if (typeIDF!=typeSTR) {printf(RED"\n-----> ligne %d .ERREUR :  types incompatibles entre %s et %s \n\n" RESET,yylineno,getSignByType(typeIDF),(yyvsp[-4].chaine)); return 0;}
                                             }
#line 1530 "a.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 195 "a.y" /* yacc.c:1646  */
    {
                                               natIDF=getNat(L,(yyvsp[-5].chaine));
                                               typeIDF=getType(L,(yyvsp[-5].chaine));
                                               typeSTR=getTypeBySign((yyvsp[-7].chaine));
                                               sizeIDF=getSize(L,(yyvsp[-5].chaine));
                                               if (srch(L,(yyvsp[-5].chaine))==0)   {printf(RED"\n-----> ligne %d .ERREUR : l'IDF \"%s\" non déclaré\n\n" RESET,yylineno,(yyvsp[-5].chaine)); return 0;}
                                               if (natIDF!=1) {printf(RED"\n-----> ligne %d .ERREUR : l'IDF \"%s\" n'est pas un tableau\n\n" RESET,yylineno,(yyvsp[-5].chaine)); return 0;}
                                               if ((yyvsp[-3].entier)>=sizeIDF) {printf(RED"\n-----> ligne %d .ERREUR : Dérnier indice du tableau %s dépassé de %d \n\n" RESET,yylineno,(yyvsp[-5].chaine),(yyvsp[-3].entier)-sizeIDF+1); return 0;}
                                               if (typeIDF!=typeSTR) {printf(RED"\n-----> ligne %d .ERREUR : types incompatibles entre %s et %s \n\n" RESET,yylineno,getSignByType(typeIDF),(yyvsp[-7].chaine)); return 0;}
                                             }
#line 1545 "a.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 209 "a.y" /* yacc.c:1646  */
    {if(AffleftType!=AffRightType) {printf(RED"\n-----> ligne %d .ERREUR :  types incompatibles \n\n" RESET,yylineno); return 0;}}
#line 1551 "a.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 210 "a.y" /* yacc.c:1646  */
    {if(AffleftType!=AffRightType) {printf(RED"\n-----> ligne %d .ERREUR :  types incompatibles \n\n" RESET,yylineno); return 0;}}
#line 1557 "a.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 214 "a.y" /* yacc.c:1646  */
    {
                         if(getNat(L,(yyvsp[0].chaine))==2) IDFcst=1;
                         else
                         IDFcst=0;
                         AffleftType=getType(L,(yyvsp[0].chaine));
                         if (srch(L,(yyvsp[0].chaine))==0) {printf(RED"\n-----> ligne %d .ERREUR : l'IDF \"%s\" non déclaré\n\n" RESET,yylineno,(yyvsp[0].chaine)); return 0;}
                       }
#line 1569 "a.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 222 "a.y" /* yacc.c:1646  */
    {
                         AffleftType=getType(L,(yyvsp[-3].chaine));
                         sizeIDF=getSize(L,(yyvsp[-3].chaine));
                         natIDF=getNat(L,(yyvsp[-3].chaine));
                         if (natIDF!=1) {printf(RED"\n-----> ligne %d .ERREUR : l'IDF \"%s\" n'est pas un tableau\n\n" RESET,yylineno,(yyvsp[-3].chaine)); return 0;}
                         if (srch(L,(yyvsp[-3].chaine))==0) {printf(RED"\n-----> ligne %d .ERREUR : l'IDF \"%s\" non déclaré\n\n" RESET,yylineno,(yyvsp[-3].chaine)); return 0;}
                         if ((yyvsp[-1].entier)>=sizeIDF) {printf(RED"\n-----> ligne %d .ERREUR : Dérnier indice du tableau %s dépassé de %d \n\n" RESET,yylineno,(yyvsp[-3].chaine),(yyvsp[-1].entier)-sizeIDF+1); return 0;}
                       }
#line 1582 "a.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 266 "a.y" /* yacc.c:1646  */
    {if(AffleftType!=AffRightType) {printf(RED"\n-----> ligne %d .ERREUR :  types incompatibles \n\n" RESET,yylineno); return 0;}}
#line 1588 "a.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 282 "a.y" /* yacc.c:1646  */
    {
                        AffRightType=getType(L,(yyvsp[0].chaine));
                        if (srch(L,(yyvsp[0].chaine))==0) {printf(RED"\n-----> ligne %d .ERREUR : l'IDF \"%s\" non déclaré\n\n" RESET,yylineno,(yyvsp[0].chaine)); return 0;}
                      }
#line 1597 "a.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 286 "a.y" /* yacc.c:1646  */
    {
                        AffRightType=getType(L,(yyvsp[-3].chaine));
                        sizeIDF=getSize(L,(yyvsp[-3].chaine));
                        natIDF=getNat(L,(yyvsp[-3].chaine));
                        if (natIDF!=1) {printf(RED"\n-----> ligne %d .ERREUR : l'IDF \"%s\" n'est pas un tableau\n\n" RESET,yylineno,(yyvsp[-3].chaine)); return 0;}
                        if (srch(L,(yyvsp[-3].chaine))==0) {printf(RED"\n-----> ligne %d .ERREUR : l'IDF \"%s\" non déclaré\n\n" RESET,yylineno,(yyvsp[-3].chaine)); return 0;}
                        if ((yyvsp[-1].entier)>=sizeIDF) {printf(RED"\n-----> ligne %d .ERREUR : Dérnier indice du tableau %s dépassé de %d \n\n" RESET,yylineno,(yyvsp[-3].chaine),(yyvsp[-1].entier)-sizeIDF+1); return 0;}
                      }
#line 1610 "a.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 295 "a.y" /* yacc.c:1646  */
    {AffRightType=0;}
#line 1616 "a.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 296 "a.y" /* yacc.c:1646  */
    {AffRightType=1;}
#line 1622 "a.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 297 "a.y" /* yacc.c:1646  */
    {AffRightType=2;}
#line 1628 "a.tab.c" /* yacc.c:1646  */
    break;


#line 1632 "a.tab.c" /* yacc.c:1646  */
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
#line 302 "a.y" /* yacc.c:1906  */

int yyerror(char* msg)
{
  printf(RED "\n%s at the line %d\n\n" RESET, msg, yylineno);
  return 1;
}

int getTypeBySign(char* sign)
{
  if(strcmp(sign,"\"%d\"")==0)
   return 0;
   else
    if (strcmp(sign,"\"%f\"")==0)
      return 1;
      else
       if(strcmp(sign,"\"%s\"")==0)
        return 2;
        else
         return -1;
}
char* getSignByType(int type)
{
  char* sign=malloc(5*sizeof(char));
  sign[4]='\0';
  switch (type)
  {
    case 0: { strcpy(sign,"\"%d\""); } break;
    case 1: { strcpy(sign,"\"%f\"");} break;
    case 2: { strcpy(sign,"\"%s\"");} break;
    default: { printf("Error\n");} break;
  }
  return sign;
}
int main()
{
  create(&L);
  yyin=fopen("code.txt","r");
  yyparse();
  show(L);
  printf("\n\n-------------------------\n"
         "|        Legende        |\n"
         "-------------------------\n"
         "|"BLU"Mot clé"RESET"                |\n"
         "|"BLU"Identifiant"RESET"            |\n"
         "|"YEL"String"RESET"                 |\n"
         "|"MAG"Valeur"RESET"                 |\n"
         "|"WHT"Commentaire"RESET"            |\n"
         "|"RED"Error"RESET"                  |\n"
         "|"GRN"Programm accepted"RESET"      |\n"
         "-------------------------\n"
    );
  return 0;
  /*printf(RED "red\n" RESET);
  printf(GRN "green\n" RESET);
  printf(YEL "yellow\n" RESET);
  printf(BLU "blue\n" RESET);
  printf(MAG "magenta\n" RESET);
  printf(CYN "cyan\n" RESET);
  printf(WHT "white\n" RESET);*/
}