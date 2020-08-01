
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
}
0[0-7]* {printf("Encontre una constante entera octal \n");}
0[xX][0-9a-fA-F]+ {printf("Encontre una constante entera hexadecimal \n");}

[(){}\[\]\;\,] {printf("Encontre el caracter de puntuacion %c \n",yytext[0]);}

"return" | "sizeof" | "typedef" | {printf("Encontre una palabra reservada \n");}

"char" | "double" | "float" | "int" | "long" | "struct" | "void" | "unsigned" | "signed" | "const" {printf("Encontre un identificador \n");}

"if" | "else" | "do" | "for" | "while" {printf("Encontre una estructura de control \n");}

[a-zA-Z_][a-zA-Z0-9_]* {printf("Encontre un identificador \n");}

\".*\" {printf("Se encontro un literal cadena \n");}

"*"|"/"|"-"|"+"|"++"|"&"|"%"|"<"|">"|"="|"!"|"!="|"&&"|"<="|">="|"+="|"=="|"||" {printf("Encontre un operador \n");}


%%

int main() {
   
    int a = 0;

    yyin = fopen("entrada.c", "r"); 
    yyout = fopen("salida.txt", "w");	
    yylex();
	
    printf("la suma de todos los decimales es %i \n", sumaDecimales);

    return 0;
}

