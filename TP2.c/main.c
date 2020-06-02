#include <stdio.h>
#include <stdlib.h>
#include <string.h>

estado ingresar (int, char*);

typedef struct {             //estructura para generar la matriz 
        int siguiente;
        const char* cadPush [3];
    }estado;

int main (int argc, char * argv[]) {

    char expresion [30];        //expresion (cadena de caracteres)
    
    printf ("Ingrese la expresion: ");
    scanf ("%s", expresion);    //usuario ingresa la expresion

    // no se si es mejor cambiar el scanf por gets 
    
    estado automata [3][2][5];
    
    //primera fila de la tabla
    automata[0][0][0] = ingresar (3, " ");
    automata[0][0][1] = ingresar (1, "$");
    automata[0][0][2] = ingresar (3, " ");
    automata[0][0][3] = ingresar (0, "R$");
    automata[0][0][4] = ingresar (3, " ");
    
    //segunda fila de la tabla
    automata[1][0][0] = ingresar (1, "$");
    automata[1][0][1] = ingresar (1, "$");
    automata[1][0][2] = ingresar (0, "$");
    automata[1][0][3] = ingresar (3, " ");
    automata[1][0][4] = ingresar (3, " ");
    
return 0;
}
estado ingresar (int a, char *b) {
estado x;
  x.siguiente = a;
  strcpy (b, x.cadPush);
  return x;
  }