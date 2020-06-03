/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

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
#line 32 "parser.y" /* yacc.c:1909  */

	int number;
	char *string;

#line 167 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
