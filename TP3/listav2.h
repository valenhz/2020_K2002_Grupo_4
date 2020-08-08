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

typedef struct nodoId{
    char identificador[500];
    int nroRepeticiones;
    struct nodoId *sig;
} NodoId;

void insertarId(NodoId **listaId, char nuevoId[]){
    NodoId* nuevo_nodo = NULL;
    nuevo_nodo = (NodoId *) malloc(sizeof (NodoId));
        strcpy(nuevo_nodo->identificador, nuevoId);
    nuevo_nodo -> nroRepeticiones = 1;
    NodoId *aux1 = *listaId;
    NodoId *aux2 = NULL;
    
    while((aux1 != NULL) && (strcasecmp(aux1->identificador, nuevoId) <= 0) ){
        if(strcmp(aux1->identificador, nuevoId) == 0){
            aux1->nroRepeticiones++;
            return;
        } else {
            aux2 = aux1;
            aux1 = aux1 -> sig;}
    }
    if(*listaId == aux1){
        *listaId = nuevo_nodo;
    }
    else {
        aux2->sig = nuevo_nodo;}
    
    nuevo_nodo->sig = aux1;
}

void mostrarListaId(NodoId **listaId, FILE * informe){
    NodoId* actual = NULL;
    actual = (NodoId *) malloc(sizeof (NodoId));
    actual = *listaId;
    int numeroDeIdentificador = 1;
    while(actual != NULL){
        fprintf(informe, "%d) %s     numero de apariciones: %d \n",numeroDeIdentificador, actual->identificador, actual->nroRepeticiones);
        actual = actual->sig;
    numeroDeIdentificador++;
    }
}