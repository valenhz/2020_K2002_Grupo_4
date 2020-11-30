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
        nodo->listaParametro = NULL;
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


//alternativa
void InsertarPF(FUNCIONES *cabeza, char *tipo, char *identificador){ 
    printf("aca deberia por lo menor entrar");
    PARAMETRO *nuevo;
    nuevo = CrearNodoP(tipo, identificador);
    printf("tipo: %s id: %s\n", nuevo->tipoDato, nuevo->ID);
    if (nuevo != NULL){
        nuevo->sig = cabeza->listaParametro;
        cabeza->listaParametro = nuevo;
        printf("cabeza->listaParametro->tipo = %s, cabeza->listaParametro->ID = %s\n", cabeza->listaParametro->tipoDato, cabeza->listaParametro->ID);
    } 
}

void MostrarListaF (FILE* archivo, FUNCIONES *cabeza){ 
    FUNCIONES *auxi = cabeza;
    while(auxi != NULL){
        fprintf(archivo, "Se declaro la funcion %s de tipo %s y con los siguientes parametros:\n",auxi->ID,auxi->tipoDato);
        PARAMETRO *auxi1 = auxi->listaParametro;
        while(auxi1 != NULL){
            fprintf(archivo, "-%s %s\n", auxi1->tipoDato, auxi1->ID);
            auxi1 = auxi1->sig;
        }
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

void validacionDoblesDeclaraciones (FILE* archivo, DECLARACION *cabeza){ 
    DECLARACION *aux1 = NULL;
    aux1 = (DECLARACION *) malloc(sizeof (DECLARACION));
    aux1 = cabeza->sig;
    DECLARACION *aux2 = NULL;
    aux2 = (DECLARACION *) malloc(sizeof (DECLARACION));
    aux2 = cabeza;
    char *identificador;
    while(aux2 != NULL){
        identificador = strdup(aux2->ID);
        while(aux1 != NULL){
            if(strcmp(identificador, aux1->ID) == 0){ 
                fprintf(archivo, "Hay doble declaracion de la variable %s\n", identificador);
            }
            aux1 = aux1->sig;
        }
        aux2 = aux2->sig;
        if(aux2->sig == NULL){
            aux2 = aux2->sig;
        } else {
            aux1 = aux2->sig;
        }
    }
}

void validarTipos(FILE* archivo, DECLARACION *sumas, DECLARACION *declaraciones){
    DECLARACION *aux1 = NULL;
    aux1 = (DECLARACION *) malloc(sizeof (DECLARACION));
    aux1 = declaraciones;
    DECLARACION *aux2 = NULL;
    aux2 = (DECLARACION *) malloc(sizeof (DECLARACION));
    aux2 = sumas;
    printf("a\n");
    char *valor1;
    char *valor2;
    char *tipo1;
    char *tipo2;
    while(aux2 != NULL){
        valor1 = strdup(aux2->ID);
        printf("b\n");
        valor2 = strdup(aux2->tipoDato);
        while(aux1 != NULL){
            printf("c\n");
            printf("valor1 = %s auxID = %s\n", valor1, aux1->ID);
            if(strcmp(aux1->ID, valor1) == 0){
                tipo1 = strdup(aux1->tipoDato);
                printf("%s %s\n", tipo1, valor1);
            }
            aux1 = aux1->sig;
        }
        aux1 = declaraciones;
        while(aux1 != NULL){
            printf("c\n");
            printf("valor1 = %s auxID = %s\n", valor2, aux1->ID);
            if(strcmp(aux1->ID, valor2) == 0){
                tipo2 = strdup(aux1->tipoDato);
                printf("%s %s\n", tipo2, valor2);
            }
            aux1 = aux1->sig;
        }
        if(strcmp(tipo1, tipo2) == 0){
            if(strcmp(tipo1, "int") == 0 || strcmp(tipo1, "float") == 0){
                printf("hola");
            } else {
                fprintf(archivo, "Error de tipos en la suma de %s y %s\n", valor1, valor2);
            }
        } else {
            fprintf(archivo, "Error de tipos en la suma de %s y %s\n", valor1, valor2);
        }
        aux2 = aux2->sig;
    }
}



