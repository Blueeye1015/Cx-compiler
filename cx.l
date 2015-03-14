%{
	#include <stdio.h>
	#include "string.h"
	#include "malloc.h"
	#include "cx.tab.h"
	int line=0;
	void yyerror(char *);
	int yywrap(void);
%}
%x 								 COMMENT
%%
"/*"							 {BEGIN COMMENT;}
<COMMENT>. 						 |
<COMMENT>\n 					 ;
<COMMENT>"*/" 					 {BEGIN INITIAL;}
<INITIAL>"int"					 {return SYM_int;}
<INITIAL>"bool"					 {return SYM_bool;}
<INITIAL>"array"				 {return SYM_array;}
<INITIAL>"if"           		 {return SYM_if;}
<INITIAL>"else"         		 {return SYM_else;}
<INITIAL>"read"					 {return SYM_read;}
<INITIAL>"while"				 {return SYM_while;}
<INITIAL>"write"				 {return SYM_write;}
<INITIAL>"null"         		 {return SYM_null;}
<INITIAL>"true"         		 {return SYM_true;}
<INITIAL>"false"        		 {return SYM_false;}
<INITIAL>"odd"					 {return SYM_odd;}
<INITIAL>"("            		 {return LP;}
<INITIAL>")"            		 {return RP;}
<INITIAL>"{"            		 {return LC;}
<INITIAL>"}"            		 {return RC;}
<INITIAL>"["					 {return LF;}
<INITIAL>"]"					 {return RF;}
<INITIAL>";"            		 {return SEMICOLON;}
<INITIAL>","            		 {return COMMA;}
<INITIAL>"!"					 {return LOG_not;}
<INITIAL>"&&"           		 {return LOG_and;}
<INITIAL>"||"           		 {return LOG_or;}
<INITIAL>"^"					 {return LOG_xor;}
<INITIAL>"="            		 {return ASSIGN;}
<INITIAL>"=="           		 {return EQ;}
<INITIAL>"!="           		 {return NE;}
<INITIAL>">"            		 {return GT;}
<INITIAL>">="           		 {return GE;}
<INITIAL>"<"            		 {return LT;}
<INITIAL>"<="           		 {return LE;}
<INITIAL>"++"					 {return INCRE;}
<INITIAL>"--"					 {return DECRE;}
<INITIAL>"+"            		 {return ADD;}
<INITIAL>"-"            		 {return SUB;}
<INITIAL>"*"            		 {return MUL;}
<INITIAL>"/"            		 {return DIV;}
<INITIAL>"%"					 {return MOD;}
<INITIAL>([0-9]|[1-9][0-9]+)	 		 {
	yylval.number=atoi(yytext);
	return SYM_number;
}	
<INITIAL>([0-9]*[a-zA-Z]*[0-9]*) {
	yylval.ident=(char *)malloc(strlen(yytext)+1);
	strcpy(yylval.ident,yytext);
	return SYM_ident;
}	
[ \t] 							 {;}
. {
	yyerror("unknown character");
}
%%

void redirectInput(FILE *input){
	yyin=input;
}

int yygetchar(void){
	int ret;
	ret=getc(yyin);
	printf("%c",ret);
	return ret;
}

int yywrap(void)
{
return 1;
}