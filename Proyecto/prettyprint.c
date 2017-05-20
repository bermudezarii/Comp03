#include <stdio.h>
#include <string.h>
#include "estructuras.h"
#include "flex.c"
#include "preprocess.c"
#include "myscanner.c" 

extern FILE * yyin;
extern int yylex();
extern int yylineno;
extern int yyleng;
extern char* yytext;

extern int tabs;
static char espacios[20] = ""; /*String de espacios*/
int contador = 0; /*Contador es espacios, encargado de ver cuántos espacios dejar*/
#define espaciosLlave 2
#define espaciosParentesis 1
static char prettyprint[1000] = "";
static char nuevo[1000][1000];
static char viejo[1000][1000];



void prettyprintSelect(int value){
	printf("Entro con:%d\n", value );
	switch(value){
		case 0:
			printf("GNU style\n");
			break;		
		case 1:
			printf("BSD style\n");
			break;
		case 2:
			printf("Tipo de Nosotros\n");
			break;
		default:
			printf("GNU style\n");
			break;
	}
}



void generadorEspacios(int numero){
	memset(espacios, 0, sizeof(espacios));
	for(int i = 1; i <= numero ; i++){
		strcat(espacios,  " ");
	}
}




/*
void casosEspeciales(char * linea){
	if(*linea == 'f'){
		linea++; 
		if(*linea == 'o'){
			linea++;
			if(*linea == 'r'){
				printf("reconocer for\n");
				fputs("for", archivoTemporal);
				strcat(prettyprint, "for");
				linea++;
				while(*linea != ')'){
					actual[0] = *linea;
					fputs(actual, archivoTemporal);
					strcat(prettyprint, actual);
					linea++; 
				}
				fputs(")", archivoTemporal);
				strcat(prettyprint, ")");
				
			}
			else{				
				linea--; 							
				linea--; 							
				fputs("f", archivoTemporal);
				strcat(prettyprint, "f");
			}

		}
		else{
				printf("nivel 2\n");							
				linea--; 							
				fputs("f", archivoTemporal);
				strcat(prettyprint, "f");
		}
	}
		 
	else { 

		fputs(actual, archivoTemporal);
		strcat(prettyprint, actual);
	}

}*/


/*Función encargada de hacer el pretty print para el estilo GNU*/
void prettyprintGNU(FILE *archivoTemporal, char *linea){
	printf("entra al GNU\n");
	char anterior[1]="";
	char actual[1] = "";
	while(*linea != '\0'){
		actual[0] = *linea;
		if(*linea == '{'){
			
			contador = contador + 2; /*Se suman dos espacios para el GNU style*/ 
			fputs("\n", archivoTemporal); /*Se coloca un salto de línea*/
			strcat(prettyprint, "\n");
			
			generadorEspacios(contador);
			fputs(espacios, archivoTemporal);  /*Se colocan los espacios*/
			strcat(prettyprint, espacios);
			
			fputs(actual, archivoTemporal); /*Se coloca la llave que abre*/
			strcat(prettyprint, actual);
			
			contador = contador + 2;
			fputs("\n", archivoTemporal); /*Se coloca un salto de línea*/
			strcat(prettyprint, "\n");
			
			generadorEspacios(contador);
			fputs(espacios, archivoTemporal);  /*Se colocan los espacios*/
			strcat(prettyprint, espacios);
			
			
			

		}

		/*Cuando se encuentra una llamada a una función (paréntesis) se deja un espacio*/
		else if(*linea == '('){
			generadorEspacios(espaciosParentesis); /*Se deja un espacio*/
			fputs(espacios, archivoTemporal);  /*Se colocan los espacios*/
			strcat(prettyprint, espacios);
			
			fputs(actual, archivoTemporal); /*Se coloca la llave que abre*/	
			strcat(prettyprint, actual);
		
		}

		else if(*linea == '}'){
			contador = contador - 2; /*Se restan dos espacios*/
			generadorEspacios(contador);
			fputs(espacios, archivoTemporal); 
			strcat(prettyprint, espacios);
			
			fputs(actual, archivoTemporal);
			strcat(prettyprint, actual);
			
			contador = contador-2;
			fputs("\n", archivoTemporal);
			strcat(prettyprint, "\n");
			
			generadorEspacios(contador);
			fputs(espacios, archivoTemporal);
			strcat(prettyprint, espacios);
			
		}

		else if(*linea == ';'){
			fputs(actual, archivoTemporal);
			strcat(prettyprint, actual);
			
			fputs("\n", archivoTemporal);
			strcat(prettyprint, "\n");
			
		}

		else{
			if(anterior[0] == ';'){
				generadorEspacios(contador);
				fputs(espacios, archivoTemporal); 
				strcat(prettyprint, espacios);
			
			}
			else{
				if(*linea == 'f'){
					linea++; 
					if(*linea == 'o'){
						linea++;
						if(*linea == 'r'){
							printf("reconocer for\n");
							fputs("for", archivoTemporal);
							strcat(prettyprint, "for");
							linea++;
							while(*linea != ')'){
								actual[0] = *linea;
								fputs(actual, archivoTemporal);
								strcat(prettyprint, actual);
								linea++; 
							}
							fputs(")", archivoTemporal);
							strcat(prettyprint, ")");
							
						}
						else{				
							linea--; 							
							linea--; 							
							fputs("f", archivoTemporal);
							strcat(prettyprint, "f");
						}

					}
					else{
							printf("nivel 2\n");							
							linea--; 							
							fputs("f", archivoTemporal);
							strcat(prettyprint, "f");
					}
				}
					 
				else { 

					fputs(actual, archivoTemporal);
					strcat(prettyprint, actual);
				}
			}
			
			
		}
		anterior[0] = *linea;
		linea++;

	}
	printf("asi queda prettyprintprinteado\n%s\n", prettyprint);

}


