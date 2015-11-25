%{
	#include <stdio.h>
	#include <stdlib.h>
	#include "malloc.h"
	#include "code.h"
%}
//--------------------------------------------------define--------------------------------------------------
%union {
char *ident;
int number;
}

%token SYM_int SYM_bool SYM_array SYM_if SYM_else SYM_read SYM_write SYM_null SYM_true SYM_false SYM_while SYM_odd
%token LP RP LC RC SEMICOLON COMMA LOG_not LOG_and LOG_or LOG_xor
%token ASSIGN EQ NE GT GE LT LE ADD SUB MUL DIV MOD INCRE DECRE LF RF

%token <number> SYM_number
%token <ident>	SYM_ident

%nonassoc IFX 
%nonassoc SYM_else

//--------------------------------------------------rules--------------------------------------------------
%%
program:
	{lev--;} 
	block
	;

block:
	{ // px0 block
		strcpy(id,"pro");
		enter(VALUE_INT);
		lev++;
		dx=3;
		levelReg[lev].tx0=tx;
		table[tx].adr=cx;
		gen(jmp,0,1);
		if(lev>LEVMAX)
			error(32);
	}
	LC
	decls
	{ // pl0 declarelist
		code[table[levelReg[lev].tx0].adr].a=cx;
		table[levelReg[lev].tx0].adr=cx;
		table[levelReg[lev].tx0].size=dx;
		levelReg[lev].cx0=cx;
		gen(ini,0,dx);
	}
	stmts
	{
		gen(opr,0,0);
		printf("\n");
	}
	RC
	;

decls
	:
	| decls decl
	;

decl
	: SYM_int SYM_ident
	{
		strcpy(id,$2);
		enter(VALUE_INT);
	}SEMICOLON
	| SYM_bool SYM_ident
	{
		strcpy(id,$2);
		enter(VALUE_BOOL);
	}SEMICOLON
	| SYM_array SYM_ident{
		strcpy(id,$2);
	}LF SYM_number RF{
		num=$5;
		enter(VALUE_ARRAY);
	}SEMICOLON
	;

stmts
	:
	| stmts stmt
	;

stmt
	: SYM_ident 
	{
		int i;
		strcpy(id,$1);
		i=position(id);
		if(i==0){
			error(0);
		}else{
			if(table[i].kind!=VALUE_INT&&table[i].kind!=VALUE_BOOL){
				error(12);
				i=0;
				}
			}
			$<number>$=i;
	}
	ASSIGN expression
	{
		int i,inum;
		if($<number>2!=0){
			i=$<number>2;
			gen(sto,lev-table[i].level,table[i].adr);
		}
	}
	SEMICOLON  
	| SYM_if LP ifexpr RP stmt %prec IFX SEMICOLON
	{
		code[$<number>3].a=cx;
	}
	| SYM_if LP ifexpr RP stmt {
		$<number>$=cx;
		code[$<number>3].a=cx+1;
		gen(jmp,0,0);
	}
	SYM_else stmt
	{
		code[$<number>6].a=cx;
	} 
	SEMICOLON
	| SYM_while 
	{
		$<number>$=cx;
	}
	LP bexpr RP 
	{
		$<number>$=cx;
		gen(jpc,0,0);
	}
	stmt {
		gen(jmp,0,$<number>2);
		code[$<number>6].a=cx;
	}
	SEMICOLON // while (<bexper>) <stmt>;
	| SYM_write aexpr SEMICOLON
		{gen(opr,0,14);}
	| SYM_read SYM_ident SEMICOLON
	{
		int i;
		strcpy(id,$2);
		i=position(id);
		if(i==0){
			error(35);
		}
		else{
			gen(opr,0,16);
			gen(sto,lev-table[i].level,table[i].adr);
		}
	}
	| SYM_read SYM_ident
	{
		int i;
		strcpy(id,$2);
		i=position(id);
		if(i==0){
			error(35);
		}
		else{
			if(table[i].kind!=VALUE_ARRAY){
				error(12);
				i=0;
			}
		}
		$<number>$=i;
	} LF aterm RF SEMICOLON
	{
		int i;
		if($<number>3!=0){
			i = $<number>3;
			gen(opr,0,16);
			gen(ast,lev-table[i].level,table[i].adr);
		}
	}
	| block
	{
		tx = levelReg[lev].tx0 - 1;
		lev --;
		dx = levelReg[lev].dx0;
	}
	| SYM_ident	
	{
		int i;
		int fl = 0;
		strcpy(id,$1);
		i=position(id);
		if(i==0){
			error(35);
		}
		else{
			if(table[i].kind!=VALUE_INT){
				error(12);
				i=0;
			}
			else
				gen(lod,lev-table[i].level,table[i].adr);
		}
	} INCRE {gen(opr,0,23);}
	SEMICOLON
	| SYM_ident 
	{
		int i;
		int fl = 0;
		strcpy(id,$1);
		i=position(id);
		if(i==0){
			error(35);
		}
		else{
			if(table[i].kind!=VALUE_INT){
				error(12);
				i=0;
			}
			else
				gen(lod,lev-table[i].level,table[i].adr);
		}
	} DECRE {gen(opr,0,24);}
	SEMICOLON
	| SYM_ident
	{
		int i;
		strcpy(id,$1);
		i=position(id);
		if(i==0){
			error(35);
		}
		else{
			if(table[i].kind!=VALUE_ARRAY){
				error(12);
				i=0;
			}
		}
		$<number>$=i;
	}LF aexpr RF ASSIGN aexpr
	{
		int i;
		if($<number>2!=0){
			i = $<number>2;
			gen(ast,lev-table[i].level,table[i].adr);
		}
	}
	SEMICOLON
	;

