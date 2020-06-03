%{
	#include <stdlib.h>
	#include <string.h>
	#include <stdio.h>
	#include "header.c"
	FILE *yyin;
	
	#define YYSTYPE YACC
	int yylex();
	char* type;
	int err = 0;
	FILE* fp;
	
	int scope = 0;
	

	AST* ast;
	TREE* nptr=NULL;

	TREE* newnode(char*,TREE*,TREE*,TREE*,TREE*);
	TREE* newleaf(char*,char*);
	void display(TREE*);
	void yyerror(char* s);
	void printBT(char* prefix, TREE* node, int isLeft);
	
%}
%token T_CLASS T_PUBLIC T_PRIVATE T_STATIC T_FINAL T_VOID T_INT T_CHAR T_DOUBLE T_IF T_ELSE T_NEW T_INC T_DEC T_LOGOR T_LOGAND T_OR T_AND T_EQ T_NEQ T_GTEQ T_LTEQ T_ADD T_SUB T_MUL T_DIV T_GT T_LT T_XOR T_MOD T_LS T_RS T_NUM T_ID T_STRING T_ARGS T_PRINT T_FOR T_MAIN T_ASSGN T_MULASSGN T_DIVASSGN T_MODASSGN T_ADDASSGN T_SUBASSGN T_ANDASSGN T_XORASSGN T_ORASSGN
%%
START:MODIFIER T_CLASS T_ID '{'Method_declaration'}' {$$.ptr=newnode("CLASS DECLARATION",$1.ptr,newleaf("classname",$1.v),$5.ptr,nptr);ast->root = $$.ptr;};

Method_declaration:MODIFIER Type T_MAIN'('Type'['']' T_ARGS')' '{'S'}' {$$.ptr=newnode("METHOD DECLARATION",$1.ptr,$2.ptr,$5.ptr,$11.ptr);};

MODIFIER:W1 W2{$$.ptr=newnode("modifier",$1.ptr,$2.ptr,nptr,nptr);};

W1:T_PUBLIC {$$.ptr=newleaf("access modifier",$1.v);}
   |T_PRIVATE {$$.ptr=newleaf("access modifier",$1.v);};

W2:T_STATIC {$$.ptr=newleaf("access modifier",$1.v);};
	|{$$.ptr=nptr;};

S:		DECLR ';' S		{$$.ptr=newnode("DECLARATION",$1.ptr,$3.ptr,nptr,nptr);}
		|ASSGN ';' S	{$$.ptr=newnode("INITIALIZATION",$1.ptr,$3.ptr,nptr,nptr);}
		|IF ELSE S		{$$.ptr=newnode("IF ELSE STATEMNET",$1.ptr,$2.ptr,$3.ptr,nptr);}
		|FOR '{'S'}' S	{$$.ptr=newnode("FOR LOOP",$1.ptr,$3.ptr,$5.ptr,nptr);}
		|UNREXPR';' S	{$$.ptr=newnode("STATEMENT",$1.ptr,$3.ptr,nptr,nptr);}
		|;

ASSGN:	Assignment{$$.ptr=newnode("ASSIGNMENT STATEMENT",$1.ptr,nptr,nptr,nptr);}
		|Array_initialisation{$$.ptr=newnode("ARRAY INITIALISATION STATEMENT",$1.ptr,nptr,nptr,nptr);};

DECLR:	Variable_declaration{$$.ptr=newnode("VARIABLE DECLARATION",$1.ptr,nptr,nptr,nptr);}
		|Array_declaration{$$.ptr=newnode("ARRAY DECLARATION STATEMENT",$1.ptr,nptr,nptr,nptr);};

IF:		T_IF '('LOGICALOREXPR')' '{'S'}'{$$.ptr=newnode("IF STATEMENT",$3.ptr,$6.ptr,nptr,nptr);};

ELSE:	T_ELSE '{'S'}' {$$.ptr=newnode("ELSE STATEMENT",$3.ptr,nptr,nptr,nptr);}
		|{$$.ptr=nptr;};

