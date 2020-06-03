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
#line 1 "parser.y" /* yacc.c:339  */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct double_list{
  struct double_list * next;
  char name[30];
  int type;
  int scope;
  int size; 
  union Value {
    int val;
    char vale[20];
    float valu;
  }value;
};
int type=0;
extern int lineno;
extern int scope;
typedef struct double_list d_list;
d_list* head=NULL;
int yylex(void);
void yyerror(char *);
int fill(char*name,int value,int type);
//int fillchar(char* name,char* value,int type);
int lookupsymb(char *id);
void display();
int update(char* id,int value);


#line 97 "y.tab.c" /* yacc.c:339  */

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
    T_MAIN = 258,
    T_ID = 259,
    T_NUM = 260,
    T_PUBLIC = 261,
    T_STATIC = 262,
    T_VOID = 263,
    T_CLASS = 264,
    T_PRIVATE = 265,
    T_IF = 266,
    T_ELSE = 267,
    T_FOR = 268,
    T_CHAR = 269,
    T_INT = 270,
    T_FLOAT = 271,
    T_DOUBLE = 272,
    T_STRING = 273,
    T_STRS = 274,
    T_NEW = 275,
    T_LOGOR = 276,
    T_LOGAND = 277,
    T_NOT = 278,
    T_BITOR = 279,
    T_BITAND = 280,
    T_BITXOR = 281,
    T_ASSGN = 282,
    T_LT = 283,
    T_GT = 284,
    T_LTEQ = 285,
    T_GTEQ = 286,
    T_EQ = 287,
    T_NEQ = 288,
    T_MULASSGN = 289,
    T_DIVASSGN = 290,
    T_MODASSGN = 291,
    T_ADDASSGN = 292,
    T_SUBASSGN = 293,
    T_LSHASSGN = 294,
    T_RSHASSGN = 295,
    T_ANDASSGN = 296,
    T_XORASSGN = 297,
    T_ORASSGN = 298,
    T_LSHFT = 299,
    T_RSHFT = 300,
    T_ADD = 301,
    T_SUB = 302,
    T_MUL = 303,
    T_DIV = 304,
    T_MOD = 305,
    T_UADD = 306,
    T_USUB = 307,
    T_OB = 308,
    T_CB = 309
  };
#endif
/* Tokens.  */
#define T_MAIN 258
#define T_ID 259
#define T_NUM 260
#define T_PUBLIC 261
#define T_STATIC 262
#define T_VOID 263
#define T_CLASS 264
#define T_PRIVATE 265
#define T_IF 266
#define T_ELSE 267
#define T_FOR 268
#define T_CHAR 269
#define T_INT 270
#define T_FLOAT 271
#define T_DOUBLE 272
#define T_STRING 273
#define T_STRS 274
#define T_NEW 275
#define T_LOGOR 276
#define T_LOGAND 277
#define T_NOT 278
#define T_BITOR 279
#define T_BITAND 280
#define T_BITXOR 281
#define T_ASSGN 282
#define T_LT 283
#define T_GT 284
#define T_LTEQ 285
#define T_GTEQ 286
#define T_EQ 287
#define T_NEQ 288
#define T_MULASSGN 289
#define T_DIVASSGN 290
#define T_MODASSGN 291
#define T_ADDASSGN 292
#define T_SUBASSGN 293
#define T_LSHASSGN 294
#define T_RSHASSGN 295
#define T_ANDASSGN 296
#define T_XORASSGN 297
#define T_ORASSGN 298
#define T_LSHFT 299
#define T_RSHFT 300
#define T_ADD 301
#define T_SUB 302
#define T_MUL 303
#define T_DIV 304
#define T_MOD 305
#define T_UADD 306
#define T_USUB 307
#define T_OB 308
#define T_CB 309

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 32 "parser.y" /* yacc.c:355  */

	int number;
	char *string;

