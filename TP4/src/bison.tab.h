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
     IDENTIFICADOR = 261,
     LITERAL_CADENA = 262,
     OPERADOR_ASIGNACION = 263,
     OPERADOR_O_LOGICO = 264,
     OPERADOR_Y_LOGICO = 265,
     COMPARADOR_IGUALDAD = 266,
     COMPARADOR_DISTINTO = 267,
     MAYOR_O_IGUAL = 268,
     MENOR_O_IGUAL = 269,
     OPERADOR_INCREMENTO = 270,
     OPERADOR_DECREMENTO = 271,
     SIZE_OF = 272,
     FLECHA = 273,
     ESPECIFICADOR_CLASE_ALMACENAMIENTO = 274,
     ESPECIFICADOR_DE_TIPO = 275,
     CALIFICADOR_DE_TIPO = 276,
     STRUCT_O_UNION = 277,
     ENUM = 278,
     IF = 279,
     ELSE = 280,
     SWITCH = 281,
     WHILE = 282,
     DO = 283,
     FOR = 284,
     CASE = 285,
     DEFAULT = 286,
     CONTINUE = 287,
     BREAK = 288,
     RETURN = 289
   };
#endif
/* Tokens.  */
#define CONSTANTE_ENTERA 258
#define CONSTANTE_REAL 259
#define CONSTANTE_CARACTER 260
#define IDENTIFICADOR 261
#define LITERAL_CADENA 262
#define OPERADOR_ASIGNACION 263
#define OPERADOR_O_LOGICO 264
#define OPERADOR_Y_LOGICO 265
#define COMPARADOR_IGUALDAD 266
#define COMPARADOR_DISTINTO 267
#define MAYOR_O_IGUAL 268
#define MENOR_O_IGUAL 269
#define OPERADOR_INCREMENTO 270
#define OPERADOR_DECREMENTO 271
#define SIZE_OF 272
#define FLECHA 273
#define ESPECIFICADOR_CLASE_ALMACENAMIENTO 274
#define ESPECIFICADOR_DE_TIPO 275
#define CALIFICADOR_DE_TIPO 276
#define STRUCT_O_UNION 277
#define ENUM 278
#define IF 279
#define ELSE 280
#define SWITCH 281
#define WHILE 282
#define DO 283
#define FOR 284
#define CASE 285
#define DEFAULT 286
#define CONTINUE 287
#define BREAK 288
#define RETURN 289




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 21 "bison.y"
{
    char* cadena;
    char caracter;
    int entero;
    float flotante;
}
/* Line 1529 of yacc.c.  */
#line 124 "bison.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

