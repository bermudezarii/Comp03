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
extern int tabs=0;



int scanner(FILE * nuevo)
{
    int ntoken, vtoken;
    ntoken = nextToken();
    while(ntoken) {
        if (endline==0){
            fputs("\n", nuevo);
            contadorBeamerP++; 
            endline=1;
        }

        else if (ntoken==IDENTIFIER && existeDefine(yytext)!=-1){
            fputs(defines[existeDefine(yytext)].vDefine, nuevo);
            
            ntoken = nextToken();
            if(ntoken!=SLASH){
                fputs(" ", nuevo);
            }

        }
        else{
            fputs(yytext, nuevo);
            ntoken = nextToken();
            if(ntoken!=SLASH){
                fputs(" ", nuevo);
            }
        }  
    }
    return 0;
}



