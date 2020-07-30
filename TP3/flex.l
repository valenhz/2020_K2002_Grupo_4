
%option noyywrap

%{

#include <stdio.h>
#include "listas.h"

int sumaDecimales = 0;

%}

%%

[1-9][0-9]* {
    int numero = atoi(yytext);
    sumaDecimales += numero;
    printf("la suma de todos los decimales es %i \n", sumaDecimales);
}
0[0-7]* {printf("Encontre una constante entera octal \n");}
0[xX][0-9a-fA-F]+ {printf("Encontre una constante entera hexadecimal \n");}


[a-zA-Z_][a-zA-Z0-9_]* {printf("Encontre un identificador \n");}

[+-=/*<>] {printf("Encontre un operador \n");}


%%

int main() {
   
    yyin = fopen("entrada.c", "r"); 
    yyout = fopen("salida.txt", "w");	
    yylex();
	
    return 0;
}

