%{

// delimitadores de codigo C
#include <stdio.h>
#include <stdlib.h>   
%}

%union {
    char cadena[50];
    char caracter;
    int numero;
}

%token <numero> NUMERO
%token <cadena> IDENTIFICADOR
%token <cadena> PALABRA_RESERVADA


%%

input: /* vacio */
      | input line
    ;
line:  '\n'
      | exp '\n'
;

exp: NUMERO
     | exp '+' exp 
     | exp '-' exp
     | exp '*' exp
     | exp '/' exp
    ;

%%


int main(){

//Seccion de funciones de usuario

}
