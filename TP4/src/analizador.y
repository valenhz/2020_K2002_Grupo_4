%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include "listas.h"

int yylex();
    
extern FILE* yyin;

int yywrap() {
    return(1);
             }    

void yyerror (char const *s) {}          

int linea = 1;
int contadorDeclaraciones = 0;
int contadorSentencias = 0;
DECLARACION *listaDeclaraciones = NULL;
ERRORES *listaErroresSintacticos = NULL;
ERRORESLEX *listaErroresLexicos = NULL;
FUNCIONES *listaFunciones = NULL;

%}

%union {
    char* cadena;
    int entero;
    float flotante;
}

%token <entero> CONSTANTE_ENTERA
%token <flotante> CONSTANTE_REAL
%token <cadena> CONSTANTE_CARACTER
%token <cadena> IDENTIFICADOR
%token <cadena> LITERAL_CADENA
%token <cadena> OPERADOR_ASIGNACION
%token <cadena> OPERADOR_O_LOGICO
%token <cadena> OPERADOR_Y_LOGICO
%token <cadena> COMPARADOR_IGUALDAD
%token <cadena> OPERADOR_RELACION
%token <cadena> OPERADOR_INCREMENTO
%token <cadena> SIZE_OF
%token <cadena> FLECHA
%token <cadena> ESPECIFICADOR_CLASE_ALMACENAMIENTO
%token <cadena> TIPO_DATO
%token <cadena> CALIFICADOR_DE_TIPO
%token <cadena> STRUCT_O_UNION
%token <cadena> ENUM
%token <cadena> IF
%token <cadena> ELSE
%token <cadena> SWITCH
%token <cadena> WHILE
%token <cadena> DO
%token <cadena> FOR 
%token <cadena> CASE 
%token <cadena> DEFAULT 
%token <cadena> CONTINUE 
%token <cadena> BREAK 
%token <cadena> RETURN  
%token <cadena> ERRORLEX  

%type <cadena> error
%type <cadena> variableSimple
%type <cadena> listaVariablesSimples

%%

input:  /* vacio */
        | input line
;

line:   declaracion '\n'        {linea++;}
        | sentencia '\n'        {linea++;}
        | errorLexico '\n'      {InsertarLEX(&listaErroresLexicos, linea); linea++; printf("se encontro error lex");}
        | error '\n'            {InsertarE(&listaErroresSintacticos, linea); linea++;}      
;

errorLexico: ERRORLEX 
             | errorLexico ERRORLEX 

/* EXPRESIONES */

expresion:  expAsignacion
;

expAsignacion:  expCondicional
                | expUnaria OPERADOR_ASIGNACION expAsignacion
;

expCondicional: expOr
                | expOr '?' expresion ':' expCondicional
;

expOr:  expAnd
        | expOr OPERADOR_O_LOGICO expAnd
;

expAnd: expIgualdad
        | expAnd OPERADOR_Y_LOGICO expIgualdad
;

expIgualdad:    expRelacional
                | expIgualdad COMPARADOR_IGUALDAD expRelacional
;

expRelacional:  expAditiva
                | expRelacional OPERADOR_RELACION expAditiva 
;

expAditiva: expMultiplicativa
            | expAditiva operAditivo expMultiplicativa
;

operAditivo:    '+'
              | '-'
;

expMultiplicativa:  expUnaria
                    | expMultiplicativa operMultiplicativo expUnaria
;

operMultiplicativo:  '*'
                    |'/'
;

expUnaria:      expPostfijo
                | OPERADOR_INCREMENTO expUnaria
                | operUnario expUnaria                 
                | SIZE_OF '(' TIPO_DATO ')'
;

operUnario:  '*'
            |'&'
            |'-'
            |'!'
;

expPostfijo:    expPrimaria
                | expPostfijo '[' expresion ']'
                | expPostfijo '(' opcionListaArgumentos ')'
;

opcionListaArgumentos:  /* vacio*/
                        | expAsignacion
                        | opcionListaArgumentos ',' expAsignacion
;

expPrimaria:    IDENTIFICADOR
                | constante
                | LITERAL_CADENA
                | '(' expresion ')'
;

constante:  CONSTANTE_ENTERA
          | CONSTANTE_REAL
          | CONSTANTE_CARACTER
;

/* DECLARACIONES */


declaracion:  declaracionVariablesSimples
              | declaracionFunciones
              | definicionFunciones
;

