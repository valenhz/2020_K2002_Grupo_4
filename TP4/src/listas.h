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
                                    
    typedef struct para {
    char *tipo;
    int orden;
    struct para *sig;
} PAR;

PAR* CrearNodoPAR(char *tipoDato, int ordenFuncion){
    PAR* nodo = NULL;
    nodo = (PAR *) malloc(sizeof (PAR));
        if (nodo != NULL){
        nodo->tipo = strdup(tipoDato);
        nodo->orden = ordenFuncion;
        nodo->sig = NULL;
    }
    return nodo;
}

int InsertarPAR(PAR **cabeza, char *tipo, int orden){ 
    PAR *nuevo;
    nuevo = CrearNodoPAR(tipo, orden);
    if (nuevo != NULL){
        nuevo->sig = *cabeza;
        *cabeza = nuevo;
        return 1;
    } else{
        return 0;
    }
}

void MostrarParametros (FILE* archivo, PAR *cabeza, int ordenF){ 
    PAR *aux = cabeza;
    while (aux != NULL){
        if(ordenF == aux->orden){
            if(aux->sig == NULL){
                    fprintf(archivo, "%s.\n", aux->tipo);
            } else {
                    fprintf(archivo, "%s, ",aux->tipo);
            }
        }
        aux = aux->sig;
    }
}

typedef struct func {
    char *tipoDato;
    char *ID;
    //PARAMETRO *listaParametro; //me tira error idk = NULL;
    int cantidadParametros;
    int orden;
    struct func *sig;
} FUNCIONES;


FUNCIONES* CrearNodoF(char *tipo, char *identificador, int cantidad, int ordenF){
    FUNCIONES* nodo = NULL;
    nodo = (FUNCIONES *) malloc(sizeof (FUNCIONES));
        if (nodo != NULL){
        nodo->tipoDato = strdup(tipo);
        nodo->ID = strdup(identificador);
        //nodo->listaParametro = NULL;
        nodo->cantidadParametros = cantidad;
        nodo->orden = ordenF;
        nodo->sig = NULL;
    }
    return nodo;
}

int InsertarF(FUNCIONES **cabeza, char *tipo, char *identificador, int cantidad, int orden){ 
    FUNCIONES *nuevo;
    nuevo = CrearNodoF(tipo, identificador, cantidad, orden);
    if (nuevo != NULL){
        nuevo->sig = *cabeza;
        *cabeza = nuevo;
        return 1;
    } else{
        return 0;
    }
}

//alternativa
/*  void InsertarPF(FUNCIONES *cabeza, char *tipo, char *identificador){ 
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
 */