#line 250 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 267 "y.tab.c" /* yacc.c:358  */

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
#define YYLAST   204

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  61
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  32
/* YYNRULES -- Number of rules.  */
#define YYNRULES  91
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  174

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   309

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
      55,    58,     2,     2,    60,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    59,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    56,     2,    57,     2,     2,     2,     2,     2,     2,
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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    56,    56,    61,    63,    64,    66,    67,    69,    70,
      71,    72,    73,    74,    76,    77,    78,    79,    80,    82,
      83,    84,    85,    86,    87,    88,    89,    91,    93,    94,
      96,    97,   100,   101,   103,   104,   106,   107,   108,   109,
     110,   112,   113,   114,   129,   130,   132,   133,   135,   136,
     138,   139,   155,   160,   161,   163,   165,   167,   168,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     182,   183,   185,   186,   188,   189,   190,   192,   193,   194,
     195,   196,   198,   199,   200,   202,   203,   204,   205,   207,
     208,   210
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "T_MAIN", "T_ID", "T_NUM", "T_PUBLIC",
  "T_STATIC", "T_VOID", "T_CLASS", "T_PRIVATE", "T_IF", "T_ELSE", "T_FOR",
  "T_CHAR", "T_INT", "T_FLOAT", "T_DOUBLE", "T_STRING", "T_STRS", "T_NEW",
  "T_LOGOR", "T_LOGAND", "T_NOT", "T_BITOR", "T_BITAND", "T_BITXOR",
  "T_ASSGN", "T_LT", "T_GT", "T_LTEQ", "T_GTEQ", "T_EQ", "T_NEQ",
  "T_MULASSGN", "T_DIVASSGN", "T_MODASSGN", "T_ADDASSGN", "T_SUBASSGN",
  "T_LSHASSGN", "T_RSHASSGN", "T_ANDASSGN", "T_XORASSGN", "T_ORASSGN",
  "T_LSHFT", "T_RSHFT", "T_ADD", "T_SUB", "T_MUL", "T_DIV", "T_MOD",
  "T_UADD", "T_USUB", "T_OB", "T_CB", "'('", "'['", "']'", "')'", "';'",
  "','", "$accept", "START", "MODIFIER", "W1", "W2", "S", "UNREXPR", "FOR",
  "IF", "ELSE", "DECLR", "VARIABLE", "ARRAY", "TYPE", "X", "BRACKETS",
  "WI", "WOI", "INDEX", "ASSGN", "ASSGN1", "VARIABLEA", "ARRAYA", "INIT",
  "ASSGNOPR", "LOGICALOREXPR", "LOGICALANDEXPR", "EQUALITYEXPR", "RELEXPR",
  "ADDEXPR", "MULTEXPR", "EXPR", YY_NULLPTR
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
     305,   306,   307,   308,   309,    40,    91,    93,    41,    59,
      44
};
# endif

#define YYPACT_NINF -108

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-108)))

