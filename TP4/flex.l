%option noyywrap

%{

#include <stdio.h>
#include <stdlib.h>
#include "bison.tab.h"

%}

ESTRUCTURAS_DE_CONTROL "if"|"else"|"do"|"for"|"while"|"switch"|"case"|"break"|"continue"|"default"|"return"
PALABRAS_RESERVADAS "char"|"double"|"float"|"int"|"long"|"short"|"struct"|"void"|"unsigned"|"signed"|"const"|"typedef"|"enum"|"union"|"sizeof"|"auto"|"extern"|"register"|"goto"|"static"|"volatile"

OPERADORES "*"|"/"|"-"|"+"|"++"|"&"|"%"|"<"|">"|"="|"!"|"!="|"&&"|"<="|">="|"+="|"=="|"||"
CARACTERES_DE_PUNTUACION [(){}\[\]\;\,]

DIGITO_DECIMAL [0-9]
DIGITO_OCTAL [0-7]
DIGITO_HEXA [0-9a-fA-F]

%%

[\n] {}

[1-9]{DIGITO_DECIMAL}* { yylval.numero = atoi(yytext); return NUMERO; }

0{DIGITO_OCTAL}* {yylval.numero = atoi(yytext); return NUMERO; }

0[xX]{DIGITO_HEXA}+ {yylval.numero = atoi(yytext); return NUMERO; }

[0–9]*\.[0–9]+ { }

[0-9]*(\.)[0-9]+([eE]([\+\-]?)[0-9]+)? { }

\/\/[^\n]* { }

\/\*[^(\*\/)]*\*+\/ { }

\'(.|\\n)\' { }

{CARACTERES_DE_PUNTUACION} {return yytext[0];}

{PALABRAS_RESERVADAS} {strcpy(yylval.cadena, yytext); return PALABRA_RESERVADA;}

{ESTRUCTURAS_DE_CONTROL} { }

[a-zA-Z_][a-zA-Z0-9_]* { strcpy(yylval.cadena, yytext); return IDENTIFICADOR; }

\"[^"]*\" { }

{OPERADORES} { }

.* { }

%%