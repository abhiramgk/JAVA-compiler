%option noyywrap
%{
#include "header.c"
#define YYSTYPE YACC
#include "y.tab.h"
#include <stdio.h>
int slct = 0, mlct=0;
extern void yyerror(char *);
void addTokenToFile(char *t, char *s);
int fg = 0;
int yylineno;
%}
%%
["\t"]*"//".* {slct++;}
"/*"        {fg+=1; mlct++;}
"*/"        {fg-=1;}
"main"		{if(fg == 0){addTokenToFile("Keyword", yytext);yylval.v=strdup(yytext); return T_MAIN;}}
"class" 	{if(fg == 0){addTokenToFile("Keyword", yytext);yylval.v=strdup(yytext); return T_CLASS;}}
"public" 	{if(fg == 0){addTokenToFile("Keyword", yytext);yylval.v=strdup(yytext); return T_PUBLIC;}}
"private" 	{if(fg == 0){addTokenToFile("Keyword", yytext);yylval.v=strdup(yytext); return T_PRIVATE;}}
"static" 	{if(fg == 0){addTokenToFile("Keyword", yytext);yylval.v=strdup(yytext); return T_STATIC;}}
"void" 		{if(fg == 0){addTokenToFile("Keyword", yytext);yylval.v=strdup(yytext); return T_VOID;}}
"else"      {if(fg == 0){addTokenToFile("Keyword", yytext);yylval.v=strdup(yytext); return T_ELSE;}}
"int" 		{if(fg == 0){addTokenToFile("Keyword", yytext);yylval.v=strdup(yytext); return T_INT;}}
"String"	{if(fg == 0){addTokenToFile("Keyword", yytext);yylval.v=strdup(yytext); return T_STRING;}}
"args"		{if(fg == 0){addTokenToFile("Keyword", yytext);yylval.v=strdup(yytext); return T_ARGS;}}
"char"		{if(fg == 0){addTokenToFile("Keyword", yytext);yylval.v=strdup(yytext); return T_CHAR;}}
"double"	{if(fg == 0){addTokenToFile("Keyword", yytext);yylval.v=strdup(yytext); return T_DOUBLE;}}
"if" 		{if(fg == 0){addTokenToFile("Keyword", yytext);yylval.v=strdup(yytext); return T_IF;}}
"for" 		{if(fg == 0){addTokenToFile("Keyword", yytext);yylval.v=strdup(yytext); return T_FOR;}}
"new"       {if(fg == 0){addTokenToFile("Keyword", yytext);yylval.v=strdup(yytext); return T_NEW;}}
"++"		{if(fg == 0){addTokenToFile("Unary operator", yytext);yylval.v=strdup(yytext); return T_INC;}}
"--"		{if(fg == 0){addTokenToFile("Unary operator", yytext);yylval.v=strdup(yytext); return T_DEC;}}
"+="		{if(fg == 0){addTokenToFile("Assignment operator", yytext);yylval.v=strdup(yytext); return T_ADDASSGN;}}
"-="		{if(fg == 0){addTokenToFile("Assignment operator", yytext);yylval.v=strdup(yytext); return T_SUBASSGN;}}
"*="		{if(fg == 0){addTokenToFile("Assignment operator", yytext);yylval.v=strdup(yytext); return T_MULASSGN;}}
"/="		{if(fg == 0){addTokenToFile("Assignment operator", yytext);yylval.v=strdup(yytext); return T_DIVASSGN;}}
"&="		{if(fg == 0){addTokenToFile("Assignment operator", yytext);yylval.v=strdup(yytext); return T_ANDASSGN;}}
"|="        {if(fg == 0){addTokenToFile("Assignment operator", yytext);yylval.v=strdup(yytext); return T_ORASSGN;}}
"^="		{if(fg == 0){addTokenToFile("Assignment operator", yytext);yylval.v=strdup(yytext); return T_XORASSGN;}}
"%="		{if(fg == 0){addTokenToFile("Assignment operator", yytext);yylval.v=strdup(yytext); return T_MODASSGN;}}
"||"		{if(fg == 0){addTokenToFile("Logical operator", yytext);yylval.v=strdup(yytext); return T_LOGOR;}}
"&&"		{if(fg == 0){addTokenToFile("Logical operator", yytext);yylval.v=strdup(yytext); return T_LOGAND;}}
"=="		{if(fg == 0){addTokenToFile("Comparison operator", yytext);yylval.v=strdup(yytext); return T_EQ;}}
"!="		{if(fg == 0){addTokenToFile("Comparison operator", yytext);yylval.v=strdup(yytext); return T_NEQ;}}
">="        {if(fg == 0){addTokenToFile("Assignment operator", yytext);yylval.v=strdup(yytext); return T_GTEQ;}}
"<="        {if(fg == 0){addTokenToFile("Assignment operator", yytext);yylval.v=strdup(yytext); return T_LTEQ;}}
"<<"        {if(fg == 0){addTokenToFile("Bitwise operator", yytext);yylval.v=strdup(yytext); return T_LS;}}
">>"        {if(fg == 0){addTokenToFile("Bitwise operator", yytext);yylval.v=strdup(yytext); return T_RS;}}
"("			{if(fg == 0){addTokenToFile("Brackets", yytext);yylval.v=strdup(yytext);  return *yytext;}}
")"			{if(fg == 0){addTokenToFile("Brackets", yytext);yylval.v=strdup(yytext);  return *yytext;}}
"."         {if(fg == 0){addTokenToFile("dot", yytext);yylval.v=strdup(yytext);  return *yytext;}}
","         {if(fg == 0){addTokenToFile("comma", yytext);yylval.v=strdup(yytext);  return *yytext;}}
"{"         {if(fg == 0){addTokenToFile("Brackets", yytext);yylval.v=strdup(yytext);  return *yytext;}}
"}"         {if(fg == 0){addTokenToFile("Brackets", yytext);yylval.v=strdup(yytext);  return *yytext;}}
"["         {if(fg == 0){addTokenToFile("Brackets", yytext);yylval.v=strdup(yytext);  return *yytext;}}
"]"         {if(fg == 0){addTokenToFile("Brackets", yytext);yylval.v=strdup(yytext);  return *yytext;}}
"*"         {if(fg == 0){addTokenToFile("Arithmetic operator", yytext);yylval.v=strdup(yytext);  return T_MUL;}}
"+"         {if(fg == 0){addTokenToFile("Arithmetic operator", yytext);yylval.v=strdup(yytext);  return T_ADD;}}
";"         {if(fg == 0){addTokenToFile("semi-colon", yytext);yylval.v=strdup(yytext);  return *yytext;}}
"-"         {if(fg == 0){addTokenToFile("Arithmetic operator", yytext);yylval.v=strdup(yytext);  return T_SUB;}}
"/"         {if(fg == 0){addTokenToFile("Arithmetic operator", yytext);yylval.v=strdup(yytext);  return T_DIV;}}
"="         {if(fg == 0){addTokenToFile("Assignment operator", yytext);yylval.v=strdup(yytext);  return T_ASSGN;}}
"&"         {if(fg == 0){addTokenToFile("Bitwise operator", yytext);yylval.v=strdup(yytext);  return T_AND;}}
"|"         {if(fg == 0){addTokenToFile("Bitwise operator", yytext);yylval.v=strdup(yytext);  return T_OR;}}
"!"         {if(fg == 0){addTokenToFile("Bitwise operator", yytext);yylval.v=strdup(yytext);  return *yytext;}}
"~"         {if(fg == 0){addTokenToFile("Bitwise operator", yytext);yylval.v=strdup(yytext);  return *yytext;}}
"^"         {if(fg == 0){addTokenToFile("Bitwise operator", yytext);yylval.v=strdup(yytext);  return T_XOR;}}
"%"         {if(fg == 0){addTokenToFile("Arithmetic operator", yytext);yylval.v=strdup(yytext);  return *yytext;}}
">"         {if(fg == 0){addTokenToFile("Comparison operator", yytext);yylval.v=strdup(yytext);  return T_GT;}}
"<"         {if(fg == 0){addTokenToFile("Comparison operator", yytext);yylval.v=strdup(yytext);  return T_LT;}}
[0-9]+[.]?[0-9]*		{if(fg == 0){yylval.v=strdup(yytext);addTokenToFile("NUM", yytext); return T_NUM;}}
[A-Za-z][A-Za-z0-9]* 	{if(fg == 0) {yylval.v=strdup(yytext); addTokenToFile("Identifier", yytext);return T_ID;}}
"\n"		{yylineno++;}
.			{}
%%
void addTokenToFile(char *t, char *s)
{
   	FILE *fptr;
	fptr = fopen("tokens.txt", "a");
   	if(fptr == NULL)
   	{
	      printf("Error!");
	      exit(1);
   	}

   	fprintf(fptr,"%s : %s\n", t, s);
   	fclose(fptr);
}
