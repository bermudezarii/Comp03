#include <stdio.h>
#include <stdbool.h>
#include "parser.tab.h"
#include "include.c"
#include "define.c"
#include <string.h>
#include <stdlib.h>
#include <math.h>

extern FILE * yyin;
extern int yylex();
extern int yylineno;
extern int yyleng;
extern char* yytext;
extern int endline=1; 



int preprocesador1(FILE* archivoActual,FILE* archivoTemporal){	
    
    char *concatenar;
    int ntoken, vtoken;
    ntoken = nextToken();

   
    while(ntoken) {
   
        if (endline==0){
            fputs("\n", archivoTemporal);
            endline=1;
        }
    	if(ntoken==INCLUDE){
           
    		include(archivoActual,archivoTemporal,ntoken);
            ntoken = nextToken();
     	}
    	else if (ntoken==DEFINE){
    		ntoken=define(ntoken);
    	

    	}
    	else if (ntoken==IDENTIFIER && existeDefine(yytext)!=-1){
    		fputs(defines[existeDefine(yytext)].vDefine, archivoTemporal);
    		
            ntoken = nextToken();
            if(ntoken!=SLASH){
                fputs(" ", archivoTemporal);
            }

    	}
    	else if(ntoken==SLASH){
            ntoken = nextToken();
        }
        else{
            
            fputs(yytext, archivoTemporal);
            ntoken = nextToken();
            if(ntoken!=SLASH){
                fputs(" ", archivoTemporal);
            }
        }
    	
        
   
	   
    }
    return 0;
}