#include <stdlib.h>
#include <stdio.h>
#include <string.h>

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

int insertarFinal(Nodo **cabeza, int numero){ 
    Nodo *nuevo = NULL, *aux = *cabeza;
    nuevo = CrearNodo(numero);
    if (nuevo != NULL){    
        while(aux->sig != NULL){
                aux = aux->sig;
            } 
            aux->sig = nuevo;
            return 1;
    } else {
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

void mostrarOctal (FILE* archivo, int octal){
    fprintf(archivo, "        %o -> valor decimal %d \n", octal, octal);
}

void mostrarHexa (FILE* archivo, int hexa){
    fprintf(archivo, "        %x -> valor decimal %d \n", hexa, hexa);
}

void mostrarListaOctal (FILE *archivo, Nodo *cabeza){ 
    Nodo *aux = cabeza;
    while(aux != NULL){
        mostrarOctal (archivo, aux->numero);
        aux = aux->sig;
    }
}

void mostrarListaHexa (FILE *archivo, Nodo *cabeza){ 
    Nodo *aux = cabeza;
    while(aux != NULL){
        mostrarHexa (archivo, aux->numero);
        aux = aux->sig;
    }
}

typedef struct nodochar{
    char palabra[500];
    struct nodochar *sig;
}NodoChar;

NodoChar* CrearNodoC(char nuevaPalabra[]){
    NodoChar* nodo = NULL;
    nodo = (NodoChar *) malloc(sizeof (NodoChar));
        if (nodo != NULL){
        strcpy(nodo->palabra, nuevaPalabra);
        nodo->sig = NULL;
    }
    return nodo;
}

int insertarC(NodoChar **cabeza, char nuevaPalabra[]){ 
    NodoChar *nuevo;
    nuevo = CrearNodoC(nuevaPalabra);
    if (nuevo != NULL){
        nuevo->sig = *cabeza;
        *cabeza = nuevo;
        return 1;
    } else{
        return 0;
    }
}

int insertarFinalC(NodoChar **cabeza, char nuevaPalabra[]){ 
    NodoChar *nuevo = NULL, *aux = *cabeza;
    nuevo = CrearNodoC(nuevaPalabra);
    if (nuevo != NULL){    
        while(aux->sig != NULL){
                aux = aux->sig;
            } 
            aux->sig = nuevo;
            return 1;
    } else {
        return 0;
    } 
}

void mostrarListaC (FILE* archivo, NodoChar *cabeza){ 
    NodoChar *auxi = cabeza;
    while(auxi != NULL){
        fprintf(archivo, "        %s\n",auxi->palabra);
        auxi = auxi->sig;
    }
}

typedef struct nodoliteralcadena{
    char cadena[500];
    int largo;
    struct nodoliteralcadena *sig;
}NodoL;

NodoL* CrearNodoL(char nuevaCadena[], int tamanio){
    NodoL* nodo = NULL;
    nodo = (NodoL *) malloc(sizeof (NodoL));
        if (nodo != NULL){
        strcpy(nodo->cadena, nuevaCadena);
        nodo->largo = tamanio;
        nodo->sig = NULL;
    }
    return nodo;
}

int insertarL(NodoL **cabeza, char nuevaCadena[], int tamanio){ 
    NodoL *nuevo;
    nuevo = CrearNodoL(nuevaCadena, tamanio);
    if (nuevo != NULL){
        nuevo->sig = *cabeza;
        *cabeza = nuevo;
        return 1;
    } else{
        return 0;
    }
}

void mostrarListaL (FILE* archivo, NodoL *cabeza){ 
    NodoL *auxi = cabeza;
    while(auxi != NULL){
        fprintf(archivo, "        %s\n",auxi->cadena);
        fprintf(archivo, "        largo = %d\n\n",auxi->largo);
        auxi = auxi->sig;
    }
}

int insertarEnOrdenC(NodoChar **cabeza, char nuevaPalabra[]){ 
    if (*cabeza == NULL){
        insertarC(cabeza, nuevaPalabra);
        return 1;
    } else {
        insertarFinalC(cabeza, nuevaPalabra);
        return 2;
    }
}

int insertarEnOrden(Nodo **cabeza, int numero){ 
    if (*cabeza == NULL){
        insertar(cabeza, numero);
        return 1;
    } else {
        insertarFinal(cabeza, numero);
        return 2;
    }
}

void mostrarListaEnumerada (FILE* archivo, NodoChar *cabeza){ 
    NodoChar *auxi = cabeza;
    int i = 1;
    while(auxi != NULL){
        fprintf(archivo, "        %d- %s\n",i, auxi->palabra);
        auxi = auxi->sig;
        i++;
    }
}