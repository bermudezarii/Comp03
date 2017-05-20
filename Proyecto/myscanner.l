%{
//#include "myscanner.h"
#include "parser.tab.h"
void yyerror(char *);
int linea = 1;
int endline;
int fdefine=1;
char* gramaticas[500000];


%}

%%

"auto"			  															{strcat(gramaticas,yytext);strcat(gramaticas," ");return AUTO;}
"break"			  															{strcat(gramaticas,yytext);strcat(gramaticas," ");return BREAK;}
"case"			  															{strcat(gramaticas,yytext);strcat(gramaticas," ");return CASE;}
"char"			  															{strcat(gramaticas,yytext);strcat(gramaticas," ");return CHAR;}
"const"			  															{strcat(gramaticas,yytext);strcat(gramaticas," ");return CONST;}
"continue"	      															{strcat(gramaticas,yytext);strcat(gramaticas," ");return CONTINUE;}
"default"		  															{strcat(gramaticas,yytext);strcat(gramaticas," ");return DEFAULT;}
"do"			  															{strcat(gramaticas,yytext);strcat(gramaticas," ");return DO;}
"double"		  															{strcat(gramaticas,yytext);strcat(gramaticas," ");return DOUBLE;}
"else"			  														    {strcat(gramaticas,yytext);strcat(gramaticas," ");return ELSE;}
"enum"			  															{strcat(gramaticas,yytext);strcat(gramaticas," ");return ENUM;}
"extern"		  															{strcat(gramaticas,yytext);strcat(gramaticas," ");return EXTERN;}
"float"			  															{strcat(gramaticas,yytext);strcat(gramaticas," ");return FLOAT;}
"for"			  															{strcat(gramaticas,yytext);strcat(gramaticas," ");return FOR;}
"goto"			  															{strcat(gramaticas,yytext);strcat(gramaticas," ");return GOTO;}
"if"			  															{strcat(gramaticas,yytext);strcat(gramaticas," ");return IF;}
"int"			  															{strcat(gramaticas,yytext);strcat(gramaticas," ");return INT;}
"long"			  															{strcat(gramaticas,yytext);strcat(gramaticas," ");return LONG;}
"register"		  															{strcat(gramaticas,yytext);strcat(gramaticas," ");return REGISTER;}
"return"		  															{strcat(gramaticas,yytext);strcat(gramaticas," ");return RETURN;}
"short"			  															{strcat(gramaticas,yytext);strcat(gramaticas," ");return SHORT;}
"signed"		  															{strcat(gramaticas,yytext);strcat(gramaticas," ");return SIGNED;}
"sizeof"		  															{strcat(gramaticas,yytext);strcat(gramaticas," ");return SIZEOF;}
"static"		  															{strcat(gramaticas,yytext);strcat(gramaticas," ");return STATIC;}
"struct"		  															{strcat(gramaticas,yytext);strcat(gramaticas," ");return STRUCT;}
"switch"		  															{strcat(gramaticas,yytext);strcat(gramaticas," ");return SWITCH;}
"typedef"		  															{strcat(gramaticas,yytext);strcat(gramaticas," ");return TYPEDEF;}
"union"			  															{strcat(gramaticas,yytext);strcat(gramaticas," ");return UNION;}
"unsigned"		  															{strcat(gramaticas,yytext);strcat(gramaticas," ");return UNSIGNED;}
"void"			  															{strcat(gramaticas,yytext);strcat(gramaticas," ");return VOID;}
"volatile"		  															{strcat(gramaticas,yytext);strcat(gramaticas," ");return VOLATILE;}
"while"			  															{strcat(gramaticas,yytext);strcat(gramaticas," ");return WHILE;}

[0-9][0-9]*		  															{strcat(gramaticas,yytext);strcat(gramaticas," ");return INTEGER;}

"/*"([^*]|\*+[^*/])*\*+"/"    		        								
"//".*$                  		        									

0[xX][a-fA-F0-9]+(u|U|l|L)*?	     										{strcat(gramaticas,yytext);strcat(gramaticas," ");return CONSTANT;}
0[0-9]+(u|U|l|L)*?		     												{strcat(gramaticas,yytext);strcat(gramaticas," ");return CONSTANT;}
[0-9]+(u|U|l|L)*?		     												{strcat(gramaticas,yytext);strcat(gramaticas," ");return CONSTANT;}
L?'(\\.|[^\\'])+'	             											{strcat(gramaticas,yytext);strcat(gramaticas," ");return CONSTANT;}
[0-9]+[Ee][+-]?[0-9]+(f|F|l|L)?		 										{strcat(gramaticas,yytext);strcat(gramaticas," ");return CONSTANT;}
[0-9]*"."[0-9]+([Ee][+-]?[0-9]+)?(f|F|l|L)?									{strcat(gramaticas,yytext);strcat(gramaticas," ");return CONSTANT;}
[0-9]+"."[0-9]*([Ee][+-]?[0-9]+)?(f|F|l|L)?									{strcat(gramaticas,yytext);strcat(gramaticas," ");return CONSTANT;}

