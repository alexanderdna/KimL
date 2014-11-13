
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

#include "stdafx.h"

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 1



/* Copy the first part of user declarations.  */


	#include "kiml.h"
	#include "ast.h"
	#include <stdio.h>
	
	AstProgram *root;
	
	union YYSTYPE;
	struct YYLTYPE;
	
	int yylex(YYSTYPE *yylval, YYLTYPE *yylloc);
	
	void yyerror(YYLTYPE *yylloc, const char *s);
	
	KIMLUINT nSyntaxErrors = 0;
	KIMLCSTRING szFileName = "";



/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
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
     TIO = 258,
     TVAR = 259,
     TSTACK = 260,
     TTAPE = 261,
     TCTRL = 262,
     TFUNC = 263,
     TEVENT = 264,
     TCONST = 265,
     TENUM = 266,
     TIN = 267,
     TOUT = 268,
     TDECL = 269,
     TDEL = 270,
     TSET = 271,
     TPUSH = 272,
     TPOP = 273,
     TPEEK = 274,
     TCLEAR = 275,
     TSWAP = 276,
     TREAD = 277,
     TWRITE = 278,
     TNEXT = 279,
     TPREV = 280,
     TMOVE = 281,
     TGOTO = 282,
     TCALL = 283,
     TRETURN = 284,
     TEND = 285,
     THANDLE = 286,
     TUNHANDLE = 287,
     TRAISE = 288,
     TIF = 289,
     TAT = 290,
     TBY = 291,
     TDOT = 292,
     TCOLON = 293,
     TCOMMA = 294,
     TIDENT = 295,
     TLITTRUE = 296,
     TLITFALSE = 297,
     TLITINT = 298,
     TLITREAL = 299,
     TLITSTRING = 300,
     TLPAR = 301,
     TRPAR = 302,
     TEQU = 303,
     TNEQ = 304,
     TLES = 305,
     TLEQ = 306,
     TGRT = 307,
     TGEQ = 308,
     TADD = 309,
     TSUB = 310,
     TMUL = 311,
     TDIV = 312,
     TMOD = 313,
     TPOW = 314,
     TCAT = 315,
     TAND = 316,
     TOR = 317,
     TXOR = 318,
     TNOT = 319,
     TCINT = 320,
     TCREAL = 321,
     TANY = 322,
     TBOOL = 323,
     TINT = 324,
     TREAL = 325,
     TSTRING = 326,
     TEOS = 327,
     TNEG = 328
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union 
YYSTYPE
{


	AstProgram *program;
	AstStatement *stmt;
	AstStatementList *stmtlist;
	AstExpression *expr;
	AstExpressionList *exprlist;
	AstParamList *paramlist;
	AstIdentList *identlist;
	KIMLTYPES datatype;
	
	KIMLBOOL bvalue;
	KIMLINT ivalue;
	KIMLFLOAT rvalue;
	KIMLCSTRING svalue;



} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
} YYLTYPE;
# define yyltype YYLTYPE /* obsolescent; will be withdrawn */
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


