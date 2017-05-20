#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include "estructuras.h"
#include "flex.c"
#include "preprocess.c"
#include "myscanner.c" 
#include "prettyprint2.c"
#include "latex.c" 

extern int  yyparse();
extern FILE* archivotmp;
extern int linea;
extern banderaSyntaxError; 

int main(int argc, char *argv[])
{    /*
        Se valida que se hayan digitado los archivos de entrada en la terminal
    */
	
    if(argc == 1){
        printf("\n                                          **INSTRUCCIONES**\n\n");
        printf("Para el funcionamiento del programa, este va a funcionar con 3 parámetros en donde el tercero es opcional.\n");
        printf("    *En donde el primero será la dirección del programa.\n");
        printf("    *En el segundo el tipo de prettyprint que desea. Del 0-2 se escoge el tipo siendo:\n");
        printf("           *0: GNU style\n");
        printf("           *1: BSD style\n");
        printf("           *2: Allman style\n");
        printf("        Tome en cuenta que por default esta el GNU style en caso de ingresar cualquier otro número.\n");
        printf("    *En el tercero si desea realizar el Pretty Print en el archivo de origen o en uno nuevo llamado tmppretty y que por default esta en el archivo de origen.\n\n");
        printf("    *En el cuarto si desea realizar el prepoceso o no, con una \"S\". Tome en cuenta que este es opcional y que por default esta inactivo.\n\n");


    }

    /*
        En este caso, se llama a las funcionalidades del preprocesador
    */
    else{
        FILE *archivoEntrada;
        FILE *archivoEntradaTem;
        FILE *tmpfile = fopen("tmpfile.c", "w");
        archivoEntrada  = fopen(argv[1], "r");
        archivotmp=tmpfile;
        /*
            Se le indica a flex cuál es el archivo actual que se está leyendo
    1 es el archivo q lee, 2 el tipo de pretty print, 3 es si quiere en el mismo archivo o no, 4 es si quiere el preprocess

        */
        yyin = archivoEntrada; 
		if(archivoEntrada && argc>=5){
            if(argc>=4 && strcmp(argv[4],"S")==0){
                preproceso=true;
                memset(gramaticas,0,sizeof(gramaticas));
                preprocesador1(archivoEntrada,tmpfile);
                fclose(tmpfile);
                preproceso=false;
                tmpfile = fopen("tmpfile.c", "r"); //Se llama a la función del preprocesador con el archivo de entrada
                yyin = tmpfile; 
            }
            
            
            linea=1;
            memset(gramaticas,0,sizeof(gramaticas));
                
            yyparse();
            
            if(banderaSyntaxError == 0){
                
                fclose(archivoEntrada);     
                archivoEntrada  = fopen(argv[1], "r+");
                archivoEntradaTem  = fopen(argv[1], "r+");
                tmpfile = fopen("tmpfile.c", "r"); //Se llama a la función del preprocesador con el archivo de entrada
                if(argc>=5){
                    if(strcmp(argv[4],"S")==0) yyin = tmpfile;
                    else yyin = archivoEntradaTem;
                }

                FILE *tmpPretty = fopen("tmpPretty.c", "w");
                memset(gramaticas,0,sizeof(gramaticas));
                
                if(strcmp(argv[3],"1")==0) 
                    stepsBeamerPretty(atoi(argv[2]), tmpPretty,"tmpPretty");
                else 
                    stepsBeamerPretty(atoi(argv[2]), archivoEntrada, argv[1]);
                
                
                //prettyprintSelect(atoi(argv[2]), tmpPretty);
                
            }
            
            //printf("este es gramaticas:\n%s", gramaticas);

            fclose(tmpfile);
            fclose(archivoEntrada);
            //fclose(tmpPretty); 
            remove("tmpfile.c");    
	    }else{
	    	printf("El archivo ingresado no existe, verifique que esté bien escrito o bien no ingreso todos los parámetros.\n\n");
            printf("                **Para más información presione escriba ./parser y da ENTER.**\n");
	    }


      
		
     }
     
    return 0; 
}

