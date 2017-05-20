#include <stdio.h>
#include <stdbool.h>
#include "parser.tab.h"

#include <string.h>
#include <stdlib.h>
#include <math.h>

extern FILE * yyin;
extern int yylex();
extern int yylineno;
extern int yyleng;
extern char* yytext;
extern int linea;
extern char* gramaticas[50000];
FILE *archivotmp;
bool preproceso = false;
int banderaSyntaxError = 0; 
int nextToken(void){
    return yylex();
}

void yyerror(char *texto){
	if(strcmp(texto,"\"syntax error\""))
  		printf(" Error de sintaxis en Línea : %d con \"%s\" en %s.\n",linea,yytext,gramaticas);
	else if(preproceso){
		fputs(texto,archivotmp);
		fputs(" ", archivotmp);
	   
	}else{

        printf("\"%s\", en línea %i.\n",texto,yylineno);
	}
	banderaSyntaxError = 1; 
	yyparse();
       
 

}
