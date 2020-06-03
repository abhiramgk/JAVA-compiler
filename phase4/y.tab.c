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
#line 1 "sym.y" /* yacc.c:339  */

	#include<stdio.h>
	#include<string.h>
	#include<stdlib.h>
	#include<stdbool.h>
	#include "header.c"			
	#define YYSTYPE YACC
	FILE *yyin;
	FILE *fp;
	int yylex();

	void yyerror(const char *);
	
	
	
	FILE *yyin;
	int yylex();
	
	int i =0;
	
	char* newLabel(int *ln);
	char* newTemp(int *tn);
	int lbflag = 0;
	int tn = 0;
	int ln = 1;
    int z;	
    int ss=0;
    NODE *a;
    LIST *l;
    void append(LIST *a,char *b,char *c);
    char* search(LIST* a,char *b);
    char* pp;
    char* qq;
    char* rr;
    char* tt;
	char* uu;
	char* vv;

#line 105 "y.tab.c" /* yacc.c:339  */

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
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
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
    T_CLASS = 258,
    T_PUBLIC = 259,
    T_PRIVATE = 260,
    T_STATIC = 261,
    T_FINAL = 262,
    T_VOID = 263,
    T_INT = 264,
    T_CHAR = 265,
    T_DOUBLE = 266,
    T_IF = 267,
    T_ELSE = 268,
    T_NEW = 269,
    T_INC = 270,
    T_DEC = 271,
    T_LOGOR = 272,
    T_LOGAND = 273,
    T_OR = 274,
    T_AND = 275,
    T_EQ = 276,
    T_NEQ = 277,
    T_GTEQ = 278,
    T_LTEQ = 279,
    T_ADD = 280,
    T_SUB = 281,
    T_MUL = 282,
    T_DIV = 283,
    T_GT = 284,
    T_LT = 285,
    T_XOR = 286,
    T_MOD = 287,
    T_LS = 288,
    T_RS = 289,
    T_NUM = 290,
    T_ID = 291,
    T_STRING = 292,
    T_ARGS = 293,
    T_PRINT = 294,
    T_FOR = 295,
    T_MAIN = 296,
    T_ASSGN = 297,
    T_MULASSGN = 298,
    T_DIVASSGN = 299,
    T_MODASSGN = 300,
    T_ADDASSGN = 301,
    T_SUBASSGN = 302,
    T_ANDASSGN = 303,
    T_XORASSGN = 304,
    T_ORASSGN = 305
  };
#endif
/* Tokens.  */
#define T_CLASS 258
#define T_PUBLIC 259
#define T_PRIVATE 260
#define T_STATIC 261
#define T_FINAL 262
#define T_VOID 263
#define T_INT 264
#define T_CHAR 265
#define T_DOUBLE 266
#define T_IF 267
#define T_ELSE 268
#define T_NEW 269
#define T_INC 270
#define T_DEC 271
#define T_LOGOR 272
#define T_LOGAND 273
#define T_OR 274
#define T_AND 275
#define T_EQ 276
#define T_NEQ 277
#define T_GTEQ 278
#define T_LTEQ 279
#define T_ADD 280
#define T_SUB 281
#define T_MUL 282
#define T_DIV 283
#define T_GT 284
#define T_LT 285
#define T_XOR 286
#define T_MOD 287
#define T_LS 288
#define T_RS 289
#define T_NUM 290
#define T_ID 291
#define T_STRING 292
#define T_ARGS 293
#define T_PRINT 294
#define T_FOR 295
#define T_MAIN 296
#define T_ASSGN 297
#define T_MULASSGN 298
#define T_DIVASSGN 299
#define T_MODASSGN 300
#define T_ADDASSGN 301
#define T_SUBASSGN 302
#define T_ANDASSGN 303
#define T_XORASSGN 304
#define T_ORASSGN 305

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 256 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   221

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  59
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  43
/* YYNRULES -- Number of rules.  */
#define YYNRULES  101
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  198

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   305

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      53,    56,     2,     2,    58,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    57,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    54,     2,    55,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    51,     2,    52,     2,     2,     2,     2,
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
      45,    46,    47,    48,    49,    50
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    42,    42,    45,    45,    47,    49,    50,    52,    53,
      55,    57,    56,    62,    61,    66,    67,    68,    69,    70,
      72,    72,    84,    84,    89,    93,    98,   103,   111,   111,
     121,   129,   129,   141,   141,   153,   153,   163,   169,   173,
     177,   181,   186,   190,   192,   193,   194,   196,   202,   206,
     211,   212,   214,   215,   217,   218,   220,   221,   223,   229,
     231,   235,   237,   239,   241,   244,   245,   246,   247,   248,
     250,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     266,   270,   272,   276,   278,   282,   286,   288,   292,   296,
     300,   304,   306,   310,   314,   316,   320,   324,   328,   331,
     332,   333
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "T_CLASS", "T_PUBLIC", "T_PRIVATE",
  "T_STATIC", "T_FINAL", "T_VOID", "T_INT", "T_CHAR", "T_DOUBLE", "T_IF",
  "T_ELSE", "T_NEW", "T_INC", "T_DEC", "T_LOGOR", "T_LOGAND", "T_OR",
  "T_AND", "T_EQ", "T_NEQ", "T_GTEQ", "T_LTEQ", "T_ADD", "T_SUB", "T_MUL",
  "T_DIV", "T_GT", "T_LT", "T_XOR", "T_MOD", "T_LS", "T_RS", "T_NUM",
  "T_ID", "T_STRING", "T_ARGS", "T_PRINT", "T_FOR", "T_MAIN", "T_ASSGN",
  "T_MULASSGN", "T_DIVASSGN", "T_MODASSGN", "T_ADDASSGN", "T_SUBASSGN",
  "T_ANDASSGN", "T_XORASSGN", "T_ORASSGN", "'{'", "'}'", "'('", "'['",
  "']'", "')'", "';'", "','", "$accept", "START", "Method_declaration",
  "$@1", "Modifier", "W1", "W2", "S", "@2", "@3", "IF", "@4", "ELSE", "@5",
  "FOR", "@6", "@7", "@8", "@9", "Print", "UNREXPR",
  "Variable_declaration", "X", "Assignment1", "Array_declaration",
  "Brackets", "WOI", "WI", "INDEX", "Array_initialisation", "K", "V", "R",
  "Type", "Assignment", "Assignment_operator", "LOGICALOREXPR",
  "LOGICALANDEXPR", "EQUALITYEXPR", "RELEXPR", "ADDEXPR", "MULTEXPR",
  "Expr", YY_NULLPTR
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
     305,   123,   125,    40,    91,    93,    41,    59,    44
};
# endif

