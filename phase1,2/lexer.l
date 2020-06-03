%{
	#include <stdio.h>
	#include <stdlib.h>	
	#include "y.tab.c"
	int lineno=1;
	int scope=-1;
	void yyerror(char *);
%}
digit	[0-9]
alpha	[a-zA-Z]
und	"_"
Equality [==]
Or [\|]
%%
"/*"([a-zA-Z0-9]|\n|"/*"|"*"|" "|";"|','|"\t")*(("*/"){1})	{if (yytext="\n") lineno+=1;}
"//".*			{;}
[\t | " "]		{;}

[\n]			{lineno+=1;}
({digit})+	{yylval.number=atoi(yytext); return T_NUM;}
"class"	{return T_CLASS;}
"public" {return T_PUBLIC;}
"private" {return T_PRIVATE;}
"static" {return T_STATIC;}
"void"	{return T_VOID;}
"main" {return T_MAIN;}
"int" {return T_INT;}
"char" {return T_CHAR;}
"String" {return T_STRING;}
"double" {return T_DOUBLE;}
"for" {return T_FOR;}
"if" {return T_IF;}
"else" {return T_ELSE;}

Equality {return T_EQ;}
"+"  	{return T_ADD;}
"-"   	{return T_SUB;}
"*"		{return T_MUL;}
"/"		{return T_DIV;}
"%"		{return T_MOD;}
"&"		{return T_BITAND;}
Or		{return T_BITOR;}
"^"		{return T_BITXOR;}
"--" 	{return T_USUB;}
"++" 	{return T_UADD;}
"<<"	{return T_LSHFT;}
">>"	{return T_RSHFT;}
"||"	{return T_LOGOR;}
"&&"	{return T_LOGAND;}
"!"		{return T_NOT;}
"+="	{return T_ADDASSGN;}
"-="	{return T_SUBASSGN;}
"*="	{return T_MULASSGN;}
"/="    {return T_DIVASSGN;}
"%="	{return T_MODASSGN;}
"<<="	{return T_LSHASSGN;}
">>="	{return T_RSHASSGN;}
"&="	{return T_ANDASSGN;}
"^="	{return T_XORASSGN;}
"|="	{return T_ORASSGN;}
"!="    {return T_NEQ;}
">="	{return T_GTEQ;}
"<="	{return T_LTEQ;}
">"		{return T_GT;}
"<"		{return T_LT;}
"="     {return T_ASSGN;}
"{"		{scope+=1; return T_OB;}
"}"		{scope-=1; return T_CB;}

\".*\"	{return T_STRS;}
({alpha}|{und})({alpha}|{und}|{digit})*	{yylval.string=strdup(yytext); return T_ID ;}
.    {return yytext[0];}
%%
int yywrap(void){}
