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
