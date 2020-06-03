%{
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
%}
%token T_CLASS T_PUBLIC T_PRIVATE T_STATIC T_FINAL T_VOID T_INT T_CHAR T_DOUBLE T_IF T_ELSE T_NEW T_INC T_DEC T_LOGOR T_LOGAND T_OR T_AND T_EQ T_NEQ T_GTEQ T_LTEQ T_ADD T_SUB T_MUL T_DIV T_GT T_LT T_XOR T_MOD T_LS T_RS T_NUM T_ID T_STRING T_ARGS T_PRINT T_FOR T_MAIN T_ASSGN T_MULASSGN T_DIVASSGN T_MODASSGN T_ADDASSGN T_SUBASSGN T_ANDASSGN T_XORASSGN T_ORASSGN

%%
START:Modifier T_CLASS T_ID '{'Method_declaration'}';


Method_declaration:Modifier Type T_MAIN'('Type'['']' T_ARGS')'{l=(LIST*)malloc(sizeof(LIST));l->head=NULL;}'{'S'}';

Modifier:W1 W2;

W1:T_PUBLIC
   |T_PRIVATE;

W2:T_STATIC
	|;

S:	Assignment';' S 
	|IF
	 ELSE 					{$$.code = (char*)malloc(sizeof(char)*100);
							 sprintf($$.code,"%s:\n",qq);
							 fprintf(fp,"%s",$$.code);}
	 S
	|	FOR
		'{'S'}'								{	$$.code = (char*)malloc(sizeof(char)*100);
												sprintf($$.code,"goto %s\n%s:\n",uu,rr);
												fprintf(fp,"%s",$$.code);}
		S
	|Variable_declaration';' S
	|Array_declaration';' S
	|Array_initialisation';' S
	|UNREXPR';'
	|;

IF:T_IF '('LOGICALOREXPR')' {$$.tr=newLabel(&ln);
							$$.addr=newLabel(&ln);
							pp=$$.addr;
							$$.code = (char*)malloc(sizeof(char)*100);
							sprintf($$.code,"if %s goto %s\ngoto %s\n%s:\n",$3.addr,$$.tr,$$.addr,$$.tr);
							fprintf(fp,"%s",$$.code);} 
	 '{'S'}'				{$$.tr=newLabel(&ln);
							 qq=$$.tr;
							 $$.code = (char*)malloc(sizeof(char)*100);
							 sprintf($$.code,"goto %s\n",$$.tr);
							 fprintf(fp,"%s",$$.code);} ;

ELSE:	T_ELSE {$$.code = (char*)malloc(sizeof(char)*100);
			sprintf($$.code,"%s:\n",pp);
			fprintf(fp,"%s",$$.code);
			} 
	'{'S'}'
	|		{$$.code = (char*)malloc(sizeof(char)*100);
			 sprintf($$.code,"%s:\n",pp);
			 fprintf(fp,"%s",$$.code);};

