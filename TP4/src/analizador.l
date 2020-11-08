%option noyywrap

%{

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#include <bison.tab.h>

%}

ESPECIFICADOR_CLASE_ALMACENAMIENTO "typedef"|"static"|"auto"|"extern"|"register"
ESPECIFICADOR_DE_TIPO "void"|"char"|"short"|"int"|"long"|"float"|"double"|"signed"|"unsigned"
CALIFICADOR_DE_TIPO "const"|"volatile"
STRUCT_O_UNION "struct"|"union"
ENUM "enum"
IF "if"
ELSE "else"
SWITCH "switch"
WHILE "while"
DO "do"
FOR "for"
CASE "case"
DEFAULT "default"
CONTINUE "continue"
BREAK "break"
RETURN "return"

OPERADORES "*"|"/"|"-"|"+"|"&"|"%"|"<"|">"|"!"
OPERADOR_ASIGNACION "="|"*="|"/="|"%="|"+="|"-="|"^="
OPERADOR_O_LOGICO "||"
OPERADOR_Y_LOGICO "&&"
COMPARADOR_IGUALDAD "=="
COMPARADOR_DISTINTO "!="
MAYOR_O_IGUAL ">="
MENOR_O_IGUAL "<="
OPERADOR_INCREMENTO "++"
OPERADOR_DECREMENTO "--"
SIZE_OF "sizeof"
FLECHA "->"

IDENTIFICADOR [a-zA-Z_][a-zA-Z0-9_]*
CARACTERES_DE_PUNTUACION [(){}\[\]\;\,]
LITERAL_CADENA \"[^"]*\"

DIGITO_DECIMAL [0-9]
DIGITO_OCTAL [0-7]
DIGITO_HEXA [0-9a-fA-F]

%%

{ESPECIFICADOR_CLASE_ALMACENAMIENTO} {strcpy(yylval.cadena, yytext); return ESPECIFICADOR_CLASE_ALMACENAMIENTO;}

{ESPECIFICADOR_DE_TIPO} {strcpy(yylval.cadena, yytext); return ESPECIFICADOR_DE_TIPO;}

{CALIFICADOR_DE_TIPO} {strcpy(yylval.cadena, yytext); return CALIFICADOR_DE_TIPO;}

{STRUCT_O_UNION} {strcpy(yylval.cadena, yytext); return STRUCT_O_UNION;}

{ENUM} {strcpy(yylval.cadena, yytext); return ENUM;}

{IF} {strcpy(yylval.cadena, yytext); return IF;}

{ELSE} {strcpy(yylval.cadena, yytext); return ELSE;}

{SWITCH} {strcpy(yylval.cadena, yytext); return SWITCH;}

{WHILE} {strcpy(yylval.cadena, yytext); return WHILE;}

{DO} {strcpy(yylval.cadena, yytext); return DO;}

{FOR} {strcpy(yylval.cadena, yytext); return FOR;}

{CASE} {strcpy(yylval.cadena, yytext); return CASE;}

{DEFAULT} {strcpy(yylval.cadena, yytext); return DEFAULT;}

{CONTINUE} {strcpy(yylval.cadena, yytext); return CONTINUE;}

{BREAK} {strcpy(yylval.cadena, yytext); return BREAK;}

{RETURN} {strcpy(yylval.cadena, yytext); return RETURN;}

{OPERADORES} {return yytext[0];}

{OPERADOR_ASIGNACION} {strcpy(yylval.cadena, yytext); return OPERADOR_ASIGNACION;}

{OPERADOR_O_LOGICO} {strcpy(yylval.cadena, yytext); return OPERADOR_O_LOGICO;}

{OPERADOR_Y_LOGICO} {strcpy(yylval.cadena, yytext); return OPERADOR_Y_LOGICO;}

{COMPARADOR_IGUALDAD} {strcpy(yylval.cadena, yytext); return COMPARADOR_IGUALDAD;}

{COMPARADOR_DISTINTO} {strcpy(yylval.cadena, yytext); return COMPARADOR_DISTINTO;}

{MAYOR_O_IGUAL} {strcpy(yylval.cadena, yytext); return MAYOR_O_IGUAL;}

{MENOR_O_IGUAL} {strcpy(yylval.cadena, yytext); return MENOR_O_IGUAL;}

{OPERADOR_INCREMENTO} {strcpy(yylval.cadena, yytext); return OPERADOR_INCREMENTO;}

{OPERADOR_DECREMENTO} {strcpy(yylval.cadena, yytext); return OPERADOR_DECREMENTO;}

{SIZE_OF} {strcpy(yylval.cadena, yytext); return SIZE_OF;}

{FLECHA} {strcpy(yylval.cadena, yytext); return FLECHA;}

{IDENTIFICADOR} {strcpy(yylval.cadena, yytext); return IDENTIFICADOR;}

{CARACTERES_DE_PUNTUACION} {return yytext[0];}

{LITERAL_CADENA} {strcpy(yylval.cadena, yytext); return LITERAL_CADENA;}

[1-9]{DIGITO_DECIMAL}* {yylval.entero = atoi(yytext); return CONSTANTE_ENTERA;}

0{DIGITO_OCTAL}* {yylval.entero = strtol(yytext, NULL, 0); return CONSTANTE_ENTERA;}

0[xX]{DIGITO_HEXA}+ {yylval.entero = strtol(yytext, NULL, 0); return CONSTANTE_ENTERA;}

[0–9]*\.[0–9]+ {yylval.flotante = atof(yytext); return CONSTANTE_REAL;}

[0-9]*(\.)[0-9]+([eE]([\+\-]?)[0-9]+)? {yylval.flotante = atof(yytext); return CONSTANTE_REAL;}

\'.\' {yylval.cadena = strdup(yytext); return CONSTANTE_CARACTER;}

[.]* {strcpy(yylval.cadena, yytext); return ERROR;}

%%

// \/\/[^\n]* { } 

// \/\*[^(\*\/)]*\*+\/ { } 