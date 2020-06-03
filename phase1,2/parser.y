%{
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

%}
%union
{
	int number;
	char *string;
}
%token	T_MAIN
%token <string>	T_ID
%token <number>	T_NUM
%token	T_PUBLIC T_STATIC T_VOID T_CLASS T_PRIVATE
%token	T_IF T_ELSE T_FOR
%token	T_CHAR T_INT T_FLOAT T_DOUBLE T_STRING T_STRS
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
%type<number> UNREXPR INDEX
%type<number> ADDEXPR MULTEXPR RELEXPR LOGICALANDEXPR LOGICALOREXPR EQUALITYEXPR
%type<number> ASSGN EXPR 
%%
START:	MODIFIER T_CLASS T_ID T_OB
        MODIFIER TYPE T_MAIN'('T_STRING'['']' T_ID')' T_OB
        S
        T_CB T_CB	{display();printf("accepted\n");};

MODIFIER:W1 W2;

W1:		T_PUBLIC
   		|T_PRIVATE;

W2:		T_STATIC
		|;

S:		DECLR';'S
		|ASSGN1';'S
		|IF ELSE S
		|FOR T_OB S T_CB S
		|UNREXPR
		|;

UNREXPR: T_UADD EXPR {$$=$2;}
		| T_USUB EXPR	{$$=$2;}
		|EXPR T_UADD
		|EXPR T_USUB
		|LOGICALOREXPR;

FOR:	T_FOR'('';'';'')'
		|T_FOR'('INIT';'';'')'
		|T_FOR'('INIT';'LOGICALOREXPR';'')'
		|T_FOR'('INIT';'';'ADDEXPR')'
		|T_FOR'('';'LOGICALOREXPR';'')'
		|T_FOR'('';'LOGICALOREXPR';'UNREXPR')'
		|T_FOR'('INIT';'LOGICALOREXPR';'UNREXPR')'
		|T_FOR'('';'';'ADDEXPR')';

IF:T_IF'('LOGICALOREXPR')' T_OB S T_CB;

ELSE:	T_ELSE T_OB S T_CB
		|;

DECLR:	VARIABLE
		|ARRAY;
//DECLR:	TYPE LIST;

VARIABLE:	TYPE T_ID T_ASSGN LOGICALOREXPR X	{fill($2,$4,type);}
			|TYPE T_ID X	{fill($2,0,type);};

ARRAY:	TYPE BRACKETS T_ID
		|TYPE T_ID BRACKETS;

TYPE:	T_INT		{type=0;}
		| T_DOUBLE	{type=1;}
		| T_CHAR 	{type=2;}
		| T_STRING	{type=3;}
		| T_VOID	{type=4;};

X: ',' ASSGN X
	|',' T_ID	{fill($2,0,type);}
	|;

/*LIST:	LIST',' X 
		| X 
		| ARRAY ARRASSGN;

X: 		T_ID 	{//if(type==0)
					fill($1,0,type);
				 //else
				 //	fillchar($1,"",type);
				}
		| ASSGN;

ARRAY:	T_ID BRACKETS;*/

BRACKETS:WI	
		|WOI;

WI:		'['INDEX']' WI
		|'['INDEX']' ;

WOI:	'['']' WOI 
		|'['']'	;

INDEX:	T_ID {$$=lookupsymb($1);}
		| T_NUM { $$=$1;};
		
/*ARRASSGN: T_ASSGN T_OB ELE T_CB 
		| T_NEW TYPE BRACKETS T_OB ELE T_CB
		|;

ELE:	 STR 
		| NUMBERS;

STR:	STR',' T_STRS
		| T_STRS;

NUMBERS: NUMBERS',' T_NUM { $$=$3;}
		| T_NUM { $$=$1;};
*/

ASSGN:  T_ID ASSGNOPR LOGICALOREXPR	{//if(type==0)
										fill($1,$3,type);
									 //else
										/*fillchar($1,(char)$3,type);*/};

ASSGN1:	VARIABLEA
		|ARRAYA;

VARIABLEA:T_ID ASSGNOPR LOGICALOREXPR	{update($1,$3);};

ARRAYA:;

INIT:   VARIABLE
		| VARIABLEA;

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

MULTEXPR: MULTEXPR T_MUL EXPR {$$=$1*$3;}
		| MULTEXPR T_DIV EXPR {$$=$1/$3;}
		| MULTEXPR T_MOD EXPR {$$=$1%$3;}
		| EXPR;

EXPR:	T_ID {$$=lookupsymb($1);}
		| T_NUM {type=0;$$=$1;}
		//| T_STRS {type=1;}
		|'('LOGICALOREXPR')'{$$=$2;};

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
