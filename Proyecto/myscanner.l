%{
//#include "myscanner.h"
#include "parser.tab.h"
#include "yyltype.h"
void yyerror(char *);
int linea = 1;
int columna = 0; 
YYLTYPE yylloc = {1,1,1,1}; 
int endline;
int fdefine=1;
char* gramaticas[500000];

#define YY_USER_ACTION yylloc.first_line = yylloc.last_line = linea; \
    yylloc.first_column = columna; yylloc.last_column = columna + yyleng - 1; \
    columna += yyleng;


%}

%%

"auto"			  															{strcat(gramaticas,yytext);return AUTO;}
"break"			  															{strcat(gramaticas,yytext);return BREAK;}
"case"			  															{strcat(gramaticas,yytext);return CASE;}
"char"			  															{strcat(gramaticas,yytext);return CHAR;}
"const"			  															{strcat(gramaticas,yytext);return CONST;}
"continue"	      															{strcat(gramaticas,yytext);return CONTINUE;}
"default"		  															{strcat(gramaticas,yytext);return DEFAULT;}
"do"			  															{strcat(gramaticas,yytext);return DO;}
"double"		  															{strcat(gramaticas,yytext);return DOUBLE;}
"else"			  														    {strcat(gramaticas,yytext);return ELSE;}
"enum"			  															{strcat(gramaticas,yytext);return ENUM;}
"extern"		  															{strcat(gramaticas,yytext);return EXTERN;}
"float"			  															{strcat(gramaticas,yytext);return FLOAT;}
"for"			  															{strcat(gramaticas,yytext);return FOR;}
"goto"			  															{strcat(gramaticas,yytext);return GOTO;}
"if"			  															{strcat(gramaticas,yytext);return IF;}
"int"			  															{strcat(gramaticas,yytext);return INT;}
"long"			  															{strcat(gramaticas,yytext);return LONG;}
"register"		  															{strcat(gramaticas,yytext);return REGISTER;}
"return"		  															{strcat(gramaticas,yytext);return RETURN;}
"short"			  															{strcat(gramaticas,yytext);return SHORT;}
"signed"		  															{strcat(gramaticas,yytext);return SIGNED;}
"sizeof"		  															{strcat(gramaticas,yytext);return SIZEOF;}
"static"		  															{strcat(gramaticas,yytext);return STATIC;}
"struct"		  															{strcat(gramaticas,yytext);return STRUCT;}
"switch"		  															{strcat(gramaticas,yytext);return SWITCH;}
"typedef"		  															{strcat(gramaticas,yytext);return TYPEDEF;}
"union"			  															{strcat(gramaticas,yytext);return UNION;}
"unsigned"		  															{strcat(gramaticas,yytext);return UNSIGNED;}
"void"			  															{strcat(gramaticas,yytext);return VOID;}
"volatile"		  															{strcat(gramaticas,yytext);return VOLATILE;}
"while"			  															{strcat(gramaticas,yytext);return WHILE;}

[0-9][0-9]*		  															{strcat(gramaticas,yytext);return INTEGER;}

"/*"([^*]|\*+[^*/])*\*+"/"    		        								
"//".*$                  		        									

0[xX][a-fA-F0-9]+(u|U|l|L)*?	     										{strcat(gramaticas,yytext);return CONSTANT;}
0[0-9]+(u|U|l|L)*?		     												{strcat(gramaticas,yytext);return CONSTANT;}
[0-9]+(u|U|l|L)*?		     												{strcat(gramaticas,yytext);return CONSTANT;}
L?'(\\.|[^\\'])+'	             											{strcat(gramaticas,yytext);return CONSTANT;}
[0-9]+[Ee][+-]?[0-9]+(f|F|l|L)?		 										{strcat(gramaticas,yytext);return CONSTANT;}
[0-9]*"."[0-9]+([Ee][+-]?[0-9]+)?(f|F|l|L)?									{strcat(gramaticas,yytext);return CONSTANT;}
[0-9]+"."[0-9]*([Ee][+-]?[0-9]+)?(f|F|l|L)?									{strcat(gramaticas,yytext);return CONSTANT;}

