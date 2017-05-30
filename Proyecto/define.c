#include <stdio.h>
#include <stdbool.h>
#include "parser.tab.h"
#include <string.h>
#include <stdlib.h>
#include <math.h>


extern char* yytext;
extern int linea;


struct defineS defines[100] = {};  //Tabla con las cadenas que representarán a los includes que se encuentren en el programa
int numDefines = 0;       //Contador de los defines que se tendrán en el array de structs defines

char* constantfolding(char* num, char* operator, char* num2){
	int n =atoi(num);
    int n2 =atoi(num2);
    int result;
	if(strcmp(operator,"+")==0){
		result=n+n2;

	}
	else if(strcmp(operator,"-")==0){
		result=n-n2;

	}
	else if(strcmp(operator,"/")==0){
		result=n/n2;
	}
	else if(strcmp(operator,"*")==0){
		result=n*n2;

	}
	char *rfinal = (char*) malloc(sizeof(result));
    rfinal[0] = '\0';   
	sprintf(rfinal,"%d",result);
	return rfinal;

}

int existeDefine(char *define) {
    for(int m = 0; m<numDefines; m++)
    {
        /*
            Si encontramos que el valor coincide con la tabla de defines, se retorna verdadero
            Función strcmp: se comparan los dos parámetros que recibe
        */
  
  
        if(strcmp(defines[m].palabra, define) == 0)
        {	
            return m;
        
        }

    }
    return -1;

}


int define(int ntoken){

	char* identifiers[50000];
	char* parametro[50000];
	memset(identifiers,0,sizeof(identifiers));
	memset(parametro,0,sizeof(parametro));
	ntoken=nextToken();
	int position=0;
	char *variable="";
	int lineaactual=linea; 
	defines[numDefines].numparam=0;	
	defines[numDefines].macro = false;
	while(lineaactual==linea){

		if(ntoken==SLASH){

		   ntoken=nextToken();
		
		   if(strcmp(yytext,"\n")==0){
		    	ntoken=nextToken();
		   		}

		   lineaactual=linea;
		   strcat(identifiers,yytext);

		}
		else if(strcmp(variable,"")==0 && ntoken==IDENTIFIER &&  ntoken!=SLASH){
		
			variable=(char*)malloc(strlen(yytext));
			strcpy(variable,yytext);
			ntoken=nextToken();
			if(ntoken==LEFT_PARENTHESIS){
				ntoken=nextToken();
				if(ntoken==IDENTIFIER){
					while(ntoken!=RIGHT_PARENTHESIS && lineaactual==linea){
						
						
						if(ntoken!=	COMMA){
							
							strcat(parametro,yytext);
							strcat(parametro, " ");
							

						}else{
				
							strcpy(defines[numDefines].parametros[(defines[numDefines].numparam)],parametro);
							memset(parametro,0,sizeof(parametro));

							 (defines[numDefines].numparam)++;
						}
						ntoken=nextToken();
						if(ntoken==RIGHT_PARENTHESIS){
							strcpy(defines[numDefines].parametros[(defines[numDefines].numparam)],parametro);
						}

					}
				
				    
					if (ntoken==RIGHT_PARENTHESIS){
						defines[numDefines].macro = true;
					}
			}
				ntoken=nextToken();

				strcat(identifiers, yytext);
			}else{
				defines[numDefines].macro = false;
			    strcat(identifiers, yytext);
			}

			

		}
		else if(ntoken==INTEGER && strcmp(variable,"")!= 0 &&  ntoken!=SLASH ){

			char *value= (char*) malloc(strlen(yytext));
			strcpy(value,yytext);
			ntoken=nextToken();
			if ((ntoken==PLUS ||ntoken==MINUS||ntoken==DIV||ntoken==MUL) &&  ntoken!=SLASH){

				char* operator=(char*)malloc(strlen(yytext));
                strcpy(operator,yytext);
				
				ntoken=nextToken();
				if(ntoken==INTEGER &&  ntoken!=SLASH){;
		
					char* tmpnum=constantfolding(value,operator,yytext);
					strcat(identifiers, tmpnum);
					
				


				}else{
					
                    strcat(identifiers, value);
                    strcat(identifiers, " ");
                    strcat(identifiers, operator);
		  			strcat(identifiers, yytext);
		  
		  			position++;
			


				}
			}else{
			
				strcat(identifiers, value);
				if(linea==lineaactual &&  ntoken!=SLASH){
					strcat(identifiers, yytext);
			
		  			
		  		}
		  		position++;



			}
		}
		else if(strcmp(variable,"")!=0 && existeDefine(yytext)!=-1 &&  ntoken!=SLASH){

			char* tmp[50000];
			strcpy(tmp,defines[existeDefine(yytext)].vDefine);
			strcat(identifiers,tmp);
			
		

		}		
		else if(strcmp(variable,"")!=0 &&  ntoken!=SLASH){

		  strcat(identifiers, yytext);
		  position++;
    	 
		}
		if(lineaactual==linea){
		
		   ntoken=nextToken();
		   if(ntoken!= SLASH){
		   	 strcat(identifiers, " ");
		   }
		}

    }
    
    defines[numDefines].palabra = (char*)malloc(strlen(variable));
    defines[numDefines].vDefine = (char*)malloc(strlen(identifiers));

    strcpy(defines[numDefines].palabra ,variable);
    strcpy(defines[numDefines].vDefine,identifiers);
    
    numDefines++;

	return ntoken;

}