/*Función encargada de hacer el pretty print para el estilo BSD*/
void prettyprintBSD(FILE * archivoTemporal, char * linea){	
	char anterior[1]="";
	char actual[1] = "";
	/*Se lee hasta el final de línea*/
	while(*linea != '\0'){
		actual[0] = *linea;
		
		/*Si se encuentra la llave que abre, se dejan los espacios correspondientes al estilo*/
		
		if(*linea == '{'){
			contador = contador + 8; /*Se suman dos espacios para el BSD style*/ 
			generadorEspacios(espaciosLlave); /*Se generan los espacios*/
			fputs(espacios, archivoTemporal); /*Se colocan los espacios antes de la llave que abre*/ 
			strcat(prettyprint, espacios);
			
			fputs(actual, archivoTemporal); /*Se coloca la llave que abre*/
			strcat(prettyprint, actual);
			fputs("\n", archivoTemporal); /*Se coloca un salto de línea*/
			
			strcat(prettyprint, "\n");
			generadorEspacios(contador);  /*Se generan los cuatro espacios*/
			fputs(espacios, archivoTemporal);  /*Se colocan los espacios*/
			strcat(prettyprint, espacios);
			 
		}

		/*Si se encuentra una llave que cierra, se deben restar los espacios correspondientes para reanudar los espacios*/

		else if (*linea == '}'){
			contador = contador - 8; /*Se restan dos espacios*/
			printf("%i", contador);
			generadorEspacios(contador);
			fputs(espacios, archivoTemporal); 
			strcat(prettyprint, espacios);
			
			fputs(actual, archivoTemporal);
			strcat(prettyprint, actual);
			fputs("\n", archivoTemporal);
			fputs(espacios, archivoTemporal);
			
			
			
		} 
		else if (*linea == ';'){
			fputs(actual, archivoTemporal);
			strcat(prettyprint, actual);
			
			fputs("\n", archivoTemporal);
			strcat(prettyprint, "\n");
			
		}
		else{
			
			if(anterior[0] == ';'){
				generadorEspacios(contador);
				fputs(espacios, archivoTemporal); 
				strcat(prettyprint, espacios);
			
			}
			
			if(*linea == 'f'){
				linea++; 
				if(*linea == 'o'){
					linea++;
					if(*linea == 'r'){
						printf("reconocer for\n");
						fputs("for", archivoTemporal);
						strcat(prettyprint, "for");
						linea++;
						while(*linea != ')'){
							actual[0] = *linea;
							fputs(actual, archivoTemporal);
							strcat(prettyprint, actual);
							linea++; 
						}
						fputs(")", archivoTemporal);
						strcat(prettyprint, ")");
						
					}
					else
						actual[0] = *linea;
				}
				else 
					actual[0] = *linea;
			}
			else {
				fputs(actual, archivoTemporal);
				strcat(prettyprint, actual);
			}
			 
		}
		anterior[0] = *linea;
		linea++; 
	}
}




