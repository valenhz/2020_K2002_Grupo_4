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

input:             
      | input line 
;

line: '\n' 
    | expresion '\n' 
    | declaracion '\n' 
    | sentencia '\n' 
;

expresion: expresionAsignacion a 
;

a: ',' expresionAsignacion a 
;

expresionAsignacion: expresionCondicional 
                     | expresionUnaria OPERADOR_ASIGNACION expresionAsignacion 
;

expresionCondicional: expresionOLogico b 
;

b: '?' expresion ':' expresionCondicional
  |
;

expresionOLogico: expresionYLogico c
;

c: OPERADOR_O_LOGICO expresionYLogico c
  |
;

expresionYLogico: expresionOInclusivo d
;

d: OPERADOR_Y_LOGICO expresionOInclusivo d 
  |
;

expresionOInclusivo: expresionOExcluyente e
;

e: '|' expresionOExcluyente e
  |
;

expresionOExcluyente: expresionY f
;

f: '^' expresionY f
  |
;

expresionY: expresionDeIgualdad g
;

g: '&' expresionDeIgualdad g
  |
;

expresionDeIgualdad: expresionRelacional h
;

h: COMPARADOR_IGUALDAD expresionRelacional h
 | COMPARADOR_DISTINTO expresionRelacional h
 |
;

expresionRelacional: expresionAditiva i
;

i: '<' expresionAditiva i
 | '>' expresionAditiva i
 | MENOR_O_IGUAL expresionAditiva i
 | MAYOR_O_IGUAL expresionAditiva i
 |
;

expresionAditiva: expresionMultiplicativa j
;

j: '+' expresionMultiplicativa j
 | '-' expresionMultiplicativa j
 |
;

expresionMultiplicativa: expresionDeConversion k
;

k: '*' expresionDeConversion k
 | '/' expresionDeConversion k
 | '%' expresionDeConversion k
 |
;

expresionDeConversion: expresionUnaria 
                      | '('nombreDeTipo')' expresionDeConversion
;

expresionUnaria: expresionSufijo 
                | OPERADOR_INCREMENTO expresionUnaria 
                | OPERADOR_DECREMENTO expresionUnaria 
                | operadorUnario expresionDeConversion 
                | SIZE_OF l 
;

l: expresionUnaria
 | '('nombreDeTipo')' 
;

operadorUnario: '&' 
               | '*' 
               | '+' 
               | '-' 
               | '~' 
               | '!' 
;

expresionSufijo: expresionPrimaria m
;

m: '['expresion']' m
 | '('listaDeArgumentos')' m
 | '.' IDENTIFICADOR m
 | FLECHA IDENTIFICADOR m
 | OPERADOR_INCREMENTO m
 | OPERADOR_DECREMENTO m
 |
;

listaDeArgumentos: expresionAsignacion n
;

n: ',' expresionAsignacion n
 |
;

expresionPrimaria: IDENTIFICADOR 
                  | CONSTANTE_ENTERA 
                  | CONSTANTE_REAL 
                  | CONSTANTE_CARACTER 
                  | LITERAL_CADENA 
                  | '('expresion')'           
;

declaracion: especificadoresDeDeclaracion o 
;

o: listaDeDeclaradores
 | 
;

especificadoresDeDeclaracion: ESPECIFICADOR_CLASE_ALMACENAMIENTO p 
                             | especificadorDeTipo p 
                             | CALIFICADOR_DE_TIPO p 
;

p: especificadoresDeDeclaracion
 |
;

listaDeDeclaradores: declarador  q
;

q: ',' declarador q
 |
;

declarador: decla r
;

r: '=' inicializador
 |
;

inicializador: expresionAsignacion 
              | '{'listaDeInicializadores s
;

s: '}'
 | ',' '}'
;

listaDeInicializadores: inicializador t
;

t: ',' inicializador t
 |
;

especificadorDeTipo: ESPECIFICADOR_DE_TIPO 
                    | especificadorStructOUnion 
                    | especificadorDeEnum 
                    | nombreDeTypedef 
;

especificadorStructOUnion: STRUCT_O_UNION u
;

u: IDENTIFICADOR v
 | '{'listaDeDeclaracionesStruct'}'
;

v: '{'listaDeDeclaracionesStruct'}'
 |
;

listaDeDeclaracionesStruct: declaracionStruct w
;

w: declaracionStruct w
 |