\\[\n|\z|\s|\r]|\\            												{strcat(gramaticas,yytext);return SLASH;}
"{"                       													{strcat(gramaticas,yytext);return LEFT_BRACKET;}
"}"                       													{strcat(gramaticas,yytext);return RIGHT_BRACKET;}
","                       													{strcat(gramaticas,yytext);return COMMA;}
"("                       													{strcat(gramaticas,yytext);return LEFT_PARENTHESIS;}
")"                       													{strcat(gramaticas,yytext);return RIGHT_PARENTHESIS;}
"]"                       													{strcat(gramaticas,yytext);return RIGHT_SBRACKET;}
"["                       													{strcat(gramaticas,yytext);return LEFT_SBRACKET;}
";"                       													{strcat(gramaticas,yytext);return SEMICOLON;}
":"                       													{strcat(gramaticas,yytext);return COLON;}
"!"                       													{strcat(gramaticas,yytext);return EXCLAMATION;}
"~"                       													{strcat(gramaticas,yytext);return PRIME;}
"?"                       													{strcat(gramaticas,yytext);return INTERROGATION;}
"^"                       													{strcat(gramaticas,yytext);return UP_ARROW;}
"+"			              													{strcat(gramaticas,yytext);return PLUS;}
"-"			              													{strcat(gramaticas,yytext);return MINUS;}
"/"			              													{strcat(gramaticas,yytext);return DIV;}
"%"			              													{strcat(gramaticas,yytext);return MOD;}
"*"			              													{strcat(gramaticas,yytext);return MUL;}
"++"			          													{strcat(gramaticas,yytext);return INC_OP;}
"--"			          													{strcat(gramaticas,yytext);return DEC_OP;}
"="			              													{strcat(gramaticas,yytext);return EQU;}
"<"			              													{strcat(gramaticas,yytext);return LESS;}
">"			              													{strcat(gramaticas,yytext);return GREATER;}
"<="			          													{strcat(gramaticas,yytext);return LE_OP;}
">="			          													{strcat(gramaticas,yytext);return GE_OP;}
"=="			          													{strcat(gramaticas,yytext);return EQ_OP;}
"!="			          													{strcat(gramaticas,yytext);return NE_OP;}
"+="			          													{strcat(gramaticas,yytext);return ADD_ASSIGN;}
"-="			          													{strcat(gramaticas,yytext);return SUB_ASSIGN;}
"*="			          													{strcat(gramaticas,yytext);return MUL_ASSIGN;}
"/="			          													{strcat(gramaticas,yytext);return DIV_ASSIGN;}
"%="			          													{strcat(gramaticas,yytext);return MOD_ASSIGN;}
"."			              													{strcat(gramaticas,yytext);return DOT;}
"&"			              													{strcat(gramaticas,yytext);return BIT_AND;}
"|"			              													{strcat(gramaticas,yytext);return BIT_OR;}
"->"			          													{strcat(gramaticas,yytext);return PTR_OP;}
"&&"			          													{strcat(gramaticas,yytext);return AND_OP;}
"||"			         													{strcat(gramaticas,yytext);return OR_OP;}
"..."			         													{strcat(gramaticas,yytext);return ELLIPSIS;}
">>="			          													{strcat(gramaticas,yytext);return RIGHT_ASSIGN;}
"<<="			          													{strcat(gramaticas,yytext);return LEFT_ASSIGN;}
"&="			          													{strcat(gramaticas,yytext);return AND_ASSIGN;}
"^="			          													{strcat(gramaticas,yytext);return XOR_ASSIGN;}
"|="			          													{strcat(gramaticas,yytext);return OR_ASSIGN;}
">>"			          													{strcat(gramaticas,yytext);return RIGHT_OP;}
"<<"			          													{strcat(gramaticas,yytext);return LEFT_OP;}

"#"(" "|\t)*"include"  	  													{strcat(gramaticas,yytext);return INCLUDE;}
"#"(" "|\t)*"define"	  													{strcat(gramaticas,yytext);fdefine=0;return DEFINE;}
[a-zA-Z][_a-zA-Z0-9]*|_[_a-zA-Z0-9]*|_    									{strcat(gramaticas,yytext);return IDENTIFIER;}
L?\"[^\"\\]*(?s:\\.[^\"\\]*)*\"	 											{strcat(gramaticas,yytext);return LITERAL;}

L?'(\\.|[^\\']|\n)*'          	  											{strcat(gramaticas,yytext);return LITERAL;}
\n|\z|\s|\r		 															{columna = 0; linea++;endline=0;/*ignore*/;if(fdefine==0){fdefine=1;return ('\n');}else{fdefine=1;}}


[ \t\n]

.|[0-9]*[a-zA-Z][_a-zA-Z0-9]*   											yyerror(yytext);


%%

int yywrap(void)
{
    return 1;
}
