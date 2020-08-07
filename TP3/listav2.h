#include <stdlib.h>
#include <stdio.h>

typedef struct nodo{
    int numero;
    struct nodo *sig;
}Nodo;

Nodo* CrearNodo(int numeroNuevo){
    Nodo* nodo = NULL;
    nodo = (Nodo *) malloc(sizeof (Nodo));
        if (nodo != NULL){
        nodo->numero = numeroNuevo;
        nodo->sig = NULL;
    }
    return nodo;
}

int insertar(Nodo **cabeza, int numero){ 
    Nodo *nuevo;
    nuevo = CrearNodo(numero);
    if (nuevo != NULL){
        nuevo->sig = *cabeza;
        *cabeza = nuevo;
        return 1;
    } else{
        return 0;
    }
}

void mostrarLista (FILE *archivo, Nodo *cabeza){ 
    Nodo *aux = cabeza;
    while(aux != NULL){
        fprintf(archivo, "        -> %d\n",aux->numero);
        aux = aux->sig;
    }
}