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
        nodo->tipoDato = strdup(tipo);
        nodo->ID = strdup(identificador);
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
        fprintf(archivo, "Se declaro una variable de tipo %s y nombre %s\n",auxi->tipoDato,auxi->ID);
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
        nodo->valor = strdup(value);
        nodo->ID = strdup(identificador);
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
        tipo = strdup(auxD->tipoDato);
        while (auxA->ID != identificador && auxA != NULL){
            auxA->sig;
        }
        if(auxA->ID == identificador){
            value = strdup(auxA ->valor);
        }
    }
    return validarTipo(tipo, value);
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
        nodo->tipoDato = strdup(tipo);
        nodo->ID = strdup(identificador);
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

void MostrarListaP (FILE* archivo, PARAMETRO *cabeza){ 
    PARAMETRO *auxi = cabeza;
    while(auxi != NULL){
        fprintf(archivo, "-%s %s\n",auxi->tipoDato,auxi->ID);
        auxi = auxi->sig;
    }
}

typedef struct func {
    char *tipoDato;
    char *ID;
    PARAMETRO *listaParametro; //me tira error idk = NULL;
    struct func *sig;
} FUNCIONES;

FUNCIONES* CrearNodoF(char *tipo, char *identificador){
    FUNCIONES* nodo = NULL;
    nodo = (FUNCIONES *) malloc(sizeof (FUNCIONES));
        if (nodo != NULL){
        nodo->tipoDato = strdup(tipo);
        nodo->ID = strdup(identificador);
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
typedef struct errorLex {
    int linea;
    struct errorLex *sig;
} ERRORESLEX;

ERRORESLEX* CrearNodoLEX(int num){
    ERRORESLEX* nodo = NULL;
    nodo = (ERRORESLEX *) malloc(sizeof (ERRORESLEX));
        if (nodo != NULL){
        nodo->linea = num;
        nodo->sig = NULL;
    }
    return nodo;
}

int InsertarLEX(ERRORESLEX **cabeza, int num){ 
    ERRORESLEX *nuevo;
    nuevo = CrearNodoLEX(num);
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
        fprintf(archivo, "Se encontro una cadena no reconocida en la linea numero %i\n", auxi->linea);
        auxi = auxi->sig;
    }
}


                        /* VALIDACIONES SEMANTICAS */

void doblesDeclaraciones (FILE* archivo, DECLARACION *aux){
    char *identificador = strdup(aux->ID);
    while (aux != NULL){
        aux = aux->sig;
        if (strcmp(identificador, aux->ID) == 0){
            fprintf(archivo, "Se encontro una doble declaracion de la variable %s", aux->ID);
        }   
    }
}

void validacionDoblesDeclaraciones (FILE* archivo, DECLARACION *cabeza){
    DECLARACION *aux = cabeza;
    while(aux != NULL){
        doblesDeclaraciones(archivo, aux);
        aux = aux->sig;
    }
}

void val2D (FILE* archivo, DECLARACION *cabeza){ 
    DECLARACION *auxi = cabeza;
    DECLARACION *aux2 = cabeza;
    char *identificador;
    while(aux2 != NULL){
        identificador = strdup(aux2->ID);
        while(auxi != NULL){
            auxi = auxi->sig;
            //fprintf("%s \n", auxi->ID);
            if(strcmp(identificador, aux2->ID) == 0){ //aca deberia compararlo con auxi->ID pero cuando pongo eso rompe no se xq 
                fprintf(archivo, "Hay doble declaracion de la variable %s\n", identificador);
                //fprintf(archivo, "comparacion %i\n", strcmp(identificador, auxi->ID));
            }
        }
        aux2 = aux2->sig;
        auxi = aux2;
    }
    
}

// typedef struct validacionTipo {
//     char *ID1;
//     char *ID2;
//     struct validacionTipo *sig;
// } VALIDACION;

// VALIDACION* CrearNodoValidacion (char *ID1, char *ID2){
//     VALIDACION* nodo = NULL;
//     nodo = (VALIDACION *) malloc(sizeof (VALIDACION));
//     if (nodo != NULL) {
//         nodo->ID1 = strdup(ID1);
//         nodo->ID2 = strdup(ID2);
//         nodo->sig = NULL;
//     }
//     return nodo;
// }

// int InsertarValidacion(VALIDACION **cabeza, char *ID1, char *ID2) {
//     VALIDACION *nuevo;
//     nuevo = CrearNodoValidacion(ID1, ID2);
//     if (nuevo != NULL) {
//         nuevo->sig = *cabeza;
//         *cabeza = nuevo;
//         return 1;
//     } else {
//         return 0;
//     }
// }

// int MostrarValidacionTipo(FILE* archivo, char *ID1, char *ID2) {
//     fprintf(archivo, "tipos incompatibles de %s y %s para la suma", ID1, ID2);
// }

// void MostrarListaValidacion (FILE* archivo, VALIDACION *cabeza) {
//     VALIDACION *auxi = cabeza;
//     while(auxi != NULL) {
//         MostrarValidacionTipo(archivo, auxi->ID1, auxi->ID2);
//     }
// }

// int InsertarValidacionTipoSuma(char *ID1, char *ID2, DECLARACION *cabeza, VALIDACION *head){ //validacion para una suma en particular, no todas las sumas
//     DECLARACION *aux1 = cabeza;
//     DECLARACION *aux2 = cabeza;
//     char *tipo1;
//     char *tipo2;
//     while(aux1->ID != ID1 && aux1 != NULL){
//         aux1 = aux1->sig;
//     }
//     if(aux1->ID == ID1){
//         tipo1 = strdup(aux1->tipoDato);
//     }
//     while (aux2->ID != ID2 && aux2 != NULL){
//             aux2->sig;
//     }
//     if(aux2->ID == ID2){
//         tipo2 = strdup(aux2 ->tipoDato);
//     }
//     if (tipo1 == tipo2){
//         if (tipo1 == "int" || tipo1 == "float" || tipo1 == "char"){
//          return 0;
//         } else {
//         InsertarValidacion(&head, ID1, ID2);
//         }
//     }
//     return 1;
// }