#define YYPACT_NINF -106

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-106)))

#define YYTABLE_NINF -47

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      38,  -106,  -106,    14,    20,    29,  -106,   -11,  -106,  -106,
      11,    38,   -12,    18,  -106,  -106,  -106,  -106,  -106,  -106,
      35,    36,    18,    42,    51,    75,    65,  -106,    88,    48,
      91,    58,    58,  -106,  -106,    96,    58,    89,   142,   108,
     105,   107,   106,   119,    69,   120,   141,    58,  -106,  -106,
      55,    -7,   162,    44,     7,    43,   115,  -106,  -106,  -106,
    -106,    48,  -106,    48,  -106,  -106,  -106,  -106,  -106,  -106,
    -106,  -106,  -106,    48,    19,    48,   -16,    58,  -106,  -106,
      82,    48,  -106,  -106,    58,     5,   124,   125,   159,    58,
    -106,    58,    58,    58,    58,    58,    58,    58,    58,    58,
      58,    58,    58,   137,    48,   140,  -106,  -106,    18,  -106,
      19,  -106,   131,  -106,  -106,  -106,  -106,   139,   143,  -106,
      58,    93,   138,  -106,  -106,   177,  -106,   144,    58,   145,
     162,    44,     7,     7,    43,    43,    43,    43,   115,   115,
    -106,  -106,  -106,    48,  -106,  -106,   139,   147,    19,    64,
    -106,   149,    -8,    52,   146,   159,  -106,   154,  -106,    62,
      -6,   150,    58,   155,    48,  -106,  -106,  -106,   153,  -106,
    -106,  -106,  -106,    58,    48,   156,   104,   157,  -106,    62,
      -4,  -106,  -106,   177,   158,  -106,  -106,    62,   160,   161,
    -106,   163,  -106,  -106,    62,  -106,   164,  -106
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     6,     7,     0,     0,     9,     1,     0,     8,     5,
       0,     0,     0,     0,     2,    69,    65,    67,    66,    68,
       0,     0,     0,     0,     0,     0,     0,     3,     0,    19,
       0,     0,     0,   100,   101,     0,     0,     0,    24,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    40,    41,
       0,     0,    81,    83,    86,    91,    94,    98,     4,    22,
      11,    19,    18,    19,    77,    76,    72,    73,    74,    75,
      78,    79,    71,    19,     0,    19,     0,     0,    51,    50,
      46,    19,    38,    39,     0,     0,    37,     0,     0,     0,
      99,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    19,     0,    15,    16,     0,    62,
       0,    58,    59,    63,    17,    56,    57,    53,     0,    48,
       0,     0,     0,    49,    10,    70,    20,    35,     0,    37,
      80,    82,    84,    85,    90,    89,    88,    87,    92,    93,
      95,    96,    97,    19,    12,    13,     0,     0,     0,     0,
      52,    54,    46,   101,    46,     0,    43,     0,    25,     0,
       0,    28,     0,     0,    19,    61,    64,    60,     0,    55,
      42,    45,    44,     0,    19,     0,     0,    31,    26,     0,
       0,    23,    14,    47,     0,    36,    30,     0,     0,    33,
      21,     0,    29,    27,     0,    32,     0,    34
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -106,  -106,  -106,  -106,   185,  -106,  -106,   -57,  -106,  -106,
    -106,  -106,  -106,  -106,  -106,  -106,  -106,  -106,  -106,    68,
     -92,  -106,   -73,  -106,  -106,   129,    60,  -105,  -106,  -106,
    -103,  -106,  -106,    -5,   165,   -37,   -46,   132,   123,    78,
      57,    76,   -29
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,    12,    28,     4,     5,     9,    37,   104,   164,
      38,   157,    60,   103,    39,   179,   187,   194,   159,   128,
      40,    41,   122,   154,    42,    77,    78,    79,   118,    43,
     111,   112,   113,    44,    45,    84,    51,    52,    53,    54,
      55,    56,    57
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      46,    85,    48,    49,   105,    74,   106,   147,    20,    89,
      89,    89,   150,    89,     6,    80,   107,    23,   114,   115,
     116,    88,    89,     7,   124,    10,    15,    16,    17,    18,
      94,    95,    46,   108,    46,     8,    96,    97,   125,   117,
      14,   165,     1,     2,    46,   167,    46,   144,   119,    90,
     121,   177,    46,   189,   109,    19,    15,    16,    17,    18,
      30,   126,    11,    31,    32,    92,    93,   175,    98,    99,
     110,   140,   141,   142,   152,    46,    21,    31,    32,   170,
     171,   172,   160,    33,    34,    19,   163,   188,    35,    22,
      33,    34,   155,    33,    34,   191,    24,    33,    34,   115,
     116,    36,   196,   146,    33,    34,    25,   182,    36,   -46,
     121,    36,    86,    26,    46,    36,   180,   184,   173,    82,
      83,    27,    36,    76,   120,    64,    65,   183,    33,   153,
     176,    66,    67,    68,    69,    46,    76,    70,    71,    29,
     121,    58,   100,   101,    47,    46,    36,   102,    72,    50,
     176,   134,   135,   136,   137,    59,    82,    83,   176,    61,
      64,    65,    62,    73,    63,   176,    66,    67,    68,    69,
     132,   133,    70,    71,   138,   139,    75,    81,    64,    65,
      91,   127,   129,    72,    66,    67,    68,    69,   143,   148,
      70,    71,   145,   149,    89,   156,    13,   162,   151,   166,
     158,    72,   161,   168,   121,   174,   178,   181,   117,   123,
     190,   169,   185,   186,   131,    87,   192,   193,     0,   195,
     197,   130
};

