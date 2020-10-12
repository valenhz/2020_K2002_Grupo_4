%{

// delimitadores de codigo C
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include <math.h>
    #include <ctype.h>
    #define YYDEBUG 1

int yylex();
int yywrap() {
    return(1);
             }    

void yyerror (char const *s) {
   fprintf (stderr, "%s\n", s);
}                                                               

FILE* yyin;

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

input:             {printf("1\n");} 
      | input line {printf("2\n");}
;

line: '\n' {printf("3\n");}
    | expresion '\n' {printf("4\n");}
    | declaracion '\n' {printf("5\n");}
    | sentencia '\n' {printf("6\n");}
;

expresion: expresionAsignacion {printf("7\n");}
           | expresion ',' expresionAsignacion {printf("8\n");}
;

expresionAsignacion: expresionCondicional {printf("9\n");}
                     | expresionUnaria OPERADOR_ASIGNACION expresionAsignacion {printf("10\n");}
;

expresionCondicional: expresionOLogico {printf("11\n");}
                     | expresionOLogico '?' expresion ':' expresionCondicional {printf("12\n");}
;

expresionOLogico: expresionYLogico {printf("13\n");}
                 | expresionOLogico OPERADOR_O_LOGICO expresionYLogico {printf("14\n");}
;

expresionYLogico: expresionOInclusivo {printf("15\n");}
                 | expresionYLogico OPERADOR_Y_LOGICO expresionOInclusivo {printf("16\n");}
;

expresionOInclusivo: expresionOExcluyente {printf("17\n");}
                    | expresionOInclusivo '|' expresionOExcluyente {printf("18\n");}
;

expresionOExcluyente: expresionY {printf("19\n");}
                     | expresionOExcluyente '^' expresionY {printf("20\n");}
;

expresionY: expresionDeIgualdad {printf("21\n");}
            | expresionY '&' expresionDeIgualdad {printf("22\n");}
;

expresionDeIgualdad: expresionRelacional {printf("23\n");}
                    | expresionDeIgualdad COMPARADOR_IGUALDAD expresionRelacional {printf("24\n");}
                    | expresionDeIgualdad COMPARADOR_DISTINTO expresionRelacional {printf("25\n");}
;

expresionRelacional: expresionAditiva {printf("26\n");}
                    | expresionRelacional '<' expresionAditiva {printf("27\n");}
                    | expresionRelacional '>' expresionAditiva {printf("28\n");}
                    | expresionRelacional MENOR_O_IGUAL expresionAditiva {printf("29\n");}
                    | expresionRelacional MAYOR_O_IGUAL expresionAditiva {printf("30\n");}
;

expresionAditiva: expresionMultiplicativa {printf("31\n");}
                  | expresionAditiva '+' expresionMultiplicativa {printf("32\n");}
                  | expresionAditiva '-' expresionMultiplicativa {printf("33\n");}
;

expresionMultiplicativa: expresionDeConversion {printf("34\n");}
                        | expresionMultiplicativa '*' expresionDeConversion {printf("35\n");}
                        | expresionMultiplicativa '/' expresionDeConversion {printf("36\n");}
                        | expresionMultiplicativa '%' expresionDeConversion {printf("37\n");}
;

expresionDeConversion: expresionUnaria {printf("38\n");}
                      | '('nombreDeTipo')' expresionDeConversion {printf("39\n");}
;

expresionUnaria: expresionSufijo {printf("40\n");}
                | OPERADOR_INCREMENTO expresionUnaria {printf("41\n");}
                | OPERADOR_DECREMENTO expresionUnaria {printf("42\n");}
                | operadorUnario expresionDeConversion {printf("43\n");}
                | SIZE_OF expresionUnaria {printf("44\n");}
                | SIZE_OF '('nombreDeTipo')' {printf("45\n");}
;

operadorUnario: '&' {printf("46\n");}
               | '*' {printf("47\n");}
               | '+' {printf("48\n");}
               | '-' {printf("49\n");}
               | '~' {printf("50\n");}
               | '!' {printf("51\n");}
;

expresionSufijo: expresionPrimaria {printf("52\n");}
                | expresionSufijo '['expresion']'  {printf("53\n");}
                | expresionSufijo '('listaDeArgumentos')'  {printf("54\n");}
                | expresionSufijo '.' IDENTIFICADOR {printf("55n\n");}
                | expresionSufijo FLECHA IDENTIFICADOR {printf("56\n");}
                | expresionSufijo OPERADOR_INCREMENTO  {printf("57\n");}
                | expresionSufijo OPERADOR_DECREMENTO {printf("58\n");}
;

listaDeArgumentos: expresionAsignacion {printf("59\n");}
                  | listaDeArgumentos ',' expresionAsignacion {printf("60\n");}
;

expresionPrimaria: IDENTIFICADOR {printf("61\n");}
                  | CONSTANTE_ENTERA {printf("62\n");}
                  | CONSTANTE_REAL {printf("63\n");}
                  | CONSTANTE_CARACTER {printf("64\n");}
                  | LITERAL_CADENA {printf("65\n");}
                  | '('expresion')'           {printf("66\n");}
;

declaracion: especificadoresDeDeclaracion listaDeDeclaradores {printf("67\n");}
            | especificadoresDeDeclaracion  {printf("68\n");}
;

especificadoresDeDeclaracion: ESPECIFICADOR_CLASE_ALMACENAMIENTO especificadoresDeDeclaracion {printf("69\n");}
                             | ESPECIFICADOR_CLASE_ALMACENAMIENTO {printf("70\n");}
                             | especificadorDeTipo especificadoresDeDeclaracion {printf("71\n");}
                             | especificadorDeTipo {printf("72\n");}
                             | CALIFICADOR_DE_TIPO especificadoresDeDeclaracion {printf("73\n");}
                             | CALIFICADOR_DE_TIPO  {printf("74\n");}
;

listaDeDeclaradores: declarador  {printf("75\n");}
                    | listaDeDeclaradores ',' declarador {printf("76\n");}
;

declarador: decla {printf("77\n");}
          | decla '=' inicializador {printf("78\n");}
;

inicializador: expresionAsignacion {printf("79\n");}
              | '{'listaDeInicializadores'}' {printf("80\n");}
              | '{'listaDeInicializadores ',' '}' {printf("81\n");}
;

listaDeInicializadores: inicializador {printf("82\n");}
                       | listaDeInicializadores ',' inicializador {printf("83\n");}
;

especificadorDeTipo: ESPECIFICADOR_DE_TIPO {printf("84\n");}
                    | especificadorStructOUnion {printf("85\n");}
                    | especificadorDeEnum {printf("86\n");}
                    | nombreDeTypedef {printf("87\n");}
;

especificadorStructOUnion: STRUCT_O_UNION IDENTIFICADOR '{'listaDeDeclaracionesStruct'}' {printf("88\n");}
                          | STRUCT_O_UNION '{'listaDeDeclaracionesStruct'}' {printf("89\n");}
                          | STRUCT_O_UNION IDENTIFICADOR {printf("90\n");}
;

listaDeDeclaracionesStruct: declaracionStruct  {printf("91\n");}
                           | listaDeDeclaracionesStruct declaracionStruct {printf("92\n");}
;

declaracionStruct: listaDeCalificadores declaradoresStruct ';' {printf("93\n");}
;

listaDeCalificadores: especificadorDeTipo listaDeCalificadores {printf("94\n");}
                     | especificadorDeTipo {printf("95\n");}
                     | CALIFICADOR_DE_TIPO listaDeCalificadores {printf("96\n");}
                     | CALIFICADOR_DE_TIPO {printf("97\n");}
;

declaradoresStruct: declaStruct {printf("98\n");}
                   | declaradoresStruct ',' declaStruct {printf("99\n");}
;

declaStruct: decla {printf("100\n");}
            | decla ':' expresionConstante {printf("101\n");}
            | ':' expresionConstante {printf("102\n");}
;

expresionConstante: expresionCondicional {printf("103\n");}
;

decla: puntero declaradorDirecto {printf("104\n");}
      | declaradorDirecto {printf("105\n");}
;

puntero: '*' listaCalificadoresTipos {printf("106\n");}
        | '*' {printf("107\n");}
        | '*' listaCalificadoresTipos puntero {printf("108\n");}
        | '*' puntero {printf("109\n");}
;

listaCalificadoresTipos: CALIFICADOR_DE_TIPO  {printf("110\n");}
                        | listaCalificadoresTipos CALIFICADOR_DE_TIPO {printf("111\n");}
;

declaradorDirecto: IDENTIFICADOR {printf("112\n");}
                  | '('decla')' {printf("113\n");}
                  | declaradorDirecto '['expresionConstante']' {printf("114\n");}
                  | declaradorDirecto '['']' {printf("115\n");}
                  | declaradorDirecto '('listaTiposParametros')' {printf("116\n");}
                  | declaradorDirecto '('listaDeIdentificadores')' {printf("117\n");}
                  | declaradorDirecto '('')' {printf("118\n");}
;

listaTiposParametros: listaDeParametros {printf("119\n");}
                     | listaDeParametros ',' '.''.''.' {printf("120\n");}
;

listaDeParametros: declaracionDeParametro {printf("121\n");}
                  | listaDeParametros ',' declaracionDeParametro {printf("122\n");}
;

declaracionDeParametro: especificadoresDeDeclaracion decla {printf("123\n");}
                       | especificadoresDeDeclaracion declaradorAbstracto {printf("124\n");}
                       | especificadoresDeDeclaracion {printf("125\n");}
;

listaDeIdentificadores: IDENTIFICADOR {printf("126\n");}
                       | listaDeIdentificadores ',' IDENTIFICADOR {printf("127\n");}
;

especificadorDeEnum: ENUM IDENTIFICADOR '{'listaDeEnumeradores'}' {printf("128\n");}
                    | ENUM '{'listaDeEnumeradores'}' {printf("129\n");}
                    | ENUM IDENTIFICADOR {printf("130\n");}
;

listaDeEnumeradores: enumerador {printf("131\n");}
                    | listaDeEnumeradores ',' enumerador  {printf("132\n");}
;

enumerador: constanteDeEnumeracion {printf("133\n");}
           | constanteDeEnumeracion '=' expresionConstante {printf("134\n");}
;

constanteDeEnumeracion: IDENTIFICADOR {printf("135\n");}
;

nombreDeTypedef: IDENTIFICADOR {printf("136\n");}
;

nombreDeTipo: listaDeCalificadores declaradorAbstracto {printf("137\n");}
             | listaDeCalificadores {printf("138\n");}
;

declaradorAbstracto: puntero {printf("139\n");}
                    | puntero declaradorAbstractoDirecto {printf("140\n");}
                    | declaradorAbstractoDirecto {printf("141\n");}
;

declaradorAbstractoDirecto: '(' declaradorAbstracto ')' {printf("142\n");}
                           | declaradorAbstractoDirecto '[' expresionConstante ']' {printf("143\n");}
                           | declaradorAbstractoDirecto '[' ']' {printf("144\n");}
                           | '[' expresionConstante ']' {printf("145\n");}
                           | '[' ']' {printf("146\n");}
                           | declaradorAbstractoDirecto '(' listaTiposParametros ')' {printf("147\n");}
                           | declaradorAbstractoDirecto '(' ')' {printf("148\n");}
                           | '(' listaTiposParametros ')' {printf("149\n");}
                           | '(' ')' {printf("150\n");}
;

sentencia: sentenciaExpresion {printf("151\n");}
          | sentenciaCompuesta {printf("152\n");}
          | sentenciaDeSeleccion {printf("153\n");}
          | sentenciaDeIteracion {printf("154\n");}
          | sentenciaEtiquetada {printf("155\n");}
          | sentenciaDeSalto {printf("156\n");}
;

sentenciaExpresion: expresion ';' {printf("157\n");}
                   | ';' {printf("158\n");}
;

sentenciaCompuesta: '{'listaDeDeclaraciones listaDeSentencias '}' {printf("159\n");}
                   | '{'listaDeDeclaraciones '}' {printf("160\n");}
                   | '{' listaDeSentencias '}' {printf("161\n");}
                   | '{' '}' {printf("162\n");}
;

listaDeDeclaraciones: declaracion {printf("163\n");}
                    | listaDeDeclaraciones declaracion {printf("164\n");}
;

listaDeSentencias: sentencia {printf("165\n");}
                  | listaDeSentencias sentencia {printf("166\n");}
;

sentenciaDeSeleccion: IF '(' expresion ')' sentencia {printf("167\n");}
                    | IF '(' expresion ')' sentencia ELSE sentencia {printf("168\n");}
                    SWITCH '(' expresion ')' sentencia {printf("169\n");}
;

sentenciaDeIteracion: WHILE '(' expresion ')' sentencia {printf("170\n");}
                    | DO sentencia WHILE '(' expresion ')' ';' {printf("171\n");}
                    | FOR '(' expresion ';' expresion ';' expresion ')' sentencia {printf("172\n");}
                    | FOR '(' ';' expresion ';' expresion ')' sentencia {printf("173\n");}
                    | FOR '(' expresion ';'  ';' expresion ')' sentencia {printf("174\n");}
                    | FOR '(' expresion ';' expresion ';' ')' sentencia {printf("175\n");}
                    | FOR '(' ';' ';' expresion ')' sentencia {printf("176\n");}
                    | FOR '(' ';' expresion ';' ')' sentencia {printf("177\n");}
                    | FOR '(' expresion ';' ';' ')' sentencia {printf("178\n");}
                    | | FOR '(' ';' ';' ')' sentencia {printf("179\n");}
;

sentenciaEtiquetada: CASE expresionConstante ':' sentencia {printf("180\n");}
                   | DEFAULT ':' sentencia {printf("181\n");}
                   | IDENTIFICADOR ':' sentencia {printf("182\n");}
;

sentenciaDeSalto: CONTINUE ';' {printf("183\n");}
                | BREAK ';' {printf("184\n");}
                | RETURN expresion ';' {printf("185\n");}
                | RETURN ';' {printf("186\n");}
;


%%

int main(){

yyin = fopen("ingreso.c", "r");

yyparse();



}
