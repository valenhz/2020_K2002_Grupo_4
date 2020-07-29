//El programa compila pero tira error en tiempo de ejecucion en la funcion ingresar.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Estructura para generar la matriz
struct estado {
    int estado_siguiente;
    char cadPush;
};

//Prototipo funcion ingresar
//struct estado ingresar (int a, char b[]);

//Estructura para el manejo de la pila
struct nodo {
    char dato;
    struct nodo *siguiente;
};


//Prototipo push
void push (char dato, struct nodo* ptrPila);
//Prototipo pop
void pop(struct nodo* ptrPila);

//Prototipo evaluar_Expresion
void evaluar_Expresion (int ultimoEstado, struct nodo *ptrPila);

int main (int argc, char * argv[]) {
    
    //Apuntador a la pila
    struct nodo *ptrPila = NULL;
    
    //Expresion (cadena de caracteres)
    char expresion [50];
    
    printf ("Ingrese la expresion: ");
    //Usuario ingresa la expresion
    fgets(expresion,50,stdin);
    //No se si es mejor cambiar el scanf por gets
    
    struct estado automata [4][2][6];
    
    
    automata [0][0][0].estado_siguiente = 3;
    automata[0][0][0].cadPush = '\0';
    automata [0][0][1].estado_siguiente = 1;
    automata[0][0][1].cadPush = '$';
    automata [0][0][2].estado_siguiente = 3;
    automata[0][0][2].cadPush = '\0';
    automata [0][0][3].estado_siguiente = 0;
    automata[0][0][3].cadPush = 'R';
    automata [0][0][4].estado_siguiente = 3;
    automata[0][0][4].cadPush = '\0';
    automata [0][0][5].estado_siguiente = 3;
    automata[0][0][5].cadPush = '\0';
    
    //Segunda fila de la tabla
    automata [1][0][0].estado_siguiente = 1;
    automata[1][0][0].cadPush = '$';
    automata [1][0][1].estado_siguiente = 1;
    automata[1][0][1].cadPush = '$';
    automata [1][0][2].estado_siguiente = 0;
    automata[1][0][2].cadPush = '$';
    automata [1][0][3].estado_siguiente = 3;
    automata[1][0][3].cadPush = '\0';
    automata [1][0][4].estado_siguiente = 3;
    automata[1][0][4].cadPush = '\0';
    automata [1][0][5].estado_siguiente = 3;
    automata[1][0][5].cadPush = '\0';
    
    
    //Tercera fila de la tabla
    automata [0][1][0].estado_siguiente = 3;
    automata[0][1][0].cadPush = '\0';
    automata [0][1][1].estado_siguiente = 1;
    automata[0][1][1].cadPush = 'R';
    automata [0][1][2].estado_siguiente = 3;
    automata[0][1][2].cadPush = '\0';
    automata [0][1][3].estado_siguiente = 0;
    automata[0][1][3].cadPush = 'R';
    automata [0][1][4].estado_siguiente = 3;
    automata[0][1][4].cadPush = '\0';
    automata [0][1][5].estado_siguiente = 3;
    automata[0][1][5].cadPush = '\0';
    
    
    //Cuarta fila de la tabla
    automata [1][1][0].estado_siguiente = 1;
    automata[1][1][0].cadPush = 'R';
    automata [1][1][1].estado_siguiente = 1;
    automata[1][1][1].cadPush = 'R';
    automata [1][1][2].estado_siguiente = 0;
    automata[1][1][2].cadPush = 'R';
    automata [1][1][3].estado_siguiente = 3;
    automata[1][1][3].cadPush = '\0';
    automata [1][1][4].estado_siguiente = 2;
    automata[1][1][4].cadPush = 'R';
    automata [1][1][5].estado_siguiente = 3;
    automata[1][1][5].cadPush = '\0';
    
    
    //Quinta fila de la tabla
    automata [2][1][0].estado_siguiente = 3;
    automata[2][1][0].cadPush = '\0';
    automata [2][1][1].estado_siguiente = 3;
    automata[2][1][1].cadPush = '\0';
    automata [2][1][2].estado_siguiente = 0;
    automata[2][1][2].cadPush = 'R';
    automata [2][1][3].estado_siguiente = 3;
    automata[2][1][3].cadPush = '\0';
    automata [2][1][4].estado_siguiente = 2;
    automata[2][1][4].cadPush = '\0';
    automata [2][1][5].estado_siguiente = 3;
    automata[2][1][5].cadPush = '\0';
    
    
    //Sexta fila de la tabla
    automata [2][0][0].estado_siguiente = 3;
    automata[2][0][0].cadPush = '\0';
    automata [2][0][1].estado_siguiente = 3;
    automata[2][0][1].cadPush = '\0';
    automata [2][0][2].estado_siguiente = 0;
    automata[2][0][2].cadPush = '$';
    automata [2][0][3].estado_siguiente = 3;
    automata[2][0][3].cadPush = '\0';
    automata [2][0][4].estado_siguiente = 3;
    automata[2][0][4].cadPush = '\0';
    automata [2][0][5].estado_siguiente = 3;
    automata[2][0][5].cadPush = '\0';
    
    //Septima fila de la tabla
    automata [3][0][0].estado_siguiente = 3;
    automata[3][0][0].cadPush = '\0';
    automata [3][0][1].estado_siguiente = 3;
    automata[3][0][1].cadPush = '\0';
    automata [3][0][2].estado_siguiente = 3;
    automata[3][0][2].cadPush = '\0';
    automata [3][0][3].estado_siguiente = 3;
    automata[3][0][3].cadPush = '\0';
    automata [3][0][4].estado_siguiente = 3;
    automata[3][0][4].cadPush = '\0';
    automata [3][0][5].estado_siguiente = 3;
    automata[3][0][5].cadPush = '\0';

    //Variable que almacena el caracter leido
    char caracter = '\0';
    //Variable que almacena el ultimo edtado
    int ultimoEstado = 0;
    //Variables que mueven matriz
    int i = 0;
    int j = 0;
    int k = 0;
    int m = 0;
    
    push('$', ptrPila);
    
    //este wile hace recorrer el automata
    while(expresion[m] != '\0'){
        
        caracter = expresion[m];
        //Este if hace que no tenga en cuenta espacios
        if (caracter != ' ' && caracter != '\0') {
            
            //Se mueve segun el caracter que entra
        if (caracter == '0'){k = 0;} else
        if (caracter == '1' || caracter == '2' || caracter == '3' || caracter == '4' || caracter == '5' || caracter == '6' || caracter == '7' || caracter == '8' || caracter == '9'){k = 1;} else
        if (caracter == '+' || caracter == '-' || caracter == '*' || caracter == '/'){k = 2;} else
        if (caracter == '('){k = 3;} else
        if (caracter == ')'){k = 4;} else {k = 5;}
        if (ptrPila->dato == '$'){j = 0;} else {j = 1;}
            
        //Hace el pop
        pop(ptrPila);
        //Hace un push adicional segun el caracter que entra y como esta la pila
        if (i == 0 && caracter == '(' && ptrPila == NULL){ push('$',ptrPila); }
        if ((i == 0) && (caracter == '(') && ptrPila != NULL){ push('R', ptrPila); }
        //Hace el push del cadpush excepto que se cumpla cierta condicion
        if(caracter != ')' && ((ptrPila -> dato == 'R'))){ push(automata[i][j][k].cadPush, ptrPila); }
            
        //Va al estado siguiente
        i = automata[i][j][k].estado_siguiente;
        //Almacena el estado en la variable ultimoEstado
        ultimoEstado = i;
        }
        }

    
        //esta funcion evalua la expresion segun el ultimoEstado en el que esta y como esta la pila
        evaluar_Expresion (ultimoEstado, ptrPila);
    
        return 0;
        }

//Funciones


//Permite ingresar elementos al automata accediendo a cada campo del struct
/*struct estado ingresar (int a, char b[3]) {
    struct estado x;
    x.estado_siguiente = a;
    strcpy (b, x.cadPush);
    return x; } */

//Algoritmo de push
void push (char caracter, struct nodo* ptrPila) {
    struct nodo *nuevoNodo = malloc(sizeof(struct nodo));
    nuevoNodo -> dato = caracter;
    nuevoNodo -> siguiente = ptrPila;
    ptrPila = nuevoNodo; }

//Algoritmo de pop
void pop(struct nodo* ptrPila){
    if (ptrPila != NULL){
        struct nodo* temporal = ptrPila;
        ptrPila = ptrPila -> siguiente;
        free(temporal); }}

//Permite evaluar la expresion una vez terminado el while
void evaluar_Expresion(int ultimoEstado, struct nodo *ptrPila){
    if (ultimoEstado == 1 && (ptrPila->dato == '$')){printf("%s", "Expresion Valida");} else
    if (ultimoEstado == 2 && (ptrPila->dato == '$')){printf("%s", "Expresion Valida");} else
            {printf("%s", "Expresion Invalida"); }}
