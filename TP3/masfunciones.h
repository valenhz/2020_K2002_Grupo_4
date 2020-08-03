#include <stdlib.h>
#include <stdio.h>

const char TAB[5] = "    ";

void mostrarOctal (FILE* archivo, int octal){
    fprintf(archivo, "%s%o -> valor decimal %d \n", TAB, octal, octal);
}

void mostrarHexa (FILE* archivo, int hexa){
    fprintf(archivo, "%s%x -> valor decimal %d \n", TAB, hexa, hexa);
}

void mostrarSubtitulo (FILE* archivo, char titulo[20]){
    fprintf(archivo, "\n%s**%s**\n\n", TAB, titulo);
}

void mostrarTitulo (FILE* archivo, char titulo[20]){
    fprintf(archivo, "\n*%s*\n\n", titulo);
}