/* Copy the second part of user declarations.  */



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
	 || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
	     && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

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
#define YYFINAL  57
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   665

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  74
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  47
/* YYNRULES -- Number of rules.  */
#define YYNRULES  134
/* YYNRULES -- Number of states.  */
#define YYNSTATES  268

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   328

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     7,    10,    12,    14,    16,    18,
      20,    22,    24,    26,    28,    30,    32,    34,    36,    38,
      40,    42,    44,    46,    48,    50,    52,    54,    56,    58,
      60,    62,    64,    66,    68,    70,    73,    75,    77,    79,
      81,    87,    93,    99,   106,   115,   123,   129,   135,   140,
     146,   152,   157,   162,   168,   176,   184,   190,   196,   204,
     212,   218,   226,   231,   236,   242,   248,   256,   262,   270,
     275,   280,   292,   302,   303,   305,   307,   310,   314,   319,
     321,   323,   325,   327,   329,   331,   333,   335,   337,   339,
     348,   349,   351,   353,   357,   365,   373,   379,   383,   389,
     393,   395,   398,   400,   402,   404,   406,   408,   410,   412,
     414,   416,   418,   420,   424,   428,   432,   436,   440,   444,
     448,   452,   456,   460,   464,   468,   472,   476,   480,   484,
     488,   491,   494,   499,   504
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      75,     0,    -1,    76,    -1,    77,    -1,    76,    77,    -1,
      72,    -1,    79,    -1,    80,    -1,    81,    -1,    82,    -1,
      83,    -1,    84,    -1,    85,    -1,    86,    -1,    87,    -1,
      88,    -1,    89,    -1,    90,    -1,    91,    -1,    92,    -1,
      93,    -1,    94,    -1,    95,    -1,    96,    -1,    97,    -1,
      98,    -1,    99,    -1,   100,    -1,   105,    -1,   108,    -1,
     109,    -1,   110,    -1,   111,    -1,   112,    -1,   113,    -1,
       1,    72,    -1,    68,    -1,    69,    -1,    70,    -1,    71,
      -1,     3,    37,    12,    78,    72,    -1,     3,    37,    12,
      40,    72,    -1,     3,    37,    13,   115,    72,    -1,     4,
      37,    14,    78,    40,    72,    -1,     4,    37,    14,    78,
      40,    48,   115,    72,    -1,     4,    37,    16,    40,    48,
     115,    72,    -1,     4,    37,    15,    40,    72,    -1,     5,
      37,    17,   115,    72,    -1,     5,    37,    18,    72,    -1,
       5,    37,    18,    40,    72,    -1,     5,    37,    19,    40,
      72,    -1,     5,    37,    21,    72,    -1,     5,    37,    20,
      72,    -1,     5,    37,    20,    43,    72,    -1,     5,    37,
      22,    40,    35,   115,    72,    -1,     5,    37,    23,   115,
      35,   115,    72,    -1,     6,    37,    22,    78,    72,    -1,
       6,    37,    22,    40,    72,    -1,     6,    37,    22,    78,
      35,   115,    72,    -1,     6,    37,    22,    40,    35,   115,
      72,    -1,     6,    37,    23,   115,    72,    -1,     6,    37,
      23,   115,    35,   115,    72,    -1,     6,    37,    24,    72,
      -1,     6,    37,    25,    72,    -1,     6,    37,    26,   115,
      72,    -1,     7,    37,    27,    40,    72,    -1,     7,    37,
      27,    40,    34,   115,    72,    -1,     7,    37,    28,    40,
      72,    -1,     7,    37,    28,    40,    34,   115,    72,    -1,
       7,    37,    29,    72,    -1,     7,    37,    30,    72,    -1,
       8,    37,    14,   103,    40,    46,   101,    47,    48,    40,
      72,    -1,     8,    37,    14,   103,    40,    46,   101,    47,
      72,    -1,    -1,   102,    -1,   104,    -1,   104,    40,    -1,
     102,    39,   104,    -1,   102,    39,   104,    40,    -1,    67,
      -1,    68,    -1,    69,    -1,    70,    -1,    71,    -1,    67,
      -1,    68,    -1,    69,    -1,    70,    -1,    71,    -1,     8,
      37,    28,    40,    46,   106,    47,    72,    -1,    -1,   107,
      -1,   115,    -1,   106,    39,   115,    -1,     9,    37,    31,
      40,    36,    40,    72,    -1,     9,    37,    32,    40,    36,
      40,    72,    -1,     9,    37,    33,    40,    72,    -1,    40,
      38,    72,    -1,    10,    40,    48,   115,    72,    -1,    11,
     114,    72,    -1,    40,    -1,   114,    40,    -1,   116,    -1,
     117,    -1,   118,    -1,   119,    -1,   120,    -1,    40,    -1,
      41,    -1,    42,    -1,    43,    -1,    44,    -1,    45,    -1,
      46,   115,    47,    -1,   115,    48,   115,    -1,   115,    49,
     115,    -1,   115,    50,   115,    -1,   115,    51,   115,    -1,
     115,    52,   115,    -1,   115,    53,   115,    -1,   115,    54,
     115,    -1,   115,    55,   115,    -1,   115,    56,   115,    -1,
     115,    57,   115,    -1,   115,    58,   115,    -1,   115,    59,
     115,    -1,   115,    60,   115,    -1,   115,    61,   115,    -1,
     115,    62,   115,    -1,   115,    63,   115,    -1,    64,   115,
      -1,    55,   115,    -1,    40,    46,   106,    47,    -1,    65,
      46,   115,    47,    -1,    66,    46,   115,    47,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    85,    85,    90,    92,    97,    99,   101,   103,   105,
     107,   109,   111,   113,   115,   117,   119,   121,   123,   125,
     127,   129,   131,   133,   135,   137,   139,   141,   143,   145,
     147,   149,   151,   153,   155,   157,   162,   164,   166,   168,
     173,   175,   180,   185,   187,   192,   197,   202,   207,   209,
     214,   219,   224,   226,   231,   236,   241,   243,   245,   247,
     252,   254,   259,   264,   269,   274,   276,   281,   283,   288,
     293,   298,   300,   306,   307,   312,   314,   316,   318,   323,
     325,   327,   329,   331,   336,   338,   340,   342,   344,   349,
     355,   356,   361,   363,   368,   373,   378,   383,   388,   393,
     398,   400,   405,   407,   409,   411,   413,   418,   420,   422,
     424,   426,   428,   430,   435,   437,   439,   441,   443,   445,
     447,   449,   451,   453,   455,   457,   459,   461,   463,   465,
     470,   472,   477,   482,   484
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TIO", "TVAR", "TSTACK", "TTAPE",
  "TCTRL", "TFUNC", "TEVENT", "TCONST", "TENUM", "TIN", "TOUT", "TDECL",
  "TDEL", "TSET", "TPUSH", "TPOP", "TPEEK", "TCLEAR", "TSWAP", "TREAD",
  "TWRITE", "TNEXT", "TPREV", "TMOVE", "TGOTO", "TCALL", "TRETURN", "TEND",
  "THANDLE", "TUNHANDLE", "TRAISE", "TIF", "TAT", "TBY", "TDOT", "TCOLON",
  "TCOMMA", "TIDENT", "TLITTRUE", "TLITFALSE", "TLITINT", "TLITREAL",
  "TLITSTRING", "TLPAR", "TRPAR", "TEQU", "TNEQ", "TLES", "TLEQ", "TGRT",
  "TGEQ", "TADD", "TSUB", "TMUL", "TDIV", "TMOD", "TPOW", "TCAT", "TAND",
  "TOR", "TXOR", "TNOT", "TCINT", "TCREAL", "TANY", "TBOOL", "TINT",
  "TREAL", "TSTRING", "TEOS", "TNEG", "$accept", "program", "stmtlist",
  "stmt", "vartype", "ioin", "ioout", "vardecl", "varset", "vardel",
  "stackpush", "stackpop", "stackpeek", "stackswap", "stackclear",
  "stackread", "stackwrite", "taperead", "tapewrite", "tapenext",
  "tapeprev", "tapemove", "ctrlgoto", "ctrlcall", "ctrlreturn", "ctrlend",
  "funcdecl", "paramlist", "paramlist_sep", "rettype", "paramtype",
  "funccall", "exprlist", "exprlist_sep", "eventhandle", "eventunhandle",
  "eventraise", "label", "constdef", "enumdef", "identlist", "expr",
  "atom", "binexpr", "unexpr", "func", "cast", 0
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
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    74,    75,    76,    76,    77,    77,    77,    77,    77,
      77,    77,    77,    77,    77,    77,    77,    77,    77,    77,
      77,    77,    77,    77,    77,    77,    77,    77,    77,    77,
      77,    77,    77,    77,    77,    77,    78,    78,    78,    78,
      79,    79,    80,    81,    81,    82,    83,    84,    85,    85,
      86,    87,    88,    88,    89,    90,    91,    91,    91,    91,
      92,    92,    93,    94,    95,    96,    96,    97,    97,    98,
      99,   100,   100,   101,   101,   102,   102,   102,   102,   103,
     103,   103,   103,   103,   104,   104,   104,   104,   104,   105,
     106,   106,   107,   107,   108,   109,   110,   111,   112,   113,
     114,   114,   115,   115,   115,   115,   115,   116,   116,   116,
     116,   116,   116,   116,   117,   117,   117,   117,   117,   117,
     117,   117,   117,   117,   117,   117,   117,   117,   117,   117,
     118,   118,   119,   120,   120
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     1,     1,     1,     1,
       5,     5,     5,     6,     8,     7,     5,     5,     4,     5,
       5,     4,     4,     5,     7,     7,     5,     5,     7,     7,
       5,     7,     4,     4,     5,     5,     7,     5,     7,     4,
       4,    11,     9,     0,     1,     1,     2,     3,     4,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     8,
       0,     1,     1,     3,     7,     7,     5,     3,     5,     3,
       1,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       2,     2,     4,     4,     4
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     5,     0,     0,     3,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,     0,     0,     0,     0,
       0,     0,     0,     0,   100,     0,     0,     1,     4,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   101,    99,    97,     0,
      36,    37,    38,    39,     0,   107,   108,   109,   110,   111,
     112,     0,     0,     0,     0,     0,     0,   102,   103,   104,
     105,   106,     0,     0,     0,     0,     0,    48,     0,     0,
      52,    51,     0,     0,     0,     0,     0,    62,    63,     0,
       0,     0,    69,    70,    79,    80,    81,    82,    83,     0,
       0,     0,     0,     0,     0,    41,    40,    90,     0,   131,
     130,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    42,
       0,    46,     0,    47,    49,    50,    53,     0,     0,     0,
      57,     0,    56,     0,    60,    64,     0,    65,     0,    67,
       0,    90,     0,     0,    96,    98,     0,    91,    92,   113,
       0,     0,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,     0,    43,
       0,     0,     0,     0,     0,     0,     0,     0,    73,     0,
       0,     0,     0,   132,   133,   134,     0,    45,    54,    55,
      59,    58,    61,    66,    68,    84,    85,    86,    87,    88,
       0,    74,    75,     0,    94,    95,    93,    44,     0,     0,
      76,    89,     0,    72,    77,     0,    78,    71
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    13,    14,    15,    94,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,   250,   251,   139,
     252,    38,   196,   197,    39,    40,    41,    42,    43,    44,
      55,   198,   107,   108,   109,   110,   111
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -67
static const yytype_int16 yypact[] =
{
      69,   -66,   -26,    -8,    -6,    -1,    32,    46,    47,    70,
      71,    77,   -67,   113,    13,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,    21,   196,    45,   139,
      20,    18,   205,    68,   -67,   -37,    48,   -67,   -67,   -14,
     149,   164,    84,    85,   149,   -35,    87,   -34,   130,   119,
     149,   -10,   149,   131,   167,   149,   217,   219,   186,   188,
     100,   221,   222,   223,   224,   149,   -67,   -67,   -67,   210,
     -67,   -67,   -67,   -67,   211,   238,   -67,   -67,   -67,   -67,
     -67,   149,   149,   149,   239,   240,   168,   -67,   -67,   -67,
     -67,   -67,   247,   216,    92,   193,   235,   -67,   236,   237,
     -67,   -67,   254,   125,   -28,   -27,    94,   -67,   -67,   218,
     -33,   -32,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   270,
     265,   276,   277,   242,   243,   -67,   -67,   149,   494,   -67,
     -67,   149,   149,   149,   149,   149,   149,   149,   149,   149,
     149,   149,   149,   149,   149,   149,   149,   149,   149,   -67,
     -21,   -67,   149,   -67,   -67,   -67,   -67,   149,   149,   149,
     -67,   149,   -67,   149,   -67,   -67,   149,   -67,   149,   -67,
     286,   149,   294,   295,   -67,   -67,    43,   -67,   544,   -67,
     511,   528,    80,    80,   142,   142,   142,   142,    30,    30,
     274,   274,   274,   274,   560,   606,   576,   592,   149,   -67,
     268,   293,   318,   343,   368,   393,   418,   443,   138,    75,
     264,   266,   149,   -67,   -67,   -67,   468,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     290,   300,   317,   287,   -67,   -67,   544,   -67,   -20,   138,
     -67,   -67,   320,   -67,   321,   291,   -67,   -67
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -67,   -67,   -67,   344,    10,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     103,   -67,   173,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -60,   -67,   -67,   -67,   -67,   -67
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -3
static const yytype_int16 yytable[] =
{
     106,   186,   188,    86,   115,   116,    45,   179,   181,   119,
     123,    46,   126,    -2,     1,   129,     2,     3,     4,     5,
       6,     7,     8,     9,    10,   144,    89,   218,   262,    47,
     124,    48,    80,    59,    60,    87,    49,   117,   120,   187,
     189,   148,   149,   150,   180,   182,    81,    76,    77,    78,
      79,   219,   263,    11,    90,    91,    92,    93,    90,    91,
      92,    93,    64,    65,    66,    67,    68,    69,    70,    50,
       1,   112,     2,     3,     4,     5,     6,     7,     8,     9,
      10,   125,   232,    51,    52,    12,   161,   162,   163,   164,
     233,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,    11,
      53,    54,   220,    57,   232,    56,    85,   221,   222,   223,
      88,   224,   253,   225,   113,   114,   226,   118,   227,   183,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     172,    12,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   236,   122,
     178,    71,    72,    73,    74,    75,   184,   134,   135,   136,
     137,   138,   256,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,    95,
      96,    97,    98,    99,   100,   101,   159,   160,   161,   162,
     163,   164,   121,   127,   102,   245,   246,   247,   248,   249,
      61,    62,    63,   103,   104,   105,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,    90,    91,    92,    93,    82,    83,    84,   128,
     169,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   130,   132,   131,
     133,   140,   141,   142,   143,   173,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   145,   146,   147,   151,   152,   170,   171,   177,
     185,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   174,   175,   176,
     190,   191,   192,   193,   194,   195,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   228,   164,   230,   231,   254,   258,   255,   259,
     237,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   260,    58,   261,
     265,   266,   264,   267,   229,   238,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,     0,     0,     0,     0,     0,     0,     0,     0,
     239,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,     0,     0,     0,
       0,     0,     0,     0,     0,   240,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,     0,     0,     0,     0,     0,     0,     0,     0,
     241,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,     0,     0,     0,
       0,     0,     0,     0,     0,   242,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,     0,     0,     0,     0,     0,     0,     0,     0,
     243,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,     0,     0,     0,
       0,     0,     0,     0,     0,   244,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,     0,     0,     0,     0,     0,     0,     0,     0,
     257,   199,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   234,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   235,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
       0,   166,   167,   168,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,     0,   166,     0,   168,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,     0,   166,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164
};

static const yytype_int16 yycheck[] =
{
      60,    34,    34,    40,    64,    40,    72,    35,    35,    43,
      70,    37,    72,     0,     1,    75,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    85,    40,    48,    48,    37,
      40,    37,    14,    12,    13,    72,    37,    72,    72,    72,
      72,   101,   102,   103,    72,    72,    28,    27,    28,    29,
      30,    72,    72,    40,    68,    69,    70,    71,    68,    69,
      70,    71,    17,    18,    19,    20,    21,    22,    23,    37,
       1,    61,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    71,    39,    37,    37,    72,    56,    57,    58,    59,
      47,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,    40,
      40,    40,   172,     0,    39,    38,    48,   177,   178,   179,
      72,   181,    47,   183,    40,    40,   186,    40,   188,    35,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      48,    72,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,   218,    40,
      35,    22,    23,    24,    25,    26,    72,    67,    68,    69,
      70,    71,   232,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    40,
      41,    42,    43,    44,    45,    46,    54,    55,    56,    57,
      58,    59,    72,    72,    55,    67,    68,    69,    70,    71,
      14,    15,    16,    64,    65,    66,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    68,    69,    70,    71,    31,    32,    33,    72,
      72,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    40,    72,    40,
      72,    40,    40,    40,    40,    72,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    72,    72,    46,    46,    46,    40,    72,    35,
      72,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    72,    72,    72,
      40,    46,    36,    36,    72,    72,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    46,    59,    40,    40,    72,    47,    72,    39,
      72,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    40,    14,    72,
      40,    40,   259,    72,   191,    72,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      72,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    72,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      72,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    72,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      72,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    72,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      72,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      -1,    61,    62,    63,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    -1,    61,    -1,    63,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    -1,    61,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    40,    72,    75,    76,    77,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   105,   108,
     109,   110,   111,   112,   113,    72,    37,    37,    37,    37,
      37,    37,    37,    40,    40,   114,    38,     0,    77,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      14,    28,    31,    32,    33,    48,    40,    72,    72,    40,
      68,    69,    70,    71,    78,    40,    41,    42,    43,    44,
      45,    46,    55,    64,    65,    66,   115,   116,   117,   118,
     119,   120,    78,    40,    40,   115,    40,    72,    40,    43,
      72,    72,    40,   115,    40,    78,   115,    72,    72,   115,
      40,    40,    72,    72,    67,    68,    69,    70,    71,   103,
      40,    40,    40,    40,   115,    72,    72,    46,   115,   115,
     115,    46,    46,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    72,
      40,    72,    48,    72,    72,    72,    72,    35,    35,    35,
      72,    35,    72,    35,    72,    72,    34,    72,    34,    72,
      40,    46,    36,    36,    72,    72,   106,   107,   115,    47,
     115,   115,   115,   115,   115,   115,   115,   115,   115,   115,
     115,   115,   115,   115,   115,   115,   115,   115,    48,    72,
     115,   115,   115,   115,   115,   115,   115,   115,    46,   106,
      40,    40,    39,    47,    47,    47,   115,    72,    72,    72,
      72,    72,    72,    72,    72,    67,    68,    69,    70,    71,
     101,   102,   104,    47,    72,    72,   115,    72,    47,    39,
      40,    72,    48,    72,   104,    40,    40,    72
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
      yyerror (&yylloc, YY_("syntax error: cannot back up")); \
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
# define YYLEX yylex (&yylval, &yylloc, YYLEX_PARAM)
#else
# define YYLEX yylex (&yylval, &yylloc)
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
		  Type, Value, Location); \
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
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
#endif
{
  if (!yyvaluep)
    return;
  YYUSE (yylocationp);
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep, yylocationp)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp);
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
yy_reduce_print (YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yylsp, yyrule)
    YYSTYPE *yyvsp;
    YYLTYPE *yylsp;
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
		       , &(yylsp[(yyi + 1) - (yynrhs)])		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, yylsp, Rule); \
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
#else
static void
yydestruct (yymsg, yytype, yyvaluep, yylocationp)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
    YYLTYPE *yylocationp;
