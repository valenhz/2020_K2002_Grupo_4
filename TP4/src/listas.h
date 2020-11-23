#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void MostrarTitulo (FILE* archivo, char *titulo){
    fprintf(archivo, "\n*%s*\n\n", titulo);
}
typedef struct dec {
    char *tipoDato;
    char *ID;
    struct dec *sig;
} DECLARACION;

DECLARACION* CrearNodoD(char *tipo, char *identificador){
    DECLARACION* nodo = NULL;
    nodo = (DECLARACION *) malloc(sizeof (DECLARACION));
        if (nodo != NULL){
        strcpy(nodo->tipoDato, tipo);
        strcpy(nodo->ID, identificador);
        nodo->sig = NULL;
    }
    return nodo;
}

int InsertarD(DECLARACION **cabeza, char *tipo, char *identificador){ 
    DECLARACION *nuevo;
    nuevo = CrearNodoD(tipo, identificador);
    if (nuevo != NULL){
        nuevo->sig = *cabeza;
        *cabeza = nuevo;
        return 1;
    } else{
        return 0;
    }
}

void MostrarListaD (FILE* archivo, DECLARACION *cabeza){ 
    DECLARACION *auxi = cabeza;
    while(auxi != NULL){
        fprintf(archivo, "Se declaro un identificador de tipo %s y nombre %s\n",auxi->tipoDato,auxi->ID);
        auxi = auxi->sig;
    }
}

typedef struct asig {
    char *ID;
    char *valor;
    struct asig *sig;
} ASIGNACION;

ASIGNACION* CrearNodoA(char *value, char *identificador){
    ASIGNACION* nodo = NULL;
    nodo = (ASIGNACION *) malloc(sizeof (ASIGNACION));
        if (nodo != NULL){
        strcpy(nodo->valor, value);
        strcpy(nodo->ID, identificador);
        nodo->sig = NULL;
    }
    return nodo;
}

int InsertarA(ASIGNACION **cabeza, char *value, char *identificador){ 
    ASIGNACION *nuevo;
    nuevo = CrearNodoA(value, identificador);
    if (nuevo != NULL){
        nuevo->sig = *cabeza;
        *cabeza = nuevo;
        return 1;
    } else{
        return 0;
    }
}

void MostrarListaA (FILE* archivo, ASIGNACION *cabeza){ 
    ASIGNACION *auxi = cabeza;
    while(auxi != NULL){
        fprintf(archivo, "Al identificador %s se le asigno el valor %s\n",auxi->ID,auxi->valor);
        auxi = auxi->sig;
    }
}

int esEntero(char *valor){

    return 1;
}

int esReal(char *valor){

    return 1;
}
int esLiteralCadena(char *valor){
    
    return 1;
}

int esCaracter(char *valor){

    return 1;
}

int validarTipo(char *tipo, char *valor){
    if(tipo == "int" || tipo == "double"){
        return esEntero(valor);
    }
    if(tipo == "float"){
        return esEntero(valor) || esReal(valor);
    }
    if(tipo == "char"){
        return esCaracter(valor) || esLiteralCadena(valor);
    }
    if(tipo == "void"){

    }
    if(tipo == "struct"){

    }
}

int validacionTipo (char *identificador, ASIGNACION *cabezaA, DECLARACION *cabezaD){
    DECLARACION *auxD = cabezaD;
    ASIGNACION *auxA = cabezaA;
    char *tipo;
    char *value;
    while(auxD->ID != identificador && auxD != NULL){
        auxD = auxD->sig;
    }
    if(auxD->ID == identificador){
        strcpy(tipo, auxD->tipoDato);
        while (auxA->ID != identificador && auxA != NULL){
            auxA->sig;
        }
        if(auxA->ID == identificador){
            strcpy(value, auxA ->valor);
        }
    }
    return validarTipo(tipo, value);
}

int esCaracter(char *valor){

    return 1;
}

                                    /* DECLARACIONES DE FUNCIONES */

typedef struct par {
    char *tipoDato;
    char *ID;
    struct par *sig;
} PARAMETRO;

PARAMETRO* CrearNodoP(char *tipo, char *identificador){
    PARAMETRO* nodo = NULL;
    nodo = (PARAMETRO *) malloc(sizeof (PARAMETRO));
        if (nodo != NULL){
        strcpy(nodo->tipoDato, tipo);
        strcpy(nodo->ID, identificador);
        nodo->sig = NULL;
    }
    return nodo;
}

