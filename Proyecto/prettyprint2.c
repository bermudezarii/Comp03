#include <stdio.h>
#include <string.h> 

extern void startListing(FILE * archivoPretty, char * titulo);
extern void endListing(FILE * archivoPretty); 
extern FILE * beamer; 
extern FILE * yyin;
extern int yylex();
extern int yylineno;
extern int yyleng;
extern char* yytext;

extern char errores[5000][500]; 
extern int lineasE[500]; 
extern int contadorErrores;
extern int banderaParseado; 

static char espacios[1000] = ""; /*String de espacios*/
int contador = 0; /*Contador es espacios, encargado de ver cuántos espacios dejar*/

// muchas banderas que nos ayudan a determinar casos para los prettyprint
int ciclo = 0;                              //si hay ciclos, se deben de contar para saber cuantos devolver espacios devolver
int banderaDo = 0;                          // el do es un caso especial porque luego sigue un while /
int banderaCase = 0;                        // la bandera al indicar que estamos en un case, lo que hace es espaciar el resto de cosas 
int banderaNOtoken = 0;                     // la bandera que hace que el ciclo principal (prettyprintGNU/BSD/ALL) 
int tramposo= 0;                            // la bandera cuenta cuantos casos tramposos se van anidando (osea que uno tiene como 4 casos tramposos juntos)
int banderaTramposoCondicional = 0; 
int ntoken = 0;
int anterior= 0; 
int banderaIncludeDefine = 0; 
int saltoInclude = 0; 
int token = 0; 
int banderaDefine = 0;
int banderaParen = 0; 
int caseLBracket = 0; 
int banderaPrimero = 0; 
int caseRBracket = 0; 
int tramposos[20]; 
int iActual = 0; /* esta variable ayuda a ver por donde va del array de tramposos :3 */
//banderas para el beamer 
int contadorBeamer = 0; 
int banderaCuidadoEspacios = 0; 
int lineaNuevo = 1; 



void prettyprintSelect(int value, FILE * archivoPretty, char*name){
  printf("Entro con:%s\n", name);
  switch(value){
    case 0:
      printf("GNU style\n");
      prettyprintGNU(archivoPretty, name); 
      break;    
    default:
      printf("GNU style\n");
      prettyprintGNU(archivoPretty, name); 
      break;
  }
}


void generadorEspacios(int numero, FILE * archivoPretty){
  memset(espacios, 0, sizeof(espacios));
  for(int i = 1; i <= numero ; i++){
    strcat(espacios,  " ");
  }
  putPretty(espacios, archivoPretty); 
}


void putPretty(char * text, FILE * archivoTemporal){
  fputs(text, archivoTemporal); 
  //strcat(prettyprint, text); 
  //printf("%s", text);
}

/*Funciones para el pretty print estilo GNU*/
//*************************************************************************

int redireccionar(FILE * archivoPretty){
  if(ntoken == INCLUDE || ntoken == DEFINE || banderaIncludeDefine == 1){
    tokenIncludeDefine(archivoPretty); 
  }
  else if (ntoken == FOR || ntoken == IF|| ntoken == WHILE || ntoken == DO || ntoken == ELSE|| ntoken == SWITCH){
    tokenCondicionales(archivoPretty); 
  }
  else if(ntoken == CASE || ntoken == DEFAULT){
    tokenCase(archivoPretty); 
  }
  else if (ntoken == LEFT_BRACKET){
    tokenLeftBracket(archivoPretty); 
  }
  else if (ntoken == LEFT_PARENTHESIS){
    tokenLeftParenthesis(archivoPretty); 
  }
  else if (ntoken == RIGHT_BRACKET){
    tokenRightBracket(archivoPretty); 
  }
  else if (ntoken == SEMICOLON && banderaParen == 0){
    tokenColons(archivoPretty);
  }
  else{
    tokensNormales(archivoPretty); 
  }
  return 0; 
}


