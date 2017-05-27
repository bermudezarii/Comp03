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

char * nombre; 
FILE * beamer; 
char errores[5000][500]; 
int lineasE[500]; 
int contadorErrores;
int banderaParseado; 


int main(int argc, char *argv[])
{    /*
        Se valida que se hayan digitado los archivos de entrada en la terminal
    */
	
    if(argc == 1){
        printf("\n                                          **INSTRUCCIONES**\n\n");
        printf("Para el funcionamiento del programa, este va a funcionar con 2 parámetros en donde el segundo es opcional.\n");
        printf("    *En donde el primero será la dirección del programa.\n");
        printf("    *En el segundo, si ingresa P significa que se hará una presentación Beamer con el código con pretty print GNU .\n\n");
        printf("                    si ingresa B significa que desea una presentación Beamer sin el pretty print .\n\n");
        printf("                    si ingresa algo diferente de esto, o no ingresa nada, no se hará la presentación Beamer .\n\n");
        

    }

    /*
        En este caso, se llama a las funcionalidades del preprocesador
    */
    else{
        FILE *archivoEntrada;
        FILE *archivoEntradaTem;
        FILE *tmpfile = fopen("tmpfile.c", "w");
        FILE * tmpfile2 = fopen("tmpfile2.c", "w"); // es el que use para la bandera de syntaxerror
        nombre = argv[1];
        archivoEntrada  = fopen(argv[1], "r");
        archivotmp=tmpfile;
        yyin = archivoEntrada; 

        //si el archivo de entrada existe
        if(archivoEntrada && argc >= 2){
            preproceso=true;
            memset(gramaticas,0,sizeof(gramaticas));
            

            // si desea el beamer
            if(argc >= 3 &&( !strcmp(argv[2], "B") || !strcmp(argv[2], "P"))){ 
                beamer = fopen("beamer.tex", "w"); 
                //startBeamer(beamer); 
                //addExplanation(beamer); 
                //startListing(beamer, "C\\'odigo Preprocesado (Sin Pretty Print)"); 
                preprocesador1(archivoEntrada,tmpfile);

                //endListing(beamer); 
                fclose(tmpfile);
                preproceso=false;
                tmpfile = fopen("tmpfile.c", "r"); //Se llama a la función del preprocesador con el archivo de entrada
                yyin = tmpfile;
                linea=0;
                memset(gramaticas,0,sizeof(gramaticas));
                yyparse();
                
                if(banderaSyntaxError == 1){
                    banderaParseado =1 ; 
                    fclose(tmpfile);
                    tmpfile = fopen("tmpfile.c", "r"); //Se llama a la función del preprocesador con el archivo de entrada
                    yyin = tmpfile; 
                    linea = 0; 
                    preprocesador1(tmpfile, tmpfile2); 
                    fclose(tmpfile2);
                    tmpfile2 = fopen("tmpfile2.c", "r"); //Se llama a la función del preprocesador con el archivo de entrada
                    memset(gramaticas,0,sizeof(gramaticas));
                    linea = 0; 
                    yyin = tmpfile2; 
                    yyparse();
                    preproceso = false;
                    fclose(tmpfile2);
                    tmpfile2 = fopen("tmpfile2.c", "r"); //Se llama a la función del preprocesador con el archivo de entrada
                    ponerErrores(tmpfile2, beamer);  
                    printf("error :v\n");

                }
                else{ // banderaSyntaxError == 0
                    fclose(archivoEntrada);     
                    archivoEntrada  = fopen(argv[1], "r+");
                    archivoEntradaTem  = fopen(argv[1], "r+");
                    tmpfile = fopen("tmpfile.c", "r"); //Se llama a la función del preprocesador con el archivo de entrada
                    yyin = tmpfile;
                    memset(gramaticas,0,sizeof(gramaticas));
                    if(!strcmp(argv[2], "P")){
                        //startListing(beamer, "C\\'odigo Pretty Print GNU"); 
                        //prettyprintSelect(0, beamer, "Beamer.tex");
                        //endListing(beamer);    
                    } 
                }
                //endBeamer(beamer); 
                fclose(beamer);
                //system("pdflatex beamer.tex");
                //system("evince --presentation beamer.pdf");
            }// se acaba if de que si lo quiere con Beamer "B", "b"
            
            else{ // si no quiere beamer 
                preproceso=true;
                memset(gramaticas,0,sizeof(gramaticas));
                preprocesador1(archivoEntrada,tmpfile);
                fclose(tmpfile);
                preproceso=false;
                tmpfile = fopen("tmpfile.c", "r"); //Se llama a la función del preprocesador con el archivo de entrada
                yyin = tmpfile; 
                linea=1;
                memset(gramaticas,0,sizeof(gramaticas));
                yyparse();
                if(banderaSyntaxError == 0){
                    printf("El archivo ingresado esta bien léxica y sintácticamente. (: \n");
                }
            }
            fclose(tmpfile);
            fclose(tmpfile2); 
            fclose(archivoEntrada);
            //remove("tmpfile.c");  
        } // se acaba el if de archivoEntradaExiste

        
        else{ // si el archivo de entrada entonces no existe 
            printf("El archivo ingresado no existe, verifique que esté bien escrito o bien no ingreso todos los parámetros.\n\n");
            printf("                **Para más información presione escriba ./parser y da ENTER.**\n");
        }

    }
    return 0; 
}