static const yytype_int16 yycheck[] =
{
      29,    47,    31,    32,    61,    42,    63,   110,    13,    17,
      17,    17,   117,    17,     0,    44,    73,    22,    75,    35,
      36,    50,    17,     3,    81,    36,     8,     9,    10,    11,
      23,    24,    61,    14,    63,     6,    29,    30,    84,    55,
      52,   146,     4,     5,    73,   148,    75,   104,    77,    56,
      58,    57,    81,    57,    35,    37,     8,     9,    10,    11,
      12,    56,    51,    15,    16,    21,    22,   159,    25,    26,
      51,   100,   101,   102,   120,   104,    41,    15,    16,   152,
     153,   154,   128,    35,    36,    37,   143,   179,    40,    53,
      35,    36,   121,    35,    36,   187,    54,    35,    36,    35,
      36,    53,   194,   108,    35,    36,    55,   164,    53,    57,
      58,    53,    57,    38,   143,    53,   162,   174,   155,    15,
      16,    56,    53,    54,    42,    19,    20,   173,    35,    36,
     159,    25,    26,    27,    28,   164,    54,    31,    32,    51,
      58,    52,    27,    28,    53,   174,    53,    32,    42,    53,
     179,    94,    95,    96,    97,    13,    15,    16,   187,    51,
      19,    20,    57,    57,    57,   194,    25,    26,    27,    28,
      92,    93,    31,    32,    98,    99,    57,    57,    19,    20,
      18,    57,    57,    42,    25,    26,    27,    28,    51,    58,
      31,    32,    52,    54,    17,    57,    11,   129,    55,    52,
      56,    42,    57,    54,    58,    51,    56,    52,    55,    80,
      52,   151,    56,    56,    91,    50,    56,    56,    -1,    56,
      56,    89
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     4,     5,    60,    63,    64,     0,     3,     6,    65,
      36,    51,    61,    63,    52,     8,     9,    10,    11,    37,
      92,    41,    53,    92,    54,    55,    38,    56,    62,    51,
      12,    15,    16,    35,    36,    40,    53,    66,    69,    73,
      79,    80,    83,    88,    92,    93,   101,    53,   101,   101,
      53,    95,    96,    97,    98,    99,   100,   101,    52,    13,
      71,    51,    57,    57,    19,    20,    25,    26,    27,    28,
      31,    32,    42,    57,    94,    57,    54,    84,    85,    86,
     101,    57,    15,    16,    94,    95,    57,    93,   101,    17,
      56,    18,    21,    22,    23,    24,    29,    30,    25,    26,
      27,    28,    32,    72,    67,    66,    66,    66,    14,    35,
      51,    89,    90,    91,    66,    35,    36,    55,    87,   101,
      42,    58,    81,    84,    66,    95,    56,    57,    78,    57,
      96,    97,    98,    98,    99,    99,    99,    99,   100,   100,
     101,   101,   101,    51,    66,    52,    92,    89,    58,    54,
      86,    55,    95,    36,    82,   101,    57,    70,    56,    77,
      95,    57,    78,    66,    68,    86,    52,    89,    54,    85,
      81,    81,    81,    94,    51,    79,   101,    57,    56,    74,
      95,    52,    66,    95,    66,    56,    56,    75,    79,    57,
      52,    79,    56,    56,    76,    56,    79,    56
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    59,    60,    62,    61,    63,    64,    64,    65,    65,
      66,    67,    66,    68,    66,    66,    66,    66,    66,    66,
      70,    69,    72,    71,    71,    73,    73,    73,    74,    73,
      73,    75,    73,    76,    73,    77,    73,    78,    79,    79,
      79,    79,    80,    80,    81,    81,    81,    82,    83,    83,
      84,    84,    85,    85,    86,    86,    87,    87,    88,    89,
      89,    89,    90,    90,    91,    92,    92,    92,    92,    92,
      93,    94,    94,    94,    94,    94,    94,    94,    94,    94,
      95,    95,    96,    96,    97,    97,    97,    98,    98,    98,
      98,    98,    99,    99,    99,   100,   100,   100,   100,   101,
     101,   101
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     6,     0,    13,     2,     1,     1,     1,     0,
       3,     0,     4,     0,     6,     3,     3,     3,     2,     0,
       0,     8,     0,     5,     0,     5,     6,     8,     0,     8,
       7,     0,     9,     0,    10,     0,     7,     0,     2,     2,
       2,     2,     5,     4,     3,     3,     0,     3,     3,     3,
       1,     1,     3,     2,     3,     4,     1,     1,     3,     1,
       3,     3,     1,     1,     3,     1,     1,     1,     1,     1,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     1,     3,     1,     3,     3,     1,     3,     3,     3,
       3,     1,     3,     3,     1,     3,     3,     3,     1,     3,
       1,     1
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
        case 3:
#line 45 "sym.y" /* yacc.c:1646  */
    {l=(LIST*)malloc(sizeof(LIST));l->head=NULL;}
#line 1484 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 57 "sym.y" /* yacc.c:1646  */
    {(yyval).code = (char*)malloc(sizeof(char)*100);
							 sprintf((yyval).code,"%s:\n",qq);
							 fprintf(fp,"%s",(yyval).code);}
#line 1492 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 62 "sym.y" /* yacc.c:1646  */
    {	(yyval).code = (char*)malloc(sizeof(char)*100);
												sprintf((yyval).code,"goto %s\n%s:\n",uu,rr);
												fprintf(fp,"%s",(yyval).code);}
#line 1500 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 72 "sym.y" /* yacc.c:1646  */
    {(yyval).tr=newLabel(&ln);
							(yyval).addr=newLabel(&ln);
							pp=(yyval).addr;
							(yyval).code = (char*)malloc(sizeof(char)*100);
							sprintf((yyval).code,"if %s goto %s\ngoto %s\n%s:\n",(yyvsp[-1]).addr,(yyval).tr,(yyval).addr,(yyval).tr);
							fprintf(fp,"%s",(yyval).code);}
#line 1511 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 78 "sym.y" /* yacc.c:1646  */
    {(yyval).tr=newLabel(&ln);
							 qq=(yyval).tr;
							 (yyval).code = (char*)malloc(sizeof(char)*100);
							 sprintf((yyval).code,"goto %s\n",(yyval).tr);
							 fprintf(fp,"%s",(yyval).code);}
#line 1521 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 84 "sym.y" /* yacc.c:1646  */
    {(yyval).code = (char*)malloc(sizeof(char)*100);
			sprintf((yyval).code,"%s:\n",pp);
			fprintf(fp,"%s",(yyval).code);
			}
#line 1530 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 89 "sym.y" /* yacc.c:1646  */
    {(yyval).code = (char*)malloc(sizeof(char)*100);
			 sprintf((yyval).code,"%s:\n",pp);
			 fprintf(fp,"%s",(yyval).code);}
#line 1538 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 93 "sym.y" /* yacc.c:1646  */
    {	uu=newLabel(&ln);
													rr=newLabel(&ln);
													(yyval).code = (char*)malloc(sizeof(char)*100);
													sprintf((yyval).code,"%s:\n",uu);
													fprintf(fp,"%s",(yyval).code);}
#line 1548 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 98 "sym.y" /* yacc.c:1646  */
    {	uu=newLabel(&ln);
													rr=newLabel(&ln);
													(yyval).code = (char*)malloc(sizeof(char)*100);
													sprintf((yyval).code,"%s:\n",uu);
													fprintf(fp,"%s",(yyval).code);}
#line 1558 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 103 "sym.y" /* yacc.c:1646  */
    {	(yyval).tr=newLabel(&ln);
													(yyval).addr=newLabel(&ln);
													rr=(yyval).addr;
													vv=(yyval).tr;
													uu=tt;
													(yyval).code = (char*)malloc(sizeof(char)*100);
													sprintf((yyval).code,"if %s goto %s\ngoto %s\n%s:\n",(yyvsp[-2]).addr,(yyval).tr,(yyval).addr,vv);
													fprintf(fp,"%s",(yyval).code);}
#line 1571 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 111 "sym.y" /* yacc.c:1646  */
    {	uu=newLabel(&ln);
													tt=newLabel(&ln);
													rr=newLabel(&ln);
													(yyval).code = (char*)malloc(sizeof(char)*100);
													sprintf((yyval).code,"goto %s\n%s:\n",tt,uu);
													fprintf(fp,"%s",(yyval).code);}
#line 1582 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 117 "sym.y" /* yacc.c:1646  */
    {	(yyval).code = (char*)malloc(sizeof(char)*100);
													sprintf((yyval).code,"%s:\n",tt);
													fprintf(fp,"%s",(yyval).code);
												}
#line 1591 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 121 "sym.y" /* yacc.c:1646  */
    {	(yyval).tr=newLabel(&ln);
													(yyval).addr=newLabel(&ln);
													rr=(yyval).addr;
													vv=(yyval).tr;
													uu=tt;
													(yyval).code = (char*)malloc(sizeof(char)*100);
													sprintf((yyval).code,"if %s goto %s\ngoto %s\n%s:\n",(yyvsp[-2]).addr,(yyval).tr,(yyval).addr,vv);
													fprintf(fp,"%s",(yyval).code);}
#line 1604 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 129 "sym.y" /* yacc.c:1646  */
    {	(yyval).tr=newLabel(&ln);
													(yyval).addr=newLabel(&ln);
													rr=(yyval).addr;
													vv=(yyval).tr;
													uu=newLabel(&ln);
													(yyval).code = (char*)malloc(sizeof(char)*100);
													sprintf((yyval).code,"if %s goto %s\ngoto %s\n%s:\n",(yyvsp[-1]).addr,(yyval).tr,(yyval).addr,uu);
													fprintf(fp,"%s",(yyval).code);}
#line 1617 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 137 "sym.y" /* yacc.c:1646  */
    {	(yyval).code = (char*)malloc(sizeof(char)*100);
													sprintf((yyval).code,"goto %s\n%s:\n",tt,vv);
													fprintf(fp,"%s",(yyval).code);
												}
#line 1626 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 141 "sym.y" /* yacc.c:1646  */
    {	(yyval).tr=newLabel(&ln);
													(yyval).addr=newLabel(&ln);
													rr=(yyval).addr;
													vv=(yyval).tr;
													uu=newLabel(&ln);
													(yyval).code = (char*)malloc(sizeof(char)*100);
													sprintf((yyval).code,"if %s goto %s\ngoto %s\n%s:\n",(yyvsp[-1]).addr,(yyval).tr,(yyval).addr,uu);
													fprintf(fp,"%s",(yyval).code);}
#line 1639 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 149 "sym.y" /* yacc.c:1646  */
    {	(yyval).code = (char*)malloc(sizeof(char)*100);
													sprintf((yyval).code,"goto %s\n%s:\n",tt,vv);
													fprintf(fp,"%s",(yyval).code);
												}
#line 1648 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 153 "sym.y" /* yacc.c:1646  */
    {	uu=newLabel(&ln);
													tt=newLabel(&ln);
													rr=newLabel(&ln);
													(yyval).code = (char*)malloc(sizeof(char)*100);
													sprintf((yyval).code,"goto %s\n%s:\n",tt,uu);
													fprintf(fp,"%s",(yyval).code);}
#line 1659 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 159 "sym.y" /* yacc.c:1646  */
    {	(yyval).code = (char*)malloc(sizeof(char)*100);
													sprintf((yyval).code,"%s:\n",tt);
													fprintf(fp,"%s",(yyval).code);
												}
#line 1668 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 163 "sym.y" /* yacc.c:1646  */
    {	tt=newLabel(&ln);
													(yyval).code = (char*)malloc(sizeof(char)*100);
													sprintf((yyval).code,"%s:\n",tt);
													fprintf(fp,"%s",(yyval).code);
												}
#line 1678 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 169 "sym.y" /* yacc.c:1646  */
    {(yyval).addr = newTemp(&tn);
								(yyval).code = (char*)malloc(sizeof(char)*100); 
								sprintf((yyval).code,"%s = %s %s \n%s = %s\n",(yyval).addr,(yyvsp[-1]).addr,strdup(" + 1"),(yyvsp[-1]).addr,(yyval).addr);
								fprintf(fp,"%s",(yyval).code);}
#line 1687 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 173 "sym.y" /* yacc.c:1646  */
    {(yyval).addr = newTemp(&tn);
								(yyval).code = (char*)malloc(sizeof(char)*100); 
								sprintf((yyval).code,"%s = %s %s \n%s = %s\n",(yyval).addr,(yyvsp[-1]).addr,strdup(" - 1"),(yyvsp[-1]).addr,(yyval).addr);
								fprintf(fp,"%s",(yyval).code);}
#line 1696 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 177 "sym.y" /* yacc.c:1646  */
    {(yyval).addr = newTemp(&tn);
								(yyval).code = (char*)malloc(sizeof(char)*100); 
								sprintf((yyval).code,"%s = %s %s \n%s = %s\n",(yyval).addr,(yyvsp[0]).addr,strdup(" + 1"),(yyvsp[0]).addr,(yyval).addr);
								fprintf(fp,"%s",(yyval).code);}
#line 1705 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 181 "sym.y" /* yacc.c:1646  */
    {(yyval).addr = newTemp(&tn);
								(yyval).code = (char*)malloc(sizeof(char)*100); 
								sprintf((yyval).code,"%s = %s %s \n%s = %s\n",(yyval).addr,(yyvsp[0]).addr,strdup(" - 1"),(yyvsp[0]).addr,(yyval).addr);
								fprintf(fp,"%s",(yyval).code);}
#line 1714 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 186 "sym.y" /* yacc.c:1646  */
    {append(l,(yyvsp[-1]).addr,(yyvsp[-3]).addr);
																		(yyval).code = (char*)malloc(sizeof(char)*100);
																		sprintf((yyval).code,"%s = %s\n",(yyvsp[-3]).addr,(yyvsp[-1]).addr);
																		fprintf(fp,"%s",(yyval).code);}
#line 1723 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 196 "sym.y" /* yacc.c:1646  */
    {append(l,(yyvsp[0]).addr,(yyval).addr);
										(yyval).addr=strdup((yyvsp[-2]).v);
										(yyval).code = (char*)malloc(sizeof(char)*200);
										sprintf((yyval).code,"%s = %s\n",(yyval).addr,(yyvsp[0]).addr);
										fprintf(fp,"%s",(yyval).code);}
#line 1733 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 202 "sym.y" /* yacc.c:1646  */
    {append(l,(yyvsp[0]).addr,(yyvsp[-1]).addr);
											(yyval).code = (char*)malloc(sizeof(char)*100);
											sprintf((yyval).code,"%s = %s\n",(yyvsp[0]).addr,(yyvsp[-1]).addr);
											fprintf(fp,"%s",(yyval).code);}
#line 1742 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 206 "sym.y" /* yacc.c:1646  */
    {append(l,(yyvsp[-1]).addr,(yyvsp[0]).addr);
											(yyval).code = (char*)malloc(sizeof(char)*100);
											sprintf((yyval).code,"%s = %s\n",(yyvsp[-1]).addr,(yyvsp[0]).addr);
											fprintf(fp,"%s",(yyval).code);}
#line 1751 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 211 "sym.y" /* yacc.c:1646  */
    {(yyval).addr = (yyvsp[0]).addr;}
#line 1757 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 212 "sym.y" /* yacc.c:1646  */
    {(yyval).addr = (yyvsp[0]).addr;}
#line 1763 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 214 "sym.y" /* yacc.c:1646  */
    {strcpy((yyval).addr,"");}
#line 1769 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 215 "sym.y" /* yacc.c:1646  */
    {strcpy((yyval).addr,"");}
#line 1775 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 217 "sym.y" /* yacc.c:1646  */
    {(yyval).addr = (yyvsp[-1]).addr;}
#line 1781 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 218 "sym.y" /* yacc.c:1646  */
    {(yyval).addr = (yyvsp[-2]).addr;}
#line 1787 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 220 "sym.y" /* yacc.c:1646  */
    {(yyval).addr = strdup((yyvsp[0]).v);}
#line 1793 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 221 "sym.y" /* yacc.c:1646  */
    {(yyval).addr = search(l,(yyvsp[0]).v);}
#line 1799 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 223 "sym.y" /* yacc.c:1646  */
    {
											append(l,(yyvsp[-2]).addr,(yyvsp[0]).addr);
											(yyval).code = (char*)malloc(sizeof(char)*100);
											sprintf((yyval).code,"%s = %s\n",(yyvsp[-2]).addr,(yyvsp[0]).addr);
											fprintf(fp,"%s",(yyval).code);}
#line 1809 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 229 "sym.y" /* yacc.c:1646  */
    {strcat((yyval).addr,(yyvsp[0]).addr);}
#line 1815 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 231 "sym.y" /* yacc.c:1646  */
    {
			strcat((yyval).addr,(yyvsp[-2]).addr);
			strcat((yyval).addr,(yyvsp[0]).addr);}
#line 1823 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 235 "sym.y" /* yacc.c:1646  */
    {(yyval).addr = (yyvsp[0]).addr;}
#line 1829 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 237 "sym.y" /* yacc.c:1646  */
    {(yyval).addr = strdup((yyvsp[0]).v);}
#line 1835 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 239 "sym.y" /* yacc.c:1646  */
    {(yyval).addr = (yyvsp[0]).addr;}
#line 1841 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 241 "sym.y" /* yacc.c:1646  */
    {(yyval).addr = (yyvsp[-1]).addr;}
#line 1847 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 250 "sym.y" /* yacc.c:1646  */
    {append(l,(yyvsp[0]).addr,(yyval).addr);
										(yyval).addr=strdup((yyvsp[-2]).v);
										(yyval).code = (char*)malloc(sizeof(char)*200);
										sprintf((yyval).code,"%s = %s\n",(yyval).addr,(yyvsp[0]).addr);
										fprintf(fp,"%s",(yyval).code);}
#line 1857 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 256 "sym.y" /* yacc.c:1646  */
    {(yyval).code = strdup("=");}
#line 1863 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 257 "sym.y" /* yacc.c:1646  */
    {(yyval).code = strdup("+");}
#line 1869 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 258 "sym.y" /* yacc.c:1646  */
    {(yyval).code = strdup("-");}
#line 1875 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 259 "sym.y" /* yacc.c:1646  */
    {(yyval).code = strdup("*");}
#line 1881 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 260 "sym.y" /* yacc.c:1646  */
    {(yyval).code = strdup("/");}
#line 1887 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 261 "sym.y" /* yacc.c:1646  */
    {(yyval).code = strdup("&");}
#line 1893 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 262 "sym.y" /* yacc.c:1646  */
    {(yyval).code = strdup("|");}
#line 1899 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 263 "sym.y" /* yacc.c:1646  */
    {(yyval).code = strdup("^");}
#line 1905 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 264 "sym.y" /* yacc.c:1646  */
    {(yyval).code = strdup("%");}
#line 1911 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 266 "sym.y" /* yacc.c:1646  */
    {(yyval).addr = newTemp(&tn);
													(yyval).code = (char*)malloc(sizeof(char)*100); 
													sprintf((yyval).code,"%s = %s %s %s\n",(yyval).addr,(yyvsp[-2]).addr,strdup("||"),(yyvsp[0]).addr);
													fprintf(fp,"%s",(yyval).code);}
#line 1920 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 272 "sym.y" /* yacc.c:1646  */
    {(yyval).addr = newTemp(&tn);
														(yyval).code = (char*)malloc(sizeof(char)*100); 
														sprintf((yyval).code,"%s = %s %s %s\n",(yyval).addr,(yyvsp[-2]).addr,strdup("&&"),(yyvsp[0]).addr);
														fprintf(fp,"%s",(yyval).code);}
#line 1929 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 278 "sym.y" /* yacc.c:1646  */
    {(yyval).addr = newTemp(&tn);
										(yyval).code = (char*)malloc(sizeof(char)*100); 
										sprintf((yyval).code,"%s = %s %s %s\n",(yyval).addr,(yyvsp[-2]).addr,strdup("=="),(yyvsp[0]).addr);
										fprintf(fp,"%s",(yyval).code);}
#line 1938 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 282 "sym.y" /* yacc.c:1646  */
    {(yyval).addr = newTemp(&tn);
										(yyval).code = (char*)malloc(sizeof(char)*100); 
										sprintf((yyval).code,"%s = %s %s %s\n",(yyval).addr,(yyvsp[-2]).addr,strdup("!="),(yyvsp[0]).addr);
										fprintf(fp,"%s",(yyval).code);}
#line 1947 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 288 "sym.y" /* yacc.c:1646  */
    {(yyval).addr = newTemp(&tn);
								(yyval).code = (char*)malloc(sizeof(char)*100); 
								sprintf((yyval).code,"%s = %s %s %s\n",(yyval).addr,(yyvsp[-2]).addr,strdup("<"),(yyvsp[0]).addr);
								fprintf(fp,"%s",(yyval).code);}
#line 1956 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 292 "sym.y" /* yacc.c:1646  */
    {(yyval).addr = newTemp(&tn);
								(yyval).code = (char*)malloc(sizeof(char)*100); 
								sprintf((yyval).code,"%s = %s %s %s\n",(yyval).addr,(yyvsp[-2]).addr,strdup(">"),(yyvsp[0]).addr);
								fprintf(fp,"%s",(yyval).code);}
#line 1965 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 296 "sym.y" /* yacc.c:1646  */
    {(yyval).addr = newTemp(&tn);
								(yyval).code = (char*)malloc(sizeof(char)*100); 
								sprintf((yyval).code,"%s = %s %s %s\n",(yyval).addr,(yyvsp[-2]).addr,strdup("<="),(yyvsp[0]).addr);
								fprintf(fp,"%s",(yyval).code);}
#line 1974 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 300 "sym.y" /* yacc.c:1646  */
    {(yyval).addr = newTemp(&tn);
								(yyval).code = (char*)malloc(sizeof(char)*100); 
								sprintf((yyval).code,"%s = %s %s %s\n",(yyval).addr,(yyvsp[-2]).addr,strdup(">="),(yyvsp[0]).addr);
								fprintf(fp,"%s",(yyval).code);}
#line 1983 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 306 "sym.y" /* yacc.c:1646  */
    {(yyval).addr = newTemp(&tn);
									(yyval).code = (char*)malloc(sizeof(char)*100); 
									sprintf((yyval).code,"%s = %s %s %s\n",(yyval).addr,(yyvsp[-2]).addr,strdup("+"),(yyvsp[0]).addr);
									fprintf(fp,"%s",(yyval).code);}
#line 1992 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 310 "sym.y" /* yacc.c:1646  */
    {(yyval).addr = newTemp(&tn);
									(yyval).code = (char*)malloc(sizeof(char)*100); 
									sprintf((yyval).code,"%s = %s %s %s\n",(yyval).addr,(yyvsp[-2]).addr,strdup("-"),(yyvsp[0]).addr);
									fprintf(fp,"%s",(yyval).code);}
#line 2001 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 316 "sym.y" /* yacc.c:1646  */
    {(yyval).addr = newTemp(&tn);
									(yyval).code = (char*)malloc(sizeof(char)*100); 
									sprintf((yyval).code,"%s = %s %s %s\n",(yyval).addr,(yyvsp[-2]).addr,strdup("*"),(yyvsp[0]).addr);
									fprintf(fp,"%s",(yyval).code);}
#line 2010 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 320 "sym.y" /* yacc.c:1646  */
    {(yyval).addr = newTemp(&tn);
									(yyval).code = (char*)malloc(sizeof(char)*100); 
									sprintf((yyval).code,"%s = %s %s %s\n",(yyval).addr,(yyvsp[-2]).addr,strdup("/"),(yyvsp[0]).addr);
									fprintf(fp,"%s",(yyval).code);}
#line 2019 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 324 "sym.y" /* yacc.c:1646  */
    {(yyval).addr = newTemp(&tn);
									(yyval).code = (char*)malloc(sizeof(char)*100); 
									sprintf((yyval).code,"%s = %s %s %s\n",(yyval).addr,(yyvsp[-2]).addr,strdup("%"),(yyvsp[0]).addr);
									fprintf(fp,"%s",(yyval).code);}
#line 2028 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 332 "sym.y" /* yacc.c:1646  */
    {(yyval).addr = strdup((yyvsp[0]).v);}
#line 2034 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 333 "sym.y" /* yacc.c:1646  */
    {(yyval).addr = search(l,(yyvsp[0]).v);}
#line 2040 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2044 "y.tab.c" /* yacc.c:1646  */
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
#line 337 "sym.y" /* yacc.c:1906  */

char* newLabel(int *ln)
{
	char *s = (char*)malloc(4*sizeof(char));
	sprintf(s,"L%d",*ln);
	(*ln)++;
	return s;
}
char* newTemp(int *tn)
{
	char *s = (char*)malloc(4*sizeof(char));
	sprintf(s,"T%d",*tn);
	(*tn)++;
	return s;
}


void append(LIST *a,char *b,char *c)
{
    if(atoi(b) || strcmp(b,"0")==0)
        return;
    else
    {
        NODE *p=(NODE*)malloc(sizeof(NODE));
        NODE *q=NULL;
        p->temp=b;
        p->var=c;
        p->next=a->head;
        a->head=p;
    }

}
char* search(LIST* a,char *b)
{
    NODE* c=a->head;
    while(c!=NULL && strcmp(c->var,b))
        c=c->next;
    if(c==NULL)
        return b;
    else
        return c->temp;
}


void yyerror(const char *s)
{
	yynerrs+=1;
}
int main(int argc, char* argv[])
{
    
	yyin = fopen(argv[1], "r");
	fp = fopen("icg.txt","w");
	int flag = 1;
	if(!yyparse())
			{printf("Parsing successful \n");flag = 0;}
		else
			{printf("Unsuccessful \n");}
	return flag;
}

