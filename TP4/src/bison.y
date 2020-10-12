%{

// delimitadores de codigo C
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include <math.h>
    #define YYDEBUG 1
  
   FILE* yyin;

    void yyerror (char const *s) {
   fprintf (stderr, "%s\n", s);
}                                                               
    int yylex();
   
    int yywrap()
    {
        return(1);
    }    

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
%token <cadena> ERROR


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

%%

input: /* vacio */ {printf("Encontre una expresion de asignacion\n");}
      | input line {printf("Encontre una expresion de asignacion\n");}
;

line: '\n' {printf("Encontre una expresion de asignacion\n");}
    | expresion '\n' {printf("Encontre una expresion de asignacion\n");}
    | declaracion '\n' {printf("Encontre una expresion de asignacion\n");}
    | sentencia '\n' {printf("Encontre una expresion de asignacion\n");}
;

expresion: expresionAsignacion {printf("Encontre una expresion de asignacion\n");}
           | expresion ',' expresionAsignacion {printf("Encontre una expresion de asignacion\n");}
;

expresionAsignacion: expresionCondicional {printf("Encontre una expresion de asignacion\n");}
                     | expresionUnaria OPERADOR_ASIGNACION expresionAsignacion {printf("Encontre una expresion de asignacion\n");}
;

expresionCondicional: expresionOLogico {printf("Encontre una expresion de asignacion\n");}
                     | expresionOLogico '?' expresion ':' expresionCondicional {printf("Encontre una expresion de asignacion\n");}
;

expresionOLogico: expresionYLogico {printf("Encontre una expresion de asignacion\n");}
                 | expresionOLogico OPERADOR_O_LOGICO expresionYLogico {printf("Encontre una expresion de asignacion\n");}
;

expresionYLogico: expresionOInclusivo {printf("Encontre una expresion de asignacion\n");}
                 | expresionYLogico OPERADOR_Y_LOGICO expresionOInclusivo {printf("Encontre una expresion de asignacion\n");}
;

expresionOInclusivo: expresionOExcluyente {printf("Encontre una expresion de asignacion\n");}
                    | expresionOInclusivo '|' expresionOExcluyente {printf("Encontre una expresion de asignacion\n");}
;

expresionOExcluyente: expresionY {printf("Encontre una expresion de asignacion\n");}
                     | expresionOExcluyente '^' expresionY {printf("Encontre una expresion de asignacion\n");}
;

expresionY: expresionDeIgualdad {printf("Encontre una expresion de asignacion\n");}
            | expresionY '&' expresionDeIgualdad {printf("Encontre una expresion de asignacion\n");}
;

expresionDeIgualdad: expresionRelacional {printf("Encontre una expresion de asignacion\n");}
                    | expresionDeIgualdad COMPARADOR_IGUALDAD expresionRelacional {printf("Encontre una expresion de asignacion\n");}
                    | expresionDeIgualdad COMPARADOR_DISTINTO expresionRelacional {printf("Encontre una expresion de asignacion\n");}
;

expresionRelacional: expresionAditiva {printf("Encontre una expresion de asignacion\n");}
                    | expresionRelacional '<' expresionAditiva {printf("Encontre una expresion de asignacion\n");}
                    | expresionRelacional '>' expresionAditiva {printf("Encontre una expresion de asignacion\n");}
                    | expresionRelacional MENOR_O_IGUAL expresionAditiva {printf("Encontre una expresion de asignacion\n");}
                    | expresionRelacional MAYOR_O_IGUAL expresionAditiva {printf("Encontre una expresion de asignacion\n");}
;

expresionAditiva: expresionMultiplicativa {printf("Encontre una expresion de asignacion\n");}
                  | expresionAditiva '+' expresionMultiplicativa {printf("Encontre una expresion de asignacion\n");}
                  | expresionAditiva '-' expresionMultiplicativa {printf("Encontre una expresion de asignacion\n");}
;

expresionMultiplicativa: expresionDeConversion {printf("Encontre una expresion de asignacion\n");}
                        | expresionMultiplicativa '*' expresionDeConversion {printf("Encontre una expresion de asignacion\n");}
                        | expresionMultiplicativa '/' expresionDeConversion {printf("Encontre una expresion de asignacion\n");}
                        | expresionMultiplicativa '%' expresionDeConversion {printf("Encontre una expresion de asignacion\n");}
;

expresionDeConversion: expresionUnaria {printf("Encontre una expresion de asignacion\n");}
                      | '('nombreDeTipo')' expresionDeConversion {printf("Encontre una expresion de asignacion\n");}
;

expresionUnaria: expresionSufijo {printf("Encontre una expresion de asignacion\n");}
                | OPERADOR_INCREMENTO expresionUnaria {printf("Encontre una expresion de asignacion\n");}
                | OPERADOR_DECREMENTO expresionUnaria {printf("Encontre una expresion de asignacion\n");}
                | operadorUnario expresionDeConversion {printf("Encontre una expresion de asignacion\n");}
                | SIZE_OF expresionUnaria {printf("Encontre una expresion de asignacion\n");}
                | SIZE_OF '('nombreDeTipo')' {printf("Encontre una expresion de asignacion\n");}
;

operadorUnario: '&' {printf("Encontre una expresion de asignacion\n");}
               | '*' {printf("Encontre una expresion de asignacion\n");}
               | '+' {printf("Encontre una expresion de asignacion\n");}
               | '-' {printf("Encontre una expresion de asignacion\n");}
               | '~' {printf("Encontre una expresion de asignacion\n");}
               | '!' {printf("Encontre una expresion de asignacion\n");}
;

expresionSufijo: expresionPrimaria {printf("Encontre una expresion de asignacion\n");}
                | expresionSufijo '['expresion']'  {printf("Encontre una expresion de asignacion\n");}
                | expresionSufijo '('listaDeArgumentos')'  {printf("Encontre una expresion de asignacion\n");}
                | expresionSufijo '.' IDENTIFICADOR {printf("Encontre una expresion de asignacion\n");}
                | expresionSufijo FLECHA IDENTIFICADOR {printf("Encontre una expresion de asignacion\n");}
                | expresionSufijo OPERADOR_INCREMENTO  {printf("Encontre una expresion de asignacion\n");}
                | expresionSufijo OPERADOR_DECREMENTO {printf("Encontre una expresion de asignacion\n");}
;

listaDeArgumentos: expresionAsignacion {printf("Encontre una expresion de asignacion\n");}
                  | listaDeArgumentos ',' expresionAsignacion {printf("Encontre una expresion de asignacion\n");}
;

expresionPrimaria: IDENTIFICADOR {printf("Encontre una expresion de asignacion\n");}
                  | CONSTANTE_ENTERA {printf("Encontre una expresion de asignacion\n");}
                  | CONSTANTE_REAL {printf("Encontre una expresion de asignacion\n");}
                  | CONSTANTE_CARACTER {printf("Encontre una expresion de asignacion\n");}
                  | LITERAL_CADENA {printf("Encontre una expresion de asignacion\n");}
                  | '('expresion')'           {printf("Encontre una expresion de asignacion\n");}
;

declaracion: especificadoresDeDeclaracion listaDeDeclaradores {printf("Se encontro una declaracion\n");}
            | especificadoresDeDeclaracion  {printf("Encontre una expresion de asignacion\n");}
;

especificadoresDeDeclaracion: ESPECIFICADOR_CLASE_ALMACENAMIENTO especificadoresDeDeclaracion {printf("Encontre una expresion de asignacion\n");}
                             | ESPECIFICADOR_CLASE_ALMACENAMIENTO {printf("Encontre una expresion de asignacion\n");}
                             | especificadorDeTipo especificadoresDeDeclaracion {printf("Encontre una expresion de asignacion\n");}
                             | especificadorDeTipo {printf("Encontre una expresion de asignacion\n");}
                             | CALIFICADOR_DE_TIPO especificadoresDeDeclaracion {printf("Encontre una expresion de asignacion\n");}
                             | CALIFICADOR_DE_TIPO  {printf("Encontre una expresion de asignacion\n");}
;

listaDeDeclaradores: declarador  {printf("Encontre una expresion de asignacion\n");}
                    | listaDeDeclaradores ',' declarador {printf("Encontre una expresion de asignacion\n");}
;

declarador: decla {printf("Encontre una expresion de asignacion\n");}
          | decla '=' inicializador {printf("Encontre una expresion de asignacion\n");}
;

inicializador: expresionAsignacion {printf("Encontre una expresion de asignacion\n");}
              | '{'listaDeInicializadores'}' {printf("Encontre una expresion de asignacion\n");}
              | '{'listaDeInicializadores ',' '}' {printf("Encontre una expresion de asignacion\n");}
;

listaDeInicializadores: inicializador {printf("Encontre una expresion de asignacion\n");}
                       | listaDeInicializadores ',' inicializador {printf("Encontre una expresion de asignacion\n");}
;

especificadorDeTipo: ESPECIFICADOR_DE_TIPO {printf("Encontre una expresion de asignacion\n");}
                    | especificadorStructOUnion {printf("Encontre una expresion de asignacion\n");}
                    | especificadorDeEnum {printf("Encontre una expresion de asignacion\n");}
                    | nombreDeTypedef {printf("Encontre una expresion de asignacion\n");}
;

especificadorStructOUnion: STRUCT_O_UNION IDENTIFICADOR '{'listaDeDeclaracionesStruct'}' {printf("Encontre una expresion de asignacion\n");}
                          | STRUCT_O_UNION '{'listaDeDeclaracionesStruct'}' {printf("Encontre una expresion de asignacion\n");}
                          | STRUCT_O_UNION IDENTIFICADOR {printf("Encontre una expresion de asignacion\n");}
;

listaDeDeclaracionesStruct: declaracionStruct  {printf("Encontre una expresion de asignacion\n");}
                           | listaDeDeclaracionesStruct declaracionStruct {printf("Encontre una expresion de asignacion\n");}
;

declaracionStruct: listaDeCalificadores declaradoresStruct ';' {printf("Encontre una expresion de asignacion\n");}
;

listaDeCalificadores: especificadorDeTipo listaDeCalificadores {printf("Encontre una expresion de asignacion\n");}
                     | especificadorDeTipo {printf("Encontre una expresion de asignacion\n");}
                     | CALIFICADOR_DE_TIPO listaDeCalificadores {printf("Encontre una expresion de asignacion\n");}
                     | CALIFICADOR_DE_TIPO {printf("Encontre una expresion de asignacion\n");}
;

declaradoresStruct: declaStruct {printf("Encontre una expresion de asignacion\n");}
                   | declaradoresStruct ',' declaStruct {printf("Encontre una expresion de asignacion\n");}
;

declaStruct: decla {printf("Encontre una expresion de asignacion\n");}
            | decla ':' expresionConstante {printf("Encontre una expresion de asignacion\n");}
            | ':' expresionConstante {printf("Encontre una expresion de asignacion\n");}
;

expresionConstante: expresionCondicional {printf("Encontre una expresion de asignacion\n");}
;

decla: puntero declaradorDirecto {printf("Encontre una expresion de asignacion\n");}
      | declaradorDirecto {printf("Encontre una expresion de asignacion\n");}
;

puntero: '*' listaCalificadoresTipos {printf("Encontre una expresion de asignacion\n");}
        | '*' {printf("Encontre una expresion de asignacion\n");}
        | '*' listaCalificadoresTipos puntero {printf("Encontre una expresion de asignacion\n");}
        | '*' puntero {printf("Encontre una expresion de asignacion\n");}
;

listaCalificadoresTipos: CALIFICADOR_DE_TIPO  {printf("Encontre una expresion de asignacion\n");}
                        | listaCalificadoresTipos CALIFICADOR_DE_TIPO {printf("Encontre una expresion de asignacion\n");}
;

declaradorDirecto: IDENTIFICADOR {printf("Encontre una expresion de asignacion\n");}
                  | '('decla')' {printf("Encontre una expresion de asignacion\n");}
                  | declaradorDirecto '['expresionConstante']' {printf("Encontre una expresion de asignacion\n");}
                  | declaradorDirecto '['']' {printf("Encontre una expresion de asignacion\n");}
                  | declaradorDirecto '('listaTiposParametros')' {printf("Encontre una expresion de asignacion\n");}
                  | declaradorDirecto '('listaDeIdentificadores')' {printf("Encontre una expresion de asignacion\n");}
                  | declaradorDirecto '('')' {printf("Encontre una expresion de asignacion\n");}
;

listaTiposParametros: listaDeParametros {printf("Encontre una expresion de asignacion\n");}
                     | listaDeParametros ',' '.''.''.' {printf("Encontre una expresion de asignacion\n");}
;

listaDeParametros: declaracionDeParametro {printf("Encontre una expresion de asignacion\n");}
                  | listaDeParametros ',' declaracionDeParametro {printf("Encontre una expresion de asignacion\n");}
;

declaracionDeParametro: especificadoresDeDeclaracion decla {printf("Encontre una expresion de asignacion\n");}
                       | especificadoresDeDeclaracion declaradorAbstracto {printf("Encontre una expresion de asignacion\n");}
                       | especificadoresDeDeclaracion {printf("Encontre una expresion de asignacion\n");}
;

listaDeIdentificadores: IDENTIFICADOR {printf("Encontre una expresion de asignacion\n");}
                       | listaDeIdentificadores ',' IDENTIFICADOR {printf("Encontre una expresion de asignacion\n");}
;

especificadorDeEnum: ENUM IDENTIFICADOR '{'listaDeEnumeradores'}' {printf("Encontre una expresion de asignacion\n");}
                    | ENUM '{'listaDeEnumeradores'}' {printf("Encontre una expresion de asignacion\n");}
                    | ENUM IDENTIFICADOR {printf("Encontre una expresion de asignacion\n");}
;

listaDeEnumeradores: enumerador {printf("Encontre una expresion de asignacion\n");}
                    | listaDeEnumeradores ',' enumerador  {printf("Encontre una expresion de asignacion\n");}
;

enumerador: constanteDeEnumeracion {printf("Encontre una expresion de asignacion\n");}
           | constanteDeEnumeracion '=' expresionConstante {printf("Encontre una expresion de asignacion\n");}
;

constanteDeEnumeracion: IDENTIFICADOR {printf("Encontre una expresion de asignacion\n");}
;

nombreDeTypedef: IDENTIFICADOR {printf("Encontre una expresion de asignacion\n");}
;

nombreDeTipo: listaDeCalificadores declaradorAbstracto {printf("Encontre una expresion de asignacion\n");}
             | listaDeCalificadores {printf("Encontre una expresion de asignacion\n");}
;

declaradorAbstracto: puntero {printf("Encontre una expresion de asignacion\n");}
                    | puntero declaradorAbstractoDirecto {printf("Encontre una expresion de asignacion\n");}
                    | declaradorAbstractoDirecto {printf("Encontre una expresion de asignacion\n");}
;

declaradorAbstractoDirecto: '(' declaradorAbstracto ')' {printf("Encontre una expresion de asignacion\n");}
                           | declaradorAbstractoDirecto '[' expresionConstante ']' {printf("Encontre una expresion de asignacion\n");}
                           | declaradorAbstractoDirecto '[' ']' {printf("Encontre una expresion de asignacion\n");}
                           | '[' expresionConstante ']' {printf("Encontre una expresion de asignacion\n");}
                           | '[' ']' {printf("Encontre una expresion de asignacion\n");}
                           | declaradorAbstractoDirecto '(' listaTiposParametros ')' {printf("Encontre una expresion de asignacion\n");}
                           | declaradorAbstractoDirecto '(' ')' {printf("Encontre una expresion de asignacion\n");}
                           | '(' listaTiposParametros ')' {printf("Encontre una expresion de asignacion\n");}
                           | '(' ')'
;

sentencia: sentenciaExpresion {printf("Encontre una expresion de asignacion\n");}
          | sentenciaCompuesta {printf("Encontre una expresion de asignacion\n");}
          | sentenciaDeSeleccion {printf("Encontre una expresion de asignacion\n");}
          | sentenciaDeIteracion {printf("Encontre una expresion de asignacion\n");}
          | sentenciaEtiquetada {printf("Encontre una expresion de asignacion\n");}
          | sentenciaDeSalto {printf("Encontre una expresion de asignacion\n");}
;

sentenciaExpresion: expresion ';' {printf("Encontre una expresion de asignacion\n");}
                   | ';' {printf("Encontre una expresion de asignacion\n");}
;

sentenciaCompuesta: '{'listaDeDeclaraciones listaDeSentencias '}' {printf("Encontre una expresion de asignacion\n");}
                   | '{'listaDeDeclaraciones '}' {printf("Encontre una expresion de asignacion\n");}
                   | '{' listaDeSentencias '}' {printf("Encontre una expresion de asignacion\n");}
                   | '{' '}' {printf("Encontre una expresion de asignacion\n");}
;

listaDeDeclaraciones: declaracion {printf("Encontre una expresion de asignacion\n");}
                    | listaDeDeclaraciones declaracion {printf("Encontre una expresion de asignacion\n");}
;

listaDeSentencias: sentencia {printf("Encontre una expresion de asignacion\n");}
                  | listaDeSentencias sentencia {printf("Encontre una expresion de asignacion\n");}
;

sentenciaDeSeleccion: IF '(' expresion ')' sentencia {printf("Se encontro una sentencia de seleccion\n");}
                    | IF '(' expresion ')' sentencia ELSE sentencia {printf("Se encontro una sentencia de seleccion\n");}
                    SWITCH '(' expresion ')' sentencia {printf("Se encontro una sentencia de seleccion\n");}
;

sentenciaDeIteracion: WHILE '(' expresion ')' sentencia {printf("Se encontro una sentencia de iteracion\n");}
                    | DO sentencia WHILE '(' expresion ')' ';' {printf("Se encontro una sentencia de iteracion\n");}
                    | FOR '(' expresion ';' expresion ';' expresion ')' sentencia {printf("Se encontro una sentencia de iteracion\n");}
                    | FOR '(' ';' expresion ';' expresion ')' sentencia {printf("Se encontro una sentencia de iteracion\n");}
                    | FOR '(' expresion ';'  ';' expresion ')' sentencia {printf("Se encontro una sentencia de iteracion\n");}
                    | FOR '(' expresion ';' expresion ';' ')' sentencia {printf("Se encontro una sentencia de iteracion\n");}
                    | FOR '(' ';' ';' expresion ')' sentencia {printf("Se encontro una sentencia de iteracion\n");}
                    | FOR '(' ';' expresion ';' ')' sentencia {printf("Se encontro una sentencia de iteracion\n");}
                    | FOR '(' expresion ';' ';' ')' sentencia {printf("Se encontro una sentencia de iteracion\n");}
                    | | FOR '(' ';' ';' ')' sentencia {printf("Se encontro una sentencia de iteracion\n");}
;

sentenciaEtiquetada: CASE expresionConstante ':' sentencia {printf("Se encontro una sentencia etiquetada\n");}
                   | DEFAULT ':' sentencia {printf("Se encontro una sentencia etiquetada\n");}
                   | IDENTIFICADOR ':' sentencia {printf("Se encontro una sentencia etiquetada\n");}
;

sentenciaDeSalto: CONTINUE ';' {printf("Encontre una sentencia de salto\n");}
                | BREAK ';' {printf("Encontre una sentencia de salto\n");}
                | RETURN expresion ';' {printf("Encontre una sentencia de retorno\n");}
                | RETURN ';' {printf("Encontre una sentencia de retorno\n");}
;   


%%


int main(){

printf("Hola, la cosa compila\n\n");
yyin = fopen("entrada.c", "r");
yyparse();
//Seccion de funciones de usuario

}
