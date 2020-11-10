/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     CONSTANTE_ENTERA = 258,
     CONSTANTE_REAL = 259,
     CONSTANTE_CARACTER = 260,
     ERROR = 261,
     IDENTIFICADOR = 262,
     LITERAL_CADENA = 263,
     OPERADOR_ASIGNACION = 264,
     OPERADOR_O_LOGICO = 265,
     OPERADOR_Y_LOGICO = 266,
     COMPARADOR_IGUALDAD = 267,
     COMPARADOR_DISTINTO = 268,
     MAYOR_O_IGUAL = 269,
     MENOR_O_IGUAL = 270,
     OPERADOR_INCREMENTO = 271,
     OPERADOR_DECREMENTO = 272,
     SIZE_OF = 273,
     FLECHA = 274,
     ESPECIFICADOR_CLASE_ALMACENAMIENTO = 275,
     ESPECIFICADOR_DE_TIPO = 276,
     CALIFICADOR_DE_TIPO = 277,
     STRUCT_O_UNION = 278,
     ENUM = 279,
     IF = 280,
     ELSE = 281,
     SWITCH = 282,
     WHILE = 283,
     DO = 284,
     FOR = 285,
     CASE = 286,
     DEFAULT = 287,
     CONTINUE = 288,
     BREAK = 289,
     RETURN = 290
   };
#endif
/* Tokens.  */
#define CONSTANTE_ENTERA 258
#define CONSTANTE_REAL 259
#define CONSTANTE_CARACTER 260
#define ERROR 261
#define IDENTIFICADOR 262
#define LITERAL_CADENA 263
#define OPERADOR_ASIGNACION 264
#define OPERADOR_O_LOGICO 265
#define OPERADOR_Y_LOGICO 266
#define COMPARADOR_IGUALDAD 267
#define COMPARADOR_DISTINTO 268
#define MAYOR_O_IGUAL 269
#define MENOR_O_IGUAL 270
#define OPERADOR_INCREMENTO 271
#define OPERADOR_DECREMENTO 272
#define SIZE_OF 273
#define FLECHA 274
#define ESPECIFICADOR_CLASE_ALMACENAMIENTO 275
#define ESPECIFICADOR_DE_TIPO 276
#define CALIFICADOR_DE_TIPO 277
#define STRUCT_O_UNION 278
#define ENUM 279
#define IF 280
#define ELSE 281
#define SWITCH 282
#define WHILE 283
#define DO 284
#define FOR 285
#define CASE 286
#define DEFAULT 287
#define CONTINUE 288
#define BREAK 289
#define RETURN 290




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 23 "../src/analizador.y"
{
    char* cadena;
    char caracter;
    int entero;
    float flotante;
}
/* Line 1529 of yacc.c.  */
#line 126 "analizador.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