void tokensNormales(FILE * archivoPretty){
      if(anterior != ELSE && ((anterior == SEMICOLON && banderaParen == 0)|| anterior == RIGHT_BRACKET || (anterior == COLON && banderaCase >= 1) || anterior == SLASH || saltoInclude == 1)){ /*si antes habia un semicolon o }, 
      di tengo q identar porq solo me dejaron en el inicio de la linea*/
        if(saltoInclude == 1){
          saltoInclude = 0;
        } 
        generadorEspacios(contador, archivoPretty); 
        putPretty(yytext, archivoPretty);
      
      }
      else if(anterior == DOT || anterior == PTR_OP || anterior == LEFT_BRACKET || anterior == LEFT_SBRACKET ||  ntoken == LEFT_SBRACKET || 
       anterior == LEFT_PARENTHESIS ||anterior == RIGHT_PARENTHESIS ||ntoken == RIGHT_PARENTHESIS || anterior == EXCLAMATION || ntoken == RIGHT_SBRACKET 
       || anterior == BIT_AND || anterior == -1 || anterior == COLON || anterior == INCLUDE 
       || anterior == DEFINE || ntoken == DOT || ntoken == PTR_OP || ntoken == COMMA || anterior == ELSE ){
       

        putPretty(yytext, archivoPretty); 
      
      }
      else{
        
        putPretty(" ", archivoPretty); 
        putPretty(yytext, archivoPretty);
      } 
}


void tokenCondicionales(FILE * archivoPretty){
     token = ntoken; 
      if (token == DO){
        
        banderaDo = 1; 
      }

      if(((anterior != LEFT_BRACKET  )|| (anterior == RIGHT_BRACKET || anterior == SEMICOLON))){   /* esto indica si hay mas de dos ciclos para ponerle los campos respectivos*/
        
        generadorEspacios(contador, archivoPretty); 
      }

      if(ntoken == SWITCH){
        caseLBracket = 0; 
        caseRBracket = 0; 
        
      }

      if(ntoken == SWITCH && banderaCase > 0){
        
        banderaPrimero = 1; 
        caseLBracket = -1; 
      }


      putPretty(yytext, archivoPretty);
      anterior = ntoken; 
      ntoken = nextToken(); 
      if(token != DO && (token != ELSE || (token == ELSE && ntoken == IF))){
        int contadorLParen = 1; 
        int contadorRParen = 0; 
        
        if(ntoken == IF){
          putPretty(" ", archivoPretty); 
          putPretty(yytext, archivoPretty); 
          anterior = ntoken; 
          ntoken = nextToken();   
        }
        
        putPretty(" ", archivoPretty);
        
        putPretty(yytext, archivoPretty); 
        anterior = ntoken; 
        ntoken = nextToken(); 
        banderaParen = 1; 
        while(contadorLParen != contadorRParen){ /* el while es para que vaya metiendo las cosas normal hasta q encuentra
          que haya la misma cantidad entre ( y )
          que es el punto crucial, de si va a tener brackets o va a ser tramposo (de una linea)*/ 
          if (ntoken == LEFT_PARENTHESIS){ /* como esta la regla q antes de un ( hay q poner un espacio*/
            contadorLParen = contadorLParen + 1; 
          }
          else if(ntoken == RIGHT_PARENTHESIS)
            contadorRParen = contadorRParen + 1; 
          redireccionar(archivoPretty);  
          anterior = ntoken; 
          ntoken = nextToken(); 
          } 
          banderaParen = 0; 
      }
      /* despues de buscar el ()*/
      if (ntoken != LEFT_BRACKET){ /* si no tiene brackets, es uno de los tramposos, 
      entonces solo le pongo los espacios, copio la linea (hasta el semicolon) y seguimos con la vida*/
        if(banderaDo == 1 && token == WHILE){ /* este caso es para el while que sigue despues del do, el cual es como (...); */
          putPretty(yytext, archivoPretty);  
             
          putPretty("\n", archivoPretty); 
          contadorBeamer++;
          banderaDo = 0; 
        }
        else{
          
          putPretty("\n", archivoPretty); 
          contadorBeamer++; 
          contador = contador + 4 ;
          if(ntoken != FOR && ntoken != IF && ntoken != WHILE && ntoken != DO && ntoken != ELSE && ntoken != SWITCH){
            generadorEspacios(contador, archivoPretty);
            banderaCuidadoEspacios = 1; 
          }
          
          tramposos[iActual] = tramposos[iActual] + 1; 
          tramposo = tramposo + 1; 
          banderaNOtoken = 1;
        }

      }
      else if (ntoken == LEFT_BRACKET){ /* si tiene brackets wuuuuu, pongalo y siga como si nada*/
        tokenLeftBracket(archivoPretty); 
      }
}