FOR:	T_FOR'('';'';'')' 						{	uu=newLabel(&ln);
													rr=newLabel(&ln);
													$$.code = (char*)malloc(sizeof(char)*100);
													sprintf($$.code,"%s:\n",uu);
													fprintf(fp,"%s",$$.code);}
		|T_FOR'('Assignment';'';'')'				{	uu=newLabel(&ln);
													rr=newLabel(&ln);
													$$.code = (char*)malloc(sizeof(char)*100);
													sprintf($$.code,"%s:\n",uu);
													fprintf(fp,"%s",$$.code);}
		|T_FOR'('Assignment';' Print LOGICALOREXPR';'')'	{	$$.tr=newLabel(&ln);
													$$.addr=newLabel(&ln);
													rr=$$.addr;
													vv=$$.tr;
													uu=tt;
													$$.code = (char*)malloc(sizeof(char)*100);
													sprintf($$.code,"if %s goto %s\ngoto %s\n%s:\n",$6.addr,$$.tr,$$.addr,vv);
													fprintf(fp,"%s",$$.code);} 
		|T_FOR'('Assignment';'';'					{	uu=newLabel(&ln);
													tt=newLabel(&ln);
													rr=newLabel(&ln);
													$$.code = (char*)malloc(sizeof(char)*100);
													sprintf($$.code,"goto %s\n%s:\n",tt,uu);
													fprintf(fp,"%s",$$.code);} 
			UNREXPR')'								{	$$.code = (char*)malloc(sizeof(char)*100);
													sprintf($$.code,"%s:\n",tt);
													fprintf(fp,"%s",$$.code);
												}
		|T_FOR'('';'Print LOGICALOREXPR';'')'		{	$$.tr=newLabel(&ln);
													$$.addr=newLabel(&ln);
													rr=$$.addr;
													vv=$$.tr;
													uu=tt;
													$$.code = (char*)malloc(sizeof(char)*100);
													sprintf($$.code,"if %s goto %s\ngoto %s\n%s:\n",$5.addr,$$.tr,$$.addr,vv);
													fprintf(fp,"%s",$$.code);} 
		|T_FOR'('';'Print LOGICALOREXPR';'			{	$$.tr=newLabel(&ln);
													$$.addr=newLabel(&ln);
													rr=$$.addr;
													vv=$$.tr;
													uu=newLabel(&ln);
													$$.code = (char*)malloc(sizeof(char)*100);
													sprintf($$.code,"if %s goto %s\ngoto %s\n%s:\n",$5.addr,$$.tr,$$.addr,uu);
													fprintf(fp,"%s",$$.code);} 
			UNREXPR')'								{	$$.code = (char*)malloc(sizeof(char)*100);
													sprintf($$.code,"goto %s\n%s:\n",tt,vv);
													fprintf(fp,"%s",$$.code);
												}
		|T_FOR'('Assignment';'Print LOGICALOREXPR';'	{	$$.tr=newLabel(&ln);
													$$.addr=newLabel(&ln);
													rr=$$.addr;
													vv=$$.tr;
													uu=newLabel(&ln);
													$$.code = (char*)malloc(sizeof(char)*100);
													sprintf($$.code,"if %s goto %s\ngoto %s\n%s:\n",$6.addr,$$.tr,$$.addr,uu);
													fprintf(fp,"%s",$$.code);} 
		UNREXPR')' 									{	$$.code = (char*)malloc(sizeof(char)*100);
													sprintf($$.code,"goto %s\n%s:\n",tt,vv);
													fprintf(fp,"%s",$$.code);
												}	
		|T_FOR'('';'';'							{	uu=newLabel(&ln);
													tt=newLabel(&ln);
													rr=newLabel(&ln);
													$$.code = (char*)malloc(sizeof(char)*100);
													sprintf($$.code,"goto %s\n%s:\n",tt,uu);
													fprintf(fp,"%s",$$.code);} 
			UNREXPR')'								{	$$.code = (char*)malloc(sizeof(char)*100);
													sprintf($$.code,"%s:\n",tt);
													fprintf(fp,"%s",$$.code);
												};
Print:											{	tt=newLabel(&ln);
													$$.code = (char*)malloc(sizeof(char)*100);
													sprintf($$.code,"%s:\n",tt);
													fprintf(fp,"%s",$$.code);
												};

UNREXPR:	Expr T_INC					{$$.addr = newTemp(&tn);
								$$.code = (char*)malloc(sizeof(char)*100); 
								sprintf($$.code,"%s = %s %s \n%s = %s\n",$$.addr,$1.addr,strdup(" + 1"),$1.addr,$$.addr);
								fprintf(fp,"%s",$$.code);}
	|Expr T_DEC					{$$.addr = newTemp(&tn);
								$$.code = (char*)malloc(sizeof(char)*100); 
								sprintf($$.code,"%s = %s %s \n%s = %s\n",$$.addr,$1.addr,strdup(" - 1"),$1.addr,$$.addr);
								fprintf(fp,"%s",$$.code);}
	|T_INC Expr					{$$.addr = newTemp(&tn);
								$$.code = (char*)malloc(sizeof(char)*100); 
								sprintf($$.code,"%s = %s %s \n%s = %s\n",$$.addr,$2.addr,strdup(" + 1"),$2.addr,$$.addr);
								fprintf(fp,"%s",$$.code);}
	|T_DEC Expr					{$$.addr = newTemp(&tn);
								$$.code = (char*)malloc(sizeof(char)*100); 
								sprintf($$.code,"%s = %s %s \n%s = %s\n",$$.addr,$2.addr,strdup(" - 1"),$2.addr,$$.addr);
								fprintf(fp,"%s",$$.code);};

