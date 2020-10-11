/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



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




/* Copy the first part of user declarations.  */
#line 1 "bison.y"


// delimitadores de codigo C
#include <stdio.h>
#include <stdlib.h>   
#include <string.h>
#include "libfl.a"
#include "liby.a"

int yylex();
FILE * yyin;

int yyerror (char*);

int yywrap(){
    return (1);
}



/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 21 "bison.y"
{
    char* cadena;
    char caracter;
    int entero;
    float flotante;
}
/* Line 193 of yacc.c.  */
#line 191 "bison.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 204 "bison.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1181

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  60
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  60
/* YYNRULES -- Number of rules.  */
#define YYNRULES  187
/* YYNRULES -- Number of states.  */
#define YYNSTATES  337

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   289

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      35,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    52,     2,     2,     2,    48,    41,     2,
      49,    50,    46,    44,    36,    45,    55,    47,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    38,    59,
      42,    56,    43,    37,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    53,     2,    54,    40,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    57,    39,    58,    51,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     7,     9,    12,    15,    18,    20,
      24,    26,    30,    32,    38,    40,    44,    46,    50,    52,
      56,    58,    62,    64,    68,    70,    74,    78,    80,    84,
      88,    92,    96,    98,   102,   106,   108,   112,   116,   120,
     122,   127,   129,   132,   135,   138,   141,   146,   148,   150,
     152,   154,   156,   158,   160,   165,   170,   174,   178,   181,
     184,   186,   190,   192,   194,   196,   198,   200,   204,   207,
     209,   212,   214,   217,   219,   222,   224,   226,   230,   232,
     236,   238,   242,   247,   249,   253,   255,   257,   259,   261,
     267,   272,   275,   277,   280,   284,   287,   289,   292,   294,
     296,   300,   302,   306,   309,   311,   314,   316,   319,   321,
     325,   328,   330,   333,   335,   339,   344,   348,   353,   358,
     362,   364,   370,   372,   376,   379,   382,   384,   386,   390,
     396,   401,   404,   406,   410,   412,   416,   418,   420,   423,
     425,   427,   430,   432,   436,   441,   445,   449,   452,   457,
     461,   465,   468,   470,   472,   474,   476,   478,   480,   483,
     485,   490,   494,   498,   501,   503,   506,   508,   511,   517,
     530,   536,   544,   554,   563,   572,   581,   589,   597,   605,
     606,   613,   618,   622,   626,   629,   632,   636
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      61,     0,    -1,    -1,    61,    62,    -1,    35,    -1,    63,
      35,    -1,    81,    35,    -1,   111,    35,    -1,    64,    -1,
      63,    36,    64,    -1,    65,    -1,    76,     8,    64,    -1,
      66,    -1,    66,    37,    63,    38,    65,    -1,    67,    -1,
      66,     9,    67,    -1,    68,    -1,    67,    10,    68,    -1,
      69,    -1,    68,    39,    69,    -1,    70,    -1,    69,    40,
      70,    -1,    71,    -1,    70,    41,    71,    -1,    72,    -1,
      71,    11,    72,    -1,    71,    12,    72,    -1,    73,    -1,
      72,    42,    73,    -1,    72,    43,    73,    -1,    72,    14,
      73,    -1,    72,    13,    73,    -1,    74,    -1,    73,    44,
      74,    -1,    73,    45,    74,    -1,    75,    -1,    74,    46,
      75,    -1,    74,    47,    75,    -1,    74,    48,    75,    -1,
      76,    -1,    49,   108,    50,    75,    -1,    78,    -1,    15,
      76,    -1,    16,    76,    -1,    77,    75,    -1,    17,    76,
      -1,    17,    49,   108,    50,    -1,    41,    -1,    46,    -1,
      44,    -1,    45,    -1,    51,    -1,    52,    -1,    80,    -1,
      78,    53,    63,    54,    -1,    78,    49,    79,    50,    -1,
      78,    55,     6,    -1,    78,    18,     6,    -1,    78,    15,
      -1,    78,    16,    -1,    64,    -1,    79,    36,    64,    -1,
       6,    -1,     3,    -1,     4,    -1,     5,    -1,     7,    -1,
      49,    63,    50,    -1,    82,    83,    -1,    82,    -1,    19,
      82,    -1,    19,    -1,    87,    82,    -1,    87,    -1,    21,
      82,    -1,    21,    -1,    84,    -1,    83,    36,    84,    -1,
      95,    -1,    95,    56,    85,    -1,    64,    -1,    57,    86,
      58,    -1,    57,    86,    36,    58,    -1,    85,    -1,    86,
      36,    85,    -1,    20,    -1,    88,    -1,   103,    -1,   107,
      -1,    22,     6,    57,    89,    58,    -1,    22,    57,    89,
      58,    -1,    22,     6,    -1,    90,    -1,    89,    90,    -1,
      91,    92,    59,    -1,    87,    91,    -1,    87,    -1,    21,
      91,    -1,    21,    -1,    93,    -1,    92,    36,    93,    -1,
      95,    -1,    95,    38,    94,    -1,    38,    94,    -1,    65,
      -1,    96,    98,    -1,    98,    -1,    46,    97,    -1,    46,
      -1,    46,    97,    96,    -1,    46,    96,    -1,    21,    -1,
      97,    21,    -1,     6,    -1,    49,    95,    50,    -1,    98,
      53,    94,    54,    -1,    98,    53,    54,    -1,    98,    49,
      99,    50,    -1,    98,    49,   102,    50,    -1,    98,    49,
      50,    -1,   100,    -1,   100,    36,    55,    55,    55,    -1,
     101,    -1,   100,    36,   101,    -1,    82,    95,    -1,    82,
     109,    -1,    82,    -1,     6,    -1,   102,    36,     6,    -1,
      23,     6,    57,   104,    58,    -1,    23,    57,   104,    58,
      -1,    23,     6,    -1,   105,    -1,   104,    36,   105,    -1,
     106,    -1,   106,    56,    94,    -1,     6,    -1,     6,    -1,
      91,   109,    -1,    91,    -1,    96,    -1,    96,   110,    -1,
     110,    -1,    49,   109,    50,    -1,   110,    53,    94,    54,
      -1,   110,    53,    54,    -1,    53,    94,    54,    -1,    53,
      54,    -1,   110,    49,    99,    50,    -1,   110,    49,    50,
      -1,    49,    99,    50,    -1,    49,    50,    -1,   112,    -1,
     113,    -1,   116,    -1,   117,    -1,   118,    -1,   119,    -1,
      63,    59,    -1,    59,    -1,    57,   114,   115,    58,    -1,
      57,   114,    58,    -1,    57,   115,    58,    -1,    57,    58,
      -1,    81,    -1,   114,    81,    -1,   111,    -1,   115,   111,
      -1,    24,    49,    63,    50,   111,    -1,    24,    49,    63,
      50,   111,    25,   111,    26,    49,    63,    50,   111,    -1,
      27,    49,    63,    50,   111,    -1,    28,   111,    27,    49,
      63,    50,    59,    -1,    29,    49,    63,    59,    63,    59,
      63,    50,   111,    -1,    29,    49,    59,    63,    59,    63,
      50,   111,    -1,    29,    49,    63,    59,    59,    63,    50,
     111,    -1,    29,    49,    63,    59,    63,    59,    50,   111,
      -1,    29,    49,    59,    59,    63,    50,   111,    -1,    29,
      49,    59,    63,    59,    50,   111,    -1,    29,    49,    63,
      59,    59,    50,   111,    -1,    -1,    29,    49,    59,    59,
      50,   111,    -1,    30,    94,    38,   111,    -1,    31,    38,
     111,    -1,     6,    38,   111,    -1,    32,    59,    -1,    33,
      59,    -1,    34,    63,    59,    -1,    34,    59,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    69,    69,    70,    72,    73,    74,    75,    78,    79,
      81,    82,    84,    85,    87,    88,    90,    91,    93,    94,
      96,    97,    99,   100,   102,   103,   104,   106,   107,   108,
     109,   110,   112,   113,   114,   116,   117,   118,   119,   121,
     122,   124,   125,   126,   127,   128,   129,   131,   132,   133,
     134,   135,   136,   138,   139,   140,   141,   142,   143,   144,
     146,   147,   149,   150,   151,   152,   153,   154,   157,   158,
     160,   161,   162,   163,   164,   165,   167,   168,   170,   171,
     173,   174,   175,   177,   178,   180,   181,   182,   183,   185,
     186,   187,   189,   190,   192,   194,   195,   196,   197,   199,
     200,   202,   203,   204,   206,   208,   209,   211,   212,   213,
     214,   216,   217,   219,   220,   221,   222,   223,   224,   225,
     227,   228,   230,   231,   233,   234,   235,   237,   238,   240,
     241,   242,   244,   245,   247,   248,   250,   252,   254,   255,
     257,   258,   259,   261,   262,   263,   264,   265,   266,   267,
     268,   269,   271,   272,   273,   274,   275,   276,   278,   279,
     281,   282,   283,   284,   286,   287,   289,   290,   292,   293,
     296,   297,   298,   299,   300,   301,   302,   303,   304,   305,
     305,   307,   308,   309,   311,   312,   313,   314
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "CONSTANTE_ENTERA", "CONSTANTE_REAL",
  "CONSTANTE_CARACTER", "IDENTIFICADOR", "LITERAL_CADENA",
  "OPERADOR_ASIGNACION", "OPERADOR_O_LOGICO", "OPERADOR_Y_LOGICO",
  "COMPARADOR_IGUALDAD", "COMPARADOR_DISTINTO", "MAYOR_O_IGUAL",
  "MENOR_O_IGUAL", "OPERADOR_INCREMENTO", "OPERADOR_DECREMENTO", "SIZE_OF",
  "FLECHA", "ESPECIFICADOR_CLASE_ALMACENAMIENTO", "ESPECIFICADOR_DE_TIPO",
  "CALIFICADOR_DE_TIPO", "STRUCT_O_UNION", "ENUM", "IF", "ELSE", "SWITCH",
  "WHILE", "DO", "FOR", "CASE", "DEFAULT", "CONTINUE", "BREAK", "RETURN",
  "'\\n'", "','", "'?'", "':'", "'|'", "'^'", "'&'", "'<'", "'>'", "'+'",
  "'-'", "'*'", "'/'", "'%'", "'('", "')'", "'~'", "'!'", "'['", "']'",
  "'.'", "'='", "'{'", "'}'", "';'", "$accept", "input", "line",
  "expresion", "expresionAsignacion", "expresionCondicional",
  "expresionOLogico", "expresionYLogico", "expresionOInclusivo",
  "expresionOExcluyente", "expresionY", "expresionDeIgualdad",
  "expresionRelacional", "expresionAditiva", "expresionMultiplicativa",
  "expresionDeConversion", "expresionUnaria", "operadorUnario",
  "expresionSufijo", "listaDeArgumentos", "expresionPrimaria",
  "declaracion", "especificadoresDeDeclaracion", "listaDeDeclaradores",
  "declarador", "inicializador", "listaDeInicializadores",
  "especificadorDeTipo", "especificadorStructOUnion",
  "listaDeDeclaracionesStruct", "declaracionStruct",
  "listaDeCalificadores", "declaradoresStruct", "declaStruct",
  "expresionConstante", "decla", "puntero", "listaCalificadoresTipos",
  "declaradorDirecto", "listaTiposParametros", "listaDeParametros",
  "declaracionDeParametro", "listaDeIdentificadores",
  "especificadorDeEnum", "listaDeEnumeradores", "enumerador",
  "constanteDeEnumeracion", "nombreDeTypedef", "nombreDeTipo",
  "declaradorAbstracto", "declaradorAbstractoDirecto", "sentencia",
  "sentenciaExpresion", "sentenciaCompuesta", "listaDeDeclaraciones",
  "listaDeSentencias", "sentenciaDeSeleccion", "sentenciaDeIteracion",
  "sentenciaEtiquetada", "sentenciaDeSalto", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,    10,    44,    63,    58,   124,
      94,    38,    60,    62,    43,    45,    42,    47,    37,    40,
      41,   126,    33,    91,    93,    46,    61,   123,   125,    59
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    60,    61,    61,    62,    62,    62,    62,    63,    63,
      64,    64,    65,    65,    66,    66,    67,    67,    68,    68,
      69,    69,    70,    70,    71,    71,    71,    72,    72,    72,
      72,    72,    73,    73,    73,    74,    74,    74,    74,    75,
      75,    76,    76,    76,    76,    76,    76,    77,    77,    77,
      77,    77,    77,    78,    78,    78,    78,    78,    78,    78,
      79,    79,    80,    80,    80,    80,    80,    80,    81,    81,
      82,    82,    82,    82,    82,    82,    83,    83,    84,    84,
      85,    85,    85,    86,    86,    87,    87,    87,    87,    88,
      88,    88,    89,    89,    90,    91,    91,    91,    91,    92,
      92,    93,    93,    93,    94,    95,    95,    96,    96,    96,
      96,    97,    97,    98,    98,    98,    98,    98,    98,    98,
      99,    99,   100,   100,   101,   101,   101,   102,   102,   103,
     103,   103,   104,   104,   105,   105,   106,   107,   108,   108,
     109,   109,   109,   110,   110,   110,   110,   110,   110,   110,
     110,   110,   111,   111,   111,   111,   111,   111,   112,   112,
     113,   113,   113,   113,   114,   114,   115,   115,   116,   116,
     117,   117,   117,   117,   117,   117,   117,   117,   117,   117,
     117,   118,   118,   118,   119,   119,   119,   119
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     1,     2,     2,     2,     1,     3,
       1,     3,     1,     5,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     3,     1,     3,     3,
       3,     3,     1,     3,     3,     1,     3,     3,     3,     1,
       4,     1,     2,     2,     2,     2,     4,     1,     1,     1,
       1,     1,     1,     1,     4,     4,     3,     3,     2,     2,
       1,     3,     1,     1,     1,     1,     1,     3,     2,     1,
       2,     1,     2,     1,     2,     1,     1,     3,     1,     3,
       1,     3,     4,     1,     3,     1,     1,     1,     1,     5,
       4,     2,     1,     2,     3,     2,     1,     2,     1,     1,
       3,     1,     3,     2,     1,     2,     1,     2,     1,     3,
       2,     1,     2,     1,     3,     4,     3,     4,     4,     3,
       1,     5,     1,     3,     2,     2,     1,     1,     3,     5,
       4,     2,     1,     3,     1,     3,     1,     1,     2,     1,
       1,     2,     1,     3,     4,     3,     3,     2,     4,     3,
       3,     2,     1,     1,     1,     1,     1,     1,     2,     1,
       4,     3,     3,     2,     1,     2,     1,     2,     5,    12,
       5,     7,     9,     8,     8,     8,     7,     7,     7,     0,
       6,     4,     3,     3,     2,     2,     3,     2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     1,    63,    64,    65,    62,    66,     0,     0,
       0,    71,    85,    75,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     4,    47,    49,    50,    48,
       0,    51,    52,     0,   159,     3,     0,     8,    10,    12,
      14,    16,    18,    20,    22,    24,    27,    32,    35,    39,
       0,    41,    53,     0,    69,    73,    86,    87,    88,     0,
     152,   153,   154,   155,   156,   157,   179,    62,     0,    42,
      43,     0,    45,   137,    70,    74,    91,     0,   131,     0,
       0,     0,    62,     0,     0,     0,   104,    39,     0,   179,
     184,   185,   187,     0,    62,    98,     0,    96,   139,     0,
     163,   164,   166,     0,     0,     5,     0,   158,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    44,    58,    59,     0,
       0,     0,     0,     6,   113,   108,     0,    68,    76,    78,
       0,   106,    72,     7,   183,     0,     0,     0,    92,     0,
       0,   136,     0,   132,   134,     0,     0,     0,     0,     0,
     179,   182,   186,    97,    67,    95,     0,     0,   140,   138,
     142,     0,   161,   165,     0,   162,   167,     9,    15,     0,
      17,    19,    21,    23,    25,    26,    31,    30,    28,    29,
      33,    34,    36,    37,    38,    11,    57,    60,     0,     0,
      56,   111,   110,   107,     0,     0,     0,   105,     0,     0,
      46,     0,    90,    93,     0,     0,    99,   101,     0,     0,
     130,     0,   179,   179,     0,     0,     0,     0,   181,   151,
     126,     0,   120,   122,     0,   147,     0,   141,     0,     0,
      40,   160,     0,     0,    55,    54,   112,   109,   114,    77,
       0,    80,    79,   137,   119,     0,     0,   116,     0,    89,
     103,     0,    94,     0,   129,   133,   135,   168,   170,     0,
     179,     0,     0,     0,     0,     0,   124,   140,   125,   150,
       0,   143,   146,   149,     0,   145,     0,    13,    61,    83,
       0,   117,     0,   118,   115,   100,   102,   179,     0,   180,
     179,   179,     0,   179,     0,     0,   137,     0,   123,   148,
     144,     0,    81,   128,     0,   171,   176,   177,   179,   178,
     179,   179,     0,     0,    82,    84,     0,   173,   174,   175,
     179,   121,     0,   172,     0,   179,   169
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    35,    83,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,   198,
      52,    53,   230,   137,   138,   252,   290,    55,    56,   147,
     148,   149,   215,   216,    88,   139,   140,   203,   141,   231,
     232,   233,   256,    57,   152,   153,   154,    58,    99,   234,
     170,   102,    60,    61,   103,   104,    62,    63,    64,    65
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -235
static const yytype_int16 yypact[] =
{
    -235,   321,  -235,  -235,  -235,  -235,   738,  -235,  1064,  1064,
    1114,   508,  -235,   508,     1,    13,    12,    92,   549,   118,
    1129,    19,    46,   116,   606,  -235,  -235,  -235,  -235,  -235,
     913,  -235,  -235,   378,  -235,  -235,     3,  -235,  -235,    23,
     201,   181,   138,   194,   184,   119,   188,   386,  -235,   235,
    1129,   240,  -235,   206,   101,   508,  -235,  -235,  -235,   211,
    -235,  -235,  -235,  -235,  -235,  -235,   549,  -235,  1129,  -235,
    -235,   913,  -235,  -235,  -235,  -235,   202,   539,   213,   245,
    1129,  1129,   238,     8,   254,   622,  -235,  -235,   248,   549,
    -235,  -235,  -235,    20,   564,   539,    56,   539,   311,   253,
    -235,  -235,  -235,   435,   233,  -235,  1129,  -235,  1129,  1129,
    1129,  1129,  1129,  1129,  1129,  1129,  1129,  1129,  1129,  1129,
    1129,  1129,  1129,  1129,  1129,  1129,  -235,  -235,  -235,   277,
    1129,  1129,   282,  -235,  -235,    28,   101,   262,  -235,   259,
       2,   159,  -235,  -235,  -235,   281,   539,    25,  -235,   196,
     245,  -235,   132,  -235,   279,    61,   134,   284,   672,    55,
     549,  -235,  -235,  -235,  -235,  -235,   368,   794,   164,  -235,
     222,  1129,  -235,  -235,   492,  -235,  -235,  -235,   201,    60,
     181,   138,   194,   184,   119,   119,   188,   188,   188,   188,
     386,   386,  -235,  -235,  -235,  -235,  -235,  -235,   168,    76,
    -235,  -235,  -235,    32,   289,   101,   776,   159,    14,   846,
    -235,   165,  -235,  -235,  1129,   107,  -235,   309,   133,   245,
    -235,  1129,   549,   549,  1129,   934,   121,   688,  -235,  -235,
     128,   308,   323,  -235,   313,  -235,   307,   222,   482,   861,
    -235,  -235,  1129,  1129,  -235,  -235,  -235,  -235,  -235,  -235,
     776,  -235,  -235,   179,  -235,   318,   180,  -235,   315,  -235,
    -235,   196,  -235,  1129,  -235,  -235,  -235,   346,  -235,   244,
     549,   251,   984,   999,   124,   425,  -235,    37,  -235,  -235,
     291,  -235,  -235,  -235,   327,  -235,   332,  -235,  -235,  -235,
     143,  -235,   390,  -235,  -235,  -235,  -235,   549,   333,  -235,
     549,   549,   268,   549,   272,  1049,   326,   348,  -235,  -235,
    -235,   148,  -235,  -235,   387,  -235,  -235,  -235,   549,  -235,
     549,   549,   273,   349,  -235,  -235,   366,  -235,  -235,  -235,
     549,  -235,  1129,  -235,   280,   549,  -235
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -235,  -235,  -235,     0,  -104,   -11,  -235,   312,   306,   314,
     316,   330,   139,   394,   186,   -23,     5,  -235,  -235,  -235,
    -235,   -27,    39,  -235,   221,  -234,  -235,    -2,  -235,   303,
    -129,    -8,  -235,   192,  -155,  -126,   -93,  -235,  -137,  -197,
    -235,   190,  -235,  -235,   310,   242,  -235,  -235,   401,   -94,
    -139,    -1,  -235,  -235,  -235,   370,  -235,  -235,  -235,  -235
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -138
static const yytype_int16 yytable[] =
{
      59,    36,   177,   207,   169,   168,   101,    76,   134,    86,
     204,   255,   236,    69,    70,    72,   289,    84,   213,    78,
     253,   195,    98,   217,    93,    87,   197,   126,    97,   237,
      96,    73,   108,    11,    12,    13,    14,    15,   105,   106,
      54,   284,   202,   134,   106,    12,    95,    14,    15,   201,
      74,   136,    75,   246,   258,    87,   106,    89,    77,   260,
     109,    80,   107,    98,   254,   144,   266,   107,    96,    97,
      79,    96,    54,   168,   135,    97,   173,   325,   135,   162,
     155,   156,   213,   212,   286,   159,   275,   163,   161,   165,
     167,   106,   106,    97,   142,    97,   106,   106,   242,   192,
     193,   194,   251,   176,   276,    90,   164,   134,   296,   179,
     247,   222,   106,    87,   227,    87,    87,    87,    87,    87,
      87,    87,    87,    87,    87,    87,    87,    87,    87,    87,
     245,   199,   116,   117,   134,   217,   278,   277,   237,   288,
     207,    81,    54,   261,    97,    97,   251,   135,   240,   204,
     136,     3,     4,     5,    67,     7,    86,   106,   226,   228,
     106,   118,   119,     8,     9,    10,   262,    85,   219,   219,
     106,    73,    87,   176,   135,    91,    87,   275,   112,   311,
     272,   167,   277,   305,   223,    12,    95,    14,    15,    26,
     220,   264,    27,    28,    29,   114,   115,    30,    86,    31,
      32,   312,   134,    86,   243,   250,   324,   251,   208,    97,
      86,   110,   209,   166,    87,  -127,   292,   167,   244,    87,
     111,   267,   268,   259,   269,   271,    87,   274,    86,  -127,
     293,   287,   120,   121,   214,   113,     3,     4,     5,    82,
       7,   133,   135,   125,    87,   136,   143,    87,     8,     9,
      10,   151,    86,   184,   185,   127,   128,    16,   129,   146,
      17,    18,    19,    20,    21,    22,    23,    24,    87,   299,
     150,   238,   302,   304,    26,   239,    66,    27,    28,    29,
     106,   157,    30,   196,    31,    32,   160,   106,   200,   130,
      33,   175,    34,   131,   298,   132,   314,    73,   205,   316,
     317,   300,   319,   171,   106,   322,   190,   191,   106,   106,
      11,    12,    13,    14,    15,   206,   106,   327,   318,   328,
     329,     2,   320,   330,     3,     4,     5,     6,     7,   333,
     335,   210,   334,   224,   336,   221,     8,     9,    10,   248,
      11,    12,    13,    14,    15,    16,   307,   263,    17,    18,
      19,    20,    21,    22,    23,    24,    25,   135,   279,   280,
     166,   282,    26,   281,   167,    27,    28,    29,   291,   294,
      30,   297,    31,    32,    73,  -113,  -113,   309,    33,  -113,
      34,     3,     4,     5,     6,     7,   310,    11,    12,    13,
      14,    15,   315,     8,     9,    10,   313,    11,    12,    13,
      14,    15,    16,   323,   331,    17,    18,    19,    20,    21,
      22,    23,    24,   326,   135,   332,   180,   166,   229,    26,
     178,   167,    27,    28,    29,   181,   249,    30,   182,    31,
      32,   306,   122,   123,   124,    33,   100,    34,     3,     4,
       5,     6,     7,   183,    11,    12,    13,    14,    15,   211,
       8,     9,    10,   295,    11,    12,    13,    14,    15,    16,
     218,   265,    17,    18,    19,    20,    21,    22,    23,    24,
     308,   135,   145,   174,   275,   229,    26,     0,   167,    27,
      28,    29,     0,     0,    30,     0,    31,    32,    73,     0,
       0,     0,    33,   172,    34,     3,     4,     5,    82,     7,
       0,    11,    12,    13,    14,    15,     0,     8,     9,    10,
     186,   187,   188,   189,    73,     0,    16,     0,     0,    17,
      18,    19,    20,    21,    22,    23,    24,    11,    12,    13,
      14,    15,   283,    26,     0,     0,    27,    28,    29,     0,
       0,    30,     0,    31,    32,    73,     0,     0,     0,    33,
     241,    34,     3,     4,     5,    82,     7,     0,     0,    12,
      95,    14,    15,     0,     8,     9,    10,     0,     0,     0,
    -137,     0,     0,    16,     0,     0,    17,    18,    19,    20,
      21,    22,    23,    24,  -137,  -137,  -137,  -137,     0,     0,
      26,     0,     0,    27,    28,    29,     0,     0,    30,     0,
      31,    32,     0,     0,     0,     0,    33,     0,    34,     3,
       4,     5,    67,     7,     0,     0,     0,     0,     0,     0,
       0,     8,     9,    10,     0,     3,     4,     5,    67,     7,
       0,     0,     0,     0,     0,     0,     0,     8,     9,    10,
       0,     0,     0,     0,     0,     0,     0,    26,     0,     0,
      27,    28,    29,     0,     0,    30,     0,    31,    32,     0,
       0,     0,     0,    26,     0,    92,    27,    28,    29,     0,
       0,    30,     0,    31,    32,     3,     4,     5,    67,     7,
       0,   158,     0,     0,     0,     0,     0,     8,     9,    10,
       0,     3,     4,     5,    67,     7,     0,     0,     0,     0,
       0,     0,     0,     8,     9,    10,     0,     0,     0,     0,
       0,     0,     0,    26,     0,     0,    27,    28,    29,     0,
       0,    30,     0,    31,    32,     0,     0,     0,     0,    26,
       0,   225,    27,    28,    29,     0,     0,    30,     0,    31,
      32,  -137,  -137,  -137,  -137,  -137,     0,   273,     0,     0,
       0,     0,     0,     0,     0,  -137,     0,  -137,  -137,  -137,
    -137,  -137,  -137,     0,     0,  -137,  -137,  -137,  -137,  -137,
    -137,  -137,  -137,     0,     0,     0,    66,     0,     0,     3,
       4,     5,    67,     7,     0,     0,     0,     0,     0,  -137,
    -137,     8,     9,    10,     0,  -137,  -137,     3,     4,     5,
      67,     7,     0,     0,     0,     0,     0,     0,     0,     8,
       9,    10,     0,     0,     0,     0,     0,    26,     0,     0,
      27,    28,    29,     0,     0,    30,     0,    31,    32,     0,
       0,     0,     0,   250,     0,    26,     0,     0,    27,    28,
      29,     0,     0,    30,     0,    31,    32,     0,   235,     3,
       4,     5,    67,     7,     0,     0,     0,     0,     0,     0,
       0,     8,     9,    10,     3,     4,     5,    67,     7,     0,
       0,     0,     0,     0,     0,     0,     8,     9,    10,     0,
       0,     0,     0,     0,     0,     0,     0,    26,     0,     0,
      27,    28,    29,     0,     0,    30,     0,    31,    32,     0,
     257,     0,    26,     0,     0,    27,    28,    29,     0,     0,
      30,     0,    31,    32,     0,   285,     3,     4,     5,    94,
       7,     0,     0,     0,     0,     0,     0,     0,     8,     9,
      10,     0,     0,    12,    95,    14,    15,     3,     4,     5,
      67,     7,     0,     0,     0,     0,     0,     0,     0,     8,
       9,    10,     0,     0,    26,     0,     0,    27,    28,    29,
       0,     0,    30,     0,    31,    32,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    26,     0,     0,    27,    28,
      29,     0,     0,    30,   270,    31,    32,     3,     4,     5,
      67,     7,     0,     0,     0,     0,     0,     0,     0,     8,
       9,    10,     3,     4,     5,    67,     7,     0,     0,     0,
       0,     0,     0,     0,     8,     9,    10,     0,     0,     0,
       0,     0,     0,     0,     0,    26,     0,     0,    27,    28,
      29,     0,     0,    30,   301,    31,    32,     0,     0,     0,
      26,     0,     0,    27,    28,    29,     0,     0,    30,   303,
      31,    32,     3,     4,     5,    67,     7,     0,     0,     0,
       0,     0,     0,     0,     8,     9,    10,     3,     4,     5,
      67,     7,     0,     0,     0,     0,     0,     0,     0,     8,
       9,    10,     0,     0,     0,     0,     0,     0,     0,     0,
      26,     0,     0,    27,    28,    29,     0,     0,    30,   321,
      31,    32,     0,     0,     0,    26,     0,     0,    27,    28,
      29,     0,     0,    68,     0,    31,    32,     3,     4,     5,
      67,     7,     0,     0,     0,     0,     0,     0,     0,     8,
       9,    10,     3,     4,     5,    67,     7,     0,     0,     0,
       0,     0,     0,     0,     8,     9,    10,     0,     0,     0,
       0,     0,     0,     0,     0,    26,     0,     0,    27,    28,
      29,     0,     0,    71,     0,    31,    32,     0,     0,     0,
      26,     0,     0,    27,    28,    29,     0,     0,    30,     0,
      31,    32
};

static const yytype_int16 yycheck[] =
{
       1,     1,   106,   140,    98,    98,    33,     6,     6,    20,
     136,   208,   167,     8,     9,    10,   250,    18,   147,     6,
       6,   125,    30,   149,    24,    20,   130,    50,    30,   168,
      30,     6,     9,    19,    20,    21,    22,    23,    35,    36,
       1,   238,   135,     6,    36,    20,    21,    22,    23,    21,
      11,    49,    13,    21,   209,    50,    36,    38,    57,   214,
      37,    49,    59,    71,    50,    66,   221,    59,    68,    71,
      57,    71,    33,   166,    46,    77,   103,   311,    46,    59,
      80,    81,   211,    58,   239,    85,    49,    95,    89,    97,
      53,    36,    36,    95,    55,    97,    36,    36,    38,   122,
     123,   124,   206,   104,   230,    59,    50,     6,   263,   109,
     203,    50,    36,   108,    59,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
      54,   131,    13,    14,     6,   261,   230,   230,   277,   243,
     277,    49,   103,    36,   146,   147,   250,    46,   171,   275,
      49,     3,     4,     5,     6,     7,   167,    36,   158,   160,
      36,    42,    43,    15,    16,    17,    59,    49,    36,    36,
      36,     6,   167,   174,    46,    59,   171,    49,    40,    36,
      59,    53,   275,    59,    50,    20,    21,    22,    23,    41,
      58,    58,    44,    45,    46,    11,    12,    49,   209,    51,
      52,    58,     6,   214,    36,    57,    58,   311,    49,   211,
     221,    10,    53,    49,   209,    36,    36,    53,    50,   214,
      39,   222,   223,    58,   224,   225,   221,   227,   239,    50,
      50,   242,    44,    45,    38,    41,     3,     4,     5,     6,
       7,    35,    46,     8,   239,    49,    35,   242,    15,    16,
      17,     6,   263,   114,   115,    15,    16,    24,    18,    57,
      27,    28,    29,    30,    31,    32,    33,    34,   263,   270,
      57,    49,   272,   273,    41,    53,    38,    44,    45,    46,
      36,    27,    49,     6,    51,    52,    38,    36,     6,    49,
      57,    58,    59,    53,    50,    55,   297,     6,    36,   300,
     301,    50,   303,    50,    36,   305,   120,   121,    36,    36,
      19,    20,    21,    22,    23,    56,    36,   318,    50,   320,
     321,     0,    50,    50,     3,     4,     5,     6,     7,   330,
      50,    50,   332,    49,   335,    56,    15,    16,    17,    50,
      19,    20,    21,    22,    23,    24,    55,    38,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    46,    50,    36,
      49,    54,    41,    50,    53,    44,    45,    46,    50,    54,
      49,    25,    51,    52,     6,    49,    50,    50,    57,    53,
      59,     3,     4,     5,     6,     7,    54,    19,    20,    21,
      22,    23,    59,    15,    16,    17,     6,    19,    20,    21,
      22,    23,    24,    55,    55,    27,    28,    29,    30,    31,
      32,    33,    34,    26,    46,    49,   110,    49,    50,    41,
     108,    53,    44,    45,    46,   111,   205,    49,   112,    51,
      52,     6,    46,    47,    48,    57,    58,    59,     3,     4,
       5,     6,     7,   113,    19,    20,    21,    22,    23,   146,
      15,    16,    17,   261,    19,    20,    21,    22,    23,    24,
     150,   219,    27,    28,    29,    30,    31,    32,    33,    34,
     280,    46,    71,   103,    49,    50,    41,    -1,    53,    44,
      45,    46,    -1,    -1,    49,    -1,    51,    52,     6,    -1,
      -1,    -1,    57,    58,    59,     3,     4,     5,     6,     7,
      -1,    19,    20,    21,    22,    23,    -1,    15,    16,    17,
     116,   117,   118,   119,     6,    -1,    24,    -1,    -1,    27,
      28,    29,    30,    31,    32,    33,    34,    19,    20,    21,
      22,    23,    50,    41,    -1,    -1,    44,    45,    46,    -1,
      -1,    49,    -1,    51,    52,     6,    -1,    -1,    -1,    57,
      58,    59,     3,     4,     5,     6,     7,    -1,    -1,    20,
      21,    22,    23,    -1,    15,    16,    17,    -1,    -1,    -1,
       6,    -1,    -1,    24,    -1,    -1,    27,    28,    29,    30,
      31,    32,    33,    34,    20,    21,    22,    23,    -1,    -1,
      41,    -1,    -1,    44,    45,    46,    -1,    -1,    49,    -1,
      51,    52,    -1,    -1,    -1,    -1,    57,    -1,    59,     3,
       4,     5,     6,     7,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    15,    16,    17,    -1,     3,     4,     5,     6,     7,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    15,    16,    17,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    41,    -1,    -1,
      44,    45,    46,    -1,    -1,    49,    -1,    51,    52,    -1,
      -1,    -1,    -1,    41,    -1,    59,    44,    45,    46,    -1,
      -1,    49,    -1,    51,    52,     3,     4,     5,     6,     7,
      -1,    59,    -1,    -1,    -1,    -1,    -1,    15,    16,    17,
      -1,     3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    15,    16,    17,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    41,    -1,    -1,    44,    45,    46,    -1,
      -1,    49,    -1,    51,    52,    -1,    -1,    -1,    -1,    41,
      -1,    59,    44,    45,    46,    -1,    -1,    49,    -1,    51,
      52,     3,     4,     5,     6,     7,    -1,    59,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    17,    -1,    19,    20,    21,
      22,    23,    24,    -1,    -1,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    -1,    -1,    38,    -1,    -1,     3,
       4,     5,     6,     7,    -1,    -1,    -1,    -1,    -1,    51,
      52,    15,    16,    17,    -1,    57,    58,     3,     4,     5,
       6,     7,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    15,
      16,    17,    -1,    -1,    -1,    -1,    -1,    41,    -1,    -1,
      44,    45,    46,    -1,    -1,    49,    -1,    51,    52,    -1,
      -1,    -1,    -1,    57,    -1,    41,    -1,    -1,    44,    45,
      46,    -1,    -1,    49,    -1,    51,    52,    -1,    54,     3,
       4,     5,     6,     7,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    15,    16,    17,     3,     4,     5,     6,     7,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    15,    16,    17,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    41,    -1,    -1,
      44,    45,    46,    -1,    -1,    49,    -1,    51,    52,    -1,
      54,    -1,    41,    -1,    -1,    44,    45,    46,    -1,    -1,
      49,    -1,    51,    52,    -1,    54,     3,     4,     5,     6,
       7,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    15,    16,
      17,    -1,    -1,    20,    21,    22,    23,     3,     4,     5,
       6,     7,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    15,
      16,    17,    -1,    -1,    41,    -1,    -1,    44,    45,    46,
      -1,    -1,    49,    -1,    51,    52,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    41,    -1,    -1,    44,    45,
      46,    -1,    -1,    49,    50,    51,    52,     3,     4,     5,
       6,     7,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    15,
      16,    17,     3,     4,     5,     6,     7,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    15,    16,    17,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    41,    -1,    -1,    44,    45,
      46,    -1,    -1,    49,    50,    51,    52,    -1,    -1,    -1,
      41,    -1,    -1,    44,    45,    46,    -1,    -1,    49,    50,
      51,    52,     3,     4,     5,     6,     7,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    15,    16,    17,     3,     4,     5,
       6,     7,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    15,
      16,    17,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      41,    -1,    -1,    44,    45,    46,    -1,    -1,    49,    50,
      51,    52,    -1,    -1,    -1,    41,    -1,    -1,    44,    45,
      46,    -1,    -1,    49,    -1,    51,    52,     3,     4,     5,
       6,     7,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    15,
      16,    17,     3,     4,     5,     6,     7,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    15,    16,    17,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    41,    -1,    -1,    44,    45,
      46,    -1,    -1,    49,    -1,    51,    52,    -1,    -1,    -1,
      41,    -1,    -1,    44,    45,    46,    -1,    -1,    49,    -1,
      51,    52
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    61,     0,     3,     4,     5,     6,     7,    15,    16,
      17,    19,    20,    21,    22,    23,    24,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    41,    44,    45,    46,
      49,    51,    52,    57,    59,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    80,    81,    82,    87,    88,   103,   107,   111,
     112,   113,   116,   117,   118,   119,    38,     6,    49,    76,
      76,    49,    76,     6,    82,    82,     6,    57,     6,    57,
      49,    49,     6,    63,   111,    49,    65,    76,    94,    38,
      59,    59,    59,    63,     6,    21,    63,    87,    91,   108,
      58,    81,   111,   114,   115,    35,    36,    59,     9,    37,
      10,    39,    40,    41,    11,    12,    13,    14,    42,    43,
      44,    45,    46,    47,    48,     8,    75,    15,    16,    18,
      49,    53,    55,    35,     6,    46,    49,    83,    84,    95,
      96,    98,    82,    35,   111,   108,    57,    89,    90,    91,
      57,     6,   104,   105,   106,    63,    63,    27,    59,    63,
      38,   111,    59,    91,    50,    91,    49,    53,    96,   109,
     110,    50,    58,    81,   115,    58,   111,    64,    67,    63,
      68,    69,    70,    71,    72,    72,    73,    73,    73,    73,
      74,    74,    75,    75,    75,    64,     6,    64,    79,    63,
       6,    21,    96,    97,    95,    36,    56,    98,    49,    53,
      50,    89,    58,    90,    38,    92,    93,    95,   104,    36,
      58,    56,    50,    50,    49,    59,    63,    59,   111,    50,
      82,    99,   100,   101,   109,    54,    94,   110,    49,    53,
      75,    58,    38,    36,    50,    54,    21,    96,    50,    84,
      57,    64,    85,     6,    50,    99,   102,    54,    94,    58,
      94,    36,    59,    38,    58,   105,    94,   111,   111,    63,
      50,    63,    59,    59,    63,    49,    95,    96,   109,    50,
      36,    50,    54,    50,    99,    54,    94,    65,    64,    85,
      86,    50,    36,    50,    54,    93,    94,    25,    50,   111,
      50,    50,    63,    50,    63,    59,     6,    55,   101,    50,
      54,    36,    58,     6,   111,    59,   111,   111,    50,   111,
      50,    50,    63,    55,    58,    85,    26,   111,   111,   111,
      50,    55,    49,   111,    63,    50,   111
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
      
/* Line 1267 of yacc.c.  */
#line 1900 "bison.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 317 "bison.y"



int main(){

printf("Hola, la cosa compila");

yyin = fopen("entrada.c", "r");
yyparse();
//Seccion de funciones de usuario

}

