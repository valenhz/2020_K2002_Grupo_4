
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
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
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "../src/analizador.y"


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



/* Line 189 of yacc.c  */
#line 97 "analizador.tab.c"

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

/* Line 214 of yacc.c  */
#line 24 "../src/analizador.y"

    char* cadena;
    char caracter;
    int entero;
    float flotante;



/* Line 214 of yacc.c  */
#line 177 "analizador.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 189 "analizador.tab.c"

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
# if YYENABLE_NLS
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
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
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
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
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
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   462

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  61
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  111
/* YYNRULES -- Number of rules.  */
#define YYNRULES  215
/* YYNRULES -- Number of states.  */
#define YYNSTATES  364

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
       0,     0,     3,     4,     7,     9,    12,    15,    17,    21,
      24,    25,    28,    32,    33,    36,    40,    41,    44,    48,
      49,    52,    56,    57,    60,    64,    65,    68,    72,    76,
      77,    80,    84,    88,    92,    96,    97,   100,   104,   108,
     109,   112,   116,   120,   124,   125,   127,   132,   134,   137,
     140,   143,   146,   148,   152,   154,   156,   158,   160,   162,
     164,   167,   172,   176,   180,   183,   186,   187,   190,   194,
     195,   197,   199,   201,   203,   205,   208,   210,   211,   214,
     217,   220,   222,   223,   226,   230,   231,   234,   237,   238,
     240,   244,   246,   249,   252,   256,   257,   259,   261,   263,
     265,   268,   271,   275,   279,   280,   283,   286,   287,   291,
     294,   297,   299,   300,   303,   307,   308,   311,   314,   317,
     318,   320,   323,   325,   328,   331,   333,   334,   336,   337,
     340,   343,   344,   347,   352,   355,   358,   359,   363,   366,
     370,   374,   377,   380,   385,   386,   389,   393,   394,   397,
     399,   401,   402,   405,   409,   410,   413,   416,   420,   424,
     425,   428,   432,   433,   436,   439,   440,   442,   444,   447,
     449,   450,   453,   455,   457,   458,   461,   464,   467,   470,
     471,   475,   479,   482,   486,   489,   493,   496,   498,   500,
     502,   504,   506,   508,   511,   514,   517,   519,   522,   524,
     527,   530,   531,   534,   537,   538,   542,   545,   548,   551,
     556,   560,   564,   567,   570,   573
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      62,     0,    -1,    -1,    62,    63,    -1,    36,    -1,    94,
      36,    -1,   156,    36,    -1,    65,    -1,    86,     9,    64,
      -1,    67,    66,    -1,    -1,    69,    68,    -1,    10,    69,
      68,    -1,    -1,    71,    70,    -1,    11,    71,    70,    -1,
      -1,    73,    72,    -1,    40,    73,    72,    -1,    -1,    75,
      74,    -1,    41,    75,    74,    -1,    -1,    77,    76,    -1,
      42,    77,    76,    -1,    -1,    79,    78,    -1,    12,    79,
      78,    -1,    13,    79,    78,    -1,    -1,    81,    80,    -1,
      43,    81,    80,    -1,    44,    81,    80,    -1,    15,    81,
      80,    -1,    14,    81,    80,    -1,    -1,    83,    82,    -1,
      45,    83,    82,    -1,    46,    83,    82,    -1,    -1,    85,
      84,    -1,    47,    85,    84,    -1,    48,    85,    84,    -1,
      49,    85,    84,    -1,    -1,    86,    -1,    50,   147,    51,
      85,    -1,    89,    -1,    16,    86,    -1,    17,    86,    -1,
      88,    85,    -1,    18,    87,    -1,    86,    -1,    50,   147,
      51,    -1,    42,    -1,    47,    -1,    45,    -1,    46,    -1,
      52,    -1,    53,    -1,    93,    90,    -1,    50,    91,    51,
      90,    -1,    56,     7,    90,    -1,    19,     7,    90,    -1,
      16,    90,    -1,    17,    90,    -1,    -1,    64,    92,    -1,
      37,    64,    92,    -1,    -1,     7,    -1,     3,    -1,     4,
      -1,     5,    -1,     8,    -1,    96,    95,    -1,    98,    -1,
      -1,    20,    97,    -1,   106,    97,    -1,    22,    97,    -1,
      96,    -1,    -1,   100,    99,    -1,    37,   100,    99,    -1,
      -1,   120,   101,    -1,    57,   102,    -1,    -1,    64,    -1,
      58,   104,   103,    -1,    59,    -1,    37,    59,    -1,   102,
     105,    -1,    37,   102,   105,    -1,    -1,    21,    -1,   107,
      -1,   138,    -1,   146,    -1,    23,   108,    -1,     7,   109,
      -1,    58,   110,    59,    -1,    58,   110,    59,    -1,    -1,
     112,   111,    -1,   112,   111,    -1,    -1,   113,   115,    60,
      -1,   106,   114,    -1,    22,   114,    -1,   113,    -1,    -1,
     117,   116,    -1,    37,   117,   116,    -1,    -1,   120,   118,
      -1,    39,   119,    -1,    39,   119,    -1,    -1,    65,    -1,
     121,   126,    -1,   126,    -1,    47,   122,    -1,   124,   123,
      -1,   121,    -1,    -1,   121,    -1,    -1,    22,   125,    -1,
      22,   125,    -1,    -1,     7,   127,    -1,    50,   120,    51,
     127,    -1,    54,   128,    -1,    50,   129,    -1,    -1,   119,
      55,   127,    -1,    55,   127,    -1,   130,    51,   127,    -1,
     136,    51,   127,    -1,    51,   127,    -1,   132,   131,    -1,
      37,    56,    56,    56,    -1,    -1,   134,   133,    -1,    37,
     134,   133,    -1,    -1,    96,   135,    -1,   120,    -1,   149,
      -1,    -1,     7,   137,    -1,    37,     7,   137,    -1,    -1,
      24,   139,    -1,     7,   140,    -1,    58,   141,    59,    -1,
      58,   141,    59,    -1,    -1,   143,   142,    -1,    37,   143,
     142,    -1,    -1,   145,   144,    -1,    57,   119,    -1,    -1,
       7,    -1,     7,    -1,   113,   148,    -1,   149,    -1,    -1,
     121,   150,    -1,   151,    -1,   151,    -1,    -1,    50,   153,
      -1,    54,   154,    -1,    54,   154,    -1,    50,   155,    -1,
      -1,   149,    51,   152,    -1,   130,    51,   152,    -1,    51,
     152,    -1,   119,    55,   152,    -1,    55,   152,    -1,   130,
      51,   152,    -1,    51,   152,    -1,   157,    -1,   158,    -1,
     165,    -1,   169,    -1,   170,    -1,    60,    -1,    58,   159,
      -1,   161,   160,    -1,   163,    59,    -1,    59,    -1,   163,
      59,    -1,    59,    -1,    94,   162,    -1,    94,   162,    -1,
      -1,   156,   164,    -1,   156,   164,    -1,    -1,    30,    50,
     166,    -1,    60,   167,    -1,    60,   168,    -1,    51,   156,
      -1,    31,   119,    39,   156,    -1,    32,    39,   156,    -1,
       7,    39,   156,    -1,    33,    60,    -1,    34,    60,    -1,
      35,   171,    -1,    60,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    70,    70,    71,    74,    76,    77,    86,    87,    90,
      94,    97,   100,   101,   104,   107,   108,   111,   114,   115,
     118,   121,   122,   125,   128,   129,   132,   135,   136,   137,
     140,   143,   144,   145,   146,   147,   150,   153,   154,   155,
     158,   161,   162,   163,   164,   167,   168,   171,   172,   173,
     174,   175,   178,   179,   182,   183,   184,   185,   186,   187,
     190,   194,   195,   196,   197,   198,   199,   202,   205,   206,
     209,   210,   211,   212,   213,   217,   220,   221,   224,   225,
     226,   229,   230,   233,   236,   237,   240,   243,   244,   247,
     248,   251,   252,   255,   258,   259,   262,   263,   264,   265,
     268,   271,   272,   275,   276,   279,   282,   283,   286,   289,
     290,   293,   294,   297,   300,   301,   304,   305,   308,   309,
     312,   315,   316,   319,   322,   323,   324,   327,   328,   331,
     334,   335,   338,   339,   342,   343,   344,   347,   348,   351,
     352,   353,   356,   359,   360,   363,   366,   367,   370,   373,
     374,   375,   378,   381,   382,   385,   388,   389,   392,   393,
     396,   399,   400,   403,   406,   407,   410,   413,   416,   419,
     420,   423,   424,   427,   428,   431,   432,   435,   436,   437,
     440,   441,   442,   445,   446,   449,   450,   453,   454,   456,
     457,   458,   462,   465,   468,   469,   470,   473,   474,   477,
     480,   481,   484,   487,   488,   501,   505,   509,   513,   516,
     517,   518,   521,   522,   523,   527
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
  "expresionAsignacion", "expresionCondicional", "b", "expresionOLogico",
  "c", "expresionYLogico", "d", "expresionOInclusivo", "e",
  "expresionOExcluyente", "f", "expresionY", "g", "expresionDeIgualdad",
  "h", "expresionRelacional", "i", "expresionAditiva", "j",
  "expresionMultiplicativa", "k", "expresionDeConversion",
  "expresionUnaria", "l", "operadorUnario", "expresionSufijo", "m",
  "listaDeArgumentos", "n", "expresionPrimaria", "declaracion", "o",
  "especificadoresDeDeclaracion", "p", "listaDeDeclaradores", "q",
  "declarador", "r", "inicializador", "s", "listaDeInicializadores", "t",
  "especificadorDeTipo", "especificadorStructOUnion", "u", "v",
  "listaDeDeclaracionesStruct", "w", "declaracionStruct",
  "listaDeCalificadores", "x", "declaradoresStruct", "y", "declaStruct",
  "z", "expresionConstante", "decla", "puntero", "aa", "ab",
  "listaCalificadoresTipos", "ac", "declaradorDirecto", "ad", "ae", "af",
  "listaTiposParametros", "ag", "listaDeParametros", "ah",
  "declaracionDeParametro", "ai", "listaDeIdentificadores", "aj",
  "especificadorDeEnum", "ak", "al", "listaDeEnumeradores", "am",
  "enumerador", "an", "constanteDeEnumeracion", "nombreDeTypedef",
  "nombreDeTipo", "ao", "declaradorAbstracto", "ap",
  "declaradorAbstractoDirecto", "aq", "ar", "as", "at", "sentencia",
  "sentenciaExpresion", "sentenciaCompuesta", "au", "av",
  "listaDeDeclaraciones", "aw", "listaDeSentencias", "ax",
  "sentenciaDeIteracion", "az", "ba", "bd", "sentenciaEtiquetada",
  "sentenciaDeSalto", "be", 0
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
       0,    61,    62,    62,    63,    63,    63,    64,    64,    65,
      66,    67,    68,    68,    69,    70,    70,    71,    72,    72,
      73,    74,    74,    75,    76,    76,    77,    78,    78,    78,
      79,    80,    80,    80,    80,    80,    81,    82,    82,    82,
      83,    84,    84,    84,    84,    85,    85,    86,    86,    86,
      86,    86,    87,    87,    88,    88,    88,    88,    88,    88,
      89,    90,    90,    90,    90,    90,    90,    91,    92,    92,
      93,    93,    93,    93,    93,    94,    95,    95,    96,    96,
      96,    97,    97,    98,    99,    99,   100,   101,   101,   102,
     102,   103,   103,   104,   105,   105,   106,   106,   106,   106,
     107,   108,   108,   109,   109,   110,   111,   111,   112,   113,
     113,   114,   114,   115,   116,   116,   117,   117,   118,   118,
     119,   120,   120,   121,   122,   122,   122,   123,   123,   124,
     125,   125,   126,   126,   127,   127,   127,   128,   128,   129,
     129,   129,   130,   131,   131,   132,   133,   133,   134,   135,
     135,   135,   136,   137,   137,   138,   139,   139,   140,   140,
     141,   142,   142,   143,   144,   144,   145,   146,   147,   148,
     148,   149,   149,   150,   150,   151,   151,   152,   152,   152,
     153,   153,   153,   154,   154,   155,   155,   156,   156,   156,
     156,   156,   157,   158,   159,   159,   159,   160,   160,   161,
     162,   162,   163,   164,   164,   165,   166,   167,   168,   169,
     169,   169,   170,   170,   170,   171
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     1,     2,     2,     1,     3,     2,
       0,     2,     3,     0,     2,     3,     0,     2,     3,     0,
       2,     3,     0,     2,     3,     0,     2,     3,     3,     0,
       2,     3,     3,     3,     3,     0,     2,     3,     3,     0,
       2,     3,     3,     3,     0,     1,     4,     1,     2,     2,
       2,     2,     1,     3,     1,     1,     1,     1,     1,     1,
       2,     4,     3,     3,     2,     2,     0,     2,     3,     0,
       1,     1,     1,     1,     1,     2,     1,     0,     2,     2,
       2,     1,     0,     2,     3,     0,     2,     2,     0,     1,
       3,     1,     2,     2,     3,     0,     1,     1,     1,     1,
       2,     2,     3,     3,     0,     2,     2,     0,     3,     2,
       2,     1,     0,     2,     3,     0,     2,     2,     2,     0,
       1,     2,     1,     2,     2,     1,     0,     1,     0,     2,
       2,     0,     2,     4,     2,     2,     0,     3,     2,     3,
       3,     2,     2,     4,     0,     2,     3,     0,     2,     1,
       1,     0,     2,     3,     0,     2,     2,     3,     3,     0,
       2,     3,     0,     2,     2,     0,     1,     1,     2,     1,
       0,     2,     1,     1,     0,     2,     2,     2,     2,     0,
       3,     3,     2,     3,     2,     3,     2,     1,     1,     1,
       1,     1,     1,     2,     2,     2,     1,     2,     1,     2,
       2,     0,     2,     2,     0,     3,     2,     2,     2,     4,
       3,     3,     2,     2,     2,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     1,   167,    82,    96,    82,     0,     0,     0,
       0,     0,     0,     0,     0,     4,     0,   192,     3,     0,
      77,    82,    97,    98,    99,     0,   187,   188,   189,   190,
     191,     0,   167,    81,    78,    80,   104,     0,   100,   159,
       0,   155,     0,    71,    72,    73,    70,    74,     0,     0,
       0,    54,    56,    57,    55,     0,    58,    59,   120,    10,
      13,    16,    19,    22,    25,    29,    35,    39,    44,    45,
       0,    47,    66,     0,     0,   212,   213,   215,   214,   196,
     201,   204,   193,     0,     0,     5,   136,   126,     0,    75,
      76,    85,    88,     0,   122,    79,     6,     0,   211,     0,
     101,   112,   112,     0,   107,     0,     0,   156,   166,     0,
     162,   165,     0,   205,    48,    49,     0,    52,    51,   170,
       0,     9,     0,    11,     0,    14,     0,    17,     0,    20,
       0,    23,     0,     0,    26,     0,     0,     0,     0,    30,
       0,     0,    36,     0,     0,     0,    40,    50,    66,    66,
       0,     0,     0,    60,     0,   210,   201,   199,   204,   202,
     198,   194,     0,   195,     0,     0,   132,   131,   125,   123,
     128,     0,     0,    83,     0,    86,   121,     0,   111,   110,
     109,   102,   105,   107,     0,     0,   115,   119,     0,   157,
       0,   160,     0,   163,     0,   206,     0,     0,     0,   174,
     168,   169,   172,     0,    13,    16,    19,    22,    25,    29,
      29,    35,    35,    35,    35,    39,    39,    44,    44,    44,
      64,    65,    66,    69,     7,    45,     0,    66,   209,   200,
     203,   197,   167,   136,   151,   135,     0,   144,   147,     0,
     136,     0,   134,   131,   129,   127,   124,   136,    85,     0,
      89,    87,   103,   106,   117,   108,     0,   113,     0,   116,
     158,   162,   164,     0,   207,    53,   179,     0,     0,   175,
     179,     0,   176,   171,   173,    46,    12,    15,    18,    21,
      24,    27,    28,    34,    33,    31,    32,    37,    38,    41,
      42,    43,    63,     0,    67,     0,    66,    62,     0,   152,
     141,     0,   149,   174,   148,   150,   136,     0,   142,     0,
     145,   136,   138,   136,   130,   133,    84,    95,     0,   115,
     118,   161,   208,     0,     0,   182,   179,   179,   184,   179,
      69,     8,    61,   154,   167,   139,     0,   147,   140,   137,
       0,    93,     0,    91,    90,   114,   179,     0,   178,   177,
     181,   180,   183,    68,   153,     0,   146,    95,    92,   186,
     179,   143,    94,   185
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    18,   250,    58,   121,    59,   123,    60,   125,
      61,   127,    62,   129,    63,   131,    64,   134,    65,   139,
      66,   142,    67,   146,    68,    69,   118,    70,    71,   153,
     226,   294,    72,   156,    89,   234,    34,    90,   173,    91,
     175,   251,   344,   318,   341,    21,    22,    38,   100,   103,
     182,   104,   105,   179,   185,   257,   186,   259,   271,    92,
      93,   169,   246,   170,   244,    94,   166,   242,   235,   267,
     308,   237,   310,   238,   304,   239,   299,    23,    41,   107,
     109,   191,   110,   193,   111,    24,   120,   200,   268,   273,
     202,   325,   269,   272,   348,    81,    26,    27,    82,   161,
      83,   157,    84,   159,    28,   113,   195,   264,    29,    30,
      78
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -235
static const yytype_int16 yypact[] =
{
    -235,   113,  -235,    41,   167,  -235,   167,    13,    14,   -12,
     310,    56,    -8,    18,    42,  -235,   236,  -235,  -235,    61,
      35,   167,  -235,  -235,  -235,    80,  -235,  -235,  -235,  -235,
    -235,   175,  -235,  -235,  -235,  -235,    60,   418,  -235,    65,
     118,  -235,    94,  -235,  -235,  -235,  -235,  -235,   377,   377,
     361,  -235,  -235,  -235,  -235,   418,  -235,  -235,  -235,  -235,
     152,   153,   137,   144,   157,    43,   107,    17,   148,  -235,
     310,  -235,   303,   161,   175,  -235,  -235,  -235,  -235,  -235,
     167,   175,  -235,    34,   145,  -235,    -7,     1,    35,  -235,
    -235,   166,   160,    20,  -235,  -235,  -235,    41,  -235,   418,
    -235,   418,   418,   165,   418,   237,   118,  -235,  -235,   168,
     188,   173,   171,  -235,  -235,  -235,   418,  -235,  -235,     7,
     181,  -235,   310,  -235,   310,  -235,   310,  -235,   310,  -235,
     310,  -235,   310,   310,  -235,   310,   310,   310,   310,  -235,
     310,   310,  -235,   310,   310,   310,  -235,  -235,   303,   303,
     232,   310,   239,  -235,   175,  -235,   167,  -235,   175,  -235,
    -235,  -235,   189,  -235,   191,   233,  -235,   250,  -235,  -235,
     226,   223,    35,  -235,   176,  -235,  -235,   218,  -235,  -235,
    -235,  -235,  -235,   418,   310,   221,   245,   252,   230,  -235,
     118,  -235,   310,  -235,   242,  -235,   249,   283,   294,    88,
    -235,  -235,  -235,   310,   152,   153,   137,   144,   157,    43,
      43,   107,   107,   107,   107,    17,    17,   148,   148,   148,
    -235,  -235,   303,   271,  -235,   300,   265,   303,  -235,  -235,
    -235,  -235,    -2,    -7,    27,  -235,   270,   286,   287,   274,
      -7,   276,  -235,   250,  -235,  -235,  -235,    -7,   166,   176,
    -235,  -235,  -235,  -235,  -235,  -235,   237,  -235,   310,  -235,
    -235,   188,  -235,   175,  -235,  -235,   122,   278,   281,  -235,
     122,   280,  -235,  -235,  -235,  -235,  -235,  -235,  -235,  -235,
    -235,  -235,  -235,  -235,  -235,  -235,  -235,  -235,  -235,  -235,
    -235,  -235,  -235,   310,  -235,   310,   303,  -235,   331,  -235,
    -235,   351,  -235,    25,  -235,  -235,    -7,   289,  -235,   167,
    -235,    -7,  -235,    -7,  -235,  -235,  -235,   305,    -9,   245,
    -235,  -235,  -235,   411,   294,  -235,   122,   122,  -235,   122,
     271,  -235,  -235,   306,    78,  -235,   292,   287,  -235,  -235,
     176,  -235,   291,  -235,  -235,  -235,   122,   316,  -235,  -235,
    -235,  -235,  -235,  -235,  -235,   295,  -235,   305,  -235,  -235,
     122,  -235,  -235,  -235
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -235,  -235,  -235,  -132,  -138,  -235,  -235,   150,   248,   156,
     259,   170,   264,   184,   268,   192,   262,  -105,    37,    50,
     251,   -85,    -1,    36,   -45,   -48,  -235,  -235,  -235,  -131,
    -235,    67,  -235,    28,  -235,    10,    39,  -235,   151,   238,
    -235,  -234,  -235,  -235,    47,   -15,  -235,  -235,  -235,   313,
     234,   -74,   -43,   307,  -235,    96,   164,  -235,    -6,   -81,
     -82,  -235,  -235,  -235,   178,   -87,  -194,  -235,  -235,  -156,
    -235,  -235,    79,   117,  -235,  -235,    95,  -235,  -235,  -235,
     321,   177,   246,  -235,  -235,  -235,   327,  -235,  -110,  -235,
    -189,  -219,  -235,   120,  -235,     2,  -235,  -235,  -235,  -235,
    -235,   290,   354,   293,  -235,  -235,  -235,  -235,  -235,  -235,
    -235
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -155
static const yytype_int16 yytable[] =
{
     114,   115,   117,    25,    73,   168,   176,   171,   236,   201,
     274,    20,   119,   224,    33,   317,    33,   220,   221,   223,
      36,    39,   102,   167,   187,   147,    20,    86,   342,    19,
     183,    33,    86,    98,    86,   298,   224,   199,    42,   300,
     102,    97,    86,   164,    80,    35,   312,   165,    87,  -154,
     343,   328,    75,   315,    87,   132,   133,   197,   178,   178,
      95,   198,   140,   141,     9,    10,    11,    12,    13,    14,
      88,    37,    40,   119,    87,   301,   155,   301,    76,   198,
      31,   198,    87,   158,   102,    88,   102,   102,   245,   102,
      20,   292,    16,   160,    17,    74,   297,    85,   217,   218,
     219,   102,    77,   225,   281,   282,   357,   350,   351,   183,
     352,   224,   335,     2,   274,   199,    96,   338,    99,   339,
       3,   135,   136,   106,   305,   108,   225,   359,   164,  -136,
     287,   288,   165,     4,     5,     6,     7,     8,   197,   215,
     216,   363,   198,     9,    10,    11,    12,    13,    14,    15,
     137,   138,   303,   302,   112,   224,   228,   224,   275,   241,
     158,   330,   122,   331,   124,   332,    20,   347,   102,   209,
     210,    16,   323,    17,    32,   187,   324,   126,   254,    43,
      44,    45,    97,    46,    47,   128,   262,     4,     5,     6,
       7,     8,    48,    49,    50,   143,   144,   145,   232,   130,
     154,   225,   224,   172,   163,     9,    10,    11,    12,    13,
      14,     4,     5,     6,     7,     8,   176,   174,    51,   303,
     171,    52,    53,    54,   181,   190,    55,   189,    56,    57,
     192,   194,   203,    16,   249,    17,    43,    44,    45,   222,
      46,    47,   233,     3,    86,   225,   227,   225,   231,    48,
      49,    50,   320,   289,   290,   291,     4,     5,     6,     7,
       8,   283,   284,   285,   286,   322,     9,    10,    11,    12,
      13,    14,   243,    87,   247,    51,   184,   252,    52,    53,
      54,   255,   256,    55,    87,    56,    57,    88,   240,   260,
      32,   258,   225,   263,    16,    79,    17,    43,    44,    45,
     265,    46,    47,     4,     5,     6,     7,     8,   293,   295,
      48,    49,    50,    43,    44,    45,   296,    46,    47,   148,
     149,   306,   150,   307,   309,   311,    48,    49,    50,   326,
      87,   313,   327,   197,   266,   329,    51,   198,   333,    52,
      53,    54,   340,   298,    55,   336,    56,    57,   355,   270,
     358,   361,    51,   151,   276,    52,    53,    54,   334,   152,
      55,   277,    56,    57,    43,    44,    45,   360,    46,    47,
     204,     4,     5,     6,     7,     8,   278,    48,    49,    50,
      43,    44,    45,   205,    46,    47,   211,   212,   213,   214,
     206,   279,   208,    48,    49,    50,   207,   353,    87,   316,
     280,   301,   266,    51,   362,   198,    52,    53,    54,   180,
     248,   116,   177,    56,    57,   345,   356,   253,    32,    51,
     319,   314,    52,    53,    54,    32,   337,   188,   354,    56,
      57,     4,     5,     6,     7,     8,   261,   162,   321,     5,
     101,     7,     8,   196,   349,     0,   229,     0,     0,     0,
       0,   230,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   346
};

static const yytype_int16 yycheck[] =
{
      48,    49,    50,     1,    10,    87,    93,    88,   164,   119,
     199,     1,    55,   151,     4,   249,     6,   148,   149,   151,
       7,     7,    37,    22,   105,    70,    16,     7,    37,     1,
     104,    21,     7,    31,     7,    37,   174,   119,    50,   233,
      55,     7,     7,    50,    16,     6,   240,    54,    47,    51,
      59,   270,    60,   247,    47,    12,    13,    50,   101,   102,
      21,    54,    45,    46,    30,    31,    32,    33,    34,    35,
      50,    58,    58,   116,    47,    50,    74,    50,    60,    54,
      39,    54,    47,    81,    99,    50,   101,   102,   170,   104,
      80,   222,    58,    59,    60,    39,   227,    36,   143,   144,
     145,   116,    60,   151,   209,   210,   340,   326,   327,   183,
     329,   249,   306,     0,   303,   197,    36,   311,    58,   313,
       7,    14,    15,    58,   234,     7,   174,   346,    50,    51,
     215,   216,    54,    20,    21,    22,    23,    24,    50,   140,
     141,   360,    54,    30,    31,    32,    33,    34,    35,    36,
      43,    44,   234,   234,    60,   293,   154,   295,   203,   165,
     158,   293,    10,   295,    11,   296,   156,   323,   183,   132,
     133,    58,    50,    60,     7,   256,    54,    40,   184,     3,
       4,     5,     7,     7,     8,    41,   192,    20,    21,    22,
      23,    24,    16,    17,    18,    47,    48,    49,     7,    42,
      39,   249,   340,    37,    59,    30,    31,    32,    33,    34,
      35,    20,    21,    22,    23,    24,   303,    57,    42,   301,
     301,    45,    46,    47,    59,    37,    50,    59,    52,    53,
      57,    60,    51,    58,    58,    60,     3,     4,     5,     7,
       7,     8,    51,     7,     7,   293,     7,   295,    59,    16,
      17,    18,   258,   217,   218,   219,    20,    21,    22,    23,
      24,   211,   212,   213,   214,   263,    30,    31,    32,    33,
      34,    35,    22,    47,    51,    42,    39,    59,    45,    46,
      47,    60,    37,    50,    47,    52,    53,    50,    55,    59,
       7,    39,   340,    51,    58,    59,    60,     3,     4,     5,
      51,     7,     8,    20,    21,    22,    23,    24,    37,     9,
      16,    17,    18,     3,     4,     5,    51,     7,     8,    16,
      17,    51,    19,    37,    37,    51,    16,    17,    18,    51,
      47,    55,    51,    50,    51,    55,    42,    54,     7,    45,
      46,    47,    37,    37,    50,    56,    52,    53,    56,    55,
      59,    56,    42,    50,   204,    45,    46,    47,     7,    56,
      50,   205,    52,    53,     3,     4,     5,    51,     7,     8,
     122,    20,    21,    22,    23,    24,   206,    16,    17,    18,
       3,     4,     5,   124,     7,     8,   135,   136,   137,   138,
     126,   207,   130,    16,    17,    18,   128,   330,    47,   248,
     208,    50,    51,    42,   357,    54,    45,    46,    47,   102,
     172,    50,    99,    52,    53,   319,   337,   183,     7,    42,
     256,   243,    45,    46,    47,     7,   309,   106,   333,    52,
      53,    20,    21,    22,    23,    24,   190,    83,   261,    21,
      22,    23,    24,   116,   324,    -1,   156,    -1,    -1,    -1,
      -1,   158,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    51
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    62,     0,     7,    20,    21,    22,    23,    24,    30,
      31,    32,    33,    34,    35,    36,    58,    60,    63,    94,
      96,   106,   107,   138,   146,   156,   157,   158,   165,   169,
     170,    39,     7,    96,    97,    97,     7,    58,   108,     7,
      58,   139,    50,     3,     4,     5,     7,     8,    16,    17,
      18,    42,    45,    46,    47,    50,    52,    53,    65,    67,
      69,    71,    73,    75,    77,    79,    81,    83,    85,    86,
      88,    89,    93,   119,    39,    60,    60,    60,   171,    59,
      94,   156,   159,   161,   163,    36,     7,    47,    50,    95,
      98,   100,   120,   121,   126,    97,    36,     7,   156,    58,
     109,    22,   106,   110,   112,   113,    58,   140,     7,   141,
     143,   145,    60,   166,    86,    86,    50,    86,    87,   113,
     147,    66,    10,    68,    11,    70,    40,    72,    41,    74,
      42,    76,    12,    13,    78,    14,    15,    43,    44,    80,
      45,    46,    82,    47,    48,    49,    84,    85,    16,    17,
      19,    50,    56,    90,    39,   156,    94,   162,   156,   164,
      59,   160,   163,    59,    50,    54,   127,    22,   121,   122,
     124,   120,    37,    99,    57,   101,   126,   110,   113,   114,
     114,    59,   111,   112,    39,   115,   117,   120,   141,    59,
      37,   142,    57,   144,    60,   167,   147,    50,    54,   121,
     148,   149,   151,    51,    69,    71,    73,    75,    77,    79,
      79,    81,    81,    81,    81,    83,    83,    85,    85,    85,
      90,    90,     7,    64,    65,    86,    91,     7,   156,   162,
     164,    59,     7,    51,    96,   129,   130,   132,   134,   136,
      55,   119,   128,    22,   125,   121,   123,    51,   100,    58,
      64,   102,    59,   111,   119,    60,    37,   116,    39,   118,
      59,   143,   119,    51,   168,    51,    51,   130,   149,   153,
      55,   119,   154,   150,   151,    85,    68,    70,    72,    74,
      76,    78,    78,    80,    80,    80,    80,    82,    82,    84,
      84,    84,    90,    37,    92,     9,    51,    90,    37,   137,
     127,    50,   120,   121,   135,   149,    51,    37,   131,    37,
     133,    51,   127,    55,   125,   127,    99,   102,   104,   117,
     119,   142,   156,    50,    54,   152,    51,    51,   152,    55,
      64,    64,    90,     7,     7,   127,    56,   134,   127,   127,
      37,   105,    37,    59,   103,   116,    51,   130,   155,   154,
     152,   152,   152,    92,   137,    56,   133,   102,    59,   152,
      51,    56,   105,   152
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
# if YYLTYPE_IS_TRIVIAL
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
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
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
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
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


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

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
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

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
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
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

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
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

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
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
      

/* Line 1455 of yacc.c  */
#line 1772 "analizador.tab.c"
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
      /* If just tried and failed to reuse lookahead token after an
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

  /* Else will try to reuse lookahead token after shifting the error
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

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
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



/* Line 1675 of yacc.c  */
#line 530 "../src/analizador.y"


int main(){

yyin = fopen("ingreso.c", "r");

yyparse();



}

