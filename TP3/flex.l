
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
NodoChar *listaDeComentarios = NULL;
NodoChar *listaDeComentariosLargos = NULL;
NodoL *listaDeLiteralesCadena = NULL;

%}

ESTRUCTURAS_DE_CONTROL "if"|"else"|"do"|"for"|"while"|"switch"|"case"|"break"
TIPOS_DE_DATO "char"|"double"|"float"|"int"|"long"|"struct"|"void"|"unsigned"|"signed"|"const"
OTRAS_PALABRASRESERVADAS "return"|"sizeof"|"typedef"

OPERADORES "*"|"/"|"-"|"+"|"++"|"&"|"%"|"<"|">"|"="|"!"|"!="|"&&"|"<="|">="|"+="|"=="|"||"
CARACTERES_DE_PUNTUACION [(){}\[\]\;\,]

DIGITO_DECIMAL [0-9]
DIGITO_OCTAL [0-7]
DIGITO_HEXA [0-9a-fA-F]

%%

[1-9]{DIGITO_DECIMAL}* {
    int numero = atoi(yytext);
    sumaDecimales += numero;
    insertar(&listaDecimales, numero);
}
0{DIGITO_OCTAL}* {
    int numero = strtol(yytext, NULL, 8);
    insertar(&listaOctales, numero);
}
0[xX]{DIGITO_HEXA}+ {
    int numero = strtol(yytext, NULL, 16);
    insertar(&listaHexadecimales, numero);
}
[0–9]*\.[0–9]+ {printf("Encontre un numero real en punto fijo\n");}

\/\/[^\n]* {
    insertarC(&listaDeComentarios, yytext);    
}
\/\*[^(\*\/)]*\*+\/ {
    insertarC(&listaDeComentariosLargos, yytext);    
}

\'.\' {printf("Encontre una constante caracter\n");}

{CARACTERES_DE_PUNTUACION} {
    agregarCaracter(yytext[0], caracteresP);
}

{OTRAS_PALABRASRESERVADAS} {printf("Encontre una palabra reservada \n");}

{TIPOS_DE_DATO} {printf("Encontre un tipo de dato \n");}

{ESTRUCTURAS_DE_CONTROL} {printf("Encontre una estructura de control \n");}

[a-zA-Z_][a-zA-Z0-9_]* {printf("Encontre un identificador \n");}

\"[^"]*\" {
    insertarL(&listaDeLiteralesCadena, yytext, yyleng);
}

{OPERADORES} {
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
        mostrarListaL(archivoSalida, listaDeLiteralesCadena);
    
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
        mostrarSubtitulo(archivoSalida, "Comentarios de una linea");
        mostrarListaC(archivoSalida, listaDeComentarios);
        mostrarSubtitulo(archivoSalida, "Comentarios largos");
        mostrarListaC(archivoSalida, listaDeComentariosLargos);
    mostrarTitulo(archivoSalida, "CARACTERES NO RECONOCIDOS");
    

    return 0;
}

