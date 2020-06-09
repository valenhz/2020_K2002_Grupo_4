//El programa compila pero tira error en tiempo de ejecucion en la funcion ingresar.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

 //Estructura para generar la matriz
struct estado {    
    int estado_siguiente;
    char *cadPush [3];
};

//Prototipo funcion ingresar
struct estado ingresar (int a, char *b[]);

//Estructura para el manejo de la pila
struct nodo {
    char *dato[3];
    struct nodo *siguiente;
};

//Apuntador a la pila
struct nodo *ptrPila = NULL;

//Prototipo push
void push (char *dato[3]);
//Prototipo pop
void pop(struct nodo* ptrPila);

//Prototipo evaluar_Expresion
void evaluar_Expresion (int ultimoEstado, struct nodo *ptrPila);

int main (int argc, char * argv[]) {
    
    //Expresion (cadena de caracteres)
    char expresion [50];
    
    printf ("Ingrese la expresion: ");
    //Usuario ingresa la expresion
    scanf ("%s", expresion);   
    //No se si es mejor cambiar el scanf por gets
    
    struct estado automata [4][2][6];
    
    //Primera fila de la tabla
    automata [0][0][0] = ingresar (3, " ");
    automata [0][0][1] = ingresar (1, "$");
    automata [0][0][2] = ingresar (3, " ");
    automata [0][0][3] = ingresar (0, "R");
    automata [0][0][4] = ingresar (3, " ");
    automata [0][0][5] = ingresar (3, " ");
    
    //Segunda fila de la tabla
    automata [1][0][0] = ingresar (1, "$");
    automata [1][0][1] = ingresar (1, "$");
    automata [1][0][2] = ingresar (0, "$");
    automata [1][0][3] = ingresar (3, " ");
    automata [1][0][4] = ingresar (3, " ");
    automata [1][0][5] = ingresar (3, " ");

    //Tercera fila de la tabla
    automata [0][1][0] = ingresar (3, " ");
    automata [0][1][1] = ingresar (1, "R");
    automata [0][1][2] = ingresar (3, " ");
    automata [0][1][3] = ingresar (0, "R");
    automata [0][1][4] = ingresar (3, " ");
    automata [0][1][5] = ingresar (3, " ");

    //Cuarta fila de la tabla
    automata [1][1][0] = ingresar (1, "R");
    automata [1][1][1] = ingresar (1, "R");
    automata [1][1][2] = ingresar (0, "R");
    automata [1][1][3] = ingresar (3, " ");
    automata [1][1][4] = ingresar (2, " ");
    automata [1][1][5] = ingresar (3, " ");

    //Quinta fila de la tabla
    automata [2][1][0] = ingresar (3, " ");
    automata [2][1][1] = ingresar (3, " ");
    automata [2][1][2] = ingresar (0, "R");
    automata [2][1][3] = ingresar (3, " ");
    automata [2][1][4] = ingresar (2, " ");
    automata [2][1][5] = ingresar (3, " ");

    //Sexta fila de la tabla
    automata [2][0][0] = ingresar (3, " ");
    automata [2][0][1] = ingresar (3, " ");
    automata [2][0][2] = ingresar (0, "$");
    automata [2][0][3] = ingresar (3, " ");
    automata [2][0][4] = ingresar (3, " ");
    automata [2][0][5] = ingresar (3, " ");
    
    //Septima fila de la tabla
    automata [3][0][0] = ingresar (3, " ");
    automata [3][0][1] = ingresar (3, " ");
    automata [3][0][2] = ingresar (3, " ");
    automata [3][0][3] = ingresar (3, " ");
    automata [3][0][4] = ingresar (3, " ");
    automata [3][0][5] = ingresar (3, " ");
  
    //Variable que almacena el caracter leido
    char caracter = '\0';
    //Variable que almacena el ultimo edtado
    int ultimoEstado = 0;
    //Variables que mueven matriz
    int i = 0;
    int j = 0;
    int k = 0;
    
    push("$");
    
    //este wile hace recorrer el automata
    while(fgetc(stdin)){
        
        caracter = fgetc(stdin);
//Este if hace que no tenga en cuenta espacios
if (caracter != ' ') {

//Se mueve segun el caracter que entra
        if (caracter == '0'){k = 0;} else
        if (caracter == '1' || caracter == '2' || caracter == '3' || caracter == '4' || caracter == '5' || caracter == '6' || caracter == '7' || caracter == '8' || caracter == '9'){k = 1;} else
        if (caracter == '+' || caracter == '-' || caracter == '*' || caracter == '/'){k = 2;} else
        if (caracter == '('){k = 3;} else
        if (caracter == ')'){k = 4;} else {k = 5;}
        if (strcmp (ptrPila -> dato, "$")){j = 0;} else {j = 1;}
        
        //Hace el pop
        pop(ptrPila);
        //Hace un push adicional segun el caracter que entra y como esta la pila
        if (i == 0 && caracter == '(' && ptrPila == NULL){ push("$"); }
        if (i == 0 && caracter == '(' && ptrPila != NULL){ push("R"); }
        //Hace el push del cadpush excepto que se cumpla cierta condicion
        if(caracter != ')' && !(strcmp(ptrPila -> dato, "R"))){ push(automata[i][j][k].cadPush); }
        
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
struct estado ingresar (int a, char *b[3]) {
    struct estado x;
    x.estado_siguiente = a;
    strcpy (x.cadPush, b);
    return x; }

//Algoritmo de push
void push (char *string[]) {
    struct nodo *nuevoNodo = malloc(sizeof(struct nodo));
    strcpy(nuevoNodo -> dato, string);
    nuevoNodo -> siguiente = ptrPila;
    ptrPila = nuevoNodo; }

//Algoritmo de pop
void pop(struct nodo *ptrPila){
    if (ptrPila != NULL){
        struct nodo* temporal = ptrPila;
        ptrPila = ptrPila -> siguiente;
        free(temporal); }}

//Permite evaluar la expresion una vez terminado el while
void evaluar_Expresion(int ultimoEstado, struct nodo *ptrPila){
    if (ultimoEstado == 1 && (strcmp(ptrPila->dato, "$"))){printf("%s", "Expresion Valida");} else
    if (ultimoEstado == 2 && (strcmp(ptrPila->dato, "$"))){printf("%s", "Expresion Valida");} else 
    {printf("%s", "Expresion Invalida"); }}

    