void MostrarListaF (FILE* archivo, FUNCIONES *cabeza, PAR *parametros){
    FUNCIONES *auxi = cabeza;
    PAR *aux = parametros;
    while(auxi != NULL){
        if(auxi->cantidadParametros == 0){
            fprintf(archivo, "Se declaro la funcion %s de tipo %s\n", auxi->ID, auxi->tipoDato);
        } else {
            fprintf(archivo, "Se declaro la funcion %s de tipo %s y %i parametros de tipo: ",auxi->ID,auxi->tipoDato,auxi->cantidadParametros);
            MostrarParametros(archivo, parametros, auxi->orden);
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

char *BuscarTipos(DECLARACION *declaraciones, char *identificador){
    DECLARACION *aux1 = NULL;
    aux1 = (DECLARACION *) malloc(sizeof (DECLARACION));
    aux1 = declaraciones;
    char *tipo;
    while(aux1 != NULL){
        if(strcmp(aux1->ID, identificador) == 0){
            tipo = strdup(aux1->tipoDato);
        }
        aux1 = aux1->sig;
    }
    return tipo;
}

void validarTipos(FILE* archivo, DECLARACION *sumas, DECLARACION *declaraciones){
    DECLARACION *aux2 = NULL;
    aux2 = (DECLARACION *) malloc(sizeof (DECLARACION));
    aux2 = sumas;
    char *valor1;
    char *valor2;
    char *tipo1;
    char *tipo2;
    while(aux2 != NULL){
        valor1 = strdup(aux2->ID);
        valor2 = strdup(aux2->tipoDato);
        tipo1 = strdup(BuscarTipos(declaraciones, valor1));
        tipo2 = strdup(BuscarTipos(declaraciones, valor2));
        if(strcmp(tipo1, tipo2) == 0){
            if(strcmp(tipo1, "int") == 0 || strcmp(tipo1, "float") == 0){
            } else {
                fprintf(archivo, "Error de tipos en la suma de %s y %s\n", valor1, valor2);
            }
        } else {
            fprintf(archivo, "Error de tipos en la suma de %s y %s\n", valor1, valor2);
        }
        aux2 = aux2->sig;
    }
}


typedef struct invocacion {
    char *ID;
    int cantPar;
    int pos;
    //PARINVOCACION *listaParInvocacion;
  struct invocacion *sig;
} INVOCACION;

INVOCACION* crearNodoInv(char *ID, int cantidad, int posicion){
  INVOCACION* nodo = NULL;
  nodo = (INVOCACION*) malloc(sizeof (INVOCACION));
        if (nodo != NULL){
        nodo->ID = ID;
        nodo->cantPar = cantidad;
        nodo->pos = posicion;
        //nodo->listaParInvocacion = NULL;
        nodo->sig = NULL;
      }
     return nodo;
}

int InsertarInvocacion(INVOCACION **cabeza, char *ID, int cantidad, int posicion){
   INVOCACION *nuevo;
   nuevo = crearNodoInv(ID, cantidad, posicion);
   if(nuevo != NULL) {
       nuevo->sig = *cabeza;
       *cabeza = nuevo;
       return 1;
   } else {
       return 0;
   }
}

void MostrarListaInvocacion (FILE* archivo, INVOCACION *cabeza){ 
    INVOCACION *auxi = cabeza;
    while(auxi != NULL){
        fprintf(archivo, "Se encontro una invocacion de la funcion %s con %i parametros\n", auxi->ID, auxi->cantPar);
        auxi = auxi->sig;
    }
}


typedef struct parametroInvocacion {
    char *ID;
    int pos;
    struct parametroInvocacion *sig;
} PARINVOCACION;

PARINVOCACION * crearNodoParInv(char *ID, int posicion){
    PARINVOCACION* nodo = NULL;
    nodo = (PARINVOCACION*) malloc(sizeof (PARINVOCACION));
         if (nodo != NULL){
         nodo->ID = ID;
         nodo->pos = posicion;
         nodo->sig = NULL;
     }
    return nodo;
}


int InsertarParInv(PARINVOCACION **cabeza, char *ID, int posicion){
   PARINVOCACION *nuevo;
   nuevo = crearNodoParInv(ID, posicion);
   if(nuevo != NULL) {
       nuevo->sig = *cabeza;
       *cabeza = nuevo;
       return 1;
   } else {
       return 0;
   }
}

void verificarTiposParametros(FILE *archivo, FUNCIONES *listaFunciones, DECLARACION *listaDeclaraciones, INVOCACION *listaInvocaciones, PARINVOCACION *listaParametrosInv, PAR *listaParametros) {
    FUNCIONES* aux1 = NULL; 
    aux1 = (FUNCIONES*) malloc(sizeof (FUNCIONES));
    aux1 = listaFunciones;
    INVOCACION* aux2 = NULL;
    aux2 = (INVOCACION*) malloc(sizeof (INVOCACION));
    aux2 = listaInvocaciones;
    PAR* aux3 = NULL;
    aux3 = (PAR*) malloc(sizeof (PAR));
    aux3 = listaParametros;
    PARINVOCACION* aux4 = NULL;
    aux4 = (PARINVOCACION*) malloc(sizeof (PARINVOCACION));
    aux4 = listaParametrosInv;
 /*    DECLARACION* aux5 = NULL;
    aux5 = (DECLARACION*) malloc(sizeof (DECLARACION)); 
    aux5 = listaDeclaraciones; */
    char *funcionInv;
    int parInv;
    int ordenInv;
    char *funcionDec;
    int parDec;
    int ordenDec;
    funcionDec = strdup("&");
    
    while(aux2 != NULL){
        funcionInv = strdup(aux2->ID);
        parInv = aux2->cantPar;
        ordenInv = aux2->pos;

        while (aux1 != NULL){
            if(strcmp(aux1->ID, aux2->ID) == 0){
                funcionDec = strdup(aux1->ID);
                parDec = aux1->cantidadParametros;
                ordenDec = aux1->orden;
            }
            aux1 = aux1->sig;
        }
        
        if(strcmp(funcionInv, funcionDec) == 0){
            if(parDec == parInv){
                int estado = 0;
                char *tipoParDec;
                char *tipoParInv;
                while(aux4 != NULL && aux4->pos != ordenInv){ aux4 = aux4->sig; }
                while(aux3 != NULL && aux3->orden != ordenDec){ aux3 = aux3->sig; }
                printf("%i\n", parDec);
                for(int i = 0; i<parDec; i++){
                printf("%i\n", parDec);
                    if(aux3->orden == ordenDec && aux4->pos == ordenInv){
                        tipoParDec = strdup(aux3->tipo);
                        printf("%s\n", tipoParDec);
                        tipoParInv = strdup(BuscarTipos(listaDeclaraciones, aux4->ID));
                        printf("%s\n", tipoParInv);
                        if(strcmp(tipoParDec, tipoParInv) != 0){
                            estado = 1;
                        }

                    }
                    aux3 = aux3->sig; 
                }
                if(estado == 1){
                    fprintf(archivo, "Los tipos de los parametros de la funcion invocada \"%s\" no coinciden\n", funcionDec);
                }
                
            } else {
                fprintf(archivo, "La invocacion de la funcion \"%s\" no tiene la cantidad de parametros correspondiente\n", funcionInv);
            }
        } else {
            fprintf(archivo, "La funcion invocada \"%s\" no fue declarada", funcionInv);
        }
        aux2 = aux2->sig;
        aux1 = listaFunciones;
        aux3 = listaParametros;
        aux4 = listaParametrosInv;
    }
}

/* void MostrarParametros (FILE* archivo, PAR *cabeza, int ordenF){ 
    PAR *aux = cabeza;
    while (aux != NULL){
        if(ordenF == aux->orden){
            if(aux->sig == NULL){
                    fprintf(archivo, "%s.\n", aux->tipo);
            } else {
                    fprintf(archivo, "%s, ",aux->tipo);
            }
        }
        aux = aux->sig;
    }
} */

