
%option noyywrap

%{

#include <stdio.h>
//#include "listas.h"
#include "listav2.h"
#include "operadores.h"
#include "masfunciones.h"

int sumaDecimales = 0;
Nodo *listaDecimales = NULL;
Nodo *listaOctales = NULL;
Nodo *listaHexadecimales = NULL;

%}

ESTRUCTURAS_DE_CONTROL "if"|"else"|"do"|"for"|"while"|"switch"|"case"|"break"
TIPOS_DE_DATO "char"|"double"|"float"|"int"|"long"|"struct"|"void"|"unsigned"|"signed"|"const"
OTRAS_PALABRASRESERVADAS "return"|"sizeof"|"typedef"

OPERADORES "*"|"/"|"-"|"+"|"++"|"&"|"%"|"<"|">"|"="|"!"|"!="|"&&"|"<="|">="|"+="|"=="|"||"
%%

[1-9][0-9]* {
    int numero = atoi(yytext);
    sumaDecimales += numero;
    insertar(&listaDecimales, numero);
}
0[0-7]* {
    int numero = strtol(yytext, NULL, 8);
    insertar(&listaOctales, numero);
}
0[xX][0-9a-fA-F]+ {
    int numero = strtol(yytext, NULL, 16);
    insertar(&listaHexadecimales, numero);
}
[0–9]*\.[0–9]+ {printf("Encontre un numero real en punto fijo\n");}

\/\/[^\n]* {printf("Encontre el comentario de una linea: %s\n", yytext);}
\/\*[^(\*\/)]*\*+\/ {printf("Encontre el comentario largo: %s\n", yytext);}

\'.\' {printf("Encontre una constante caracter\n");}

[(){}\[\]\;\,] {
    printf("Encontre el caracter de puntuacion %c \n",yytext[0]);
    agregarCaracter(yytext[0], caracteresP);
}

{OTRAS_PALABRASRESERVADAS} {printf("Encontre una palabra reservada \n");}

{TIPOS_DE_DATO} {printf("Encontre un tipo de dato \n");}

{ESTRUCTURAS_DE_CONTROL} {printf("Encontre una estructura de control \n");}

[a-zA-Z_][a-zA-Z0-9_]* {printf("Encontre un identificador \n");}

\".*\" {printf("Se encontro un literal cadena \n");}

{OPERADORES} {
    printf("Encontre un operador \n");
    agregarOperador(yytext, operadores);
    }

[.]* {printf("Encontre un caracter/ cadena de caracteres no reconocidos \n");}

%%

int main() {

    yyin = fopen("entrada.c", "r"); 
    yyout = fopen("salida.txt", "w");	
    yylex();
	
    FILE * archivoSalida = fopen("Informe.txt","w");
    
    mostrarTitulo(archivoSalida, "IDENTIFICADORES");

    mostrarTitulo(archivoSalida, "LITERALES CADENA");
    
    mostrarTitulo(archivoSalida, "PALABRAS RESERVADAS");
    
    mostrarTitulo(archivoSalida, "CONSTANTES");
        mostrarSubtitulo(archivoSalida, "Constantes Decimales");
        fprintf(archivoSalida, "        Lista de todos los decimales que aparecieron\n");
        mostrarLista(archivoSalida, listaDecimales);
        fprintf(archivoSalida, "\n        La suma de todos los decimales es %i \n", sumaDecimales);
        mostrarSubtitulo(archivoSalida, "Constantes Octales");
        mostrarListaOctal(archivoSalida, listaOctales);
        mostrarSubtitulo(archivoSalida, "Constantes Hexadecimales");
        mostrarListaHexa(archivoSalida, listaHexadecimales);
        mostrarSubtitulo(archivoSalida, "Constantes Reales");
        mostrarSubtitulo(archivoSalida, "Constantes Caracter");
    
    mostrarTitulo(archivoSalida, "OPERADORES");
        mostrarOperadores(archivoSalida, operadores);
    
    mostrarTitulo(archivoSalida, "CARACTERES DE PUNTUACION");
        mostrarCdePuntuacion(archivoSalida, caracteresP);
    mostrarTitulo(archivoSalida, "COMENTARIOS");
    mostrarTitulo(archivoSalida, "CARACTERES NO RECONOCIDOS");
    

    return 0;
}

