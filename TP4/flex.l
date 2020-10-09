%option noyywrap

%{

#include <stdio.h>
#include <stdlib.h>
#include "bison.tab.h"

%}

ESTRUCTURAS_DE_CONTROL "if"|"else"|"do"|"for"|"while"|"switch"|"case"|"break"|"continue"|"default"|"return"
PALABRAS_RESERVADAS "char"|"double"|"float"|"int"|"long"|"short"|"struct"|"void"|"unsigned"|"signed"|"const"|"typedef"|"enum"|"union"|"auto"|"extern"|"register"|"goto"|"static"|"volatile"

OPERADORES "*"|"/"|"-"|"+"|"&"|"%"|"<"|">"|"!"
OPERADOR_ASIGNACION "="|"*="|"/="|"%="|"+="|"-="|"^="
OPERADOR_O_LOGICO "||"
OPERADOR_Y_LOGICO "&&"
COMPARADOR_IGUALDAD "=="
COMPARADOR_DISTINTO "!="
MAYOR_O_IGUAL ">="
MENOR_O_IGUAL "<="
OPERADOR_INCREMENTO "++"
OPERADOR_DECREMENTO "--"
SIZE_OF "sizeof"
FLECHA "->"

CARACTERES_DE_PUNTUACION [(){}\[\]\;\,]

DIGITO_DECIMAL [0-9]
DIGITO_OCTAL [0-7]
DIGITO_HEXA [0-9a-fA-F]

%%

[\n] {}

[1-9]{DIGITO_DECIMAL}* {yylval.entero = atoi(yytext); return CONSTANTE_ENTERA;}

0{DIGITO_OCTAL}* {yylval.entero = strtol(yytext, NULL, 0); return CONSTANTE_ENTERA;}

0[xX]{DIGITO_HEXA}+ {yylval.entero = strtol(yytext, NULL, 0); return CONSTANTE_ENTERA;}

[0–9]*\.[0–9]+ {yylval.flotante = atof(yytext); return CONSTANTE_REAL;}

[0-9]*(\.)[0-9]+([eE]([\+\-]?)[0-9]+)? {yylval.flotante = atof(yytext); return CONSTANTE_REAL;}

\/\/[^\n]* { }

\/\*[^(\*\/)]*\*+\/ { }

\'(.|\\n)\' { }

{OPERADOR_O_LOGICO} {strcpy(yylval.cadena, yytext); return OPERADOR_O_LOGICO;}

{OPERADOR_Y_LOGICO} {strcpy(yylval.cadena, yytext); return OPERADOR_Y_LOGICO;}

{COMPARADOR_IGUALDAD} {strcpy(yylval.cadena, yytext); return COMPARADOR_IGUALDAD;}

{COMPARADOR_DISTINTO} {strcpy(yylval.cadena, yytext); return COMPARADOR_DISTINTO;}

{MAYOR_O_IGUAL} {strcpy(yylval.cadena, yytext); return MAYOR_O_IGUAL;}

{MENOR_O_IGUAL} {strcpy(yylval.cadena, yytext); return MENOR_O_IGUAL;}

{OPERADOR_INCREMENTO} {strcpy(yylval.cadena, yytext); return OPERADOR_INCREMENTO;}

{OPERADOR_DECREMENTO} {strcpy(yylval.cadena, yytext); return OPERADOR_DECREMENTO;}

{SIZE_OF} {strcpy(yylval.cadena, yytext); return SIZE_OF;}

{FLECHA} {strcpy(yylval.cadena, yytext); return FLECHA;}

{CARACTERES_DE_PUNTUACION} {return yytext[0];}

{PALABRAS_RESERVADAS} {strcpy(yylval.cadena, yytext); return PALABRA_RESERVADA;}

{ESTRUCTURAS_DE_CONTROL} { }

[a-zA-Z_][a-zA-Z0-9_]* {strcpy(yylval.cadena, yytext); return IDENTIFICADOR;}

\"[^"]*\" { }

{OPERADORES} {return yytext[0];}

{OPERADOR_ASIGNACION} {strcpy(yylval.cadena, yytext); return OPERADOR_ASIGNACION;}

.* { }

%%