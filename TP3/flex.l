
%option noyywrap

%{

#include <stdio.h>
#include "listas.h"
#include "operadores.h"
#include "masfunciones.h"

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
[0–9]*\.[0–9]+ {printf("Encontre un numero real en punto fijo\n");}

\/\/[^\n]* {printf("Encontre un comentario \n");}

\'.\' {printf("Encontre una constante caracter\n");}

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

[.]* {printf("Encontre un caracter/ cadena de caracteres no reconocidos \n");}

%%

int main() {
   
    int a = 0;

    yyin = fopen("entrada.c", "r"); 
    yyout = fopen("salida.txt", "w");	
    yylex();
	
    FILE * archivoSalida = fopen("Informe.txt","w");
    
    mostrarTitulo(archivoSalida, "IDENTIFICADORES");
    mostrarTitulo(archivoSalida, "LITERALES CADENA");
    mostrarTitulo(archivoSalida, "PALABRAS RESERVADAS");
    mostrarTitulo(archivoSalida, "CONSTANTES");
    mostrarSubtitulo(archivoSalida, "Constantes Decimales");
    fprintf(archivoSalida, "        aca va la lista de todos los decimales que aparecieron\n");
    fprintf(archivoSalida, "\n        La suma de todos los decimales es %i \n", sumaDecimales);
    mostrarSubtitulo(archivoSalida, "Constantes Octales");
    mostrarSubtitulo(archivoSalida, "Constantes Hexadecimales");
    mostrarSubtitulo(archivoSalida, "Constantes Reales");
    mostrarSubtitulo(archivoSalida, "Constantes Caracter");
    mostrarTitulo(archivoSalida, "OPERADORES");
    mostrarTitulo(archivoSalida, "CARACTERES DE PUNTUACION");
    mostrarCdePuntuacion(archivoSalida, caracteresP);
    mostrarTitulo(archivoSalida, "COMENTARIOS");
    mostrarTitulo(archivoSalida, "CARACTERES NO RECONOCIDOS");
    

    return 0;
}