#define YYTABLE_NINF -57

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      86,  -108,  -108,    34,    22,    35,  -108,    77,  -108,  -108,
       3,    86,   143,  -108,  -108,  -108,  -108,  -108,    70,    32,
      84,    49,    63,   105,    68,   103,    80,   107,  -108,    78,
     104,    19,    19,    19,   112,  -108,   118,   161,   113,  -108,
    -108,    14,   115,  -108,  -108,   154,   155,    90,   124,    82,
      88,   111,  -108,  -108,  -108,  -108,  -108,  -108,  -108,  -108,
    -108,  -108,  -108,    19,    19,    12,  -108,  -108,  -108,     4,
    -108,   122,    80,   125,    80,    80,    52,    33,   175,  -108,
    -108,    80,    19,    19,    19,    19,    19,    19,    19,    19,
      19,    19,    19,    19,    19,  -108,  -108,   154,     7,   107,
      -1,  -108,   176,  -108,   123,  -108,  -108,   127,    80,  -108,
    -108,    19,   179,  -108,  -108,  -108,  -108,   128,   129,  -108,
    -108,   155,    90,   124,   124,    82,    82,    82,    82,    88,
      88,  -108,  -108,  -108,   132,    31,   -12,    18,    17,    80,
     133,   -20,   107,   130,   131,  -108,   135,    80,  -108,    69,
      48,    46,    -2,  -108,  -108,  -108,    19,  -108,   160,  -108,
     138,  -108,  -108,   136,  -108,    72,    59,   154,  -108,  -108,
    -108,  -108,   137,  -108
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     4,     5,     0,     0,     7,     1,     0,     6,     3,
       0,     0,     0,    40,    38,    36,    37,    39,     0,     0,
       0,     0,     0,     0,     0,     0,    13,    89,    90,     0,
       0,     0,     0,     0,     0,    12,     0,    29,     0,    30,
      31,     0,     0,    53,    54,    18,    71,    73,    76,    81,
      84,    88,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,     0,     0,     0,    89,    14,    15,     0,
      88,     0,    13,     0,    13,    13,    43,     0,     0,    44,
      45,    13,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    16,    17,    55,     0,     0,
       0,    57,     0,    58,     0,    91,     2,     0,    13,    10,
       8,     0,     0,    33,    35,    50,    51,    49,     0,    34,
       9,    70,    72,    74,    75,    77,    78,    79,    80,    82,
      83,    85,    86,    87,     0,     0,     0,    43,     0,    13,
       0,    43,    42,    43,     0,    48,    47,    13,    19,     0,
       0,     0,     0,    11,    28,    32,     0,    41,     0,    46,
       0,    26,    23,     0,    20,     0,     0,    52,    27,    24,
      22,    21,     0,    25
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -108,  -108,   178,  -108,  -108,   -64,  -107,  -108,  -108,  -108,
    -108,   134,  -108,    -5,  -102,   117,    50,    81,  -108,  -108,
    -108,   139,  -108,  -108,    55,   -31,   119,   120,    83,   -74,
      79,   -26
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     4,     5,     9,    34,    35,    36,    37,    74,
      38,    39,    40,    41,   113,    78,    79,    80,   118,   143,
      42,    43,    44,   104,    63,    45,    46,    47,    48,    49,
      50,    70
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      51,    82,    69,    66,    28,    67,    68,    18,   107,    82,
     109,   110,   125,   126,   127,   128,    99,   120,    76,    82,
      13,    66,    28,    66,    28,    82,    14,    15,    82,    16,
      17,     7,    97,    98,     6,    66,    28,   115,   116,   155,
     112,   157,     8,   163,   140,   111,    51,   150,    51,    51,
      66,    28,    66,    28,    33,    51,    11,   166,   135,   172,
     102,   149,   105,    66,    28,   134,   131,   132,   133,   136,
      77,   100,    33,    19,    33,   153,   151,   165,   112,   111,
     141,    10,    51,   160,    27,    28,    33,    20,    13,   148,
     117,    29,     1,    30,    14,    15,     2,    16,    17,    31,
      32,    33,    21,    33,   164,    22,   162,   152,    77,    24,
      31,    32,   112,    51,    33,    90,    91,   171,    90,    91,
      23,    51,    84,    85,    51,   167,    25,   161,    90,    91,
     170,    31,    32,    64,    52,    33,    92,    93,    94,   -56,
      51,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    13,    86,    87,    88,    89,    26,    14,    15,    65,
      16,    17,    95,    96,   115,   116,    71,   123,   124,   129,
     130,    72,    75,    73,    81,    82,   106,    83,   108,   119,
     137,   139,   138,   142,   144,   147,   146,   154,   117,    12,
     112,   158,   168,   114,   169,   173,   159,   156,   145,   101,
       0,   121,     0,   122,   103
};