expression
	:aexpr
	|bexpr

ifexpr
	: bexpr
	{
		$<number>$=cx;
		gen(jpc,0,0);
	}

aexpr
	: aterm ADD aterm
		{gen(opr,0,2);}
	| aterm SUB aterm
		{gen(opr,0,3);}
	| aterm
	;

aterm
	: afactor MUL afactor
		{gen(opr,0,4);}
	| afactor DIV afactor
		{gen(opr,0,5);}
	| afactor
	;

afactor
	: SYM_ident
	{
		int i;
		int fl = 0;
		strcpy(id,$1);
		i=position(id);
		if(i==0){
			error(35);
		}
		else{
			gen(lod,lev-table[i].level,table[i].adr);
		}
	}
	| SYM_number
	{
		int num;
		num=$1;
		if(num>AMAX){
			error(31);
			num=0;
		}
		gen(lit,0,num);
	}
	| LP aexpr RP
	| SYM_ident LF aexpr RF
	{
		int i;
		strcpy(id,$1);
		i=position(id);
		if(i==0){
			error(35);
		}
		else{
			if(table[i].kind != VALUE_ARRAY){
				error(12);
				i=0;
			}
			else{
				gen(ald,lev-table[i].level,table[i].adr);
			}
		}		
	}
	;
bexpr
	: bexpr LOG_or bterm
		{gen(opr,0,18);}
	| bexpr LOG_xor bterm
		{gen(opr,0,7);}
	| bterm
	;

bterm
	: bterm LOG_and bfactor
		{gen(opr,0,19);}
	| bfactor
	;

bfactor
	: SYM_ident
	{
		int i;
		strcpy(id,$1);
		i=position(id);
		if(i==0)
			error(35);
		else{
			gen(lod,lev-table[i].level,table[i].adr);
		}
	}
	| SYM_true
		{gen(opr,0,20);}
	| SYM_false
		{gen(opr,0,21);}
	| LOG_not bfactor
		{gen(opr,0,22);}
	| LP bexpr RP
	| rel
	;

rel
	: SYM_ident
	{
		int i;
		int fl = 0;
		strcpy(id,$1);
		i=position(id);
		if(i==0){
			error(35);
		}
		else{
			gen(lod,lev-table[i].level,table[i].adr);
		}
	} LT aexpr
		{gen(opr,0,10);}
	| SYM_ident
	{
		int i;
		int fl = 0;
		strcpy(id,$1);
		i=position(id);
		if(i==0){
			error(35);
		}
		else{
			gen(lod,lev-table[i].level,table[i].adr);
		}
	} LE aexpr
		{gen(opr,0,13);}
	| SYM_ident
	{
		int i;
		int fl = 0;
		strcpy(id,$1);
		i=position(id);
		if(i==0){
			error(35);
		}
		else{
			gen(lod,lev-table[i].level,table[i].adr);
		}
	} GT aexpr
		{gen(opr,0,12);}
	| SYM_ident
	{
		int i;
		int fl = 0;
		strcpy(id,$1);
		i=position(id);
		if(i==0){
			error(35);
		}
		else{
			gen(lod,lev-table[i].level,table[i].adr);
		}
	} GE aexpr
		{gen(opr,0,11);}
	| SYM_ident
	{
		int i;
		int fl = 0;
		strcpy(id,$1);
		i=position(id);
		if(i==0){
			error(35);
		}
		else{
			gen(lod,lev-table[i].level,table[i].adr);
		}
	} EQ aexpr
		{gen(opr,0,8);}
	| SYM_ident 
	{
		int i;
		int fl = 0;
		strcpy(id,$1);
		i=position(id);
		if(i==0){
			error(35);
		}
		else{
			gen(lod,lev-table[i].level,table[i].adr);
		}
	} NE aexpr
		{gen(opr,0,9);}
	| SYM_odd LP afactor RP {gen(opr,0,6);}
	| SYM_ident
	{
		int i;
		int fl = 0;
		strcpy(id,$1);
		i=position(id);
		if(i==0){
			error(35);
		}
		else{
			gen(lod,lev-table[i].level,table[i].adr);
		}
	} MOD aexpr
		{gen(opr,0,15);}
	;

%%
int yyerror(char const *str){
	extern char *yytext;
	fprintf(stderr, "parser error near %s\n", yytext);
	return 0;
}

int main()
{
	
	printf("Please input the filename:\n");
	scanf("%s",&fname);
	if((fin=fopen(fname,"r"))==NULL){
		printf("Cann't open file according to given filename\n");
		exit(0);
	}
	redirectInput(fin);
	listswitch=true;
	err=0;

	yyparse();

	if(err==0){
		listcode();
		interpret();
		//stack();
	}
	else{
		printf("%d errors in cx program\n",err);
	}
	//fclose(fin);
	//getchar();
	return 0;
}