;

declaracionStruct: listaDeCalificadores declaradoresStruct ';' 
;

listaDeCalificadores: especificadorDeTipo x
                     | CALIFICADOR_DE_TIPO x
;

x: listaDeCalificadores
 |
;

declaradoresStruct: declaStruct y
;

y: ',' declaStruct y 
 |
;

declaStruct: decla z
            | ':' expresionConstante 
;

z: ':' expresionConstante
 |
;

expresionConstante: expresionCondicional 
;

decla: puntero declaradorDirecto 
      | declaradorDirecto 
;

puntero: '*' aa
;

aa: listaCalificadoresTipos ab
 | puntero
 |
;

ab: puntero
 |
;

listaCalificadoresTipos: CALIFICADOR_DE_TIPO  ac
;

ac: CALIFICADOR_DE_TIPO ac
 |
;

declaradorDirecto: IDENTIFICADOR ad
                  | '('decla')' ad
;

ad: '[' ae
 | '(' af
 |
;

ae: expresionConstante']' ad
 | ']' ad
;

af: listaTiposParametros')' ad
 | listaDeIdentificadores')' ad
 | ')' ad
;

listaTiposParametros: listaDeParametros ag
;

ag: ',' '.''.''.'
 |
;

listaDeParametros: declaracionDeParametro ah
;

ah: ',' declaracionDeParametro ah
 |
;

declaracionDeParametro: especificadoresDeDeclaracion ai
;

ai: decla
 | declaradorAbstracto
 |
;

listaDeIdentificadores: IDENTIFICADOR aj
;

aj: ',' IDENTIFICADOR aj
 |
;

especificadorDeEnum: ENUM ak
;

ak: IDENTIFICADOR al
 | '{'listaDeEnumeradores'}'
;

al: '{'listaDeEnumeradores'}'
 |
;

listaDeEnumeradores: enumerador am
;

am: ',' enumerador am
 |
;

enumerador: constanteDeEnumeracion an
;

an: '=' expresionConstante
 |
;

constanteDeEnumeracion: IDENTIFICADOR 
;

nombreDeTypedef: IDENTIFICADOR 
;

nombreDeTipo: listaDeCalificadores ao
;

ao: declaradorAbstracto
 |
;

declaradorAbstracto: puntero ap
                    | declaradorAbstractoDirecto 
;

ap: declaradorAbstractoDirecto
 |
;

declaradorAbstractoDirecto: '(' ar
                           | '[' as
;

aq: '[' as
 | '(' at
 |
;

ar: declaradorAbstracto ')' aq
 | listaTiposParametros ')' aq
 | ')' aq
;

as: expresionConstante ']' aq
 | ']' aq
;

at: listaTiposParametros ')' aq
 | ')' aq
;

sentencia: sentenciaExpresion
          | sentenciaCompuesta 
          | sentenciaDeSeleccion 
          | sentenciaDeIteracion 
          | sentenciaEtiquetada 
          | sentenciaDeSalto 
;

sentenciaExpresion: expresion ';' 
                   | ';' 
;

sentenciaCompuesta: '{' au
;

au: listaDeDeclaraciones av
 | listaDeSentencias '}'
 | '}'
;

av: listaDeSentencias '}'
 | '}'
;

listaDeDeclaraciones: declaracion aw
;

aw: declaracion aw
 |
;

listaDeSentencias: sentencia ax
;

ax: sentencia ax
 |
;

sentenciaDeSeleccion: IF '(' expresion ')' sentencia ay
                    SWITCH '(' expresion ')' sentencia 
;

ay: ELSE sentencia
 | 
;

sentenciaDeIteracion: WHILE '(' expresion ')' sentencia 
                    | DO sentencia WHILE '(' expresion ')' ';' 
                    | FOR '(' az
;

az: expresion ';' ba
 | ';' ba
;

ba: expresion ';' bd
 | ';' bd
;

bd: expresion ')' sentencia
 | ')' sentencia
; 

sentenciaEtiquetada: CASE expresionConstante ':' sentencia 
                   | DEFAULT ':' sentencia 
                   | IDENTIFICADOR ':' sentencia 
;

sentenciaDeSalto: CONTINUE ';' 
                | BREAK ';' 
                | RETURN be
;

be: expresion ';'
 | ';'
;

%%

int main(){

yyin = fopen("ingreso.c", "r");

yyparse();



}