void tokenCase(FILE * archivoPretty){
    
    if(banderaCase >= 1 && banderaPrimero == 0){
      
      banderaCase = banderaCase - 1; 
      contador = contador - 4;  
    }
    if(banderaPrimero ==1){
      banderaPrimero =0;
    }

    while(ntoken != COLON){ //case (pone esta parte)
        tokensNormales(archivoPretty); 
        anterior = ntoken; 
        ntoken = nextToken(); 
      }
      putPretty(yytext, archivoPretty); 
      anterior = ntoken; 
      ntoken = nextToken(); 
      if(ntoken == LEFT_BRACKET){
        tokenLeftBracket(archivoPretty);
      }
      else{
        if(banderaPrimero == 0){
          
          banderaCase = banderaCase + 1;  
        }
        contador = contador + 4; 
        banderaNOtoken =1 ;
        putPretty("\n", archivoPretty); 
        contadorBeamer++; 
       
      }  
      
}


void tokenLeftBracket(FILE * archivoPretty, int tipo){
      if(tramposo > 0){
        iActual++; 
        tramposos[iActual] = 0; 
      }
      if(banderaCase >= 1){
        
        caseLBracket++; 
      }
      /* si encuentra un bracket q no implica antes un while, if o for es como 
      preste atencion, ahora tiene q identar*/
      contador = contador + 2 ; /*Se suman dos espacios para el GNU style*/ 
      putPretty("\n", archivoPretty); /*Se coloca un salto de línea*/
      contadorBeamer++; 
      
      generadorEspacios(contador, archivoPretty);  /*Se colocan los espacios*/
      putPretty(yytext, archivoPretty); /*Se coloca la llave que abre*/ 
      contador = contador + 2;  /*Se suman otros dos espacios para que ya el resto bn identado*/
      putPretty("\n", archivoPretty);/*Se coloca un salto de línea*/
      contadorBeamer++; 

      banderaNOtoken = 1; 
      anterior = ntoken; 
      ntoken = nextToken(); 
      if(ntoken != RIGHT_BRACKET){
        generadorEspacios(contador, archivoPretty); /*espacios*/ 
        banderaCuidadoEspacios = 1;
      }
        
}

void tokenLeftParenthesis(FILE * archivoPretty){
    if((anterior == COLON && banderaParen == 0)|| (anterior == SEMICOLON && banderaParen ==0) || anterior == RIGHT_BRACKET){
      generadorEspacios(contador, archivoPretty);
    }
    else{
      if(anterior != LEFT_PARENTHESIS && tramposo== 0){
        putPretty(" ", archivoPretty); /* se le pone el espacio*/
      }
    }  
    putPretty(yytext, archivoPretty); /*el ( */ 
}

void tokenRightBracket(FILE * archivoPretty){
      if(anterior != SEMICOLON && anterior != RIGHT_BRACKET){ 
        // si el anterior no es ; ni } indica que debe haber un salto de linea 
        putPretty("\n", archivoPretty); 
        contadorBeamer++; 
      }
      if(banderaCase >= 1){
        caseRBracket++; 
      }
      
      if(banderaCase >= 1 && (caseRBracket > caseLBracket)){
        
        contador = contador - 4 ; 
        caseLBracket = 0; 
        caseRBracket = 0; 
        
        banderaCase = banderaCase - 1 ; 
      }
      contador = contador -2; /*Se restan dos espacios, porq la llave se pone un poquito antes*/
      generadorEspacios(contador, archivoPretty); /* espacios */ 
      putPretty(yytext, archivoPretty); /* el } */
      if(tramposo > 0 && iActual > 0){
        iActual--; 
        while(tramposos[iActual] > 0){
          contador = contador - 4 ; 
          tramposo = tramposo - 1;
          tramposos[iActual] = tramposos[iActual] - 1;  
        }
      }
      
      contador = contador-2; /* lo deja bien en identacion para lo que sigue */ 
      anterior = ntoken; 
      ntoken = nextToken(); 
      banderaNOtoken = 1; 
      if(ntoken != SEMICOLON){
        putPretty("\n", archivoPretty); /* salto de linea */
        contadorBeamer++; 
      }
      //si es diferente de SEMICOLON si salta y este if lo hice por el caso struct {} ; 

}