#endif
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);

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
/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Location data for the lookahead symbol.  */
YYLTYPE yylloc;

    /* Number of syntax errors so far.  */
    int yynerrs;

    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.
       `yyls': related to locations.

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

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[2];

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yyls = yylsa;
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
  yylsp = yyls;

#if YYLTYPE_IS_TRIVIAL
  /* Initialize the default location before parsing starts.  */
  yylloc.first_line   = yylloc.last_line   = 1;
  yylloc.first_column = yylloc.last_column = 1;
#endif

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
	YYLTYPE *yyls1 = yyls;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yyls1, yysize * sizeof (*yylsp),
		    &yystacksize);

	yyls = yyls1;
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
	YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

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
  *++yylsp = yylloc;
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

  /* Default location.  */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:

    { root = new AstProgram(); root->setStatements((yyvsp[(1) - (1)].stmtlist)); ;}
    break;

  case 3:

    { (yyval.stmtlist) = new AstStatementList((yylsp[(1) - (1)])); if ((yyvsp[(1) - (1)].stmt)) (yyval.stmtlist)->add((yyvsp[(1) - (1)].stmt)); ;}
    break;

  case 4:

    { if ((yyvsp[(2) - (2)].stmt)) (yyvsp[(1) - (2)].stmtlist)->add((yyvsp[(2) - (2)].stmt)); (yyval.stmtlist) = (yyvsp[(1) - (2)].stmtlist); ;}
    break;

  case 5:

    { (yyval.stmt) = nullptr; ;}
    break;

  case 6:

    { (yyval.stmt) = (yyvsp[(1) - (1)].stmt); ;}
    break;

  case 7:

    { (yyval.stmt) = (yyvsp[(1) - (1)].stmt); ;}
    break;

  case 8:

    { (yyval.stmt) = (yyvsp[(1) - (1)].stmt); ;}
    break;

  case 9:

    { (yyval.stmt) = (yyvsp[(1) - (1)].stmt); ;}
    break;

  case 10:

    { (yyval.stmt) = (yyvsp[(1) - (1)].stmt); ;}
    break;

  case 11:

    { (yyval.stmt) = (yyvsp[(1) - (1)].stmt); ;}
    break;

  case 12:

    { (yyval.stmt) = (yyvsp[(1) - (1)].stmt); ;}
    break;

  case 13:

    { (yyval.stmt) = (yyvsp[(1) - (1)].stmt); ;}
    break;

  case 14:

    { (yyval.stmt) = (yyvsp[(1) - (1)].stmt); ;}
    break;

  case 15:

    { (yyval.stmt) = (yyvsp[(1) - (1)].stmt); ;}
    break;

  case 16:

    { (yyval.stmt) = (yyvsp[(1) - (1)].stmt); ;}
    break;

  case 17:

    { (yyval.stmt) = (yyvsp[(1) - (1)].stmt); ;}
    break;

  case 18:

    { (yyval.stmt) = (yyvsp[(1) - (1)].stmt); ;}
    break;

  case 19:

    { (yyval.stmt) = (yyvsp[(1) - (1)].stmt); ;}
    break;

  case 20:

    { (yyval.stmt) = (yyvsp[(1) - (1)].stmt); ;}
    break;

  case 21:

    { (yyval.stmt) = (yyvsp[(1) - (1)].stmt); ;}
    break;

  case 22:

    { (yyval.stmt) = (yyvsp[(1) - (1)].stmt); ;}
    break;

  case 23:

    { (yyval.stmt) = (yyvsp[(1) - (1)].stmt); ;}
    break;

  case 24:

    { (yyval.stmt) = (yyvsp[(1) - (1)].stmt); ;}
    break;

  case 25:

    { (yyval.stmt) = (yyvsp[(1) - (1)].stmt); ;}
    break;

  case 26:

    { (yyval.stmt) = (yyvsp[(1) - (1)].stmt); ;}
    break;

  case 27:

    { (yyval.stmt) = (yyvsp[(1) - (1)].stmt); ;}
    break;

  case 28:

    { (yyval.stmt) = (yyvsp[(1) - (1)].stmt); ;}
    break;

  case 29:

    { (yyval.stmt) = (yyvsp[(1) - (1)].stmt); ;}
    break;

  case 30:

    { (yyval.stmt) = (yyvsp[(1) - (1)].stmt); ;}
    break;

  case 31:

    { (yyval.stmt) = (yyvsp[(1) - (1)].stmt); ;}
    break;

  case 32:

    { (yyval.stmt) = (yyvsp[(1) - (1)].stmt); ;}
    break;

  case 33:

    { (yyval.stmt) = (yyvsp[(1) - (1)].stmt); ;}
    break;

  case 34:

    { (yyval.stmt) = (yyvsp[(1) - (1)].stmt); ;}
    break;

  case 35:

    { (yyval.stmt) = nullptr; yyerrok; ;}
    break;

  case 36:

    { (yyval.datatype) = KIML_BOOL; ;}
    break;

  case 37:

    { (yyval.datatype) = KIML_INT; ;}
    break;

  case 38:

    { (yyval.datatype) = KIML_REAL; ;}
    break;

  case 39:

    { (yyval.datatype) = KIML_STRING; ;}
    break;

  case 40:

    { (yyval.stmt) = new AstIoIn((yylsp[(1) - (5)]), (yyvsp[(4) - (5)].datatype)); ;}
    break;

  case 41:

    { (yyval.stmt) = new AstIoIn((yylsp[(1) - (5)]), (yyvsp[(4) - (5)].svalue)); ;}
    break;

  case 42:

    { (yyval.stmt) = new AstIoOut((yylsp[(1) - (5)]), (yyvsp[(4) - (5)].expr)); ;}
    break;

  case 43:

    { (yyval.stmt) = new AstVarDecl((yylsp[(1) - (6)]), (yyvsp[(4) - (6)].datatype), (yyvsp[(5) - (6)].svalue)); ;}
    break;

  case 44:

    { (yyval.stmt) = new AstVarDecl((yylsp[(1) - (8)]), (yyvsp[(4) - (8)].datatype), (yyvsp[(5) - (8)].svalue), (yyvsp[(7) - (8)].expr)); ;}
    break;

  case 45:

    { (yyval.stmt) = new AstVarSet((yylsp[(1) - (7)]), (yyvsp[(4) - (7)].svalue), (yyvsp[(6) - (7)].expr)); ;}
    break;

  case 46:

    { (yyval.stmt) = new AstVarDel((yylsp[(1) - (5)]), (yyvsp[(4) - (5)].svalue)); ;}
    break;

  case 47:

    { (yyval.stmt) = new AstStackPush((yylsp[(1) - (5)]), (yyvsp[(4) - (5)].expr)); ;}
    break;

  case 48:

    { (yyval.stmt) = new AstStackPop((yylsp[(1) - (4)])); ;}
    break;

  case 49:

    { (yyval.stmt) = new AstStackPop((yylsp[(1) - (5)]), (yyvsp[(4) - (5)].svalue)); ;}
    break;

  case 50:

    { (yyval.stmt) = new AstStackPeek((yylsp[(1) - (5)]), (yyvsp[(4) - (5)].svalue)); ;}
    break;

  case 51:

    { (yyval.stmt) = new AstStackSwap((yylsp[(1) - (4)])); ;}
    break;

  case 52:

    { (yyval.stmt) = new AstStackClear((yylsp[(1) - (4)])); ;}
    break;

  case 53:

    { (yyval.stmt) = new AstStackClear((yylsp[(1) - (5)]), (yyvsp[(4) - (5)].ivalue)); ;}
    break;

  case 54:

    { (yyval.stmt) = new AstStackRead((yylsp[(1) - (7)]), (yyvsp[(4) - (7)].svalue), (yyvsp[(6) - (7)].expr)); ;}
    break;

  case 55:

    { (yyval.stmt) = new AstStackWrite((yylsp[(1) - (7)]), (yyvsp[(4) - (7)].expr), (yyvsp[(6) - (7)].expr)); ;}
    break;

  case 56:

    { (yyval.stmt) = new AstTapeRead((yylsp[(1) - (5)]), (yyvsp[(4) - (5)].datatype)); ;}
    break;

  case 57:

    { (yyval.stmt) = new AstTapeRead((yylsp[(1) - (5)]), (yyvsp[(4) - (5)].svalue)); ;}
    break;

  case 58:

    { (yyval.stmt) = new AstTapeRead((yylsp[(1) - (7)]), (yyvsp[(4) - (7)].datatype), (yyvsp[(6) - (7)].expr)); ;}
    break;

  case 59:

    { (yyval.stmt) = new AstTapeRead((yylsp[(1) - (7)]), (yyvsp[(4) - (7)].svalue), (yyvsp[(6) - (7)].expr)); ;}
    break;

  case 60:

    { (yyval.stmt) = new AstTapeWrite((yylsp[(1) - (5)]), (yyvsp[(4) - (5)].expr)); ;}
    break;

  case 61:

    { (yyval.stmt) = new AstTapeWrite((yylsp[(1) - (7)]), (yyvsp[(4) - (7)].expr), (yyvsp[(6) - (7)].expr)); ;}
    break;

  case 62:

    { (yyval.stmt) = new AstTapeNext((yylsp[(1) - (4)])); ;}
    break;

  case 63:

    { (yyval.stmt) = new AstTapePrev((yylsp[(1) - (4)])); ;}
    break;

  case 64:

    { (yyval.stmt) = new AstTapeMove((yylsp[(1) - (5)]), (yyvsp[(4) - (5)].expr)); ;}
    break;

  case 65:

    { (yyval.stmt) = new AstCtrlGoto((yylsp[(1) - (5)]), (yyvsp[(4) - (5)].svalue)); ;}
    break;

  case 66:

    { (yyval.stmt) = new AstCtrlGoto((yylsp[(1) - (7)]), (yyvsp[(4) - (7)].svalue), (yyvsp[(6) - (7)].expr)); ;}
    break;

  case 67:

    { (yyval.stmt) = new AstCtrlCall((yylsp[(1) - (5)]), (yyvsp[(4) - (5)].svalue)); ;}
    break;

  case 68:

    { (yyval.stmt) = new AstCtrlCall((yylsp[(1) - (7)]), (yyvsp[(4) - (7)].svalue), (yyvsp[(6) - (7)].expr)); ;}
    break;

  case 69:

    { (yyval.stmt) = new AstCtrlReturn((yylsp[(1) - (4)])); ;}
    break;

  case 70:

    { (yyval.stmt) = new AstCtrlEnd((yylsp[(1) - (4)])); ;}
    break;

  case 71:

    { (yyval.stmt) = new AstFuncDecl((yylsp[(1) - (11)]), (yyvsp[(5) - (11)].svalue), (yyvsp[(4) - (11)].datatype), (yyvsp[(7) - (11)].paramlist), (yyvsp[(10) - (11)].svalue)); ;}
    break;

  case 72:

    { (yyval.stmt) = new AstFuncDecl((yylsp[(1) - (9)]), (yyvsp[(5) - (9)].svalue), (yyvsp[(4) - (9)].datatype), (yyvsp[(7) - (9)].paramlist)); ;}
    break;

  case 73:

    { (yyval.paramlist) = new AstParamList(); ;}
    break;

  case 74:

    { (yyval.paramlist) = (yyvsp[(1) - (1)].paramlist); ;}
    break;

  case 75:

    { (yyval.paramlist) = new AstParamList((yylsp[(1) - (1)])); (yyval.paramlist)->add((yyvsp[(1) - (1)].datatype)); ;}
    break;

  case 76:

    { (yyval.paramlist) = new AstParamList((yylsp[(1) - (2)])); (yyval.paramlist)->add((yyvsp[(1) - (2)].datatype)); ;}
    break;

  case 77:

    { (yyvsp[(1) - (3)].paramlist)->add((yyvsp[(3) - (3)].datatype)); (yyval.paramlist) = (yyvsp[(1) - (3)].paramlist); ;}
    break;

  case 78:

    { (yyvsp[(1) - (4)].paramlist)->add((yyvsp[(3) - (4)].datatype)); (yyval.paramlist) = (yyvsp[(1) - (4)].paramlist); ;}
    break;

  case 79:

    { (yyval.datatype) = KIML_ANYTYPE; ;}
    break;

  case 80:

    { (yyval.datatype) = KIML_BOOL; ;}
    break;

  case 81:

    { (yyval.datatype) = KIML_INT; ;}
    break;

  case 82:

    { (yyval.datatype) = KIML_REAL; ;}
    break;

  case 83:

    { (yyval.datatype) = KIML_STRING; ;}
    break;

  case 84:

    { (yyval.datatype) = KIML_ANYTYPE; ;}
    break;

  case 85:

    { (yyval.datatype) = KIML_BOOL; ;}
    break;

  case 86:

    { (yyval.datatype) = KIML_INT; ;}
    break;

  case 87:

    { (yyval.datatype) = KIML_REAL; ;}
    break;

  case 88:

    { (yyval.datatype) = KIML_STRING; ;}
    break;

  case 89:

    { (yyval.stmt) = new AstFuncCall((yylsp[(1) - (8)]), (yyvsp[(4) - (8)].svalue), (yyvsp[(6) - (8)].exprlist)); ;}
    break;

  case 90:

    { (yyval.exprlist) = new AstExpressionList(); ;}
    break;

  case 91:

    { (yyval.exprlist) = (yyvsp[(1) - (1)].exprlist); ;}
    break;

  case 92:

    { (yyval.exprlist) = new AstExpressionList((yylsp[(1) - (1)])); (yyval.exprlist)->add((yyvsp[(1) - (1)].expr)); ;}
    break;

  case 93:

    { (yyvsp[(1) - (3)].exprlist)->add((yyvsp[(3) - (3)].expr)); (yyval.exprlist) = (yyvsp[(1) - (3)].exprlist); ;}
    break;

  case 94:

    { (yyval.stmt) = new AstEventHandle((yylsp[(1) - (7)]), (yyvsp[(4) - (7)].svalue), (yyvsp[(6) - (7)].svalue)); ;}
    break;

  case 95:

    { (yyval.stmt) = new AstEventUnhandle((yylsp[(1) - (7)]), (yyvsp[(4) - (7)].svalue), (yyvsp[(6) - (7)].svalue)); ;}
    break;

  case 96:

    { (yyval.stmt) = new AstEventRaise((yylsp[(1) - (5)]), (yyvsp[(4) - (5)].svalue)); ;}
    break;

  case 97:

    { (yyval.stmt) = new AstLabel((yylsp[(1) - (3)]), (yyvsp[(1) - (3)].svalue)); ;}
    break;

  case 98:

    { (yyval.stmt) = new AstConstDef((yylsp[(1) - (5)]), (yyvsp[(2) - (5)].svalue), (yyvsp[(4) - (5)].expr)); ;}
    break;

  case 99:

    { (yyval.stmt) = new AstEnumDef((yylsp[(1) - (3)]), (yyvsp[(2) - (3)].identlist)); ;}
    break;

  case 100:

    { (yyval.identlist) = new AstIdentList((yylsp[(1) - (1)])); (yyval.identlist)->add((yyvsp[(1) - (1)].svalue)); ;}
    break;

  case 101:

    { (yyval.identlist)->add((yyvsp[(2) - (2)].svalue)); ;}
    break;

  case 102:

    { (yyval.expr) = (yyvsp[(1) - (1)].expr); ;}
    break;

  case 103:

    { (yyval.expr) = (yyvsp[(1) - (1)].expr); ;}
    break;

  case 104:

    { (yyval.expr) = (yyvsp[(1) - (1)].expr); ;}
    break;

  case 105:

    { (yyval.expr) = (yyvsp[(1) - (1)].expr); ;}
    break;

  case 106:

    { (yyval.expr) = (yyvsp[(1) - (1)].expr); ;}
    break;

  case 107:

    { (yyval.expr) = new AstIdent((yylsp[(1) - (1)]), (yyvsp[(1) - (1)].svalue)); ;}
    break;

  case 108:

    { (yyval.expr) = new AstConstTrue((yylsp[(1) - (1)])); ;}
    break;

  case 109:

    { (yyval.expr) = new AstConstFalse((yylsp[(1) - (1)])); ;}
    break;

  case 110:

    { (yyval.expr) = new AstConstInt((yylsp[(1) - (1)]), (yyvsp[(1) - (1)].ivalue)); ;}
    break;

  case 111:

    { (yyval.expr) = new AstConstReal((yylsp[(1) - (1)]), (yyvsp[(1) - (1)].rvalue)); ;}
    break;

  case 112:

    { (yyval.expr) = new AstConstString((yylsp[(1) - (1)]), (yyvsp[(1) - (1)].svalue)); ;}
    break;

  case 113:

    { (yyval.expr) = (yyvsp[(2) - (3)].expr); ;}
    break;

  case 114:

    { (yyval.expr) = new AstBinExpr((yylsp[(1) - (3)]), BINOP_EQU, (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr)); ;}
    break;

  case 115:

    { (yyval.expr) = new AstBinExpr((yylsp[(1) - (3)]), BINOP_NEQ, (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr)); ;}
    break;

  case 116:

    { (yyval.expr) = new AstBinExpr((yylsp[(1) - (3)]), BINOP_LES, (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr)); ;}
    break;

  case 117:

    { (yyval.expr) = new AstBinExpr((yylsp[(1) - (3)]), BINOP_LEQ, (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr)); ;}
    break;

  case 118:

    { (yyval.expr) = new AstBinExpr((yylsp[(1) - (3)]), BINOP_GRT, (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr)); ;}
    break;

  case 119:

    { (yyval.expr) = new AstBinExpr((yylsp[(1) - (3)]), BINOP_GEQ, (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr)); ;}
    break;

  case 120:

    { (yyval.expr) = new AstBinExpr((yylsp[(1) - (3)]), BINOP_ADD, (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr)); ;}
    break;

  case 121:

    { (yyval.expr) = new AstBinExpr((yylsp[(1) - (3)]), BINOP_SUB, (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr)); ;}
    break;

  case 122:

    { (yyval.expr) = new AstBinExpr((yylsp[(1) - (3)]), BINOP_MUL, (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr)); ;}
    break;

  case 123:

    { (yyval.expr) = new AstBinExpr((yylsp[(1) - (3)]), BINOP_DIV, (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr)); ;}
    break;

  case 124:

    { (yyval.expr) = new AstBinExpr((yylsp[(1) - (3)]), BINOP_MOD, (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr)); ;}
    break;

  case 125:

    { (yyval.expr) = new AstBinExpr((yylsp[(1) - (3)]), BINOP_POW, (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr)); ;}
    break;

  case 126:

    { (yyval.expr) = new AstBinExpr((yylsp[(1) - (3)]), BINOP_CAT, (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr)); ;}
    break;

  case 127:

    { (yyval.expr) = new AstBinExpr((yylsp[(1) - (3)]), BINOP_AND, (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr)); ;}
    break;

  case 128:

    { (yyval.expr) = new AstBinExpr((yylsp[(1) - (3)]), BINOP_OR, (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr)); ;}
    break;

  case 129:

    { (yyval.expr) = new AstBinExpr((yylsp[(1) - (3)]), BINOP_XOR, (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr)); ;}
    break;

  case 130:

    { (yyval.expr) = new AstUnExpr((yylsp[(1) - (2)]), UNOP_NOT, (yyvsp[(2) - (2)].expr)); ;}
    break;

  case 131:

    { (yyval.expr) = new AstUnExpr((yylsp[(1) - (2)]), UNOP_NEG, (yyvsp[(2) - (2)].expr)); ;}
    break;

  case 132:

    { (yyval.expr) = new AstExprFunc((yylsp[(1) - (4)]), (yyvsp[(1) - (4)].svalue), (yyvsp[(3) - (4)].exprlist)); ;}
    break;

  case 133:

    { (yyval.expr) = new AstCast((yylsp[(1) - (4)]), KIML_INT, (yyvsp[(3) - (4)].expr)); ;}
    break;

  case 134:

    { (yyval.expr) = new AstCast((yylsp[(1) - (4)]), KIML_REAL, (yyvsp[(3) - (4)].expr)); ;}
    break;



      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;
  *++yylsp = yyloc;

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
		yyerror(&yylloc, yymsg);
	  }
	else
	  {
		yyerror(&yylloc, YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }

  yyerror_range[0] = yylloc;

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
		      yytoken, &yylval, &yylloc);
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

  yyerror_range[0] = yylsp[1-yylen];
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

      yyerror_range[0] = *yylsp;
      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;

  yyerror_range[1] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, (yyerror_range - 1), 2);
  *++yylsp = yyloc;

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
  yyerror(&yylloc, YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval, &yylloc);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp, yylsp);
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





void yyerror(YYLTYPE *yylloc, const char *s)
{
	++nSyntaxErrors;
	fprintf(stderr, "%s[%d:%d]: ", szFileName, yylloc->first_line, yylloc->first_column);
	fprintf(stderr, "%s\n", s);
}