Variable_declaration:Type Expr T_ASSGN LOGICALOREXPR X {append(l,$4.addr,$2.addr);
																		$$.code = (char*)malloc(sizeof(char)*100);
																		sprintf($$.code,"%s = %s\n",$2.addr,$4.addr);
																		fprintf(fp,"%s",$$.code);};
		|Type Expr X';';

X:		','Assignment1 X 
		|','T_ID X 
		|;

Assignment1:Expr Assignment_operator LOGICALOREXPR {append(l,$3.addr,$$.addr);
										$$.addr=strdup($1.v);
										$$.code = (char*)malloc(sizeof(char)*200);
										sprintf($$.code,"%s = %s\n",$$.addr,$3.addr);
										fprintf(fp,"%s",$$.code);};

Array_declaration:Type Brackets Expr 	{append(l,$3.addr,$2.addr);
											$$.code = (char*)malloc(sizeof(char)*100);
											sprintf($$.code,"%s = %s\n",$3.addr,$2.addr);
											fprintf(fp,"%s",$$.code);}
		|Type Expr Brackets             {append(l,$2.addr,$3.addr);
											$$.code = (char*)malloc(sizeof(char)*100);
											sprintf($$.code,"%s = %s\n",$2.addr,$3.addr);
											fprintf(fp,"%s",$$.code);};

Brackets:	WI {$$.addr = $1.addr;} 
			|WOI {$$.addr = $1.addr;};

WOI:		'['']'WI {strcpy($$.addr,"");}
		|'['']' {strcpy($$.addr,"");};

WI:	'[' INDEX ']' {$$.addr = $2.addr;}  
		| '[' INDEX ']' WOI {$$.addr = $2.addr;}; 

INDEX: T_NUM {$$.addr = strdup($1.v);} 
		| T_ID {$$.addr = search(l,$1.v);};

Array_initialisation:Array_declaration Assignment_operator K  {
											append(l,$1.addr,$3.addr);
											$$.code = (char*)malloc(sizeof(char)*100);
											sprintf($$.code,"%s = %s\n",$1.addr,$3.addr);
											fprintf(fp,"%s",$$.code);} ;

K:	V {strcat($$.addr,$1.addr);}
		
	|V','K {
			strcat($$.addr,$1.addr);
			strcat($$.addr,$3.addr);}
		
	|T_NEW Type WI {$$.addr = $3.addr;};

V:	T_NUM {$$.addr = strdup($1.v);}
			 
	|R {$$.addr = $1.addr;};

R:	'{'K'}' {$$.addr = $2.addr;};
				

Type:	T_INT 					
		|T_DOUBLE 				
		|T_CHAR 				
		|T_STRING 
		|T_VOID ;

Assignment:Expr Assignment_operator LOGICALOREXPR {append(l,$3.addr,$$.addr);
										$$.addr=strdup($1.v);
										$$.code = (char*)malloc(sizeof(char)*200);
										sprintf($$.code,"%s = %s\n",$$.addr,$3.addr);
										fprintf(fp,"%s",$$.code);} ;

Assignment_operator:T_ASSGN {$$.code = strdup("=");}
		|T_ADD {$$.code = strdup("+");} 
		|T_SUB {$$.code = strdup("-");} 
		|T_MUL {$$.code = strdup("*");} 
		|T_DIV {$$.code = strdup("/");}  
		|T_AND {$$.code = strdup("&");} 
		|T_OR {$$.code = strdup("|");} 
		|T_XOR {$$.code = strdup("^");} 
		|T_MOD {$$.code = strdup("%");};

LOGICALOREXPR:LOGICALOREXPR T_LOGOR LOGICALANDEXPR {$$.addr = newTemp(&tn);
													$$.code = (char*)malloc(sizeof(char)*100); 
													sprintf($$.code,"%s = %s %s %s\n",$$.addr,$1.addr,strdup("||"),$3.addr);
													fprintf(fp,"%s",$$.code);}
		|LOGICALANDEXPR;