void tokenColons(FILE * archivoPretty){
      if(anterior == SEMICOLON && ntoken == SEMICOLON){
        generadorEspacios(contador, archivoPretty);
      }
      putPretty(yytext, archivoPretty); 
      

      if((ntoken == COLON && banderaCase >=1) || ntoken == SEMICOLON){
        putPretty("\n", archivoPretty); 
        contadorBeamer++;    
        
      }
      
      if (tramposo > 0){
        while(tramposos[iActual] > 0){
          contador = contador - 4 ; 
          tramposo = tramposo - 1;
          tramposos[iActual] = tramposos[iActual] - 1;  
        }
        
      }
}

void tokenIncludeDefine(FILE * archivoPretty){
      banderaIncludeDefine = 1;
      if(ntoken == DEFINE || ntoken == INCLUDE){
        generadorEspacios(contador,archivoPretty);   
        if(ntoken == DEFINE)
          banderaDefine = 1; 
      }


      putPretty(yytext, archivoPretty); 
      putPretty(" ", archivoPretty); 
}

int prettyprintGNU(FILE * archivoPretty, char*name){  
    anterior = -1;
    ntoken = nextToken();
    while(ntoken) {
      if (endline==0){
          if(banderaIncludeDefine == 1){
      
              putPretty("\n", archivoPretty);
              contadorBeamer++; 
    
            
            saltoInclude = 1;
            banderaIncludeDefine = 0; 
            if(banderaDefine == 1){
              anterior = ntoken; 
              ntoken = nextToken();  
              banderaDefine =0 ;             
            }
          }
            endline=1;
        
          
      }
      
      if (banderaNOtoken == 1){
        banderaNOtoken = 0; 
      }
      if(contadorBeamer >= 13){
        endListing(archivoPretty); 
        startListing(archivoPretty, "C\\'odigo Pretty Print GNU"); 
        contadorBeamer = 0; 
        if(banderaCuidadoEspacios == 1){
          generadorEspacios(contador, archivoPretty); 
        }
      }
      banderaCuidadoEspacios = 0; 
      redireccionar(archivoPretty);
      if(banderaNOtoken == 0){
        anterior = ntoken; /*guardo el anterior porque me ayuda a verificar ciertas cosas*/
        ntoken = nextToken(); /*como el i++ de nuestro ciclo*/
      }
        
    }
    
    printf("**El código al que se le aplicó el Pretty Print estilo GNU, se encuentra en el archivo %s**\n",name);
    return 0;
}


//*************************************************************************

void ponerErrores(FILE * viejo, FILE * nuevo){
    anterior = -1;
    ntoken = nextToken();
    printf(" sdasd asd \n wqerqer \n qewqweq we nextToken = %s\n", yytext);
    while(ntoken) {
      printf("dfsfsd \n 234234 \n 23423 4\n");
      if (endline==0){
        putPretty("\n", nuevo); 
        int n = 0; // contador para ver si esta el error
        while(n < contadorErrores){
          printf("lineaE[n] = %d, lineaNuevo = %d\n", lineasE[n], lineaNuevo);
            if(lineasE[n] == lineaNuevo){

                putPretty(errores[n], nuevo); 
            }
            n++; 
        }
        lineaNuevo++;  
        endline =1; 
      }
    
        putPretty(yytext, nuevo); 
        putPretty(" ", nuevo);  
        anterior = ntoken; /*guardo el anterior porque me ayuda a verificar ciertas cosas*/
        ntoken = nextToken(); /*como el i++ de nuestro ciclo*/
    }  
    
    printf("**El código al que se le aplicó el Pretty Print estilo GNU, se encuentra en el archivo ");
    return 0;
}