int InsertarP(PARAMETRO **cabeza, char *tipo, char *identificador){ 
    PARAMETRO *nuevo;
    nuevo = CrearNodoP(tipo, identificador);
    if (nuevo != NULL){
        nuevo->sig = *cabeza;
        *cabeza = nuevo;
        return 1;
    } else{
        return 0;
    }
}

void MostrarListaP (FILE* archivo, FUNCIONES *cabeza){ 
    FUNCIONES *auxi = cabeza;
    while(auxi != NULL){
        fprintf(archivo, "-%s %s\n",auxi->tipoDato,auxi->ID);
        auxi = auxi->sig;
    }
}

typedef struct func {
    char *tipoDato;
    char *ID;
    PARAMETRO *listaParametro = NULL;
    struct func *sig;
} FUNCIONES;

FUNCIONES* CrearNodoF(char *tipo, char *identificador){
    FUNCIONES* nodo = NULL;
    nodo = (FUNCIONES *) malloc(sizeof (FUNCIONES));
        if (nodo != NULL){
        strcpy(nodo->tipoDato, tipo);
        strcpy(nodo->ID, identificador);
        nodo->sig = NULL;
    }
    return nodo;
}

int InsertarF(FUNCIONES **cabeza, char *tipo, char *identificador){ 
    FUNCIONES *nuevo;
    nuevo = CrearNodoF(tipo, identificador);
    if (nuevo != NULL){
        nuevo->sig = *cabeza;
        *cabeza = nuevo;
        return 1;
    } else{
        return 0;
    }
}

void MostrarListaF (FILE* archivo, FUNCIONES *cabeza){ 
    FUNCIONES *auxi = cabeza;
    while(auxi != NULL){
        fprintf(archivo, "Se declaro la funcion %s de tipo %s y con los siguientes parametros:\n",auxi->tipoDato,auxi->ID);
        MostrarListaP(archivo, auxi->listaParametro);
        auxi = auxi->sig;
    }
}


                                    /* ERRORES SINTACTICOS */
typedef struct error {
    int linea;
    struct error *sig;
} ERRORES;

ERRORES* CrearNodoE(int numeroLinea){
    ERRORES* nodo = NULL;
    nodo = (ERRORES *) malloc(sizeof (ERRORES));
        if (nodo != NULL){
        nodo->linea = numeroLinea;
        nodo->sig = NULL;
    }
    return nodo;
}

int InsertarE(ERRORES **cabeza, int numeroLinea){ 
    ERRORES *nuevo;
    nuevo = CrearNodoE(numeroLinea);
    if (nuevo != NULL){
        nuevo->sig = *cabeza;
        *cabeza = nuevo;
        return 1;
    } else{
        return 0;
    }
}

void MostrarListaE (FILE* archivo, ERRORES *cabeza){ 
    ERRORES *auxi = cabeza;
    while(auxi != NULL){
        fprintf(archivo, "Se encontro un error sintactico en la linea numero %i\n", auxi->linea);
        auxi = auxi->sig;
    }
}

                                /* ERRORES LEXICOS */
typedef struct error {
    char *cadena;
    struct error *sig;
} ERRORESLEX;

ERRORESLEX* CrearNodoLEX(char *string){
    ERRORESLEX* nodo = NULL;
    nodo = (ERRORESLEX *) malloc(sizeof (ERRORESLEX));
        if (nodo != NULL){
        strcpy(nodo->cadena, string);
        nodo->sig = NULL;
    }
    return nodo;
}

int InsertarLEX(ERRORESLEX **cabeza, char *string){ 
    ERRORESLEX *nuevo;
    nuevo = CrearNodoLEX(string);
    if (nuevo != NULL){
        nuevo->sig = *cabeza;
        *cabeza = nuevo;
        return 1;
    } else{
        return 0;
    }
}

void MostrarListaLEX (FILE* archivo, ERRORESLEX *cabeza){ 
    ERRORESLEX *auxi = cabeza;
    while(auxi != NULL){
        fprintf(archivo, "Se encontro la cadena no reconocida: %s\n", auxi->cadena);
        auxi = auxi->sig;
    }
}


                        /* VALIDACIONES SEMANTICAS */

void doblesDeclaraciones (FILE* archivo, DECLARACION *aux){
    char *identificador = aux->ID;
    while (aux != NULL){
        aux = aux->sig;
        if (aux->ID == identificador){
            fprintf(archivo, "Se encontro una doble declaracion de la variable %s", aux->ID);
        }   
    }
}

void validacionSemantica2D (FILE* archivo, DECLARACION *cabeza){
    DECLARACION *aux = cabeza;
    while(aux != NULL){
        doblesDeclaraciones(archivo, aux);
        aux = aux->sig;
    }
}