declaracionVariablesSimples:  TIPO_DATO listaVariablesSimples ';' {
                                                printf("se declara la variable %s de tipo %s\n", $<cadena>2, $<cadena>1);
                                                InsertarD(&listaDeclaraciones, $<cadena>1, $<cadena>2);
                                                }
;

listaVariablesSimples:  variableSimple  {strcpy($<cadena>$, $<cadena>1);}
                        | listaVariablesSimples ',' variableSimple
;

variableSimple:  IDENTIFICADOR opcionInicializacion  {strcpy($<cadena>$, $<cadena>1);}
;

opcionInicializacion:   /* vacio */
                        | OPERADOR_ASIGNACION expCondicional
;

declaracionFunciones:   TIPO_DATO IDENTIFICADOR '(' opcionArgumentosConTipo ')' ';' {printf("\nSe declara la funcion %s de tipo %s", $<cadena>2, $<cadena>1);}
;

opcionArgumentosConTipo:        /* vacio */ 
                                | TIPO_DATO opcionReferencia IDENTIFICADOR 
                                | TIPO_DATO opcionReferencia IDENTIFICADOR ',' argumentosConTipo
;

argumentosConTipo:      TIPO_DATO opcionReferencia IDENTIFICADOR
                        | TIPO_DATO opcionReferencia IDENTIFICADOR ',' argumentosConTipo 
;

opcionReferencia:       /* vacio */
                        | '&'
;

definicionFunciones:    TIPO_DATO IDENTIFICADOR '(' opcionArgumentosConTipo ')' sentencia {printf("\nSe define la funcion %s de tipo %s", $<cadena>2, $<cadena>1);}

/* SENTENCIAS */

sentencia: sentenciaExpresion
          | sentenciaCompuesta 
          | sentenciaDeSeleccion 
          | sentenciaDeIteracion 
          | sentenciaDeSalto 
;

sentenciaCompuesta:  '{' opcionListaDeclaraciones opcionListaSentencias '}'  
;

opcionListaDeclaraciones:       /* vacio */
                                | declaracion                           
                                | opcionListaDeclaraciones declaracion 
;

listaSentencias:        sentencia                      
                        | listaSentencias sentencia    
;

opcionListaSentencias:  /* vacio*/
                        | sentencia                    
                        | listaSentencias sentencia  
;

sentenciaExpresion:     ';'                     {printf("\nSe encontro una sentencia vacia.");}
                        | expresion ';'         {printf("\nSe encontro una sentencia expresion.");}
;

sentenciaDeSeleccion:     IF '(' expresion ')' sentencia                  {printf("\nSe encontro una sentencia de seleccion (if).");}
                        | IF '(' expresion ')' sentencia ELSE sentencia {printf("\nSe encontro una sentencia de seleccion (if y else).");}
                        | SWITCH '(' expresion ')' sentencia            {printf("\nSe encontro una sentencia de seleccion (switch).");}
;

sentenciaDeIteracion:     WHILE '(' expresion ')' sentencia                                               {printf("\nSe encontro una sentencia de iteracion (while).");}
                        | DO sentencia WHILE '(' expresion ')' ';'                                      {printf("\nSe encontro una sentencia de iteracion (do while).");}
                        | FOR '(' opcionExpresion ';' opcionExpresion ';' opcionExpresion ')' sentencia {printf("\nSe encontro una sentencia de iteracion (for).");}
;

sentenciaDeSalto: RETURN opcionExpresion ';'      {printf("\nSe encontro una sentencia de salto.");}
;

opcionExpresion:    /* vacio */
                    | expresion
;


%%

int main(){

 #ifdef BISON_DEBUG
        yydebug = 1;
#endif    

    yyin = fopen("entrada.txt", "r"); 
    yyparse();
    
    InsertarLEX(&listaErroresLexicos, 5);

    FILE * archivoSalida = fopen("juan.txt","w");
    printf("crea el archivo de salida");
    MostrarTitulo(archivoSalida, "Lista de variables declaradas");
    MostrarListaD(archivoSalida, listaDeclaraciones); 
    MostrarTitulo(archivoSalida, "Lista de funciones declaradas");
    MostrarListaF(archivoSalida, listaFunciones);
    MostrarTitulo(archivoSalida, "Errores Lexicos");
    MostrarListaLEX(archivoSalida, listaErroresLexicos);
    MostrarTitulo(archivoSalida, "Errores Sintacticos");
    MostrarListaE(archivoSalida, listaErroresSintacticos);
    MostrarTitulo(archivoSalida, "Errores Semanticos");
    
    fclose(yyin);

}  
