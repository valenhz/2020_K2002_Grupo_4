#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main (int argc, const char * argv[]) {

    char expresion [30];        //expresion (cadena de caracteres)
    
    printf ("Ingrese la expresion: ");
    scanf ("%s", expresion);    //usuario ingresa la expresion

    struct estado {             //estructura para generar la matriz 
        int estadoSiguiente;
        char cadPush [3];
    };
    
    struct estado automata [3][2][5];

    automata [0][0][0] = {3," "};
    
    
return 0;
}