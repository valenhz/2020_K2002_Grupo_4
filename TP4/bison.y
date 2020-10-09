%{

// delimitadores de codigo C
#include <stdio.h>
#include <stdlib.h>   
%}

%union {
    char cadena[50];
    char caracter;
    int entero;
    float flotante;
}

%token <entero> CONSTANTE_ENTERA
%token <flotante> CONSTANTE_REAL
%token <cadena> CONSTANTE_CARACTER


%token <cadena> IDENTIFICADOR
%token <cadena> PALABRA_RESERVADA
%token <cadena> LITERAL_CADENA
%token <cadena> OPERADOR_ASIGNACION

%token <cadena> OPERADOR_O_LOGICO
%token <cadena> OPERADOR_Y_LOGICO
%token <cadena> COMPARADOR_IGUALDAD
%token <cadena> COMPARADOR_DISTINTO
%token <cadena> MAYOR_O_IGUAL
%token <cadena> MENOR_O_IGUAL
%token <cadena> OPERADOR_INCREMENTO
%token <cadena> OPERADOR_DECREMENTO
%token <cadena> SIZE_OF
%token <cadena> FLECHA


%start token 


%%

input: /* vacio */
      | input line

line: '\n'
    | expresion '\n'

expresion: expresionAsignacion
           | expresion ',' expresionAsignacion

expresionAsignacion: expresionCondicional
                     | expresionUnaria OPERADOR_ASIGNACION expresionAsignacion

expresionCondicional: expresionOLogico
                     | expresionOLogico '?' expresion ':' expresionCondicional

expresionOLogico: expresionYLogico 
                 | expresionOLogico OPERADOR_O_LOGICO expresionYLogico

expresionYLogico: expresionOInclusivo
                 | expresionYLogico OPERADOR_Y_LOGICO expresionOInclusivo

expresionOInclusivo: expresionOExcluyente
                    | expresionOInclusivo '|' expresionOExcluyente

expresionOExcluyente: expresionY
                     | expresionOExcluyente '^' expresionY

expresionY: expresionDeIgualdad
            | expresionY '&' expresionDeIgualdad

expresionDeIgualdad: expresionRelacional
                    | expresionDeIgualdad COMPARADOR_IGUALDAD expresionRelacional
                    | expresionDeIgualdad COMPARADOR_DISTINTO expresionRelacional

expresionRelacional: expresionAditiva
                    | expresionRelacional '<' expresionAditiva
                    | expresionRelacional '>' expresionAditiva
                    | expresionRelacional MENOR_O_IGUAL expresionAditiva
                    | expresionRelacional MAYOR_O_IGUAL expresionAditiva
                    
expresionAditiva: expresionMultiplicativa
                  | expresionAditiva '+' expresionMultiplicativa
                  | expresionAditiva '-' expresionMultiplicativa

expresionMultiplicativa: expresionDeConversion
                        | expresionMultiplicativa '*' expresionDeConversion
                        | expresionMultiplicativa '/' expresionDeConversion
                        | expresionMultiplicativa '%' expresionDeConversion

expresionDeConversion: expresionUnaria
                      | '('nombreDeTipo')' expresionDeConversion

expresionUnaria: expresionSufijo
                | OPERADOR_INCREMENTO expresionUnaria
                | OPERADOR_DECREMENTO expresionUnaria
                | operadorUnario expresionDeConversion
                | SIZE_OF expresionUnaria
                | SIZE_OF '('nombreDeTipo')'

operadorUnario: '&' 
               | '*'
               | '+'
               | '-'
               | '~'
               | '!'

expresionSufijo: expresionPrimaria
                | expresionSufijo '['expresion']' 
                | expresionSufijo '('listaDeArgumentos')' 
                | expresionSufijo '.' IDENTIFICADOR
                | expresionSufijo FLECHA IDENTIFICADOR
                | expresionSufijo OPERADOR_INCREMENTO 
                | expresionSufijo OPERADOR_DECREMENTO

listaDeArgumentos: expresionAsignacion
                  | listaDeArgumentos ',' expresionAsignacion

expresionPrimaria: IDENTIFICADOR
                  | CONSTANTE_ENTERA
                  | CONSTANTE_REAL
                  | CONSTANTE_CARACTER
                  | LITERAL_CADENA
                  | '('expresion')'               


%%


int main(){

//Seccion de funciones de usuario

}
