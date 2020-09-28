%option noyywrap

%{

#include <stdio.h>
#include <stdlib.h>

%}

ESTRUCTURAS_DE_CONTROL "if"|"else"|"do"|"for"|"while"|"switch"|"case"|"break"|"continue"|"default"|"return"
TIPOS_DE_DATO "char"|"double"|"float"|"int"|"long"|"short"|"struct"|"void"|"unsigned"|"signed"|"const"|"typedef"|"enum"|"union"
OTRAS_PALABRASRESERVADAS "sizeof"|"auto"|"extern"|"register"|"goto"|"static"|"volatile"

OPERADORES "*"|"/"|"-"|"+"|"++"|"&"|"%"|"<"|">"|"="|"!"|"!="|"&&"|"<="|">="|"+="|"=="|"||"
CARACTERES_DE_PUNTUACION [(){}\[\]\;\,]

DIGITO_DECIMAL [0-9]
DIGITO_OCTAL [0-7]
DIGITO_HEXA [0-9a-fA-F]

%%

[\n] {linea++;}

[1-9]{DIGITO_DECIMAL}* {
}

0{DIGITO_OCTAL}* {
}

0[xX]{DIGITO_HEXA}+ {
}

[0–9]*\.[0–9]+ {
}

[0-9]*(\.)[0-9]+([eE]([\+\-]?)[0-9]+)? {
}

\/\/[^\n]* {
}

\/\*[^(\*\/)]*\*+\/ {
}

\'(.|\\n)\' {
}

{CARACTERES_DE_PUNTUACION} {
}

{OTRAS_PALABRASRESERVADAS} {
}

{TIPOS_DE_DATO} {
}

{ESTRUCTURAS_DE_CONTROL} {
}

[a-zA-Z_][a-zA-Z0-9_]* {
}

\"[^"]*\" {
}

{OPERADORES} {
}

.* {
}

%%