#include <stdio.h>
#include <stdlib.h>
#include <string.h>

 //Estructura para generar la matriz
struct estado {    
    int estado_siguiente;
    char cadPush [3];
};

//Estructura para el manejo de la pila
typedef struct nodo {
    int dato;
    struct nodo *siguiente;
} Nodo;

typedef struct pila {
    Nodo *cima;
} Pila;



void push (Pila *pila, int valor){
    Nodo *nuevoNodo = (Nodo *) malloc(sizeof(Nodo));
    nuevoNodo -> dato = valor;
    nuevoNodo -> siguiente = pila->cima;
    pila->cima = nuevoNodo;
}

void pop (Pila* pila){
    if (pila->cima != NULL){
        Nodo* ultimoNodo = pila->cima;
        pila->cima = pila->cima->siguiente;
        ultimoNodo -> siguiente = NULL;
        free(ultimoNodo);
    }
}

int cima (Pila* pila){
    if (pila == NULL)
        return NULL;
    else 
        return pila->cima->dato;
}



int main () {
        
    
    struct estado automata [4][2][6];

    char str [3] = "R";
    char str1 [3] = "$";
    char str2 [3] = " ";
    char str3 [5] = "eps"; //epsilon
    char str4 [3] = "RR";
    char str5 [3] = "R$";

   //Primera fila de la tabla
    automata [0][0][0].estado_siguiente = 3;
    strcpy (str2,automata[0][0][0].cadPush);
    automata [0][0][1].estado_siguiente = 1;
    strcpy (str1,automata[0][0][1].cadPush);
    automata [0][0][2].estado_siguiente = 3;
    strcpy (str2,automata[0][0][2].cadPush);
    automata [0][0][3].estado_siguiente = 0;
    strcpy (str5,automata[0][0][3].cadPush);
    automata [0][0][4].estado_siguiente = 3;
    strcpy (str2,automata[0][0][4].cadPush);
    automata [0][0][5].estado_siguiente = 3;
    strcpy (str2,automata[0][0][5].cadPush);
    
    //Segunda fila de la tabla
    automata [1][0][0].estado_siguiente = 1;
    strcpy (str1,automata[1][0][0].cadPush);
    automata [1][0][1].estado_siguiente = 1;
    strcpy (str1,automata[1][0][1].cadPush);
    automata [1][0][2].estado_siguiente = 0;
    strcpy (str1,automata[1][0][2].cadPush);
    automata [1][0][3].estado_siguiente = 3;
    strcpy (str2,automata[1][0][3].cadPush);
    automata [1][0][4].estado_siguiente = 3;
    strcpy (str2,automata[1][0][4].cadPush);
    automata [1][0][5].estado_siguiente = 3;
    strcpy (str2,automata[1][0][5].cadPush);

    
    //Tercera fila de la tabla
    automata [0][1][0].estado_siguiente = 3;
    strcpy (str2,automata[0][1][0].cadPush);
    automata [0][1][1].estado_siguiente = 1;
    strcpy (str,automata[0][1][1].cadPush);
    automata [0][1][2].estado_siguiente = 3;
    strcpy (str2,automata[0][1][2].cadPush);
    automata [0][1][3].estado_siguiente = 0;
    strcpy (str4,automata[0][1][3].cadPush);
    automata [0][1][4].estado_siguiente = 3;
    strcpy (str2,automata[0][1][4].cadPush);
    automata [0][1][5].estado_siguiente = 3;
    strcpy (str2,automata[0][1][5].cadPush);


    //Cuarta fila de la tabla
    automata [1][1][0].estado_siguiente = 1;
    strcpy (str,automata[1][1][0].cadPush);
    automata [1][1][1].estado_siguiente = 1;
    strcpy (str,automata[1][1][1].cadPush);
    automata [1][1][2].estado_siguiente = 0;
    strcpy (str,automata[1][1][2].cadPush);
    automata [1][1][3].estado_siguiente = 3;
    strcpy (str2,automata[1][1][3].cadPush);
    automata [1][1][4].estado_siguiente = 2;
    strcpy (str3,automata[1][1][4].cadPush);
    automata [1][1][5].estado_siguiente = 3;
    strcpy (str2,automata[1][1][5].cadPush);

    
    //Quinta fila de la tabla
    automata [2][1][0].estado_siguiente = 3;
    strcpy (str2,automata[2][1][0].cadPush);
    automata [2][1][1].estado_siguiente = 3;
    strcpy (str2,automata[2][1][1].cadPush);
    automata [2][1][2].estado_siguiente = 0;
    strcpy (str,automata[2][1][2].cadPush);
    automata [2][1][3].estado_siguiente = 3;
    strcpy (str2,automata[2][1][3].cadPush);
    automata [2][1][4].estado_siguiente = 2;
    strcpy (str3,automata[2][1][4].cadPush);
    automata [2][1][5].estado_siguiente = 3;
    strcpy (str2,automata[2][1][5].cadPush);

    
    //Sexta fila de la tabla
    automata [2][0][0].estado_siguiente = 3;
    strcpy (str2,automata[2][0][0].cadPush);
    automata [2][0][1].estado_siguiente = 3;
    strcpy (str2,automata[2][0][1].cadPush);
    automata [2][0][2].estado_siguiente = 0;
    strcpy (str1,automata[2][0][2].cadPush);
    automata [2][0][3].estado_siguiente = 3;
    strcpy (str2,automata[2][0][3].cadPush);
    automata [2][0][4].estado_siguiente = 3;
    strcpy (str2,automata[2][0][4].cadPush);
    automata [2][0][5].estado_siguiente = 3;
    strcpy (str2,automata[2][0][5].cadPush);

    //Septima fila de la tabla
    automata [3][0][0].estado_siguiente = 3;
    strcpy (str2,automata[3][0][0].cadPush);
    automata [3][0][1].estado_siguiente = 3;
    strcpy (str2,automata[3][0][1].cadPush);
    automata [3][0][2].estado_siguiente = 3;
    strcpy (str2,automata[3][0][2].cadPush);
    automata [3][0][3].estado_siguiente = 3;
    strcpy (str2,automata[3][0][3].cadPush);
    automata [3][0][4].estado_siguiente = 3;
    strcpy (str2,automata[3][0][4].cadPush);
    automata [3][0][5].estado_siguiente = 3;
    strcpy (str2,automata[3][0][5].cadPush);

    
    

    struct pila *miPila;
    
    //Variable que almacena el caracter leido
    //char caracter = '\0';
    //Variable que almacena el ultimo edtado
    int ultimoEstado = 0;
    //Variables que mueven matriz
    int i = 0;
    int j = 0;
    int k = 0;
    
    push(&miPila,0);

    char expresion[30];

    printf ("Ingrese la expresion: ");
    //Usuario ingresa la expresion
    scanf ("%s", expresion);   
    //No se si es mejor cambiar el scanf por gets
    
    int m = 0;
    
    
    //este while hace recorrer el automata
    while(expresion[m] != '\0'){
        
        char caracter = expresion[m];

        //Se mueve segun el caracter que entra
        if (caracter == '0'){k=0;} else
        if (caracter == '1' || caracter == '2' || caracter == '3' || caracter == '4' || caracter == '5' || caracter == '6' || caracter == '7' || caracter == '8' || caracter == '9'){k = 1;} else
        if (caracter == '+' || caracter == '-' || caracter == '*' || caracter == '/'){k = 2;} else
        if (caracter == '('){k = 3;} else
        if (caracter == ')'){k = 4;} else {k = 5;}
        
        if (cima(&miPila)==0){j = 0;} else {j = 1;}
        
        i = automata[i][j][k].estado_siguiente;

        if (caracter == '('){ push(&miPila,1);}
        if (caracter == ')' && cima(&miPila)!= 0){ pop(&miPila);}

        /*
        if (automata[i][j][k].cadPush == "RR"||automata[i][j][k].cadPush == "R$") {
            push (&miPila,1);
        }

        if (automata[i][j][k].cadPush == "eps") {
            pop (&miPila);
        }
        */

        ultimoEstado = i;

        m++;
    }
    
    if (ultimoEstado == 1 && (cima(&miPila)==0)){printf("Expresion Valida %i %i %i",i, j, k);} else
    if (ultimoEstado == 2 && (cima(&miPila)==0)){printf("Expresion Valida  %i %i %i",i, j, k);} else 
    {printf("Expresion Invalida %i %i %i",i, j, k); }

    return 0;
}