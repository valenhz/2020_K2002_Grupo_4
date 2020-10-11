%{

// delimitadores de codigo C
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include <math.h>
    #define YYDEBUG 1
  
    extern int lineno;
    extern FILE* yyin; //Se declara yyin  tanto en el programa de extension .l como .y de la  misma forma

    void yyerror(char const *s); //Con yyerror se detecta el error sintáctico                                                                     
    int yylex();
   
    int yywrap()
    {
        return(1);
    }    
// #include <stdio.h>
// #include <stdlib.h>   
// #include <string.h>

// int yylex();
// FILE * yyin;

// int yyerror (char*);

// int yywrap(){
//     return (1);
// }

%}

%union {
    char* cadena;
    char caracter;
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
%token <cadena> COMPARADOR_DISTINTO
%token <cadena> MAYOR_O_IGUAL
%token <cadena> MENOR_O_IGUAL
%token <cadena> OPERADOR_INCREMENTO
%token <cadena> OPERADOR_DECREMENTO
%token <cadena> SIZE_OF
%token <cadena> FLECHA
%token <cadena> ESPECIFICADOR_CLASE_ALMACENAMIENTO
%token <cadena> ESPECIFICADOR_DE_TIPO
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

%start input 


%%

input: /* vacio */
      | input line

line: '\n'
    | expresion '\n'
    | declaracion '\n'
    | sentencia '\n'


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


declaracion: especificadoresDeDeclaracion listaDeDeclaradores
            | especificadoresDeDeclaracion 

especificadoresDeDeclaracion: ESPECIFICADOR_CLASE_ALMACENAMIENTO especificadoresDeDeclaracion
                             | ESPECIFICADOR_CLASE_ALMACENAMIENTO 
                             | especificadorDeTipo especificadoresDeDeclaracion
                             | especificadorDeTipo
                             | CALIFICADOR_DE_TIPO especificadoresDeDeclaracion
                             | CALIFICADOR_DE_TIPO 

listaDeDeclaradores: declarador 
                    | listaDeDeclaradores ',' declarador

declarador: decla
           | decla '=' inicializador

inicializador: expresionAsignacion 
              | '{'listaDeInicializadores'}' 
              | '{'listaDeInicializadores ',' '}' 

listaDeInicializadores: inicializador
                       | listaDeInicializadores ',' inicializador

especificadorDeTipo: ESPECIFICADOR_DE_TIPO
                    | especificadorStructOUnion
                    | especificadorDeEnum
                    | nombreDeTypedef

especificadorStructOUnion: STRUCT_O_UNION IDENTIFICADOR '{'listaDeDeclaracionesStruct'}'
                          | STRUCT_O_UNION '{'listaDeDeclaracionesStruct'}'
                          | STRUCT_O_UNION IDENTIFICADOR

listaDeDeclaracionesStruct: declaracionStruct 
                           | listaDeDeclaracionesStruct declaracionStruct

declaracionStruct: listaDeCalificadores declaradoresStruct ';'

listaDeCalificadores: especificadorDeTipo listaDeCalificadores 
                     | especificadorDeTipo
                     | CALIFICADOR_DE_TIPO listaDeCalificadores
                     | CALIFICADOR_DE_TIPO

declaradoresStruct: declaStruct 
                   | declaradoresStruct ',' declaStruct

declaStruct: decla
            | decla ':' expresionConstante
            | ':' expresionConstante

expresionConstante: expresionCondicional

decla: puntero declaradorDirecto
      | declaradorDirecto

puntero: '*' listaCalificadoresTipos
        | '*'
        | '*' listaCalificadoresTipos puntero
        | '*' puntero

listaCalificadoresTipos: CALIFICADOR_DE_TIPO 
                        | listaCalificadoresTipos CALIFICADOR_DE_TIPO
                        
declaradorDirecto: IDENTIFICADOR
                  | '('decla')'
                  | declaradorDirecto '['expresionConstante']'
                  | declaradorDirecto '['']'
                  | declaradorDirecto '('listaTiposParametros')'
                  | declaradorDirecto '('listaDeIdentificadores')'
                  | declaradorDirecto '('')'

listaTiposParametros: listaDeParametros 
                     | listaDeParametros ',' '.''.''.'

listaDeParametros: declaracionDeParametro
                  | listaDeParametros ',' declaracionDeParametro

declaracionDeParametro: especificadoresDeDeclaracion decla 
                       | especificadoresDeDeclaracion declaradorAbstracto
                       | especificadoresDeDeclaracion

listaDeIdentificadores: IDENTIFICADOR
                       | listaDeIdentificadores ',' IDENTIFICADOR

especificadorDeEnum: ENUM IDENTIFICADOR '{'listaDeEnumeradores'}'
                    | ENUM '{'listaDeEnumeradores'}'
                    | ENUM IDENTIFICADOR

listaDeEnumeradores: enumerador 
                    | listaDeEnumeradores ',' enumerador

enumerador: constanteDeEnumeracion 
           | constanteDeEnumeracion '=' expresionConstante

constanteDeEnumeracion: IDENTIFICADOR

nombreDeTypedef: IDENTIFICADOR

nombreDeTipo: listaDeCalificadores declaradorAbstracto
             | listaDeCalificadores

declaradorAbstracto: puntero
                    | puntero declaradorAbstractoDirecto
                    | declaradorAbstractoDirecto

declaradorAbstractoDirecto: '(' declaradorAbstracto ')'
                           | declaradorAbstractoDirecto '[' expresionConstante ']'
                           | declaradorAbstractoDirecto '[' ']'
                           | '[' expresionConstante ']'
                           | '[' ']'
                           | declaradorAbstractoDirecto '(' listaTiposParametros ')'
                           | declaradorAbstractoDirecto '(' ')'
                           | '(' listaTiposParametros ')'
                           | '(' ')'

sentencia: sentenciaExpresion
          | sentenciaCompuesta
          | sentenciaDeSeleccion
          | sentenciaDeIteracion
          | sentenciaEtiquetada
          | sentenciaDeSalto

sentenciaExpresion: expresion ';'
                   | ';'

sentenciaCompuesta: '{'listaDeDeclaraciones listaDeSentencias '}'
                   | '{'listaDeDeclaraciones '}'
                   | '{' listaDeSentencias '}'
                   | '{' '}'

listaDeDeclaraciones: declaracion
                    | listaDeDeclaraciones declaracion

listaDeSentencias: sentencia
                  | listaDeSentencias sentencia

sentenciaDeSeleccion: IF '(' expresion ')' sentencia
                    | IF '(' expresion ')' sentencia ELSE sentencia
                    SWITCH '(' expresion ')' sentencia

sentenciaDeIteracion: WHILE '(' expresion ')' sentencia
                    | DO sentencia WHILE '(' expresion ')' ';'
                    | FOR '(' expresion ';' expresion ';' expresion ')' sentencia
                    | FOR '(' ';' expresion ';' expresion ')' sentencia
                    | FOR '(' expresion ';'  ';' expresion ')' sentencia
                    | FOR '(' expresion ';' expresion ';' ')' sentencia
                    | FOR '(' ';' ';' expresion ')' sentencia
                    | FOR '(' ';' expresion ';' ')' sentencia
                    | FOR '(' expresion ';' ';' ')' sentencia
                    | | FOR '(' ';' ';' ')' sentencia

sentenciaEtiquetada: CASE expresionConstante ':' sentencia
                   | DEFAULT ':' sentencia
                   | IDENTIFICADOR ':' sentencia

sentenciaDeSalto: CONTINUE ';'
                | BREAK ';'
                | RETURN expresion ';'
                | RETURN ';'
                   

%%


int main(){

printf("Hola, la cosa compila");

yyin = fopen("entrada.c", "r");
yyparse();
//Seccion de funciones de usuario

}