\\[\n|\z|\s|\r]|\\            												{strcat(gramaticas,yytext);strcat(gramaticas," ");return SLASH;}
"{"                       													{strcat(gramaticas,yytext);strcat(gramaticas," ");return LEFT_BRACKET;}
"}"                       													{strcat(gramaticas,yytext);strcat(gramaticas," ");return RIGHT_BRACKET;}
","                       													{strcat(gramaticas,yytext);strcat(gramaticas," ");return COMMA;}
"("                       													{strcat(gramaticas,yytext);strcat(gramaticas," ");return LEFT_PARENTHESIS;}
")"                       													{strcat(gramaticas,yytext);strcat(gramaticas," ");return RIGHT_PARENTHESIS;}
"]"                       													{strcat(gramaticas,yytext);strcat(gramaticas," ");return RIGHT_SBRACKET;}
"["                       													{strcat(gramaticas,yytext);strcat(gramaticas," ");return LEFT_SBRACKET;}
";"                       													{strcat(gramaticas,yytext);strcat(gramaticas," ");return SEMICOLON;}
":"                       													{strcat(gramaticas,yytext);strcat(gramaticas," ");return COLON;}
"!"                       													{strcat(gramaticas,yytext);strcat(gramaticas," ");return EXCLAMATION;}
"~"                       													{strcat(gramaticas,yytext);strcat(gramaticas," ");return PRIME;}
"?"                       													{strcat(gramaticas,yytext);strcat(gramaticas," ");return INTERROGATION;}
"^"                       													{strcat(gramaticas,yytext);strcat(gramaticas," ");return UP_ARROW;}
"+"			              													{strcat(gramaticas,yytext);strcat(gramaticas," ");return PLUS;}
"-"			              													{strcat(gramaticas,yytext);strcat(gramaticas," ");return MINUS;}
"/"			              													{strcat(gramaticas,yytext);strcat(gramaticas," ");return DIV;}
"%"			              													{strcat(gramaticas,yytext);strcat(gramaticas," ");return MOD;}
"*"			              													{strcat(gramaticas,yytext);strcat(gramaticas," ");return MUL;}
"++"			          													{strcat(gramaticas,yytext);strcat(gramaticas," ");return INC_OP;}
"--"			          													{strcat(gramaticas,yytext);strcat(gramaticas," ");return DEC_OP;}
"="			              													{strcat(gramaticas,yytext);strcat(gramaticas," ");return EQU;}
"<"			              													{strcat(gramaticas,yytext);strcat(gramaticas," ");return LESS;}
">"			              													{strcat(gramaticas,yytext);strcat(gramaticas," ");return GREATER;}
"<="			          													{strcat(gramaticas,yytext);strcat(gramaticas," ");return LE_OP;}
">="			          													{strcat(gramaticas,yytext);strcat(gramaticas," ");return GE_OP;}
"=="			          													{strcat(gramaticas,yytext);strcat(gramaticas," ");return EQ_OP;}
"!="			          													{strcat(gramaticas,yytext);strcat(gramaticas," ");return NE_OP;}
"+="			          													{strcat(gramaticas,yytext);strcat(gramaticas," ");return ADD_ASSIGN;}
"-="			          													{strcat(gramaticas,yytext);strcat(gramaticas," ");return SUB_ASSIGN;}
"*="			          													{strcat(gramaticas,yytext);strcat(gramaticas," ");return MUL_ASSIGN;}
"/="			          													{strcat(gramaticas,yytext);strcat(gramaticas," ");return DIV_ASSIGN;}
"%="			          													{strcat(gramaticas,yytext);strcat(gramaticas," ");return MOD_ASSIGN;}
"."			              													{strcat(gramaticas,yytext);strcat(gramaticas," ");return DOT;}
"&"			              													{strcat(gramaticas,yytext);strcat(gramaticas," ");return BIT_AND;}
"|"			              													{strcat(gramaticas,yytext);strcat(gramaticas," ");return BIT_OR;}
"->"			          													{strcat(gramaticas,yytext);strcat(gramaticas," ");return PTR_OP;}
"&&"			          													{strcat(gramaticas,yytext);strcat(gramaticas," ");return AND_OP;}
"||"			         													{strcat(gramaticas,yytext);strcat(gramaticas," ");return OR_OP;}
"..."			         													{strcat(gramaticas,yytext);strcat(gramaticas," ");return ELLIPSIS;}
">>="			          													{strcat(gramaticas,yytext);strcat(gramaticas," ");return RIGHT_ASSIGN;}
"<<="			          													{strcat(gramaticas,yytext);strcat(gramaticas," ");return LEFT_ASSIGN;}
"&="			          													{strcat(gramaticas,yytext);strcat(gramaticas," ");return AND_ASSIGN;}
"^="			          													{strcat(gramaticas,yytext);strcat(gramaticas," ");return XOR_ASSIGN;}
"|="			          													{strcat(gramaticas,yytext);strcat(gramaticas," ");return OR_ASSIGN;}
">>"			          													{strcat(gramaticas,yytext);strcat(gramaticas," ");return RIGHT_OP;}
"<<"			          													{strcat(gramaticas,yytext);strcat(gramaticas," ");return LEFT_OP;}

"#"(" "|\t)*"include"  	  													{strcat(gramaticas,yytext);strcat(gramaticas," ");return INCLUDE;}
"#"(" "|\t)*"define"	  													{strcat(gramaticas,yytext);strcat(gramaticas," ");fdefine=0;return DEFINE;}
[a-zA-Z][_a-zA-Z0-9]*|_[_a-zA-Z0-9]*|_    									{strcat(gramaticas,yytext);strcat(gramaticas," ");return IDENTIFIER;}
["](\\[^"])*["]																{strcat(gramaticas,yytext);strcat(gramaticas," ");return LITERAL;}
["]([^"]|\\.)*["]	   	      	 											{strcat(gramaticas,yytext);strcat(gramaticas," ");return LITERAL;}

L?'(\\.|[^\\']|\n)*'          	  											{strcat(gramaticas,yytext);strcat(gramaticas," ");return LITERAL;}
\n|\z|\s|\r		 															{linea++;endline=0;/*ignore*/;if(fdefine==0){fdefine=1;return ('\n');}else{fdefine=1;}}


[ \t\n]

.|[0-9]*[a-zA-Z][_a-zA-Z0-9]*   											yyerror(yytext);


%%

int yywrap(void)
{
    return 1;
}
