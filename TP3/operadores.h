#include <stdio.h>
#include <stdlib.h>

typedef struct caracterPuntuacion {
    char caracter;
    int cantidad;
} Puntuacion;

Puntuacion caracteresP[8] = {
    {'(', 0},
    {')', 0},
    {'[', 0},
    {']', 0},
    {'{', 0},
    {'}', 0},
    {';', 0},
    {',', 0}
};

void agregarCaracter (char caracterNuevo, Puntuacion vector[]) {
    for (int i = 0; i < 8; i++) {
        char caracter = vector[i].caracter;
        if (caracter == caracterNuevo) {
            vector[i].cantidad ++;
        }
    }
}

void mostrarCdePuntuacion (FILE* archivo, Puntuacion vector[]) {
    for (int i = 0; i < 8; i++) {
        if (vector[i].cantidad > 0) {
            if (vector[i].cantidad == 1) {
                fprintf(archivo, "El caracter de puntuacion %c aparecio %i vez \n", vector[i].caracter, vector[i].cantidad);    
            } else {
                fprintf(archivo, "El caracter de puntuacion %c aparecio %i veces \n", vector[i].caracter, vector[i].cantidad);
            }
        }  
    }
}

