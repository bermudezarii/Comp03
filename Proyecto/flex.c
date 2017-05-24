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
extern int columna; 
extern char * nombre; 

extern char* gramaticas[50000];
FILE *archivotmp;
bool preproceso = false;
int banderaSyntaxError = 0; 
int nextToken(void){
    return yylex();
}
// formato:  blibli.c:7:42 Unexpected token, expected ';', found 'blibli'
void yyerror(char *texto){
	if(strcmp(texto,"\"syntax error\""))
  		printf("%s:%d:%d %s, found \"%s\"\n",nombre,linea,columna,texto,yytext,gramaticas);
	else if(preproceso){
		fputs(texto,archivotmp);
		fputs(" ", archivotmp);
	   
	}else{

        printf("\"%s\", en línea %i.\n",texto,yylineno);
	}
	banderaSyntaxError = 1; 
	yyparse();
       
 

}