FOR:	T_FOR'('';'';'')' 						{$$.ptr=newnode("FOR CONDITION",nptr,nptr,nptr,nptr);}
		|T_FOR'('INIT';'';'')'				{$$.ptr=newnode("FOR CONDITION",$3.ptr,nptr,nptr,nptr);}
		|T_FOR'('INIT';'LOGICALOREXPR';'')'	{$$.ptr=newnode("FOR CONDITION",$3.ptr,$5.ptr,nptr,nptr);}
		|T_FOR'('INIT';'';'UNREXPR')'				{$$.ptr=newnode("FOR CONDITION",$3.ptr,nptr,$6.ptr,nptr);}
		|T_FOR'('';'LOGICALOREXPR';'')'			{$$.ptr=newnode("FOR CONDITION",nptr,$4.ptr,nptr,nptr);}
		|T_FOR'('';'LOGICALOREXPR';'UNREXPR')'			{$$.ptr=newnode("FOR CONDITION",nptr,$4.ptr,$6.ptr,nptr);}
		|T_FOR'('INIT';'LOGICALOREXPR';'UNREXPR')'	{$$.ptr=newnode("FOR CONDITION",$3.ptr,$5.ptr,$7.ptr,nptr);}
		|T_FOR'('';'';'UNREXPR')'						{$$.ptr=newnode("FOR CONDITION",nptr,nptr,$5.ptr,nptr);};

INIT: 	Variable_declaration	{$$.ptr=$1.ptr;}
		|Assignment	{$$.ptr=$1.ptr;};

UNREXPR:		T_INC Expr{$$.ptr=newnode("UNARY OPERATION",newleaf("increment",$1.v),$2.ptr,nptr,nptr);}
		|T_DEC Expr{$$.ptr=newnode("UNARY OPERATION",newleaf("increment",$1.v),$2.ptr,nptr,nptr);}
		|Expr T_INC {$$.ptr=newnode("UNARY OPERATION",$1.ptr,newleaf("increment",$2.v),nptr,nptr);}
		|Expr T_DEC {$$.ptr=newnode("UNARY OPERATION",$1.ptr,newleaf("increment",$2.v),nptr,nptr);}
		|LOGICALOREXPR;


Variable_declaration:Type Expr T_ASSGN LOGICALOREXPR X {$$.ptr=newnode("variable initialisation",$1.ptr,$2.ptr,$4.ptr,$5.ptr);}
		|Type Expr X {$$.ptr=newnode("variable declaration",$1.ptr,$2.ptr,$3.ptr,nptr);};

//Identifier_list:','Expr T_ASSGN LOGICALOREXPR Identifier_list {$$.ptr=newnode("identifier list",$2.ptr,$4.ptr,$5.ptr,nptr);}
//			|','T_ID Identifier_list {$$.ptr=newnode("identifier list",$2.ptr,$3.ptr,nptr,nptr);}|{$$.ptr=nptr;};

X:	','Assignment1 X {$$.ptr=newnode("declaration continued",$2.ptr,$3.ptr,nptr,nptr);}
	|',' T_ID X	{$$.ptr=newnode("declaration continued",$2.ptr,$3.ptr,nptr,nptr);}
	|{$$.ptr=nptr;};

Assignment1:Expr Assignment_operator LOGICALOREXPR {$$.ptr=newnode($2.v,$1.ptr,$3.ptr,nptr,nptr);};

Array_declaration:Type Brackets Expr {$$.ptr=newnode("array declaration",$1.ptr,$2.ptr,$3.ptr,nptr);}
			|Type Expr Brackets {$$.ptr=newnode("array declaration",$1.ptr,$2.ptr,$3.ptr,nptr);};

Brackets: 	WI{$$.ptr=nptr;}
			|WOI{$$.ptr=nptr;};

WOI:			'['']'WI {$$.ptr=newnode("bracket",$2.ptr,$3.ptr,nptr,nptr);}
			|'['']'{$$.ptr=nptr;};

WI:		'[' INDEX ']' {$$.ptr=$2.ptr;} 
			| '[' INDEX ']' WOI {$$.ptr=newnode("bracket",$2.ptr,$4.ptr,nptr,nptr);}; 

INDEX: 		T_NUM {$$.ptr=newleaf("num",$1.v);}
			| T_ID {$$.ptr=newleaf("id",$1.v);};

Array_initialisation:Array_declaration Assignment_operator K {$$.ptr=newnode($2.v,$1.ptr,$2.ptr,$3.ptr,nptr);};

