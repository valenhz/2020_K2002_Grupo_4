%{
    #include "analizador.tab.h"
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
%}

%option noyywrap

ESPECIFICADOR_CLASE_ALMACENAMIENTO "typedef"|"static"|"auto"|"extern"|"register"
TIPO_DATO "void"|"char"|"short"|"int"|"long"|"float"|"double"|"signed"|"unsigned"
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

OPERADORES "*"|"/"|"-"|"+"|"&"|"%"|"!"
OPERADOR_ASIGNACION "="|"*="|"/="|"%="|"+="|"-="|"^="
OPERADOR_O_LOGICO "||"
OPERADOR_Y_LOGICO "&&"
COMPARADOR_IGUALDAD "=="|"!="
OPERADOR_RELACION ">"|"<"|"<="|">="
OPERADOR_INCREMENTO "++"|"--"
SIZE_OF "sizeof"
FLECHA "->"

IDENTIFICADOR [a-zA-Z_][a-zA-Z0-9_]*
CARACTERES_DE_PUNTUACION [(){}\[\]\;\,]
LITERAL_CADENA \"[^"]*\"

DIGITO_DECIMAL [0-9]
DIGITO_OCTAL [0-7]
DIGITO_HEXA [0-9a-fA-F]

%%

"\n" {return '\n';}

" "|"\t"

{ESPECIFICADOR_CLASE_ALMACENAMIENTO} {yylval.cadena = stdrup(yytext); return ESPECIFICADOR_CLASE_ALMACENAMIENTO;}

{TIPO_DATO} {yylval.cadena = stdrup(yytext); return TIPO_DATO;}

{CALIFICADOR_DE_TIPO} {yylval.cadena = stdrup(yytext); return CALIFICADOR_DE_TIPO;}

{STRUCT_O_UNION} {yylval.cadena = stdrup(yytext); return STRUCT_O_UNION;}

{ENUM} {yylval.cadena = stdrup(yytext); return ENUM;}

{IF} {yylval.cadena = stdrup(yytext); return IF;}

{ELSE} {yylval.cadena = stdrup(yytext); return ELSE;}

{SWITCH} {yylval.cadena = stdrup(yytext); return SWITCH;}

{WHILE} {yylval.cadena = stdrup(yytext); return WHILE;}

{DO} {yylval.cadena = stdrup(yytext); return DO;}

{FOR} {yylval.cadena = stdrup(yytext); return FOR;}

{CASE} {yylval.cadena = stdrup(yytext); return CASE;}

{DEFAULT} {yylval.cadena = stdrup(yytext); return DEFAULT;}

{CONTINUE} {yylval.cadena = stdrup(yytext); return CONTINUE;}

{BREAK} {yylval.cadena = stdrup(yytext); return BREAK;}

{RETURN} {yylval.cadena = stdrup(yytext); return RETURN;}

{OPERADORES} {return yytext[0];}

{OPERADOR_ASIGNACION} {yylval.cadena = stdrup(yytext); return OPERADOR_ASIGNACION;}

{OPERADOR_O_LOGICO} {yylval.cadena = stdrup(yytext); return OPERADOR_O_LOGICO;}

{OPERADOR_Y_LOGICO} {yylval.cadena = stdrup(yytext); return OPERADOR_Y_LOGICO;}

{COMPARADOR_IGUALDAD} {yylval.cadena = stdrup(yytext); return COMPARADOR_IGUALDAD;}

{OPERADOR_RELACION} {yylval.cadena = stdrup(yytext); return OPERADOR_RELACION;}

{OPERADOR_INCREMENTO} {yylval.cadena = stdrup(yytext); return OPERADOR_INCREMENTO;}

{SIZE_OF} {yylval.cadena = stdrup(yytext); return SIZE_OF;}

{FLECHA} {yylval.cadena = stdrup(yytext); return FLECHA;}

{IDENTIFICADOR} {yylval.cadena = stdrup(yytext); return IDENTIFICADOR;}

{CARACTERES_DE_PUNTUACION} {return yytext[0];}

{LITERAL_CADENA} {yylval.cadena = stdrup(yytext); return LITERAL_CADENA;}

[1-9]{DIGITO_DECIMAL}* {yylval.entero = atoi(yytext); return CONSTANTE_ENTERA;}

0{DIGITO_OCTAL}* {yylval.entero = strtol(yytext, NULL, 0); return CONSTANTE_ENTERA;}

0[xX]{DIGITO_HEXA}+ {yylval.entero = strtol(yytext, NULL, 0); return CONSTANTE_ENTERA;}

[0–9]*\.[0–9]+ {yylval.flotante = atof(yytext); return CONSTANTE_REAL;}

[0-9]*(\.)[0-9]+([eE]([\+\-]?)[0-9]+)? {yylval.flotante = atof(yytext); return CONSTANTE_REAL;}

\'.\' {yylval.cadena = stdrup(yytext); return CONSTANTE_CARACTER;}

[.]* {printf("\nCaracter no reconocido: %c", yytext[0]);} 

%%

// \/\/[^\n]* { } 

// \/\*[^(\*\/)]*\*+\/ { } 