static const yytype_int16 yycheck[] =
{
      26,    21,    33,     4,     5,    31,    32,    12,    72,    21,
      74,    75,    86,    87,    88,    89,     4,    81,     4,    21,
       8,     4,     5,     4,     5,    21,    14,    15,    21,    17,
      18,     9,    63,    64,     0,     4,     5,     4,     5,   141,
      60,   143,     7,   150,   108,    27,    72,    59,    74,    75,
       4,     5,     4,     5,    55,    81,    53,    59,    59,   166,
      65,   135,    58,     4,     5,    58,    92,    93,    94,   100,
      56,    59,    55,     3,    55,   139,    59,   151,    60,    27,
     111,     4,   108,   147,     4,     5,    55,    55,     8,    58,
      57,    11,     6,    13,    14,    15,    10,    17,    18,    51,
      52,    55,    18,    55,    58,    56,    58,   138,    56,     4,
      51,    52,    60,   139,    55,    46,    47,    58,    46,    47,
      57,   147,    32,    33,   150,   156,    58,    58,    46,    47,
      58,    51,    52,    55,    27,    55,    48,    49,    50,    59,
     166,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,     8,    28,    29,    30,    31,    53,    14,    15,    55,
      17,    18,    51,    52,     4,     5,    54,    84,    85,    90,
      91,    53,    59,    12,    59,    21,    54,    22,    53,     4,
       4,    54,    59,     4,    56,    53,    57,    54,    57,    11,
      60,    56,    54,    76,    58,    58,   146,   142,   117,    65,
      -1,    82,    -1,    83,    65
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     6,    10,    62,    63,    64,     0,     9,     7,    65,
       4,    53,    63,     8,    14,    15,    17,    18,    74,     3,
      55,    18,    56,    57,     4,    58,    53,     4,     5,    11,
      13,    51,    52,    55,    66,    67,    68,    69,    71,    72,
      73,    74,    81,    82,    83,    86,    87,    88,    89,    90,
      91,    92,    27,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    85,    55,    55,     4,    92,    92,    86,
      92,    54,    53,    12,    70,    59,     4,    56,    76,    77,
      78,    59,    21,    22,    32,    33,    28,    29,    30,    31,
      46,    47,    48,    49,    50,    51,    52,    86,    86,     4,
      59,    72,    74,    82,    84,    58,    54,    66,    53,    66,
      66,    27,    60,    75,    76,     4,     5,    57,    79,     4,
      66,    87,    88,    89,    89,    90,    90,    90,    90,    91,
      91,    92,    92,    92,    58,    59,    86,     4,    59,    54,
      66,    86,     4,    80,    56,    78,    57,    53,    58,    90,
      59,    59,    86,    66,    54,    75,    85,    75,    56,    77,
      66,    58,    58,    67,    58,    90,    59,    86,    54,    58,
      58,    58,    67,    58
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    61,    62,    63,    64,    64,    65,    65,    66,    66,
      66,    66,    66,    66,    67,    67,    67,    67,    67,    68,
      68,    68,    68,    68,    68,    68,    68,    69,    70,    70,
      71,    71,    72,    72,    73,    73,    74,    74,    74,    74,
      74,    75,    75,    75,    76,    76,    77,    77,    78,    78,
      79,    79,    80,    81,    81,    82,    83,    84,    84,    85,
      85,    85,    85,    85,    85,    85,    85,    85,    85,    85,
      86,    86,    87,    87,    88,    88,    88,    89,    89,    89,
      89,    89,    90,    90,    90,    91,    91,    91,    91,    92,
      92,    92
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,    17,     2,     1,     1,     1,     0,     3,     3,
       3,     5,     1,     0,     2,     2,     2,     2,     1,     5,
       6,     7,     7,     6,     7,     8,     6,     7,     4,     0,
       1,     1,     5,     3,     3,     3,     1,     1,     1,     1,
       1,     3,     2,     0,     1,     1,     4,     3,     3,     2,
       1,     1,     3,     1,     1,     3,     0,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     1,     3,     1,     3,     3,     1,     3,     3,     3,
       3,     1,     3,     3,     1,     3,     3,     3,     1,     1,
       1,     3
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
#line 59 "parser.y" /* yacc.c:1646  */
    {display();printf("accepted\n");}
#line 1479 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 76 "parser.y" /* yacc.c:1646  */
    {(yyval.number)=(yyvsp[0].number);}
#line 1485 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 77 "parser.y" /* yacc.c:1646  */
    {(yyval.number)=(yyvsp[0].number);}
#line 1491 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 100 "parser.y" /* yacc.c:1646  */
    {fill((yyvsp[-3].string),(yyvsp[-1].number),type);}
#line 1497 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 101 "parser.y" /* yacc.c:1646  */
    {fill((yyvsp[-1].string),0,type);}
#line 1503 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 106 "parser.y" /* yacc.c:1646  */
    {type=0;}
#line 1509 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 107 "parser.y" /* yacc.c:1646  */
    {type=1;}
#line 1515 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 108 "parser.y" /* yacc.c:1646  */
    {type=2;}
#line 1521 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 109 "parser.y" /* yacc.c:1646  */
    {type=3;}
#line 1527 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 110 "parser.y" /* yacc.c:1646  */
    {type=4;}
#line 1533 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 113 "parser.y" /* yacc.c:1646  */
    {fill((yyvsp[0].string),0,type);}
#line 1539 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 138 "parser.y" /* yacc.c:1646  */
    {(yyval.number)=lookupsymb((yyvsp[0].string));}
#line 1545 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 139 "parser.y" /* yacc.c:1646  */
    { (yyval.number)=(yyvsp[0].number);}
#line 1551 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 155 "parser.y" /* yacc.c:1646  */
    {//if(type==0)
										fill((yyvsp[-2].string),(yyvsp[0].number),type);
									 //else
										/*fillchar($1,(char)$3,type);*/}
#line 1560 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 163 "parser.y" /* yacc.c:1646  */
    {update((yyvsp[-2].string),(yyvsp[0].number));}
#line 1566 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 182 "parser.y" /* yacc.c:1646  */
    {(yyval.number)=(yyvsp[-2].number) || (yyvsp[0].number);}
#line 1572 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 185 "parser.y" /* yacc.c:1646  */
    {(yyval.number)=(yyvsp[-2].number) && (yyvsp[0].number);}
#line 1578 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 188 "parser.y" /* yacc.c:1646  */
    {(yyval.number)=(yyvsp[-2].number)==(yyvsp[0].number);}
#line 1584 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 189 "parser.y" /* yacc.c:1646  */
    {(yyval.number)=(yyvsp[-2].number)!=(yyvsp[0].number);}
#line 1590 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 192 "parser.y" /* yacc.c:1646  */
    {(yyval.number)=(yyvsp[-2].number)<(yyvsp[0].number);}
#line 1596 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 193 "parser.y" /* yacc.c:1646  */
    {(yyval.number)=(yyvsp[-2].number)>(yyvsp[0].number);}
#line 1602 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 194 "parser.y" /* yacc.c:1646  */
    {(yyval.number)=(yyvsp[-2].number)<=(yyvsp[0].number);}
#line 1608 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 195 "parser.y" /* yacc.c:1646  */
    {(yyval.number)=(yyvsp[-2].number)>=(yyvsp[0].number);}
#line 1614 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 198 "parser.y" /* yacc.c:1646  */
    {(yyval.number)=(yyvsp[-2].number)+(yyvsp[0].number);}
#line 1620 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 199 "parser.y" /* yacc.c:1646  */
    {(yyval.number)=(yyvsp[-2].number)-(yyvsp[0].number);}
#line 1626 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 202 "parser.y" /* yacc.c:1646  */
    {(yyval.number)=(yyvsp[-2].number)*(yyvsp[0].number);}
#line 1632 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 203 "parser.y" /* yacc.c:1646  */
    {(yyval.number)=(yyvsp[-2].number)/(yyvsp[0].number);}
#line 1638 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 204 "parser.y" /* yacc.c:1646  */
    {(yyval.number)=(yyvsp[-2].number)%(yyvsp[0].number);}
#line 1644 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 207 "parser.y" /* yacc.c:1646  */
    {(yyval.number)=lookupsymb((yyvsp[0].string));}
#line 1650 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 208 "parser.y" /* yacc.c:1646  */
    {type=0;(yyval.number)=(yyvsp[0].number);}
#line 1656 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 210 "parser.y" /* yacc.c:1646  */
    {(yyval.number)=(yyvsp[-1].number);}
#line 1662 "y.tab.c" /* yacc.c:1646  */
    break;


#line 1666 "y.tab.c" /* yacc.c:1646  */
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
#line 212 "parser.y" /* yacc.c:1906  */

int update(char*name,int value){
  d_list* node=head;
  lookupsymb(name);
  while(node!=NULL){
    if(strcmp(name,node->name)==0){
      node->value.val=value;
      //printf("%s %d\n",node->name,node->value.val);
      return 1;
    }
    node=node->next;
  }
  return 0;
  exit(1);
}

int fill(char* name,int value,int type){
  d_list* node=head;
  while(node!=NULL){
    if((strcmp(name,node->name)==0)&&(scope==node->scope)){
      yyerror("variable already declared");
      
      return  -1;
    }
    node=node->next;
  }
  node=head;
  d_list* newnode=(d_list*) malloc(sizeof(d_list));
  strcpy(newnode->name,name);
  newnode->type=type;
  newnode->scope=scope;
  newnode->value.val=value;
  newnode->next=head;
  head=newnode;

}

/*int fillchar(char* name,char* value,int type){
  d_list* node=head;
  while(node!=NULL){
    if((strcmp(name,node->name)==0)&&(scope==node->scope)){
      yyerror("variable already declared");
      exit(1);
      return  -1;
    }
    node=node->next;
  }
  node=head;
  d_list* newnode=(d_list*) malloc(sizeof(d_list));
  strcpy(newnode->name,name);
  newnode->type=type;
  newnode->scope=scope;
  strcpy(newnode->value.vale,value);
  newnode->next=head;
  head=newnode;

}
*/

void display(){
  int i=1;
  char val[20];
 
  d_list* node;
  node=head;
 
  printf("------------------------------------------------------------------------\n");
  while(node!=NULL){
  	if(node->type == 0)
  	{	
  		strcpy(val,"int");
  		  	printf("|%s\t| var-name\t|\t%s\t|value\t|\t%d\t|scope|%d\n",val,node->name,node->value.val,node->scope);
  	}
  	else if(node->type == 1)
  	{
  		strcpy(val,"char");
  		  	printf("|%s\t| var-name\t|\t%s\t|value\t|\t%s\t|scope|%d\n",val,node->name,node->value.vale,node->scope);
    }

 
  
    node=node->next;
	i++;
  }
  printf("------------------------------------------------------------------------\n");
}
int lookupsymb(char *id){
  d_list* node;
  node=head;
  if(head==NULL){
    yyerror("Variable Not declared");
    return -1;
    exit(1);

  }
  while(node!=NULL){
    if(strcmp(id,node->name)==0){
      return node->value.val;

    }
    node=node->next;
  }
  if(node==NULL){
    yyerror("Variable Not declared");
    return -1;
    exit(1);
  }
  
}

void yyerror(char *s) {
fprintf(stderr, "%s at line number %d\n",s,lineno);
//fprintf(stderr, "%s at\n",s);
//exit(0);
}
int main()
{
	//yyin = fopen("something.txt", "r");
	yyparse();
	//fclose(yyin);
	return 0;
}
