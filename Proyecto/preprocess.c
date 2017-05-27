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


int preprocesador1(FILE* archivoActual,FILE* archivoTemporal){	
    
    char *concatenar;
    int ntoken, vtoken;
    ntoken = nextToken();

   
    while(ntoken) {
        
        //printf("HOLAA");
        //printf("\n");
        
        //printf(yytext);
        //printf("\n");
        if (endline==0){
            fputs("\n", archivoTemporal);
            contadorBeamerP++; 
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



int preprocesador1Beamer(FILE* archivoActual,FILE* archivoTemporal){  
    
    char *concatenar;
    int ntoken, vtoken;
    ntoken = nextToken();

   
    while(ntoken) {
        if (contadorBeamerP >= 13){
            endListing(beamer); 
            startListing(beamer, "C\\'odigo Preprocesado (Sin Pretty Print)"); 
            contadorBeamerP = 0; 
        }
   
        if (endline==0){
            fputs("\n", archivoTemporal);
            fputs("\n", beamer); 
            contadorBeamerP++; 
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
            fputs(defines[existeDefine(yytext)].vDefine, beamer);
            
            ntoken = nextToken();
            if(ntoken!=SLASH){
                fputs(" ", archivoTemporal);
                fputs(" ", beamer);
            }

        }
        else if(ntoken==SLASH){
            ntoken = nextToken();
        }
        else{
            
            fputs(yytext, archivoTemporal);
            fputs(yytext, beamer);
            ntoken = nextToken();
            if(ntoken!=SLASH){
                fputs(" ", archivoTemporal);
                fputs(" ", beamer);
            }
        }
        
        
   
       
    }
    return 0;
}