%{
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct double_list{
  struct double_list * next;
  char name[30];
  int type;
  int scope;
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
int fillchar(char* name,char* value,int type);
int lookupsymb(char *id);
void display();
int update(char* id,int value);

%}
%union
{
	int number;
	char *string;
}
%token	T_MAIN
%token <string>	T_ID
%token <string>	T_ID1 
%token <number>	T_NUM
%token	T_PUBLIC T_STATIC T_VOID T_CLASS
%token	T_IF T_ELSE T_FOR
%token	T_BOOL T_CHAR T_SHORT T_LONG T_INT T_FLOAT T_DOUBLE T_STR T_STRING T_STRS
%token	T_NEW
%token	T_LOGOR T_LOGAND T_NOT
%token	T_BITOR T_BITAND T_BITXOR
%token	T_ASSGN
%token	T_LT T_GT T_LTEQ T_GTEQ T_EQ T_NEQ
%token	T_MULASSGN	T_DIVASSGN	T_MODASSGN	T_ADDASSGN	
%token	T_SUBASSGN	T_LSHASSGN 	T_RSHASSGN	T_ANDASSGN	T_XORASSGN	T_ORASSGN
%token	T_LSHFT T_RSHFT
%token	T_ADD T_SUB	T_MUL T_DIV T_MOD T_UADD T_USUB
%token T_OB T_CB
%type<number> UNREXPR INDEX NUMBERS
%type<number> ADDEXPR MULTEXPR RELEXPR LOGICALANDEXPR LOGICALOREXPR EQUALITYEXPR
%type<number> ASSGN ASSGNEXPR
%%
START:	T_PUBLIC T_CLASS T_ID T_OB
        T_PUBLIC T_STATIC T_VOID T_MAIN'('T_STRING'['']' T_ID')' T_OB
        START2
        T_CB T_CB	{display();printf("accepted\n");};

START2:	DECLR';'START2
		|ASSGN1';'START2
		|FOR T_OB START2 T_CB START2
		|T_IF'('LOGICALOREXPR')' T_OB START2 T_CB ELSE
		|;

FOR:	T_FOR'('';'';'')'
		|T_FOR'('INIT';'';'')'
		|T_FOR'('INIT';'LOGICALOREXPR';'')'
		|T_FOR'('INIT';'';'ADDEXPR')'
		|T_FOR'('';'LOGICALOREXPR';'')'
		|T_FOR'('';'LOGICALOREXPR';'ADDEXPR')'
		|T_FOR'('INIT';'LOGICALOREXPR';'ADDEXPR')'
		|T_FOR'('';'';'ADDEXPR')';

ELSE:	T_ELSE T_OB START2 T_CB START2
		|START2;

BRACKETS:	'['INDEX']' BRACKETS 
		| '['']' BRACKETS 
		|'['']'		
		|'['INDEX']';

INDEX:	T_ID {$$=lookupsymb($1);}
		| T_NUM { $$=$1;};

ARRAY:	T_ID BRACKETS;

DECLR:	TYPE LIST;

TYPE:	T_BOOL 
		| T_CHAR 
		| T_SHORT
		| T_INT
		| T_FLOAT 
		| T_LONG
		| T_DOUBLE 
		| T_STR;

LIST:	LIST',' X 
		| X 
		| ARRAY ARRASSGN;
		

ARRASSGN: T_ASSGN T_OB ELE T_CB 
		| T_NEW TYPE BRACKETS T_OB ELE T_CB
		|;

ELE:	 STR 
		| NUMBERS;

STR:	STR',' T_STRING
		| T_STRING;

NUMBERS: NUMBERS',' T_NUM { $$=$3;}
		| T_NUM { $$=$1;};

X: 		T_ID 	{/*if(type==0)*/
					fill($1,0,type);/*
				else
					fillchar($1,'\0',type);*/}
		| ASSGN;

ASSGN:  T_ID T_ASSGN ASSGNEXPR	{/*if(type==0)*/
									fill($1,$3,type);/*
								else
									fillchar($1,'\0',type);*/}

ASSGN1:  T_ID T_ASSGN ASSGNEXPR	{update($1,$3);};

INIT:   ASSGN1
		| DECLR;

ASSGNEXPR: UNREXPR ASSGNOPR LOGICALOREXPR
		|LOGICALOREXPR;

ASSGNOPR: T_ASSGN 
		| T_MULASSGN 
		| T_DIVASSGN
		| T_MODASSGN
		| T_ADDASSGN
		| T_SUBASSGN
		| T_LSHASSGN 
		| T_RSHASSGN
		| T_ANDASSGN
		| T_XORASSGN
		| T_ORASSGN;

LOGICALOREXPR:LOGICALOREXPR T_LOGOR LOGICALANDEXPR {$$=$1 || $3;}
		|LOGICALANDEXPR;

LOGICALANDEXPR: LOGICALANDEXPR T_LOGAND EQUALITYEXPR {$$=$1 && $3;}
		|EQUALITYEXPR;

EQUALITYEXPR: EQUALITYEXPR T_EQ RELEXPR {$$=$1==$3;}
		| EQUALITYEXPR T_NEQ RELEXPR {$$=$1!=$3;}
		|RELEXPR;

RELEXPR:  RELEXPR T_LT ADDEXPR {$$=$1<$3;} 
		| RELEXPR T_GT ADDEXPR {$$=$1>$3;}
		| RELEXPR T_LTEQ ADDEXPR {$$=$1<=$3;}
		| RELEXPR T_GTEQ ADDEXPR {$$=$1>=$3;}
		|ADDEXPR;

ADDEXPR:  ADDEXPR T_ADD MULTEXPR {$$=$1+$3;}
		| ADDEXPR T_SUB MULTEXPR {$$=$1-$3;}
		|MULTEXPR;

MULTEXPR: MULTEXPR T_MUL UNREXPR {$$=$1*$3;}
		| MULTEXPR T_DIV UNREXPR {$$=$1/$3;}
		| MULTEXPR T_MOD UNREXPR {$$=$1%$3;}
		| UNREXPR;

UNREXPR: T_UADD UNREXPR 
		| T_USUB UNREXPR
		| T_NOT UNREXPR
		| T_ID {$$=lookupsymb($1);}
		| T_NUM {type=0;$$=$1;}
		| T_STRS {type=1;}
		| ARRAY;

%%
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
  newnode->value.val=value;
  newnode->next=head;
  head=newnode;

}
/*
int fillchar(char* name,char* value,int type){
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
  		  	printf("|%s\t| var-name\t|\t%s\t|value\t|\t%d\t|scope|%d\n",val,node->name,node->value.val,node->scope);
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