LOGICALANDEXPR: LOGICALANDEXPR T_LOGAND EQUALITYEXPR {$$.addr = newTemp(&tn);
														$$.code = (char*)malloc(sizeof(char)*100); 
														sprintf($$.code,"%s = %s %s %s\n",$$.addr,$1.addr,strdup("&&"),$3.addr);
														fprintf(fp,"%s",$$.code);}
		|EQUALITYEXPR;

EQUALITYEXPR: EQUALITYEXPR T_EQ RELEXPR {$$.addr = newTemp(&tn);
										$$.code = (char*)malloc(sizeof(char)*100); 
										sprintf($$.code,"%s = %s %s %s\n",$$.addr,$1.addr,strdup("=="),$3.addr);
										fprintf(fp,"%s",$$.code);}
		| EQUALITYEXPR T_NEQ RELEXPR {$$.addr = newTemp(&tn);
										$$.code = (char*)malloc(sizeof(char)*100); 
										sprintf($$.code,"%s = %s %s %s\n",$$.addr,$1.addr,strdup("!="),$3.addr);
										fprintf(fp,"%s",$$.code);}
		|RELEXPR;

RELEXPR:  RELEXPR T_LT ADDEXPR {$$.addr = newTemp(&tn);
								$$.code = (char*)malloc(sizeof(char)*100); 
								sprintf($$.code,"%s = %s %s %s\n",$$.addr,$1.addr,strdup("<"),$3.addr);
								fprintf(fp,"%s",$$.code);}
		| RELEXPR T_GT ADDEXPR {$$.addr = newTemp(&tn);
								$$.code = (char*)malloc(sizeof(char)*100); 
								sprintf($$.code,"%s = %s %s %s\n",$$.addr,$1.addr,strdup(">"),$3.addr);
								fprintf(fp,"%s",$$.code);}
		| RELEXPR T_LTEQ ADDEXPR {$$.addr = newTemp(&tn);
								$$.code = (char*)malloc(sizeof(char)*100); 
								sprintf($$.code,"%s = %s %s %s\n",$$.addr,$1.addr,strdup("<="),$3.addr);
								fprintf(fp,"%s",$$.code);}
		| RELEXPR T_GTEQ ADDEXPR {$$.addr = newTemp(&tn);
								$$.code = (char*)malloc(sizeof(char)*100); 
								sprintf($$.code,"%s = %s %s %s\n",$$.addr,$1.addr,strdup(">="),$3.addr);
								fprintf(fp,"%s",$$.code);}
		|ADDEXPR;

ADDEXPR:  ADDEXPR T_ADD MULTEXPR {$$.addr = newTemp(&tn);
									$$.code = (char*)malloc(sizeof(char)*100); 
									sprintf($$.code,"%s = %s %s %s\n",$$.addr,$1.addr,strdup("+"),$3.addr);
									fprintf(fp,"%s",$$.code);}
		| ADDEXPR T_SUB MULTEXPR {$$.addr = newTemp(&tn);
									$$.code = (char*)malloc(sizeof(char)*100); 
									sprintf($$.code,"%s = %s %s %s\n",$$.addr,$1.addr,strdup("-"),$3.addr);
									fprintf(fp,"%s",$$.code);}
		|MULTEXPR;

MULTEXPR: MULTEXPR T_MUL Expr {$$.addr = newTemp(&tn);
									$$.code = (char*)malloc(sizeof(char)*100); 
									sprintf($$.code,"%s = %s %s %s\n",$$.addr,$1.addr,strdup("*"),$3.addr);
									fprintf(fp,"%s",$$.code);}
		| MULTEXPR T_DIV Expr {$$.addr = newTemp(&tn);
									$$.code = (char*)malloc(sizeof(char)*100); 
									sprintf($$.code,"%s = %s %s %s\n",$$.addr,$1.addr,strdup("/"),$3.addr);
									fprintf(fp,"%s",$$.code);}
		| MULTEXPR T_MOD Expr {$$.addr = newTemp(&tn);
									$$.code = (char*)malloc(sizeof(char)*100); 
									sprintf($$.code,"%s = %s %s %s\n",$$.addr,$1.addr,strdup("%"),$3.addr);
									fprintf(fp,"%s",$$.code);}
		| Expr;


Expr:	'('LOGICALOREXPR')' 
		|T_NUM {$$.addr = strdup($1.v);}
		|T_ID {$$.addr = search(l,$1.v);};



%%
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

