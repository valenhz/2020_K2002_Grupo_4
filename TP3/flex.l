
%option noyywrap

%{

#include <stdio.h>
#include "listas.h"
#include "operadores.h"

int sumaDecimales = 0;

%}

ESTRUCTURAS_DE_CONTROL "if"|"else"|"do"|"for"|"while"|"switch"|"case"|"break"
TIPOS_DE_DATO "char"|"double"|"float"|"int"|"long"|"struct"|"void"|"unsigned"|"signed"|"const"

OPERADORES "*"|"/"|"-"|"+"|"++"|"&"|"%"|"<"|">"|"="|"!"|"!="|"&&"|"<="|">="|"+="|"=="|"||"
%%

[1-9][0-9]* {
    int numero = atoi(yytext);
    sumaDecimales += numero;
}
0[0-7]* {printf("Encontre una constante entera octal \n");}
0[xX][0-9a-fA-F]+ {printf("Encontre una constante entera hexadecimal \n");}

[(){}\[\]\;\,] {
    printf("Encontre el caracter de puntuacion %c \n",yytext[0]);
    agregarCaracter(yytext[0], caracteresP);
}

"return"|"sizeof"|"typedef" {printf("Encontre una palabra reservada \n");}

{TIPOS_DE_DATO} {printf("Encontre un tipo de dato \n");}

{ESTRUCTURAS_DE_CONTROL} {printf("Encontre una estructura de control \n");}

[a-zA-Z_][a-zA-Z0-9_]* {printf("Encontre un identificador \n");}

\".*\" {printf("Se encontro un literal cadena \n");}

{OPERADORES} {printf("Encontre un operador \n");}

\/\/[^\n]* {printf("Encontre un comentario \n");}

%%

int main() {
   
    int a = 0;

    yyin = fopen("entrada.c", "r"); 
    yyout = fopen("salida.txt", "w");	
    yylex();
	
    FILE * archivoSalida = fopen("Informe.txt","w");
    printf("la suma de todos los decimales es %i \n", sumaDecimales);
    mostrarCdePuntuacion(archivoSalida, caracteresP);

    return 0;
}

