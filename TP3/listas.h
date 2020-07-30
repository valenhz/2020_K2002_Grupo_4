#include <stdlib.h>
#include <stdio.h>


// algunas definiciones y funciones para listas de INT

typedef struct nodo{
    int numero;
    struct nodo *sig;
}Nodo;

typedef struct lista{
    Nodo* cabeza;
}Lista;

Nodo* CrearNodo(int numeroNuevo){
    Nodo* nodo = (Nodo *) malloc(sizeof (Nodo));
    nodo->numero = numeroNuevo;
    nodo->sig = NULL;
    return nodo;
}

void DestruirNodo (Nodo* nodo){
    free(nodo);
}

void Insertar(Lista* lista, int numero){ //creo q falla por aca o por esta zona, no entiendo bien por que
    Nodo* nodo = CrearNodo(numero);
    nodo->sig = lista->cabeza;
    lista->cabeza = nodo;
}

int Obtener (int n, Lista* lista){
    if (lista->cabeza == NULL){
        return 0; //aca iba NULL pero me tira error no se como podriamos poner
    } else {
        Nodo* puntero = lista->cabeza;
        int posicion = 0;
        while (posicion < n && puntero->sig){
            puntero = puntero->sig;
            posicion++;
        }
        return puntero->numero;
    }
}

int TamanioLista (Lista* lista){
    if (lista->cabeza == NULL){
        return 0;
    } else {
        int n = 1;
        Nodo* puntero = lista->cabeza;
        while(puntero->sig){
            puntero = puntero->sig;
            n++;
        }
        return n;
    }
}

void MostrarLista (Lista* lista){ 
    int tamanio = TamanioLista(lista);
    int n = 0;
    int numero = 0;
    while(n<tamanio){
        numero = Obtener (n, lista);
        printf("%i \n", numero);
        n++;
    }
}
