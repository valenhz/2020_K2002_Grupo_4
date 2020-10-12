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




/* Copy the first part of user declarations.  */
#line 1 "bison.y"


// delimitadores de codigo C
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include <math.h>
    #define YYDEBUG 1
  
   FILE* yyin;

    void yyerror (char const *s) {
   fprintf (stderr, "%s\n", s);
}                                                               
    int yylex();
   
    int yywrap()
    {
        return(1);
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
#line 24 "bison.y"
{
    char* cadena;
    char caracter;
    int entero;
    float flotante;
}
/* Line 193 of yacc.c.  */
#line 196 "bison.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 209 "bison.tab.c"

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
#define YYLAST   1222

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  61
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  61
/* YYNRULES -- Number of rules.  */
#define YYNRULES  188
/* YYNRULES -- Number of states.  */
#define YYNSTATES  338

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   290

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      36,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    53,     2,     2,     2,    49,    42,     2,
      50,    51,    47,    45,    37,    46,    56,    48,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    39,    60,
      43,    57,    44,    38,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    54,     2,    55,    41,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    58,    40,    59,    52,     2,     2,     2,
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
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35
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
     518,   532,   538,   546,   556,   565,   574,   583,   591,   599,
     607,   608,   615,   620,   624,   628,   631,   634,   638
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      62,     0,    -1,    -1,    62,    63,    -1,    36,    -1,    64,
      36,    -1,    82,    36,    -1,   112,    36,    -1,    65,    -1,
      64,    37,    65,    -1,    66,    -1,    77,     9,    65,    -1,
      67,    -1,    67,    38,    64,    39,    66,    -1,    68,    -1,
      67,    10,    68,    -1,    69,    -1,    68,    11,    69,    -1,
      70,    -1,    69,    40,    70,    -1,    71,    -1,    70,    41,
      71,    -1,    72,    -1,    71,    42,    72,    -1,    73,    -1,
      72,    12,    73,    -1,    72,    13,    73,    -1,    74,    -1,
      73,    43,    74,    -1,    73,    44,    74,    -1,    73,    15,
      74,    -1,    73,    14,    74,    -1,    75,    -1,    74,    45,
      75,    -1,    74,    46,    75,    -1,    76,    -1,    75,    47,
      76,    -1,    75,    48,    76,    -1,    75,    49,    76,    -1,
      77,    -1,    50,   109,    51,    76,    -1,    79,    -1,    16,
      77,    -1,    17,    77,    -1,    78,    76,    -1,    18,    77,
      -1,    18,    50,   109,    51,    -1,    42,    -1,    47,    -1,
      45,    -1,    46,    -1,    52,    -1,    53,    -1,    81,    -1,
      79,    54,    64,    55,    -1,    79,    50,    80,    51,    -1,
      79,    56,     7,    -1,    79,    19,     7,    -1,    79,    16,
      -1,    79,    17,    -1,    65,    -1,    80,    37,    65,    -1,
       7,    -1,     3,    -1,     4,    -1,     5,    -1,     8,    -1,
      50,    64,    51,    -1,    83,    84,    -1,    83,    -1,    20,
      83,    -1,    20,    -1,    88,    83,    -1,    88,    -1,    22,
      83,    -1,    22,    -1,    85,    -1,    84,    37,    85,    -1,
      96,    -1,    96,    57,    86,    -1,    65,    -1,    58,    87,
      59,    -1,    58,    87,    37,    59,    -1,    86,    -1,    87,
      37,    86,    -1,    21,    -1,    89,    -1,   104,    -1,   108,
      -1,    23,     7,    58,    90,    59,    -1,    23,    58,    90,
      59,    -1,    23,     7,    -1,    91,    -1,    90,    91,    -1,
      92,    93,    60,    -1,    88,    92,    -1,    88,    -1,    22,
      92,    -1,    22,    -1,    94,    -1,    93,    37,    94,    -1,
      96,    -1,    96,    39,    95,    -1,    39,    95,    -1,    66,
      -1,    97,    99,    -1,    99,    -1,    47,    98,    -1,    47,
      -1,    47,    98,    97,    -1,    47,    97,    -1,    22,    -1,
      98,    22,    -1,     7,    -1,    50,    96,    51,    -1,    99,
      54,    95,    55,    -1,    99,    54,    55,    -1,    99,    50,
     100,    51,    -1,    99,    50,   103,    51,    -1,    99,    50,
      51,    -1,   101,    -1,   101,    37,    56,    56,    56,    -1,
     102,    -1,   101,    37,   102,    -1,    83,    96,    -1,    83,
     110,    -1,    83,    -1,     7,    -1,   103,    37,     7,    -1,
      24,     7,    58,   105,    59,    -1,    24,    58,   105,    59,
      -1,    24,     7,    -1,   106,    -1,   105,    37,   106,    -1,
     107,    -1,   107,    57,    95,    -1,     7,    -1,     7,    -1,
      92,   110,    -1,    92,    -1,    97,    -1,    97,   111,    -1,
     111,    -1,    50,   110,    51,    -1,   111,    54,    95,    55,
      -1,   111,    54,    55,    -1,    54,    95,    55,    -1,    54,
      55,    -1,   111,    50,   100,    51,    -1,   111,    50,    51,
      -1,    50,   100,    51,    -1,    50,    51,    -1,   113,    -1,
     114,    -1,   117,    -1,   119,    -1,   120,    -1,   121,    -1,
      64,    60,    -1,    60,    -1,    58,   115,   116,    59,    -1,
      58,   115,    59,    -1,    58,   116,    59,    -1,    58,    59,
      -1,    82,    -1,   115,    82,    -1,   112,    -1,   116,   112,
      -1,    25,    50,    64,    51,   112,    -1,    -1,    25,    50,
      64,    51,   112,    26,   112,   118,    27,    50,    64,    51,
     112,    -1,    28,    50,    64,    51,   112,    -1,    29,   112,
      28,    50,    64,    51,    60,    -1,    30,    50,    64,    60,
      64,    60,    64,    51,   112,    -1,    30,    50,    60,    64,
      60,    64,    51,   112,    -1,    30,    50,    64,    60,    60,
      64,    51,   112,    -1,    30,    50,    64,    60,    64,    60,
      51,   112,    -1,    30,    50,    60,    60,    64,    51,   112,
      -1,    30,    50,    60,    64,    60,    51,   112,    -1,    30,
      50,    64,    60,    60,    51,   112,    -1,    -1,    30,    50,
      60,    60,    51,   112,    -1,    31,    95,    39,   112,    -1,
      32,    39,   112,    -1,     7,    39,   112,    -1,    33,    60,
      -1,    34,    60,    -1,    35,    64,    60,    -1,    35,    60,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    70,    70,    71,    74,    75,    76,    77,    80,    81,
      84,    85,    88,    89,    92,    93,    96,    97,   100,   101,
     104,   105,   108,   109,   112,   113,   114,   117,   118,   119,
     120,   121,   124,   125,   126,   129,   130,   131,   132,   135,
     136,   139,   140,   141,   142,   143,   144,   147,   148,   149,
     150,   151,   152,   155,   156,   157,   158,   159,   160,   161,
     164,   165,   168,   169,   170,   171,   172,   173,   176,   177,
     180,   181,   182,   183,   184,   185,   188,   189,   192,   193,
     196,   197,   198,   201,   202,   205,   206,   207,   208,   211,
     212,   213,   216,   217,   220,   223,   224,   225,   226,   229,
     230,   233,   234,   235,   238,   241,   242,   245,   246,   247,
     248,   251,   252,   255,   256,   257,   258,   259,   260,   261,
     264,   265,   268,   269,   272,   273,   274,   277,   278,   281,
     282,   283,   286,   287,   290,   291,   294,   297,   300,   301,
     304,   305,   306,   309,   310,   311,   312,   313,   314,   315,
     316,   317,   320,   321,   322,   323,   324,   325,   328,   329,
     332,   333,   334,   335,   338,   339,   342,   343,   346,   347,
     347,   351,   352,   353,   354,   355,   356,   357,   358,   359,
     360,   360,   363,   364,   365,   368,   369,   370,   371
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "CONSTANTE_ENTERA", "CONSTANTE_REAL",
  "CONSTANTE_CARACTER", "ERROR", "IDENTIFICADOR", "LITERAL_CADENA",
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
  "listaDeSentencias", "sentenciaDeSeleccion", "@1",
  "sentenciaDeIteracion", "sentenciaEtiquetada", "sentenciaDeSalto", 0
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
     285,   286,   287,   288,   289,   290,    10,    44,    63,    58,
     124,    94,    38,    60,    62,    43,    45,    42,    47,    37,
      40,    41,   126,    33,    91,    93,    46,    61,   123,   125,
      59
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    61,    62,    62,    63,    63,    63,    63,    64,    64,
      65,    65,    66,    66,    67,    67,    68,    68,    69,    69,
      70,    70,    71,    71,    72,    72,    72,    73,    73,    73,
      73,    73,    74,    74,    74,    75,    75,    75,    75,    76,
      76,    77,    77,    77,    77,    77,    77,    78,    78,    78,
      78,    78,    78,    79,    79,    79,    79,    79,    79,    79,
      80,    80,    81,    81,    81,    81,    81,    81,    82,    82,
      83,    83,    83,    83,    83,    83,    84,    84,    85,    85,
      86,    86,    86,    87,    87,    88,    88,    88,    88,    89,
      89,    89,    90,    90,    91,    92,    92,    92,    92,    93,
      93,    94,    94,    94,    95,    96,    96,    97,    97,    97,
      97,    98,    98,    99,    99,    99,    99,    99,    99,    99,
     100,   100,   101,   101,   102,   102,   102,   103,   103,   104,
     104,   104,   105,   105,   106,   106,   107,   108,   109,   109,
     110,   110,   110,   111,   111,   111,   111,   111,   111,   111,
     111,   111,   112,   112,   112,   112,   112,   112,   113,   113,
     114,   114,   114,   114,   115,   115,   116,   116,   117,   118,
     117,   119,   119,   119,   119,   119,   119,   119,   119,   119,
     119,   119,   120,   120,   120,   121,   121,   121,   121
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
       4,     3,     3,     2,     1,     2,     1,     2,     5,     0,
      13,     5,     7,     9,     8,     8,     8,     7,     7,     7,
       0,     6,     4,     3,     3,     2,     2,     3,     2
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
     152,   153,   154,   155,   156,   157,   180,    62,     0,    42,
      43,     0,    45,   137,    70,    74,    91,     0,   131,     0,
       0,     0,    62,     0,     0,     0,   104,    39,     0,   180,
     185,   186,   188,     0,    62,    98,     0,    96,   139,     0,
     163,   164,   166,     0,     0,     5,     0,   158,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    44,    58,    59,     0,
       0,     0,     0,     6,   113,   108,     0,    68,    76,    78,
       0,   106,    72,     7,   184,     0,     0,     0,    92,     0,
       0,   136,     0,   132,   134,     0,     0,     0,     0,     0,
     180,   183,   187,    97,    67,    95,     0,     0,   140,   138,
     142,     0,   161,   165,     0,   162,   167,     9,    15,     0,
      17,    19,    21,    23,    25,    26,    31,    30,    28,    29,
      33,    34,    36,    37,    38,    11,    57,    60,     0,     0,
      56,   111,   110,   107,     0,     0,     0,   105,     0,     0,
      46,     0,    90,    93,     0,     0,    99,   101,     0,     0,
     130,     0,   180,   180,     0,     0,     0,     0,   182,   151,
     126,     0,   120,   122,     0,   147,     0,   141,     0,     0,
      40,   160,     0,     0,    55,    54,   112,   109,   114,    77,
       0,    80,    79,   137,   119,     0,     0,   116,     0,    89,
     103,     0,    94,     0,   129,   133,   135,   168,   171,     0,
     180,     0,     0,     0,     0,     0,   124,   140,   125,   150,
       0,   143,   146,   149,     0,   145,     0,    13,    61,    83,
       0,   117,     0,   118,   115,   100,   102,   180,     0,   181,
     180,   180,     0,   180,     0,     0,   137,     0,   123,   148,
     144,     0,    81,   128,   169,   172,   177,   178,   180,   179,
     180,   180,     0,     0,    82,    84,     0,   174,   175,   176,
     180,   121,     0,   173,     0,     0,   180,   170
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    35,    83,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,   198,
      52,    53,   230,   137,   138,   252,   290,    55,    56,   147,
     148,   149,   215,   216,    88,   139,   140,   203,   141,   231,
     232,   233,   256,    57,   152,   153,   154,    58,    99,   234,
     170,   102,    60,    61,   103,   104,    62,   326,    63,    64,
      65
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -235
static const yytype_int16 yypact[] =
{
    -235,   323,  -235,  -235,  -235,  -235,   747,  -235,  1102,  1102,
    1118,   291,  -235,   291,     4,    12,   -43,   -12,   555,    -9,
    1169,    10,    72,    81,   613,  -235,  -235,  -235,  -235,  -235,
     917,  -235,  -235,   381,  -235,  -235,    70,  -235,  -235,    22,
      94,   122,   155,   166,    84,   169,   145,   389,  -235,   225,
    1169,   661,  -235,   205,   154,   291,  -235,  -235,  -235,   222,
    -235,  -235,  -235,  -235,  -235,  -235,   555,  -235,  1169,  -235,
    -235,   917,  -235,  -235,  -235,  -235,   197,   486,   213,   269,
    1169,  1169,   264,    19,   288,   629,  -235,  -235,   282,   555,
    -235,  -235,  -235,    54,   496,   486,    61,   486,   313,   274,
    -235,  -235,  -235,   439,   232,  -235,  1169,  -235,  1169,  1169,
    1169,  1169,  1169,  1169,  1169,  1169,  1169,  1169,  1169,  1169,
    1169,  1169,  1169,  1169,  1169,  1169,  -235,  -235,  -235,   325,
    1169,  1169,   326,  -235,  -235,    31,   154,   305,  -235,   292,
       1,    93,  -235,  -235,  -235,   299,   486,    24,  -235,   204,
     269,  -235,     2,  -235,   304,   195,   208,   312,   680,   120,
     555,  -235,  -235,  -235,  -235,  -235,   370,   832,   125,  -235,
     179,  1169,  -235,  -235,   497,  -235,  -235,  -235,    94,   249,
     122,   155,   166,    84,   169,   169,   145,   145,   145,   145,
     389,   389,  -235,  -235,  -235,  -235,  -235,  -235,   219,   123,
    -235,  -235,  -235,    45,   315,   154,   780,    93,    13,   848,
    -235,   164,  -235,  -235,  1169,   158,  -235,   332,    74,   269,
    -235,  1169,   555,   555,  1169,   968,   178,   696,  -235,  -235,
     127,   321,   327,  -235,   329,  -235,   319,   179,   286,   901,
    -235,  -235,  1169,  1169,  -235,  -235,  -235,  -235,  -235,  -235,
     780,  -235,  -235,   238,  -235,   336,   243,  -235,   340,  -235,
    -235,   204,  -235,  1169,  -235,  -235,  -235,   374,  -235,   244,
     555,   246,   984,  1035,   193,   428,  -235,    36,  -235,  -235,
     146,  -235,  -235,  -235,   345,  -235,   352,  -235,  -235,  -235,
     183,  -235,   401,  -235,  -235,  -235,  -235,   555,   358,  -235,
     555,   555,   250,   555,   267,  1051,   328,   363,  -235,  -235,
    -235,   147,  -235,  -235,  -235,  -235,  -235,  -235,   555,  -235,
     555,   555,   285,   366,  -235,  -235,   398,  -235,  -235,  -235,
     555,  -235,   379,  -235,  1169,   287,   555,  -235
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -235,  -235,  -235,     0,  -104,   -11,  -235,   322,   335,   342,
     320,   341,   -57,   417,    96,   -23,     5,  -235,  -235,  -235,
    -235,   -27,    39,  -235,   253,  -234,  -235,    -2,  -235,   330,
    -129,    -8,  -235,   216,  -155,  -126,   -93,  -235,  -137,  -164,
    -235,   185,  -235,  -235,   316,   261,  -235,  -235,   412,   -94,
    -139,    -1,  -235,  -235,  -235,   384,  -235,  -235,  -235,  -235,
    -235
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -138
static const yytype_int16 yytable[] =
{
      59,    36,   177,   207,   169,   168,   101,    80,   134,    86,
     204,    76,   236,    69,    70,    72,   289,    84,   213,    78,
     253,   195,    98,   217,    93,    87,   197,   126,    97,   237,
      96,    73,   108,    11,    12,    13,    14,    15,    81,   219,
      54,    85,   202,   134,   255,    12,    95,    14,    15,    89,
      74,   136,    75,   201,   258,    87,   106,   184,   185,   260,
     109,   220,    77,    98,   254,   144,   266,   246,    96,    97,
      79,    96,    54,   168,   284,    97,   173,   325,   135,   107,
     155,   156,   213,   212,   286,   159,   275,   163,   161,   165,
     167,   106,   135,    97,   142,    97,   114,   115,   106,   192,
     193,   194,   251,   176,   276,   110,   105,   106,   296,   179,
     247,   219,   164,    87,   162,    87,    87,    87,    87,    87,
      87,    87,    87,    87,    87,    87,    87,    87,    87,    87,
     107,   199,    90,   264,   134,   217,   278,   277,   237,   288,
     207,    91,    54,   208,    97,    97,   251,   209,   240,   204,
       3,     4,     5,    73,    67,     7,    86,   106,   226,   228,
     106,   134,   111,     8,     9,    10,    11,    12,    13,    14,
      15,    73,    87,   176,   135,   166,    87,   275,   245,   167,
     227,   167,   277,   116,   117,    12,    95,    14,    15,    26,
     120,   121,    27,    28,    29,   261,   112,    30,    86,    31,
      32,   135,   307,    86,   136,   250,   324,   251,   113,    97,
      86,   134,   118,   119,    87,   106,   190,   191,   262,    87,
     311,   267,   268,   259,   269,   271,    87,   274,    86,   238,
     106,   287,   106,   239,   125,     3,     4,     5,   272,    82,
       7,   133,   312,   214,    87,   106,   222,    87,     8,     9,
      10,   135,    86,   305,   136,   146,   243,    16,   143,   223,
      17,    18,    19,    20,    21,    22,    23,    24,    87,   299,
     244,   150,   302,   304,    26,  -127,   151,    27,    28,    29,
     292,   106,    30,   106,    31,    32,   106,   106,   242,  -127,
      33,   175,    34,    73,   293,   298,   314,   300,    73,   316,
     317,   318,   319,    66,   106,   322,    11,    12,    13,    14,
      15,    11,    12,    13,    14,    15,   157,   327,   320,   328,
     329,   160,   106,     2,   106,   171,     3,     4,     5,   333,
       6,     7,   196,   200,   335,   337,   330,   283,   336,     8,
       9,    10,   205,    11,    12,    13,    14,    15,    16,   206,
     210,    17,    18,    19,    20,    21,    22,    23,    24,    25,
     135,   221,   224,   166,   280,    26,   248,   167,    27,    28,
      29,   263,   279,    30,   282,    31,    32,    73,  -113,  -113,
     281,    33,  -113,    34,     3,     4,     5,   291,     6,     7,
      11,    12,    13,    14,    15,   294,   309,     8,     9,    10,
     297,    11,    12,    13,    14,    15,    16,   310,   313,    17,
      18,    19,    20,    21,    22,    23,    24,   135,   315,   323,
     166,   229,   331,    26,   167,   332,    27,    28,    29,   334,
     178,    30,   182,    31,    32,   306,   122,   123,   124,    33,
     100,    34,     3,     4,     5,   180,     6,     7,    11,    12,
      13,    14,    15,   181,   183,     8,     9,    10,   249,    11,
      12,    13,    14,    15,    16,   308,   218,    17,    18,    19,
      20,    21,    22,    23,    24,   135,   211,   295,   275,   229,
     265,    26,   167,   145,    27,    28,    29,   174,     0,    30,
       0,    31,    32,    73,     0,     0,     0,    33,   172,    34,
       3,     4,     5,  -137,    82,     7,     0,    12,    95,    14,
      15,     0,     0,     8,     9,    10,     0,  -137,  -137,  -137,
    -137,     0,    16,     0,     0,    17,    18,    19,    20,    21,
      22,    23,    24,   186,   187,   188,   189,     0,     0,    26,
       0,     0,    27,    28,    29,     0,     0,    30,     0,    31,
      32,     0,     0,     0,     0,    33,   241,    34,     3,     4,
       5,     0,    82,     7,     0,     0,     0,     0,     0,     0,
       0,     8,     9,    10,     0,     0,     0,     0,     0,     0,
      16,     0,     0,    17,    18,    19,    20,    21,    22,    23,
      24,     0,     0,     0,     0,     0,     0,    26,     0,     0,
      27,    28,    29,     0,     0,    30,     0,    31,    32,     0,
       0,     0,     0,    33,     0,    34,     3,     4,     5,     0,
      67,     7,     0,     0,     0,     0,     0,     0,     0,     8,
       9,    10,     3,     4,     5,     0,    67,     7,     0,     0,
       0,     0,     0,     0,     0,     8,     9,    10,     0,     0,
       0,     0,     0,     0,     0,    26,     0,     0,    27,    28,
      29,     0,     0,    30,     0,    31,    32,     0,     0,     0,
       0,    26,     0,    92,    27,    28,    29,   127,   128,    30,
     129,    31,    32,     3,     4,     5,     0,    67,     7,   158,
       0,     0,     0,     0,     0,     0,     8,     9,    10,     3,
       4,     5,     0,    67,     7,     0,     0,     0,     0,     0,
       0,   130,     8,     9,    10,   131,     0,   132,     0,     0,
       0,     0,    26,     0,     0,    27,    28,    29,     0,     0,
      30,     0,    31,    32,     0,     0,     0,     0,    26,     0,
     225,    27,    28,    29,     0,     0,    30,     0,    31,    32,
    -137,  -137,  -137,     0,  -137,  -137,   273,     0,     0,     0,
       0,     0,     0,     0,     0,  -137,     0,  -137,  -137,  -137,
    -137,  -137,  -137,     0,     0,  -137,  -137,  -137,  -137,  -137,
    -137,  -137,  -137,     3,     4,     5,    66,    67,     7,     0,
       0,     0,     0,     0,     0,     0,     8,     9,    10,  -137,
    -137,     0,     0,     0,     0,  -137,  -137,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    26,     0,     0,    27,    28,    29,     0,     0,
      30,     0,    31,    32,     0,     3,     4,     5,   250,    67,
       7,     0,     0,     0,     0,     0,     0,     0,     8,     9,
      10,     3,     4,     5,     0,    67,     7,     0,     0,     0,
       0,     0,     0,     0,     8,     9,    10,     0,     0,     0,
       0,     0,     0,     0,    26,     0,     0,    27,    28,    29,
       0,     0,    30,     0,    31,    32,     0,   235,     0,     0,
      26,     0,     0,    27,    28,    29,     0,     0,    30,     0,
      31,    32,     0,   257,     3,     4,     5,     0,    67,     7,
       0,     0,     0,     0,     0,     0,     0,     8,     9,    10,
       3,     4,     5,     0,    94,     7,     0,     0,     0,     0,
       0,     0,     0,     8,     9,    10,     0,     0,    12,    95,
      14,    15,     0,    26,     0,     0,    27,    28,    29,     0,
       0,    30,     0,    31,    32,     0,   285,     0,     0,    26,
       0,     0,    27,    28,    29,     0,     0,    30,     0,    31,
      32,     3,     4,     5,     0,    67,     7,     0,     0,     0,
       0,     0,     0,     0,     8,     9,    10,     3,     4,     5,
       0,    67,     7,     0,     0,     0,     0,     0,     0,     0,
       8,     9,    10,     0,     0,     0,     0,     0,     0,     0,
      26,     0,     0,    27,    28,    29,     0,     0,    30,   270,
      31,    32,     0,     0,     0,     0,    26,     0,     0,    27,
      28,    29,     0,     0,    30,   301,    31,    32,     3,     4,
       5,     0,    67,     7,     0,     0,     0,     0,     0,     0,
       0,     8,     9,    10,     3,     4,     5,     0,    67,     7,
       0,     0,     0,     0,     0,     0,     0,     8,     9,    10,
       0,     0,     0,     0,     0,     0,     0,    26,     0,     0,
      27,    28,    29,     0,     0,    30,   303,    31,    32,     0,
       0,     0,     0,    26,     0,     0,    27,    28,    29,     0,
       0,    30,   321,    31,    32,     3,     4,     5,     0,    67,
       7,     0,     0,     0,     0,     0,     0,     0,     8,     9,
      10,     3,     4,     5,     0,    67,     7,     0,     0,     0,
       0,     0,     0,     0,     8,     9,    10,     0,     0,     0,
       0,     0,     0,     0,    26,     0,     0,    27,    28,    29,
       0,     0,    68,     0,    31,    32,     0,     0,     0,     0,
      26,     0,     0,    27,    28,    29,     0,     0,    71,     0,
      31,    32,     3,     4,     5,     0,    67,     7,     0,     0,
       0,     0,     0,     0,     0,     8,     9,    10,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    26,     0,     0,    27,    28,    29,     0,     0,    30,
       0,    31,    32
};

static const yytype_int16 yycheck[] =
{
       1,     1,   106,   140,    98,    98,    33,    50,     7,    20,
     136,     7,   167,     8,     9,    10,   250,    18,   147,     7,
       7,   125,    30,   149,    24,    20,   130,    50,    30,   168,
      30,     7,    10,    20,    21,    22,    23,    24,    50,    37,
       1,    50,   135,     7,   208,    21,    22,    23,    24,    39,
      11,    50,    13,    22,   209,    50,    37,   114,   115,   214,
      38,    59,    58,    71,    51,    66,   221,    22,    68,    71,
      58,    71,    33,   166,   238,    77,   103,   311,    47,    60,
      80,    81,   211,    59,   239,    85,    50,    95,    89,    97,
      54,    37,    47,    95,    55,    97,    12,    13,    37,   122,
     123,   124,   206,   104,   230,    11,    36,    37,   263,   109,
     203,    37,    51,   108,    60,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
      60,   131,    60,    59,     7,   261,   230,   230,   277,   243,
     277,    60,   103,    50,   146,   147,   250,    54,   171,   275,
       3,     4,     5,     7,     7,     8,   167,    37,   158,   160,
      37,     7,    40,    16,    17,    18,    20,    21,    22,    23,
      24,     7,   167,   174,    47,    50,   171,    50,    55,    54,
      60,    54,   275,    14,    15,    21,    22,    23,    24,    42,
      45,    46,    45,    46,    47,    37,    41,    50,   209,    52,
      53,    47,    56,   214,    50,    58,    59,   311,    42,   211,
     221,     7,    43,    44,   209,    37,   120,   121,    60,   214,
      37,   222,   223,    59,   224,   225,   221,   227,   239,    50,
      37,   242,    37,    54,     9,     3,     4,     5,    60,     7,
       8,    36,    59,    39,   239,    37,    51,   242,    16,    17,
      18,    47,   263,    60,    50,    58,    37,    25,    36,    51,
      28,    29,    30,    31,    32,    33,    34,    35,   263,   270,
      51,    58,   272,   273,    42,    37,     7,    45,    46,    47,
      37,    37,    50,    37,    52,    53,    37,    37,    39,    51,
      58,    59,    60,     7,    51,    51,   297,    51,     7,   300,
     301,    51,   303,    39,    37,   305,    20,    21,    22,    23,
      24,    20,    21,    22,    23,    24,    28,   318,    51,   320,
     321,    39,    37,     0,    37,    51,     3,     4,     5,   330,
       7,     8,     7,     7,   334,   336,    51,    51,    51,    16,
      17,    18,    37,    20,    21,    22,    23,    24,    25,    57,
      51,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      47,    57,    50,    50,    37,    42,    51,    54,    45,    46,
      47,    39,    51,    50,    55,    52,    53,     7,    50,    51,
      51,    58,    54,    60,     3,     4,     5,    51,     7,     8,
      20,    21,    22,    23,    24,    55,    51,    16,    17,    18,
      26,    20,    21,    22,    23,    24,    25,    55,     7,    28,
      29,    30,    31,    32,    33,    34,    35,    47,    60,    56,
      50,    51,    56,    42,    54,    27,    45,    46,    47,    50,
     108,    50,   112,    52,    53,     7,    47,    48,    49,    58,
      59,    60,     3,     4,     5,   110,     7,     8,    20,    21,
      22,    23,    24,   111,   113,    16,    17,    18,   205,    20,
      21,    22,    23,    24,    25,   280,   150,    28,    29,    30,
      31,    32,    33,    34,    35,    47,   146,   261,    50,    51,
     219,    42,    54,    71,    45,    46,    47,   103,    -1,    50,
      -1,    52,    53,     7,    -1,    -1,    -1,    58,    59,    60,
       3,     4,     5,     7,     7,     8,    -1,    21,    22,    23,
      24,    -1,    -1,    16,    17,    18,    -1,    21,    22,    23,
      24,    -1,    25,    -1,    -1,    28,    29,    30,    31,    32,
      33,    34,    35,   116,   117,   118,   119,    -1,    -1,    42,
      -1,    -1,    45,    46,    47,    -1,    -1,    50,    -1,    52,
      53,    -1,    -1,    -1,    -1,    58,    59,    60,     3,     4,
       5,    -1,     7,     8,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    16,    17,    18,    -1,    -1,    -1,    -1,    -1,    -1,
      25,    -1,    -1,    28,    29,    30,    31,    32,    33,    34,
      35,    -1,    -1,    -1,    -1,    -1,    -1,    42,    -1,    -1,
      45,    46,    47,    -1,    -1,    50,    -1,    52,    53,    -1,
      -1,    -1,    -1,    58,    -1,    60,     3,     4,     5,    -1,
       7,     8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    16,
      17,    18,     3,     4,     5,    -1,     7,     8,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    16,    17,    18,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    42,    -1,    -1,    45,    46,
      47,    -1,    -1,    50,    -1,    52,    53,    -1,    -1,    -1,
      -1,    42,    -1,    60,    45,    46,    47,    16,    17,    50,
      19,    52,    53,     3,     4,     5,    -1,     7,     8,    60,
      -1,    -1,    -1,    -1,    -1,    -1,    16,    17,    18,     3,
       4,     5,    -1,     7,     8,    -1,    -1,    -1,    -1,    -1,
      -1,    50,    16,    17,    18,    54,    -1,    56,    -1,    -1,
      -1,    -1,    42,    -1,    -1,    45,    46,    47,    -1,    -1,
      50,    -1,    52,    53,    -1,    -1,    -1,    -1,    42,    -1,
      60,    45,    46,    47,    -1,    -1,    50,    -1,    52,    53,
       3,     4,     5,    -1,     7,     8,    60,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    18,    -1,    20,    21,    22,
      23,    24,    25,    -1,    -1,    28,    29,    30,    31,    32,
      33,    34,    35,     3,     4,     5,    39,     7,     8,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    16,    17,    18,    52,
      53,    -1,    -1,    -1,    -1,    58,    59,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    -1,    -1,    45,    46,    47,    -1,    -1,
      50,    -1,    52,    53,    -1,     3,     4,     5,    58,     7,
       8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    16,    17,
      18,     3,     4,     5,    -1,     7,     8,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    16,    17,    18,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    42,    -1,    -1,    45,    46,    47,
      -1,    -1,    50,    -1,    52,    53,    -1,    55,    -1,    -1,
      42,    -1,    -1,    45,    46,    47,    -1,    -1,    50,    -1,
      52,    53,    -1,    55,     3,     4,     5,    -1,     7,     8,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    16,    17,    18,
       3,     4,     5,    -1,     7,     8,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    16,    17,    18,    -1,    -1,    21,    22,
      23,    24,    -1,    42,    -1,    -1,    45,    46,    47,    -1,
      -1,    50,    -1,    52,    53,    -1,    55,    -1,    -1,    42,
      -1,    -1,    45,    46,    47,    -1,    -1,    50,    -1,    52,
      53,     3,     4,     5,    -1,     7,     8,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    16,    17,    18,     3,     4,     5,
      -1,     7,     8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      16,    17,    18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      42,    -1,    -1,    45,    46,    47,    -1,    -1,    50,    51,
      52,    53,    -1,    -1,    -1,    -1,    42,    -1,    -1,    45,
      46,    47,    -1,    -1,    50,    51,    52,    53,     3,     4,
       5,    -1,     7,     8,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    16,    17,    18,     3,     4,     5,    -1,     7,     8,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    16,    17,    18,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    -1,    -1,
      45,    46,    47,    -1,    -1,    50,    51,    52,    53,    -1,
      -1,    -1,    -1,    42,    -1,    -1,    45,    46,    47,    -1,
      -1,    50,    51,    52,    53,     3,     4,     5,    -1,     7,
       8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    16,    17,
      18,     3,     4,     5,    -1,     7,     8,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    16,    17,    18,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    42,    -1,    -1,    45,    46,    47,
      -1,    -1,    50,    -1,    52,    53,    -1,    -1,    -1,    -1,
      42,    -1,    -1,    45,    46,    47,    -1,    -1,    50,    -1,
      52,    53,     3,     4,     5,    -1,     7,     8,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    16,    17,    18,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    42,    -1,    -1,    45,    46,    47,    -1,    -1,    50,
      -1,    52,    53
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    62,     0,     3,     4,     5,     7,     8,    16,    17,
      18,    20,    21,    22,    23,    24,    25,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    42,    45,    46,    47,
      50,    52,    53,    58,    60,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    81,    82,    83,    88,    89,   104,   108,   112,
     113,   114,   117,   119,   120,   121,    39,     7,    50,    77,
      77,    50,    77,     7,    83,    83,     7,    58,     7,    58,
      50,    50,     7,    64,   112,    50,    66,    77,    95,    39,
      60,    60,    60,    64,     7,    22,    64,    88,    92,   109,
      59,    82,   112,   115,   116,    36,    37,    60,    10,    38,
      11,    40,    41,    42,    12,    13,    14,    15,    43,    44,
      45,    46,    47,    48,    49,     9,    76,    16,    17,    19,
      50,    54,    56,    36,     7,    47,    50,    84,    85,    96,
      97,    99,    83,    36,   112,   109,    58,    90,    91,    92,
      58,     7,   105,   106,   107,    64,    64,    28,    60,    64,
      39,   112,    60,    92,    51,    92,    50,    54,    97,   110,
     111,    51,    59,    82,   116,    59,   112,    65,    68,    64,
      69,    70,    71,    72,    73,    73,    74,    74,    74,    74,
      75,    75,    76,    76,    76,    65,     7,    65,    80,    64,
       7,    22,    97,    98,    96,    37,    57,    99,    50,    54,
      51,    90,    59,    91,    39,    93,    94,    96,   105,    37,
      59,    57,    51,    51,    50,    60,    64,    60,   112,    51,
      83,   100,   101,   102,   110,    55,    95,   111,    50,    54,
      76,    59,    39,    37,    51,    55,    22,    97,    51,    85,
      58,    65,    86,     7,    51,   100,   103,    55,    95,    59,
      95,    37,    60,    39,    59,   106,    95,   112,   112,    64,
      51,    64,    60,    60,    64,    50,    96,    97,   110,    51,
      37,    51,    55,    51,   100,    55,    95,    66,    65,    86,
      87,    51,    37,    51,    55,    94,    95,    26,    51,   112,
      51,    51,    64,    51,    64,    60,     7,    56,   102,    51,
      55,    37,    59,     7,   112,    60,   112,   112,    51,   112,
      51,    51,    64,    56,    59,    86,   118,   112,   112,   112,
      51,    56,    27,   112,    50,    64,    51,   112
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
        case 2:
#line 70 "bison.y"
    {printf("Encontre una expresion de asignacion\n");;}
    break;

  case 3:
#line 71 "bison.y"
    {printf("Encontre una expresion de asignacion\n");;}
    break;

  case 4:
#line 74 "bison.y"
    {printf("Encontre una expresion de asignacion\n");;}
    break;

  case 5:
#line 75 "bison.y"
    {printf("Encontre una expresion de asignacion\n");;}
    break;

  case 6:
#line 76 "bison.y"
    {printf("Encontre una expresion de asignacion\n");;}
    break;

  case 7:
#line 77 "bison.y"
    {printf("Encontre una expresion de asignacion\n");;}
    break;

  case 8:
#line 80 "bison.y"
    {printf("Encontre una expresion de asignacion\n");;}
    break;

  case 9:
#line 81 "bison.y"
    {printf("Encontre una expresion de asignacion\n");;}
    break;

  case 10:
#line 84 "bison.y"
    {printf("Encontre una expresion de asignacion\n");;}
    break;

  case 11:
#line 85 "bison.y"
    {printf("Encontre una expresion de asignacion\n");;}
    break;

  case 12:
#line 88 "bison.y"
    {printf("Encontre una expresion de asignacion\n");;}
    break;

  case 13:
#line 89 "bison.y"
    {printf("Encontre una expresion de asignacion\n");;}
    break;

  case 14:
#line 92 "bison.y"
    {printf("Encontre una expresion de asignacion\n");;}
    break;

  case 15:
#line 93 "bison.y"
    {printf("Encontre una expresion de asignacion\n");;}
    break;

  case 16:
#line 96 "bison.y"
    {printf("Encontre una expresion de asignacion\n");;}
    break;

  case 17:
#line 97 "bison.y"
    {printf("Encontre una expresion de asignacion\n");;}
    break;

  case 18:
#line 100 "bison.y"
    {printf("Encontre una expresion de asignacion\n");;}
    break;

  case 19:
#line 101 "bison.y"
    {printf("Encontre una expresion de asignacion\n");;}
    break;

  case 20:
#line 104 "bison.y"
    {printf("Encontre una expresion de asignacion\n");;}
    break;

  case 21:
#line 105 "bison.y"
    {printf("Encontre una expresion de asignacion\n");;}
    break;

  case 22:
#line 108 "bison.y"
    {printf("Encontre una expresion de asignacion\n");;}
    break;

  case 23:
#line 109 "bison.y"
    {printf("Encontre una expresion de asignacion\n");;}
    break;

  case 24:
#line 112 "bison.y"
    {printf("Encontre una expresion de asignacion\n");;}
    break;

  case 25:
#line 113 "bison.y"
    {printf("Encontre una expresion de asignacion\n");;}
    break;

  case 26:
#line 114 "bison.y"
    {printf("Encontre una expresion de asignacion\n");;}
    break;

  case 27:
#line 117 "bison.y"
    {printf("Encontre una expresion de asignacion\n");;}
    break;

  case 28:
#line 118 "bison.y"
    {printf("Encontre una expresion de asignacion\n");;}
    break;

  case 29:
#line 119 "bison.y"
    {printf("Encontre una expresion de asignacion\n");;}
    break;

  case 30:
#line 120 "bison.y"
    {printf("Encontre una expresion de asignacion\n");;}
    break;

  case 31:
#line 121 "bison.y"
    {printf("Encontre una expresion de asignacion\n");;}
    break;

  case 32:
#line 124 "bison.y"
    {printf("Encontre una expresion de asignacion\n");;}
    break;

  case 33:
#line 125 "bison.y"
    {printf("Encontre una expresion de asignacion\n");;}
    break;

  case 34:
#line 126 "bison.y"
    {printf("Encontre una expresion de asignacion\n");;}
    break;

  case 35:
#line 129 "bison.y"
    {printf("Encontre una expresion de asignacion\n");;}
    break;

  case 36:
#line 130 "bison.y"
    {printf("Encontre una expresion de asignacion\n");;}
    break;

  case 37:
#line 131 "bison.y"
    {printf("Encontre una expresion de asignacion\n");;}
    break;

  case 38:
#line 132 "bison.y"
    {printf("Encontre una expresion de asignacion\n");;}
    break;

  case 39:
#line 135 "bison.y"
    {printf("Encontre una expresion de asignacion\n");;}
    break;

  case 40:
#line 136 "bison.y"
    {printf("Encontre una expresion de asignacion\n");;}
    break;

  case 41:
#line 139 "bison.y"
    {printf("Encontre una expresion de asignacion\n");;}
    break;

  case 42:
#line 140 "bison.y"
    {printf("Encontre una expresion de asignacion\n");;}
    break;

  case 43:
#line 141 "bison.y"
    {printf("Encontre una expresion de asignacion\n");;}
    break;

  case 44:
#line 142 "bison.y"
    {printf("Encontre una expresion de asignacion\n");;}
    break;

  case 45:
#line 143 "bison.y"
    {printf("Encontre una expresion de asignacion\n");;}
    break;

  case 46:
#line 144 "bison.y"
    {printf("Encontre una expresion de asignacion\n");;}
    break;

  case 47:
#line 147 "bison.y"
    {printf("Encontre una expresion de asignacion\n");;}
    break;

  case 48:
#line 148 "bison.y"
    {printf("Encontre una expresion de asignacion\n");;}
    break;

  case 49:
#line 149 "bison.y"
    {printf("Encontre una expresion de asignacion\n");;}
    break;

  case 50:
#line 150 "bison.y"
    {printf("Encontre una expresion de asignacion\n");;}
    break;

  case 51:
#line 151 "bison.y"
    {printf("Encontre una expresion de asignacion\n");;}
    break;

  case 52:
#line 152 "bison.y"
    {printf("Encontre una expresion de asignacion\n");;}
    break;

  case 53:
#line 155 "bison.y"
    {printf("Encontre una expresion de asignacion\n");;}
    break;

  case 54:
#line 156 "bison.y"
    {printf("Encontre una expresion de asignacion\n");;}
    break;

  case 55:
#line 157 "bison.y"
    {printf("Encontre una expresion de asignacion\n");;}
    break;

  case 56:
#line 158 "bison.y"
    {printf("Encontre una expresion de asignacion\n");;}
    break;

  case 57:
#line 159 "bison.y"
    {printf("Encontre una expresion de asignacion\n");;}
    break;

  case 58:
#line 160 "bison.y"
    {printf("Encontre una expresion de asignacion\n");;}
    break;

  case 59:
#line 161 "bison.y"
    {printf("Encontre una expresion de asignacion\n");;}
    break;

  case 60:
#line 164 "bison.y"
    {printf("Encontre una expresion de asignacion\n");;}
    break;

  case 61:
#line 165 "bison.y"
    {printf("Encontre una expresion de asignacion\n");;}
    break;

  case 62:
#line 168 "bison.y"
    {printf("Encontre una expresion de asignacion\n");;}
    break;

  case 63:
#line 169 "bison.y"
    {printf("Encontre una expresion de asignacion\n");;}
    break;

  case 64:
#line 170 "bison.y"
    {printf("Encontre una expresion de asignacion\n");;}
    break;

  case 65:
#line 171 "bison.y"
    {printf("Encontre una expresion de asignacion\n");;}
    break;

  case 66:
#line 172 "bison.y"
    {printf("Encontre una expresion de asignacion\n");;}
    break;

  case 67:
#line 173 "bison.y"
    {printf("Encontre una expresion de asignacion\n");;}
    break;

  case 68:
#line 176 "bison.y"
    {printf("Se encontro una declaracion\n");;}
    break;

  case 69:
#line 177 "bison.y"
    {printf("Encontre una expresion de asignacion\n");;}
    break;

  case 70:
#line 180 "bison.y"
    {printf("Encontre una expresion de asignacion\n");;}
    break;

  case 71:
#line 181 "bison.y"
    {printf("Encontre una expresion de asignacion\n");;}
    break;

  case 72:
#line 182 "bison.y"
    {printf("Encontre una expresion de asignacion\n");;}
    break;

  case 73:
#line 183 "bison.y"
    {printf("Encontre una expresion de asignacion\n");;}
    break;

  case 74:
#line 184 "bison.y"
    {printf("Encontre una expresion de asignacion\n");;}
    break;

  case 75:
#line 185 "bison.y"
    {printf("Encontre una expresion de asignacion\n");;}
    break;

  case 76:
#line 188 "bison.y"
    {printf("Encontre una expresion de asignacion\n");;}
    break;

  case 77:
#line 189 "bison.y"
    {printf("Encontre una expresion de asignacion\n");;}
    break;

  case 78:
#line 192 "bison.y"
    {printf("Encontre una expresion de asignacion\n");;}
    break;

  case 79:
#line 193 "bison.y"
    {printf("Encontre una expresion de asignacion\n");;}
    break;

  case 80:
#line 196 "bison.y"
    {printf("Encontre una expresion de asignacion\n");;}
    break;

  case 81:
#line 197 "bison.y"
    {printf("Encontre una expresion de asignacion\n");;}
    break;

  case 82:
#line 198 "bison.y"
    {printf("Encontre una expresion de asignacion\n");;}
    break;

  case 83:
#line 201 "bison.y"
    {printf("Encontre una expresion de asignacion\n");;}
    break;

  case 84:
#line 202 "bison.y"
    {printf("Encontre una expresion de asignacion\n");;}
    break;

  case 85:
#line 205 "bison.y"
    {printf("Encontre una expresion de asignacion\n");;}
    break;

  case 86:
#line 206 "bison.y"
    {printf("Encontre una expresion de asignacion\n");;}
    break;

  case 87:
#line 207 "bison.y"
    {printf("Encontre una expresion de asignacion\n");;}
    break;

  case 88:
#line 208 "bison.y"
    {printf("Encontre una expresion de asignacion\n");;}
    break;

  case 89:
#line 211 "bison.y"
    {printf("Encontre una expresion de asignacion\n");;}
    break;

  case 90:
#line 212 "bison.y"
    {printf("Encontre una expresion de asignacion\n");;}
    break;

  case 91:
#line 213 "bison.y"
    {printf("Encontre una expresion de asignacion\n");;}
    break;

  case 92:
#line 216 "bison.y"
    {printf("Encontre una expresion de asignacion\n");;}
    break;

  case 93:
#line 217 "bison.y"
    {printf("Encontre una expresion de asignacion\n");;}
    break;

  case 94:
#line 220 "bison.y"
    {printf("Encontre una expresion de asignacion\n");;}
    break;

  case 95:
#line 223 "bison.y"
    {printf("Encontre una expresion de asignacion\n");;}
    break;

  case 96:
#line 224 "bison.y"
    {printf("Encontre una expresion de asignacion\n");;}
    break;

  case 97:
#line 225 "bison.y"
    {printf("Encontre una expresion de asignacion\n");;}
    break;

  case 98:
#line 226 "bison.y"
    {printf("Encontre una expresion de asignacion\n");;}
    break;

  case 99:
#line 229 "bison.y"
    {printf("Encontre una expresion de asignacion\n");;}
    break;

  case 100:
#line 230 "bison.y"
    {printf("Encontre una expresion de asignacion\n");;}
    break;

  case 101:
#line 233 "bison.y"
    {printf("Encontre una expresion de asignacion\n");;}
    break;

  case 102:
#line 234 "bison.y"
    {printf("Encontre una expresion de asignacion\n");;}
    break;

  case 103:
#line 235 "bison.y"
    {printf("Encontre una expresion de asignacion\n");;}
    break;

  case 104:
#line 238 "bison.y"
    {printf("Encontre una expresion de asignacion\n");;}
    break;

  case 105:
#line 241 "bison.y"
    {printf("Encontre una expresion de asignacion\n");;}
    break;

  case 106:
#line 242 "bison.y"
    {printf("Encontre una expresion de asignacion\n");;}
    break;

  case 107:
#line 245 "bison.y"
    {printf("Encontre una expresion de asignacion\n");;}
    break;

  case 108:
#line 246 "bison.y"
    {printf("Encontre una expresion de asignacion\n");;}
    break;

  case 109:
#line 247 "bison.y"
    {printf("Encontre una expresion de asignacion\n");;}
    break;

  case 110:
#line 248 "bison.y"
    {printf("Encontre una expresion de asignacion\n");;}
    break;

  case 111:
#line 251 "bison.y"
    {printf("Encontre una expresion de asignacion\n");;}
    break;

  case 112:
#line 252 "bison.y"
    {printf("Encontre una expresion de asignacion\n");;}
    break;

  case 113:
#line 255 "bison.y"
    {printf("Encontre una expresion de asignacion\n");;}
    break;

  case 114:
#line 256 "bison.y"
    {printf("Encontre una expresion de asignacion\n");;}
    break;

  case 115:
#line 257 "bison.y"
    {printf("Encontre una expresion de asignacion\n");;}
    break;

  case 116:
#line 258 "bison.y"
    {printf("Encontre una expresion de asignacion\n");;}
    break;

  case 117:
#line 259 "bison.y"
    {printf("Encontre una expresion de asignacion\n");;}
    break;

  case 118:
#line 260 "bison.y"
    {printf("Encontre una expresion de asignacion\n");;}
    break;

  case 119:
#line 261 "bison.y"
    {printf("Encontre una expresion de asignacion\n");;}
    break;

  case 120:
#line 264 "bison.y"
    {printf("Encontre una expresion de asignacion\n");;}
    break;

  case 121:
#line 265 "bison.y"
    {printf("Encontre una expresion de asignacion\n");;}
    break;

  case 122:
#line 268 "bison.y"
    {printf("Encontre una expresion de asignacion\n");;}
    break;

  case 123:
#line 269 "bison.y"
    {printf("Encontre una expresion de asignacion\n");;}
    break;

  case 124:
#line 272 "bison.y"
    {printf("Encontre una expresion de asignacion\n");;}
    break;

  case 125:
#line 273 "bison.y"
    {printf("Encontre una expresion de asignacion\n");;}
    break;

  case 126:
#line 274 "bison.y"
    {printf("Encontre una expresion de asignacion\n");;}
    break;

  case 127:
#line 277 "bison.y"
    {printf("Encontre una expresion de asignacion\n");;}
    break;

  case 128:
#line 278 "bison.y"
    {printf("Encontre una expresion de asignacion\n");;}
    break;

  case 129:
#line 281 "bison.y"
    {printf("Encontre una expresion de asignacion\n");;}
    break;

  case 130:
#line 282 "bison.y"
    {printf("Encontre una expresion de asignacion\n");;}
    break;

  case 131:
#line 283 "bison.y"
    {printf("Encontre una expresion de asignacion\n");;}
    break;

  case 132:
#line 286 "bison.y"
    {printf("Encontre una expresion de asignacion\n");;}
    break;

  case 133:
#line 287 "bison.y"
    {printf("Encontre una expresion de asignacion\n");;}
    break;

  case 134:
#line 290 "bison.y"
    {printf("Encontre una expresion de asignacion\n");;}
    break;

  case 135:
#line 291 "bison.y"
    {printf("Encontre una expresion de asignacion\n");;}
    break;

  case 136:
#line 294 "bison.y"
    {printf("Encontre una expresion de asignacion\n");;}
    break;

  case 137:
#line 297 "bison.y"
    {printf("Encontre una expresion de asignacion\n");;}
    break;

  case 138:
#line 300 "bison.y"
    {printf("Encontre una expresion de asignacion\n");;}
    break;

  case 139:
#line 301 "bison.y"
    {printf("Encontre una expresion de asignacion\n");;}
    break;

  case 140:
#line 304 "bison.y"
    {printf("Encontre una expresion de asignacion\n");;}
    break;

  case 141:
#line 305 "bison.y"
    {printf("Encontre una expresion de asignacion\n");;}
    break;

  case 142:
#line 306 "bison.y"
    {printf("Encontre una expresion de asignacion\n");;}
    break;

  case 143:
#line 309 "bison.y"
    {printf("Encontre una expresion de asignacion\n");;}
    break;

  case 144:
#line 310 "bison.y"
    {printf("Encontre una expresion de asignacion\n");;}
    break;

  case 145:
#line 311 "bison.y"
    {printf("Encontre una expresion de asignacion\n");;}
    break;

  case 146:
#line 312 "bison.y"
    {printf("Encontre una expresion de asignacion\n");;}
    break;

  case 147:
#line 313 "bison.y"
    {printf("Encontre una expresion de asignacion\n");;}
    break;

  case 148:
#line 314 "bison.y"
    {printf("Encontre una expresion de asignacion\n");;}
    break;

  case 149:
#line 315 "bison.y"
    {printf("Encontre una expresion de asignacion\n");;}
    break;

  case 150:
#line 316 "bison.y"
    {printf("Encontre una expresion de asignacion\n");;}
    break;

  case 152:
#line 320 "bison.y"
    {printf("Encontre una expresion de asignacion\n");;}
    break;

  case 153:
#line 321 "bison.y"
    {printf("Encontre una expresion de asignacion\n");;}
    break;

  case 154:
#line 322 "bison.y"
    {printf("Encontre una expresion de asignacion\n");;}
    break;

  case 155:
#line 323 "bison.y"
    {printf("Encontre una expresion de asignacion\n");;}
    break;

  case 156:
#line 324 "bison.y"
    {printf("Encontre una expresion de asignacion\n");;}
    break;

  case 157:
#line 325 "bison.y"
    {printf("Encontre una expresion de asignacion\n");;}
    break;

  case 158:
#line 328 "bison.y"
    {printf("Encontre una expresion de asignacion\n");;}
    break;

  case 159:
#line 329 "bison.y"
    {printf("Encontre una expresion de asignacion\n");;}
    break;

  case 160:
#line 332 "bison.y"
    {printf("Encontre una expresion de asignacion\n");;}
    break;

  case 161:
#line 333 "bison.y"
    {printf("Encontre una expresion de asignacion\n");;}
    break;

  case 162:
#line 334 "bison.y"
    {printf("Encontre una expresion de asignacion\n");;}
    break;

  case 163:
#line 335 "bison.y"
    {printf("Encontre una expresion de asignacion\n");;}
    break;

  case 164:
#line 338 "bison.y"
    {printf("Encontre una expresion de asignacion\n");;}
    break;

  case 165:
#line 339 "bison.y"
    {printf("Encontre una expresion de asignacion\n");;}
    break;

  case 166:
#line 342 "bison.y"
    {printf("Encontre una expresion de asignacion\n");;}
    break;

  case 167:
#line 343 "bison.y"
    {printf("Encontre una expresion de asignacion\n");;}
    break;

  case 168:
#line 346 "bison.y"
    {printf("Se encontro una sentencia de seleccion\n");;}
    break;

  case 169:
#line 347 "bison.y"
    {printf("Se encontro una sentencia de seleccion\n");;}
    break;

  case 170:
#line 348 "bison.y"
    {printf("Se encontro una sentencia de seleccion\n");;}
    break;

  case 171:
#line 351 "bison.y"
    {printf("Se encontro una sentencia de iteracion\n");;}
    break;

  case 172:
#line 352 "bison.y"
    {printf("Se encontro una sentencia de iteracion\n");;}
    break;

  case 173:
#line 353 "bison.y"
    {printf("Se encontro una sentencia de iteracion\n");;}
    break;

  case 174:
#line 354 "bison.y"
    {printf("Se encontro una sentencia de iteracion\n");;}
    break;

  case 175:
#line 355 "bison.y"
    {printf("Se encontro una sentencia de iteracion\n");;}
    break;

  case 176:
#line 356 "bison.y"
    {printf("Se encontro una sentencia de iteracion\n");;}
    break;

  case 177:
#line 357 "bison.y"
    {printf("Se encontro una sentencia de iteracion\n");;}
    break;

  case 178:
#line 358 "bison.y"
    {printf("Se encontro una sentencia de iteracion\n");;}
    break;

  case 179:
#line 359 "bison.y"
    {printf("Se encontro una sentencia de iteracion\n");;}
    break;

  case 181:
#line 360 "bison.y"
    {printf("Se encontro una sentencia de iteracion\n");;}
    break;

  case 182:
#line 363 "bison.y"
    {printf("Se encontro una sentencia etiquetada\n");;}
    break;

  case 183:
#line 364 "bison.y"
    {printf("Se encontro una sentencia etiquetada\n");;}
    break;

  case 184:
#line 365 "bison.y"
    {printf("Se encontro una sentencia etiquetada\n");;}
    break;

  case 185:
#line 368 "bison.y"
    {printf("Encontre una sentencia de salto\n");;}
    break;

  case 186:
#line 369 "bison.y"
    {printf("Encontre una sentencia de salto\n");;}
    break;

  case 187:
#line 370 "bison.y"
    {printf("Encontre una sentencia de retorno\n");;}
    break;

  case 188:
#line 371 "bison.y"
    {printf("Encontre una sentencia de retorno\n");;}
    break;


/* Line 1267 of yacc.c.  */
#line 2843 "bison.tab.c"
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


#line 375 "bison.y"



int main(){

printf("Hola, la cosa compila\n\n");
yyin = fopen("entrada.c", "r");
yyparse();
//Seccion de funciones de usuario

}