K:			V {$$.ptr=$1.ptr;}
			|V','K {$$.ptr=newnode(",",$1.ptr,$3.ptr,nptr,nptr);}
			|T_NEW Type WI {$$.ptr=newnode("new",$2.ptr,$3.ptr,nptr,nptr);};

V:			T_NUM {$$.ptr=newleaf("num",$1.v);}
			|R {$$.ptr=$1.ptr;};

R:			'{'K'}' {$$.ptr=$2.ptr;};

Type:		T_INT {$$.ptr=newleaf("datatype",$1.v);}
			|T_DOUBLE {$$.ptr=newleaf("datatype",$1.v);}
			|T_CHAR {$$.ptr=newleaf("datatype",$1.v);}
			|T_STRING {$$.ptr=newleaf("datatype",$1.v);}
			|T_VOID {$$.ptr=newleaf("datatype",$1.v);};

Assignment:Expr Assignment_operator LOGICALOREXPR {$$.ptr=newnode($2.v,$1.ptr,$3.ptr,nptr,nptr);};

Assignment_operator:T_ASSGN{$$.v = strdup($1.v);}
				|T_ADDASSGN{$$.v = strdup($1.v);}
				|T_SUBASSGN{$$.v = strdup($1.v);}
				|T_MULASSGN{$$.v = strdup($1.v);}
				|T_DIVASSGN{$$.v = strdup($1.v);}
				|T_ANDASSGN{$$.v = strdup($1.v);}
				|T_ORASSGN{$$.v = strdup($1.v);}
				|T_XORASSGN{$$.v = strdup($1.v);}
				|T_MODASSGN{$$.v = strdup($1.v);};

LOGICALOREXPR:LOGICALOREXPR T_LOGOR LOGICALANDEXPR {$$.ptr=newnode(strdup($2.v),$1.ptr,$3.ptr,nptr,nptr);}
		|LOGICALANDEXPR	{$$.ptr=$1.ptr;};

LOGICALANDEXPR: LOGICALANDEXPR T_LOGAND EQUALITYEXPR {$$.ptr=newnode(strdup($2.v),$1.ptr,$3.ptr,nptr,nptr);}
		|EQUALITYEXPR	{$$.ptr=$1.ptr;};

EQUALITYEXPR: EQUALITYEXPR T_EQ RELEXPR {$$.ptr=newnode(strdup($2.v),$1.ptr,$3.ptr,nptr,nptr);}
		| EQUALITYEXPR T_NEQ RELEXPR {$$.ptr=newnode(strdup($2.v),$1.ptr,$3.ptr,nptr,nptr);}
		|RELEXPR	{$$.ptr=$1.ptr;};

RELEXPR:  RELEXPR T_LT ADDEXPR {$$.ptr=newnode(strdup($2.v),$1.ptr,$3.ptr,nptr,nptr);}
		| RELEXPR T_GT ADDEXPR {$$.ptr=newnode(strdup($2.v),$1.ptr,$3.ptr,nptr,nptr);}
		| RELEXPR T_LTEQ ADDEXPR {$$.ptr=newnode(strdup($2.v),$1.ptr,$3.ptr,nptr,nptr);}
		| RELEXPR T_GTEQ ADDEXPR {$$.ptr=newnode(strdup($2.v),$1.ptr,$3.ptr,nptr,nptr);}
		|ADDEXPR	{$$.ptr=$1.ptr;};

ADDEXPR:  ADDEXPR T_ADD MULTEXPR {$$.ptr=newnode(strdup($2.v),$1.ptr,$3.ptr,nptr,nptr);}
		| ADDEXPR T_SUB MULTEXPR {$$.ptr=newnode(strdup($2.v),$1.ptr,$3.ptr,nptr,nptr);}
		|MULTEXPR	{$$.ptr=$1.ptr;};

MULTEXPR: MULTEXPR T_MUL Expr {$$.ptr=newnode(strdup($2.v),$1.ptr,$3.ptr,nptr,nptr);}
		| MULTEXPR T_DIV Expr {$$.ptr=newnode(strdup($2.v),$1.ptr,$3.ptr,nptr,nptr);}
		| MULTEXPR T_MOD Expr {$$.ptr=newnode(strdup($2.v),$1.ptr,$3.ptr,nptr,nptr);}
		| Expr	{$$.ptr=$1.ptr;};

