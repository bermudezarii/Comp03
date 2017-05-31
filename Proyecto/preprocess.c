#include <stdio.h>
#include <stdbool.h>
#include "parser.tab.h"
#include "include.c"
#include "define.c"
#include <string.h>
#include <stdlib.h>
#include <math.h>
 
extern void startListing(FILE * archivoPretty, char * titulo);
extern void endListing(FILE * archivoPretty); 
extern FILE * beamer; 

extern FILE * yyin;
extern int yylex();
extern int yylineno;
extern int yyleng;
extern char* yytext;
extern int endline=1; 

//banderas para el beamer 
int contadorBeamerP = 0; 


void preprocesador1(FILE* archivoActual,FILE* archivoTemporal){	
    
    char *concatenar;
    int ntoken, vtoken;
    ntoken = nextToken();

   
    while(ntoken && includenoexiste==false) {
        
     
        if (endline==0){
            fputs("\n", archivoTemporal);
            contadorBeamerP++; 
            endline=1;
        }
    	if(ntoken==INCLUDE){
           
    		include(archivoActual,archivoTemporal,ntoken);

            if(includenoexiste==true){
                break;
            }else{
                ntoken = nextToken();
            }
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


}


