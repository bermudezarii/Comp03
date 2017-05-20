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



int scanner(void)
{
    int ntoken, vtoken;
    ntoken = nextToken();
    while(ntoken) {
    	printf("Texto %s\n",yytext);
    	printf("Tabs %d\n",tabs );
    	printf("Lineas %d\n",linea );
        ntoken = nextToken();
	   
    }
    return 0;
}



