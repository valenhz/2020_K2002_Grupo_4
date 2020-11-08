
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1676 of yacc.c  */
#line 24 "../src/analizador.y"

    char* cadena;
    char caracter;
    int entero;
    float flotante;



/* Line 1676 of yacc.c  */
#line 96 "analizador.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


