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
extern char errores[5000][500]; 
extern int lineasE[500]; 
extern int contadorErrores;
extern int banderaParseado; 
FILE *archivotmp;
bool preproceso = false;
int banderaSyntaxError = 0; 
int nextToken(void){
    return yylex();
}

void yyerror(char *texto){
	/*if(strcmp(texto,"\"syntax error\""))*/
	if(banderaParseado == 1 ){
		char error[5000]; 
		sprintf(error, "/*%s:%d:%d %s*/\n",nombre,linea,columna,texto);
		strcpy(errores[contadorErrores], error);
		lineasE[contadorErrores] = linea; 
		
		printf("errores[contadorErrores]: %s\n", errores[contadorErrores]);
		printf("lineasE[contadorErrores]: %d\n", lineasE[contadorErrores]);
		contadorErrores++;
	}
		printf("\n");
		printf("\n");
  		printf("%s:%d:%d %s\n",nombre,linea,columna,texto,yytext);
  		printf("\n");
  		printf("\n");
	/*else if(preproceso){
		fputs(texto,archivotmp);
		fputs(" ", archivotmp);
	   
	}else{

        printf("\"%s\", en línea %i.\n",texto,yylineno);
	}*/
	banderaSyntaxError = 1; 
	yyparse();
       
 

}