Expr:			'('LOGICALOREXPR')' {$$.ptr=$2.ptr;}
				|T_NUM {$$.ptr=newleaf("num",$1.v);}
				|T_ID {$$.ptr=newleaf("id",$1.v);};

%%
void yyerror(char *s)
{
	yynerrs+=1;
}
int main(int argc, char* argv[])
{
	fp = fopen("AST.txt", "w");
	ast = (AST*)malloc(sizeof(AST));
	ast->root = NULL;
	yyin = fopen(argv[1], "r");
	if(!yyparse())
	{
		
		printf("Parsing succesful\n");
		printf("AST generated\n");

		fprintf(fp,"Abstract Syntax Tree\n");
		
		printBT("",ast->root,0);
		fprintf(fp,"\n");
		fclose(fp);
		return 0;
	}
	else
	{
		printf("Unsuccessful\n");
	}
	return 0;
}


TREE* newnode(char* o,TREE* c1,TREE* c2,TREE* c3,TREE* c4)
{
	TREE* temp = (TREE*)malloc(sizeof(TREE));
	temp->opr= strdup(o);
	temp->value = strdup("N/A");
	temp->c1 = c1;
	temp->c2 = c2;
	temp->c3 = c3;
	temp->c4 = c4;
	return temp;
}

TREE* newleaf(char* o, char* v)
{
	TREE* temp = (TREE*)malloc(sizeof(TREE));
	temp->opr = strdup(o);
	temp->value = strdup(v);
	temp->c1 = NULL;
	temp->c2 = NULL;
	temp->c3 = NULL;
	temp->c4 = NULL;
	return temp;
}

void display(TREE* r)
{	
	
	if(r==NULL)
		return;
	if(r->c1==NULL && r->c2==NULL && r->c3==NULL)
	{
		printf("(");
		printf("%s\t%s)\n",r->opr,r->value);
	}
	else
		printf("%s\n",r->opr);
	display(r->c1);
	display(r->c2);
	display(r->c3);
	display(r->c4);
}

void printBT(char* prefix, TREE* node, int isLeft)
{	
	
	if(node==NULL)
		return;
    if( node != NULL)
    {
       fprintf(fp,"%s",prefix);

       	if(isLeft==0)
       		fprintf(fp,"└──");
       	else
       		fprintf(fp,"├──");
      if(node->c1==NULL && node->c2==NULL && node->c3==NULL && node->c4==NULL)		
		fprintf(fp,"(%s, %s)\n",node->opr,node->value);
	else
		fprintf(fp,"%s\n",node->opr);
        char new_prefix[1000];
       	if(isLeft==0)
		{
       		strcpy(new_prefix,prefix);
       		strcat(new_prefix,"    ");
       	}
       	else
   		{
       		strcpy(new_prefix,prefix);
       		strcat(new_prefix,"│   ");
       	}
     if(node->c1!=NULL && node->c2==NULL && node->c3==NULL && node->c4==NULL)
	{
		printBT(new_prefix, node->c1, 0);
        printBT(new_prefix, node->c2, 0);
        printBT(new_prefix, node->c3, 0);
        printBT(new_prefix, node->c4, 0);
        return;
	}
	if(node->c1!=NULL && node->c2!=NULL && node->c3==NULL && node->c4==NULL)
	{
		printBT(new_prefix, node->c1, 1);
        printBT(new_prefix, node->c2, 0);
        printBT(new_prefix, node->c3, 0);
        printBT(new_prefix, node->c4, 0);
        return;
	}
	if(node->c1!=NULL && node->c2!=NULL && node->c3!=NULL && node->c4==NULL)
	{
		printBT(new_prefix, node->c1, 1);
        printBT(new_prefix, node->c2, 1);
        printBT(new_prefix, node->c3, 0);
        printBT(new_prefix, node->c4, 0);
        return;
	}	
	if(node->c1!=NULL && node->c2!=NULL && node->c3!=NULL && node->c4!=NULL)
	{
		printBT(new_prefix, node->c1, 1);
        printBT(new_prefix, node->c2, 1);
        printBT(new_prefix, node->c3, 1);
        printBT(new_prefix, node->c4, 0);
        return;
	}	   
  } 	
}

