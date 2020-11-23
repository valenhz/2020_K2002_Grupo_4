#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void MostrarTitulo (FILE* archivo, char *titulo){
    fprintf(archivo, "\n*%s*\n\n", titulo);
}