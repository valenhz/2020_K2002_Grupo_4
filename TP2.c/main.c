#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct estado {             //estructura para generar la matriz
    int estado_siguiente;
    char cadPush [3];
};

struct estado ingresar (int a, char b[]);

struct nodo {
    char dato[3];
    struct nodo *siguiente;
};

struct nodo *ptrPila = NULL;

void push (char dato[3]);
void pop(void);

int main (int argc, char * argv[]) {
    
    char expresion [50];        //expresion (cadena de caracteres)
    
    printf ("Ingrese la expresion: ");
    scanf ("%s", expresion);    //usuario ingresa la expresion
    
    // no se si es mejor cambiar el scanf por gets
    
    struct estado automata [4][2][6];
    
    //primera fila de la tabla
    automata [0][0][0] = ingresar (3, " ");
    automata [0][0][1] = ingresar (1, "$");
    automata [0][0][2] = ingresar (3, " ");
    automata [0][0][3] = ingresar (0, "R");
    automata [0][0][4] = ingresar (3, " ");
    automata [0][0][5] = ingresar (3, " ");
    
    //segunda fila de la tabla
    automata [1][0][0] = ingresar (1, "$");
    automata [1][0][1] = ingresar (1, "$");
    automata [1][0][2] = ingresar (0, "$");
    automata [1][0][3] = ingresar (3, " ");
    automata [1][0][4] = ingresar (3, " ");
    automata [1][0][5] = ingresar (3, " ");
    //seguir con el automata
    
    char caracter = '\0';
    int ultimoEstado = 0;
    int i = 0;
    int j = 0;
    int k = 0;
    
    push("$");
    
    //este wile hace recorrer el automata
    while(fgetc(stdin)){
        
        caracter = fgetc(stdin);
        
        if (caracter == '0'){k = 0;} else
        if (caracter == '1' || caracter == '2' || caracter == '3' || caracter == '4' || caracter == '5' || caracter == '6' || caracter == '7' || caracter == '8' || caracter == '9'){k = 1;} else
        if (caracter == '+' || caracter == '-' || caracter == '*' || caracter == '/'){k = 2;} else
        if (caracter == '('){k = 3;} else
        if (caracter == ')'){k = 4;} else
        if (caracter == ' '){k = k;} else {k = 5;}
        if (strcmp (ptrPila -> dato, "$")){j = 0;} else {j = 1;}
        
        pop();
        if (i == 0 && caracter == '(' && ptrPila == NULL){ push("$"); }
        if (i == 0 && caracter == '(' && ptrPila != NULL){ push("R"); }
        if(caracter != ')' && !(strcmp(ptrPila -> dato, "R"))){ push(automata[i][j][k].cadPush); }
        
        i = automata[i][j][k].estado_siguiente;
        ultimoEstado = i;
        
    }
    
    return 0;
}




struct estado ingresar (int a, char b[3]) {
    struct estado x;
    x.estado_siguiente = a;
    strcpy (b, x.cadPush);
    return x;
}

void push (char string[]) {
    struct nodo *nuevoNodo = malloc(sizeof(struct nodo));
    strcpy(string, nuevoNodo -> dato);
    nuevoNodo -> siguiente = ptrPila;
    ptrPila = nuevoNodo; }

void pop(){
    if (ptrPila != NULL){
        struct nodo* temporal = ptrPila;
        ptrPila = ptrPila -> siguiente;
        free(temporal); }}

