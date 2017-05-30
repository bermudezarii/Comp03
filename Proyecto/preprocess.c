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
char *replace_str(char *, char* , char*);


int preprocesador1(FILE* archivoActual,FILE* archivoTemporal){	
    printf("Entro a preprocesador1\n");
    char *concatenar;
    int ntoken, vtoken;
    ntoken = nextToken();
    char * tmp;
   
    while(ntoken) {
        
     
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
            
            if(defines[existeDefine(yytext)].macro==true){
                
                int nump=0;
                int param=defines[existeDefine(yytext)].numparam+2;
                int posicion=existeDefine(yytext);
                char *reemplazando[500]; 
                char *reemplazador[500]; 
                char *salida[500];
                memset(reemplazando,0,strlen(reemplazando));
                memset(reemplazador,0,strlen(reemplazador));
                memset(salida,0,strlen(salida));
                tmp=(char*)malloc(strlen(defines[posicion].vDefine));
                strcpy(tmp,defines[posicion].vDefine);
                while(ntoken!=RIGHT_PARENTHESIS){
                   printf("Es este ciclo\n");
                    ntoken=nextToken();
                    if(ntoken!=RIGHT_PARENTHESIS&&ntoken!=LEFT_PARENTHESIS&&ntoken!=COMMA){
                        printf("if 1\n");
                        strcat(reemplazador, yytext);
                 
                        strcat(reemplazador, " ");
                       
                    }
                  
                    if(ntoken== COMMA ){
                       printf("if 2\n");
                        
                        

                        strcpy(reemplazando,defines[posicion].parametros[nump]);
                         printf("No es aqui 0\n");
                        if(strlen(reemplazando)!=0){
                            printf("if 3 %s\n",replace_str(tmp, reemplazador,reemplazando));
                            if(replace_str(tmp, reemplazador,reemplazando)!= NULL){
                                strcpy(tmp,replace_str(tmp, reemplazador,reemplazando));
                                printf("No es aqui 1\n");
                                char* tmp2;
                                tmp2=(char*)malloc(strlen(replace_str(tmp, reemplazando,reemplazador)));
                                 printf("No es aqui 2\n");
                                strcpy(tmp2,replace_str(tmp, reemplazando,reemplazador));
                                 printf("No es aqui 3\n");
                                memset(tmp,0,strlen(tmp));
                                 printf("No es aqui 4\n");
                                tmp=(char*)malloc(strlen(tmp2));
                                 printf("No es aqui 5\n");
                                strcpy(tmp,tmp2);
                                 printf("No es aqui 6\n");
                                memset(reemplazador,0,strlen(reemplazador)); 
                                printf("No es aqui 7\n");
                                memset(reemplazando,0,strlen(reemplazando));
                                printf("No es aqui 8\n");
                                memset(tmp2,0,strlen(tmp2));
                                printf("No es aqui 9\n");
                                
                            }
                            nump++;
                        }
                    }
                }
             
                strcpy(reemplazando,defines[posicion].parametros[nump]);
                if(strlen(reemplazando)!=0){
                   printf("if 4\n");
                    char* tmp2;
                    if(replace_str(tmp, reemplazando,reemplazador)!= NULL){
                        tmp2=(char*)malloc(strlen(replace_str(tmp, reemplazando,reemplazador)));
           
                        strcpy(tmp2,replace_str(tmp, reemplazando,reemplazador));
                        memset(tmp,0,strlen(tmp));
                       
                        tmp=(char*)malloc(strlen(tmp2));
                       
                        strcpy(tmp,tmp2);
                         memset(tmp2,0,strlen(tmp2));
                 }

                }
                
                fputs(tmp, archivoTemporal);
             

            }else {
                printf("else 1\n");
        		fputs(defines[existeDefine(yytext)].vDefine, archivoTemporal);
    		}
            ntoken = nextToken();

            if(ntoken!=SLASH){
                printf("if 5\n");
                fputs(" ", archivoTemporal);
            }

    	}
    	else if(ntoken==SLASH){
             printf("else 2\n");
            ntoken = nextToken();
        }
        else{
             printf("else 3\n");
            fputs(yytext, archivoTemporal);
            ntoken = nextToken();
            if(ntoken!=SLASH){
                fputs(" ", archivoTemporal);
            }
        }
    }
    printf("Sali del ciclo\n");
    return 1;
}


char *replace_str(char *sentence, char *find, char *replace)
{   
    char *dest[5000];
    char *destptr[5000];
    strcpy(destptr,dest);
    memset(dest,0,strlen(dest));
    int s=0;
    int d=0;
    printf("Si es aqui\n");
    while (s<5000)
    {
        printf("Es este ciclo2\n");
        if (!strncmp (sentence, find, strlen(find)))
        {
            strcat (destptr, replace);
            sentence[s+strlen(find)];
            s=s+strlen(find);
            destptr[d+strlen(replace)];
            d+=strlen(replace);
        } else
        {
            memset(destptr,0,strlen(destptr));
            strcpy(destptr,sentence);
            d++;
            s++;
        }
    }

    memset(destptr,0,strlen(destptr));
    printf("Sale\n");
    return dest;
    
}