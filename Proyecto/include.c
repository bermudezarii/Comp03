#include <stdio.h>
#include <stdbool.h>
#include "parser.tab.h"
#include <string.h>
#include <stdlib.h>
#include <math.h>

extern FILE * yyin;
extern char* yytext;

char *includes[] = {};     //Tabla con las cadenas que representarán a los includes que se encuentren en el programa
int numIncludes = -1;      //Contador de los includes que se tendrán en el array de cadenas includes



/*
    Función encargada de quitar los "" al literal del include
*/
char *modificarInclude(char *include){
        char *resultado;
        memmove(include, include+1, strlen(include)-1);
        include[strlen(include) - 2] = '\0';
         return include;   
}

/*
    Función encargada de evaluar si ya existe un include en la tabla de inclusiones
*/

bool existeInclude(char *include)
{

    for(int i = 0; i<numIncludes; i++)
    {

      /*Si encontramos que el valor coincide con la tabla de includes, se retorna verdadero*/
      /*función strcmp: se comparan los dos parámetros que recibe*/
      if(strcmp(includes[i], include) == 0)
      {
          return true;
      }

    }
    
    return false;

}



void include(FILE* archivoActual,FILE* archivoTemporal, int ntoken){
			printf("Entro include\n");
	        char *includeArreglado; //El valor del include sin los ""
            char includeGCC[100]= "";
            char contenidoArchivo[2];
            FILE *libreria;
            FILE *fp;
            FILE *salida;
            //salida = fopen("salida.c", "a");
            int numeroTemporal;
            numeroTemporal = 0;

            strcat(includeGCC, yytext);
            strcat(includeGCC, " ");
                    
  


            ntoken = nextToken(); //Se obtiene el siguiente token para evaluar 
            /*
                Debido a que los define son literales
            */  

            if(ntoken == LITERAL){      
                
                numIncludes++;
                FILE* siguienteArchivo; //Se creará un nuevo archivo
                includeArreglado = modificarInclude(yytext); //Se obtiene el include sin ""
                /*
                    Si el include es diferente al archivo que lo invocó
                */

                if(existeInclude(includeArreglado) == false){                    
                    includes[numIncludes] = includeArreglado; //Se agrega a la tabla
                    siguienteArchivo = fopen(includeArreglado, "r"); //Se pone en modo lectura, FALTA: función que quite los "" de un literal
              
                    /*
                        Se le indica a flex cuál es el archivo actual que se está leyendo
                    */
                    if(siguienteArchivo){
                        yyin = siguienteArchivo;                   
                        preprocesador1(siguienteArchivo,archivoTemporal); //Se llama de nuevo a la función, pero esta vez con el siguiente archivo incluído
                        fclose(siguienteArchivo);
                        /*
                            Después de la llamada recursiva, se borra la inclusión
                        */
                        includes[numIncludes] = ""; 
                        numIncludes--;
                        yyin =archivoActual; //Se le dice a flex cuál archivo se estará leyendo
                    }else 
                    {
                        printf("**El archivo de entrada de include no existe.**\n");
                    }

                }
                /*
                    Si el include es igual al archivo que lo invocó
                */

                else{
                    printf("Inclusión duplicada de %s\n", includeArreglado); //Se notifica el error, revisar esta validación
                }
            }

            else if(ntoken == LESS){
                strcat(includeGCC, yytext);
                ntoken = nextToken();

                if(ntoken == IDENTIFIER){
                    strcat(includeGCC, yytext);
                    ntoken = nextToken();

                    if(ntoken == DOT){
                        strcat(includeGCC, yytext);
                        ntoken = nextToken();

                        if(ntoken == IDENTIFIER){
                            strcat(includeGCC, yytext);
                            ntoken = nextToken();

                            if(ntoken == GREATER){
                                
                                FILE* siguienteArchivo; //Se creará un nuevo archivo
                
                                strcat(includeGCC, yytext);
                                
                                printf("ENTRA CON INCLUDE \n");
                                printf("%s \n", includeGCC);
                                salida = fopen(includeGCC, "w");
                                libreria = fopen("libreria.c", "w");
                                fputs(includeGCC, libreria);
                                fclose(libreria);

                                fp = popen("cpp -MMD libreria.c", "r");
                                
                                if (fp == NULL) {
                                     printf("Failed to run command\n" );
                                      exit -1;
                                }

                                while (fgets(contenidoArchivo, 2, fp) != NULL) {
                                    //printf("%s", contenidoArchivo);
                                    if (strcmp(contenidoArchivo,"#")==0){
                                        
                                    
                                        while (strcmp(contenidoArchivo,"\n")!=0){
                                            fgets(contenidoArchivo, 2, fp);
                                        }
                                      
                                    }
                                    else
                                        fputs(contenidoArchivo, salida);
                                }

                                pclose(fp);
                                fclose(salida);

                                siguienteArchivo = fopen(includeGCC, "r"); //Se pone en modo lectura, FALTA: función que quite los "" de un literal
              

                                yyin = siguienteArchivo;                   
                                preprocesador1(siguienteArchivo, archivoTemporal); //Se llama de nuevo a la función, pero esta vez con el siguiente archivo incluído
                                fclose(siguienteArchivo);
                                remove(includeGCC);
                                /*
                                    Después de la llamada recursiva, se borra la inclusión
                                */
                                includes[numIncludes] = ""; 
                                numIncludes--;
                                yyin =archivoActual; //Se le dice a flex cuál archivo se estará leyendo

                                //fclose(salida);
                                
                                

                            }
                        

                        }


                    }
                }   

            }
}
