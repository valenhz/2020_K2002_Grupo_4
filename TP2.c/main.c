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


    
    estado automata [3][2][5];

    automata[0][0][0].siguiente = ingresar (3, '$');
    
    
return 0;
}
estado ingresar (int a, char* b) {
estado x;
  x.siguiente = a;
  x.cadPush = b;
  return x;
  }