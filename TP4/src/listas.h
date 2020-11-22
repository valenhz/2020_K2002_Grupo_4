#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

typedef struct dec {
    char *tipoDato;
    char *ID;
    struct dec *sig;
} DECLARACION;

typedef struct asig {
    char *ID;
    char *valor;
    struct asig *sig;
} ASIGNACION;

DECLARACION* CrearNodo(char *tipo, char *identificador){
    DECLARACION* nodo = NULL;
    nodo = (DECLARACION *) malloc(sizeof (DECLARACION));
        if (nodo != NULL){
        strcpy(nodo->tipoDato, tipo);
        strcpy(nodo->ID, identificador);
        nodo->sig = NULL;
    }
    return nodo;
}

int Insertar(DECLARACION **cabeza, char *tipo, char *identificador){ 
    DECLARACION *nuevo;
    nuevo = CrearNodo(tipo, identificador);
    if (nuevo != NULL){
        nuevo->sig = *cabeza;
        *cabeza = nuevo;
        return 1;
    } else{
        return 0;
    }
}

void MostrarLista (FILE* archivo, DECLARACION *cabeza){ 
    DECLARACION *auxi = cabeza;
    while(auxi != NULL){
        fprintf(archivo, "Se declaro un identificador de tipo %s y nombre %s\n",auxi->tipoDato,auxi->ID);
        auxi = auxi->sig;
    }
}