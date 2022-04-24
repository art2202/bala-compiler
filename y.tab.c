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
  enum yytokentype
  {
    TK_ID = 258,
    TK_EXPLICIT_CONVERTER = 259,
    TK_NUM = 260,
    TK_REAL = 261,
    TK_CHAR = 262,
    TK_BOOL = 263,
    TK_STRING = 264,
    TK_TYPE_INT = 265,
    TK_TYPE_FLOAT = 266,
    TK_TYPE_BOOL = 267,
    TK_TYPE_CHAR = 268,
    TK_TYPE_STRING = 269,
    TK_BIG = 270,
    TK_SMALL = 271,
    TK_NOT_EQ = 272,
    TK_BIG_EQ = 273,
    TK_SMALL_EQ = 274,
    TK_EQ = 275,
    TK_AND = 276,
    TK_OR = 277,
    TK_NOT = 278,
    TK_IF = 279,
    TK_ELSE = 280,
    TK_FOR = 281,
    TK_WHILE = 282,
    TK_DO = 283,
    TK_SWITCH = 284,
    TK_CASE = 285,
    TK_DEFAULT = 286,
    TK_BREAK = 287,
    TK_CONTINUE = 288,
    NO_ELSE = 289
  };
#endif
/* Tokens.  */
#define TK_ID 258
#define TK_EXPLICIT_CONVERTER 259
#define TK_NUM 260
#define TK_REAL 261
#define TK_CHAR 262
#define TK_BOOL 263
#define TK_STRING 264
#define TK_TYPE_INT 265
#define TK_TYPE_FLOAT 266
#define TK_TYPE_BOOL 267
#define TK_TYPE_CHAR 268
#define TK_TYPE_STRING 269
#define TK_BIG 270
#define TK_SMALL 271
#define TK_NOT_EQ 272
#define TK_BIG_EQ 273
#define TK_SMALL_EQ 274
#define TK_EQ 275
#define TK_AND 276
#define TK_OR 277
#define TK_NOT 278
#define TK_IF 279
#define TK_ELSE 280
#define TK_FOR 281
#define TK_WHILE 282
#define TK_DO 283
#define TK_SWITCH 284
#define TK_CASE 285
#define TK_DEFAULT 286
#define TK_BREAK 287
#define TK_CONTINUE 288
#define NO_ELSE 289




/* Copy the first part of user declarations.  */
#line 1 "sintatica.y"

#include "headers/system.hpp"

#define YYSTYPE attribute

using namespace std;

int yylex(void);


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
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 180 "y.tab.c"

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
#define YYFINAL  51
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   428

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  47
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  29
/* YYNRULES -- Number of rules.  */
#define YYNRULES  82
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  155

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   289

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    34,     2,     2,
      39,    40,    37,    35,     2,    36,     2,    38,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    46,    44,
       2,    45,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    42,     2,    43,     2,     2,     2,     2,
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
      25,    26,    27,    28,    29,    30,    31,    32,    33,    41
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,    39,    39,    45,    54,    61,    66,    71,    75,    79,
      83,    87,    91,    95,   102,   103,   107,   111,   115,   121,
     125,   129,   133,   137,   143,   147,   151,   155,   159,   165,
     171,   175,   179,   183,   187,   191,   197,   201,   205,   209,
     213,   219,   223,   227,   231,   235,   239,   245,   249,   253,
     259,   263,   267,   271,   275,   279,   286,   290,   297,   301,
     305,   311,   315,   319,   327,   331,   337,   343,   350,   357,
     364,   372,   378,   384,   390,   395,   400,   405,   410,   415,
     420,   427,   431
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      46,     0,    -1,    49,    -1,    48,    40,    49,    41,    -1,
      -1,    50,    49,    -1,    -1,    57,    42,    -1,    52,    -1,
      47,    -1,    62,    -1,    63,    -1,    64,    -1,    65,    -1,
      66,    -1,    30,    37,    57,    38,    -1,    57,    42,    -1,
      62,    -1,    63,    -1,    64,    -1,    65,    -1,    66,    -1,
      30,    37,    57,    38,    -1,     9,     3,    42,    -1,    10,
       3,    42,    -1,    12,     3,    42,    -1,    11,     3,    42,
      -1,    -1,    -1,    -1,     9,    54,    10,    55,    12,    56,
      11,    -1,    37,    57,    38,    -1,     3,    43,    57,    -1,
      58,    -1,    59,    -1,    60,    -1,    61,    -1,    57,     4,
      53,    -1,    57,    35,    57,    -1,    57,    36,    57,    -1,
      57,    33,    57,    -1,    57,    34,    57,    -1,    57,    32,
      57,    -1,     5,    -1,     6,    -1,     7,    -1,     8,    -1,
       3,    -1,    57,    19,    57,    -1,    57,    20,    57,    -1,
      21,    57,    -1,    57,    14,    57,    -1,    57,    13,    57,
      -1,    57,    16,    57,    -1,    57,    17,    57,    -1,    57,
      18,    57,    -1,    57,    15,    57,    -1,    22,    37,    57,
      38,    71,    -1,    22,    37,    57,    38,    71,    23,    71,
      -1,    24,    37,     3,    42,    61,    42,    57,    38,    71,
      -1,    25,    37,    61,    38,    71,    -1,    26,    71,    25,
      37,    61,    38,    -1,    27,    37,    67,    38,    68,    -1,
       3,    -1,    40,    69,    29,    44,    71,    41,    -1,    28,
      70,    44,    71,    69,    -1,    -1,    59,    -1,    13,    59,
      -1,    16,    59,    -1,    14,    59,    -1,    17,    59,    -1,
      47,    -1,    51,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    39,    39,    45,    51,    57,    62,    67,    71,    75,
      79,    83,    87,    91,    95,    99,   106,   107,   111,   115,
     119,   123,   127,   133,   137,   141,   145,   151,   155,   159,
     150,   168,   174,   178,   182,   186,   190,   194,   200,   204,
     208,   212,   216,   222,   226,   230,   234,   238,   244,   248,
     252,   258,   262,   266,   270,   274,   278,   284,   288,   294,
     300,   306,   313,   319,   325,   331,   336,   341,   346,   351,
     356,   361,   367,   371
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TK_ID", "TK_EXPLICIT_CONVERTER",
  "TK_NUM", "TK_REAL", "TK_CHAR", "TK_BOOL", "TK_STRING", "TK_TYPE_INT",
  "TK_TYPE_FLOAT", "TK_TYPE_BOOL", "TK_TYPE_CHAR", "TK_TYPE_STRING",
  "TK_BIG", "TK_SMALL", "TK_NOT_EQ", "TK_BIG_EQ", "TK_SMALL_EQ", "TK_EQ",
  "TK_AND", "TK_OR", "TK_NOT", "TK_IF", "TK_ELSE", "TK_FOR", "TK_WHILE",
  "TK_DO", "TK_SWITCH", "TK_CASE", "TK_DEFAULT", "TK_BREAK", "TK_CONTINUE",
  "'%'", "'+'", "'-'", "'*'", "'/'", "'('", "')'", "NO_ELSE", "'{'", "'}'",
  "';'", "'='", "':'", "$accept", "S", "BLOCK", "BLOCK_AUX", "COMMANDS",
  "COMMAND", "COMMAND_ALT", "DEFINITION", "TYPE", "E", "ARITHMETIC",
  "VARIABLE", "LOGICAL", "RELATIONAL", "IF", "LOOP", "LOOP_AUX",
  "LOOP_CONTROL", "BREAK", "CONTINUE", "FOR", "WHILE", "DO_WHILE",
  "SWITCH", "SEEKER_SWITCH", "BLOCK_SWITCH", "CASES", "VARIABLE_SWITCH",
  "BLOCK_COMMAND", YY_NULLPTR
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
     285,   286,   287,   288,    37,    43,    45,    42,    47,    40,
      41,   289,   123,   125,    59,    61,    58
};
# endif

#define YYPACT_NINF (-47)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-7)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     181,   -32,   -47,   -47,   -47,   -47,   -47,    11,    12,    21,
      37,    39,   129,   -18,   -47,   -47,   -47,   -17,    42,    48,
     129,    45,   -47,    53,   -47,   216,   -47,   106,   -47,   -47,
     -47,   -47,   -47,   -47,   254,   -47,   -47,   -47,   -47,   129,
      56,    57,    60,    61,    62,   385,   129,   104,   -47,   -47,
     280,   -47,    70,   -47,    -6,   129,   129,   129,   129,   129,
     129,   129,   129,   129,   129,   129,   129,   129,   -47,   193,
     -47,   -47,   141,   -47,   -47,   -47,   -47,   -47,   -47,   -47,
      81,    13,   -47,   -47,   -47,   -47,   -47,   288,   -47,    71,
     -47,    69,   -47,   -47,   -47,   -47,   -47,   -47,   135,   135,
     135,   135,   135,   135,   358,   385,   111,    -1,    -1,   110,
     110,   -35,    76,   -47,    78,   324,    77,   -47,   129,   324,
     129,   105,    99,   -47,    13,    89,   -47,   113,   324,   409,
     120,   129,   -47,   -47,   -47,    82,    82,    82,    82,   -47,
     108,   109,   350,   -47,   -47,   -47,   -47,   324,   324,   324,
      99,   121,   -47,   -47,   -47
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       4,    46,    41,    42,    43,    44,    45,     0,     0,     0,
       0,     0,     0,     0,    63,    62,    61,     0,     0,     0,
       0,     0,     9,     0,     2,     6,     8,     0,    31,    32,
      33,    34,    10,    11,     4,    12,    64,    65,    13,     0,
       0,     0,     0,     0,     0,    49,     0,     0,    66,    67,
       0,     1,     4,     5,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     7,     0,
      81,    82,     0,    15,    16,    17,    60,    59,    58,    18,
       0,    30,    19,    20,    22,    21,    23,     0,    72,     0,
      29,     0,    24,    25,    27,    26,    28,    35,    51,    50,
      55,    52,    53,    54,    47,    48,    40,    38,    39,    36,
      37,    46,    34,    14,     0,     4,     0,     3,     0,     4,
       0,    56,    75,    71,     0,    34,    69,    34,     4,     0,
       0,     0,    70,    57,    46,     0,     0,     0,     0,    76,
       0,     0,     0,    77,    79,    78,    80,     4,     4,     4,
      75,     0,    68,    74,    73
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -47,   -47,     1,   -47,   -14,   -47,   -47,   -47,   -47,     0,
     -47,   205,   -47,   -46,     2,    16,   -47,    18,   -47,   -47,
     -47,   -47,   -47,    19,   -47,   -47,    15,   -47,   118
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    21,    70,    23,    24,    25,    71,    26,    97,    72,
      28,    29,    30,    31,    73,    74,    34,    75,    36,    37,
      76,    77,    78,    79,    89,   123,   130,   140,    80
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -95
static const yytype_int16 yypact[] =
{
      27,    22,    32,    54,    92,    93,    94,    95,    96,   118,
      39,    53,    45,    39,    40,    41,    33,    54,    35,    38,
      50,    46,    47,   112,    42,    27,    22,    32,    55,    56,
      57,    58,    59,    60,    61,    62,    66,    67,    91,    81,
      43,    33,    44,    35,    38,    51,    87,    63,    64,    65,
      66,    67,    27,    22,    32,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,    33,    50,
      35,    38,   125,     1,   127,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,   134,    48,     2,     3,     4,
       5,     6,    49,    12,    13,    52,    14,    15,    16,    17,
      82,    83,    18,    19,    84,    85,    86,    88,   114,    20,
      54,   116,   117,    -6,    54,    54,   119,   120,   124,   122,
     124,    55,    56,    57,    58,    59,    60,    61,    62,   129,
     128,   142,     1,   131,     2,     3,     4,     5,     6,    54,
      63,    64,    65,    66,    67,    54,    64,    65,    66,    67,
      68,   141,    12,   132,   147,   148,    55,    56,    57,    58,
      59,    60,    61,    62,   154,   153,     0,     0,    20,    63,
      64,    65,    66,    67,     0,    63,    64,    65,    66,    67,
       0,    -6,     0,     0,     1,   113,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,   111,     0,     2,     3,
       4,     5,     6,     0,    12,    13,     0,    14,    15,    16,
      17,     0,     0,    18,    19,     0,    12,     0,     0,     1,
      20,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,     0,    20,   121,     0,     0,     0,   126,     0,    12,
      13,     0,    14,    15,    16,    17,   133,     0,    18,    19,
       0,     0,     0,     0,     0,    20,     0,     1,    -4,     2,
       3,     4,     5,     6,     0,   150,   151,   152,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    12,    13,     0,
      14,    15,    16,    17,    54,     0,    18,    19,     0,     0,
       0,     0,    54,    69,     0,    55,    56,    57,    58,    59,
      60,    61,    62,    55,    56,    57,    58,    59,    60,    61,
      62,     0,     0,     0,    63,    64,    65,    66,    67,     0,
      90,     0,    63,    64,    65,    66,    67,     1,   115,     2,
       3,     4,     5,     6,   139,     0,     0,     0,     0,     0,
     143,   144,   145,   146,     0,     0,     0,    12,    13,     0,
      14,    15,    16,    17,    54,     0,    18,    19,     0,     0,
       0,     0,    54,    20,     0,    55,    56,    57,    58,    59,
      60,    61,    62,    55,    56,    57,    58,    59,    60,     0,
      62,     0,     0,     0,    63,    64,    65,    66,    67,    54,
     149,     0,    63,    64,    65,    66,    67,     0,     0,     0,
      55,    56,    57,    58,    59,    60,     0,     0,     0,     0,
       0,     0,   134,     0,     2,     3,     4,     5,     6,    63,
      64,    65,    66,    67,   135,   136,     0,   137,   138
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
       0,     0,     0,     4,    10,    11,    12,    13,    14,    44,
      45,    25,    12,    45,     3,     3,     0,     4,     0,     0,
      20,    39,    39,    69,     3,    25,    25,    25,    15,    16,
      17,    18,    19,    20,    21,    22,    37,    38,    52,    39,
       3,    25,     3,    25,    25,     0,    46,    34,    35,    36,
      37,    38,    52,    52,    52,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    52,    69,
      52,    52,   118,     3,   120,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,     3,    44,     5,     6,     7,
       8,     9,    44,    23,    24,    42,    26,    27,    28,    29,
      44,    44,    32,    33,    44,    44,    44,     3,    27,    39,
       4,    40,    43,    43,     4,     4,    40,    39,   118,    42,
     120,    15,    16,    17,    18,    19,    20,    21,    22,    30,
      25,   131,     3,    44,     5,     6,     7,     8,     9,     4,
      34,    35,    36,    37,    38,     4,    35,    36,    37,    38,
      44,    31,    23,    40,    46,    46,    15,    16,    17,    18,
      19,    20,    21,    22,    43,   150,    -1,    -1,    39,    34,
      35,    36,    37,    38,    -1,    34,    35,    36,    37,    38,
      -1,     0,    -1,    -1,     3,    44,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,     3,    -1,     5,     6,
       7,     8,     9,    -1,    23,    24,    -1,    26,    27,    28,
      29,    -1,    -1,    32,    33,    -1,    23,    -1,    -1,     3,
      39,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    -1,    39,   115,    -1,    -1,    -1,   119,    -1,    23,
      24,    -1,    26,    27,    28,    29,   128,    -1,    32,    33,
      -1,    -1,    -1,    -1,    -1,    39,    -1,     3,    42,     5,
       6,     7,     8,     9,    -1,   147,   148,   149,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    24,    -1,
      26,    27,    28,    29,     4,    -1,    32,    33,    -1,    -1,
      -1,    -1,     4,    39,    -1,    15,    16,    17,    18,    19,
      20,    21,    22,    15,    16,    17,    18,    19,    20,    21,
      22,    -1,    -1,    -1,    34,    35,    36,    37,    38,    -1,
      40,    -1,    34,    35,    36,    37,    38,     3,    40,     5,
       6,     7,     8,     9,   129,    -1,    -1,    -1,    -1,    -1,
     135,   136,   137,   138,    -1,    -1,    -1,    23,    24,    -1,
      26,    27,    28,    29,     4,    -1,    32,    33,    -1,    -1,
      -1,    -1,     4,    39,    -1,    15,    16,    17,    18,    19,
      20,    21,    22,    15,    16,    17,    18,    19,    20,    -1,
      22,    -1,    -1,    -1,    34,    35,    36,    37,    38,     4,
      40,    -1,    34,    35,    36,    37,    38,    -1,    -1,    -1,
      15,    16,    17,    18,    19,    20,    -1,    -1,    -1,    -1,
      -1,    -1,     3,    -1,     5,     6,     7,     8,     9,    34,
      35,    36,    37,    38,    15,    16,    -1,    18,    19
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -7
static const yytype_int16 yytable[] =
{
       0,     3,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    23,    24,    26,    27,    28,    29,    32,    33,
      39,    48,    49,    50,    51,    52,    54,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    70,    45,
       3,     3,     3,     3,     3,    56,    39,    39,    44,    44,
      56,     0,    42,    51,     4,    15,    16,    17,    18,    19,
      20,    21,    22,    34,    35,    36,    37,    38,    44,    39,
      49,    53,    56,    61,    62,    64,    67,    68,    69,    70,
      75,    56,    44,    44,    44,    44,    44,    56,     3,    71,
      40,    51,    10,    11,    12,    13,    14,    55,    56,    56,
      56,    56,    56,    56,    56,    56,    56,    56,    56,    56,
      56,     3,    60,    44,    27,    40,    40,    43,    44,    40,
      39,    75,    42,    72,    56,    60,    75,    60,    25,    30,
      73,    44,    40,    75,     3,    15,    16,    18,    19,    58,
      74,    31,    56,    58,    58,    58,    58,    46,    46,    40,
      75,    75,    75,    73,    43
};

static const yytype_int16 yycheck[] =
{
       0,    47,    48,    49,    50,    51,    51,    52,    52,    52,
      52,    52,    52,    52,    53,    53,    53,    53,    53,    54,
      54,    54,    54,    54,    55,    55,    55,    55,    55,    56,
      56,    56,    56,    56,    56,    56,    57,    57,    57,    57,
      57,    58,    58,    58,    58,    58,    58,    59,    59,    59,
      60,    60,    60,    60,    60,    60,    61,    61,    62,    62,
      62,    63,    63,    63,    64,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    73,    74,    74,    74,    74,
      74,    75,    75
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     2,     1,     4,     0,     2,     0,     2,     1,     1,
       1,     1,     1,     1,     2,     1,     1,     1,     1,     3,
       3,     3,     3,     3,     1,     1,     1,     1,     1,     3,
       3,     1,     1,     1,     1,     3,     3,     3,     3,     3,
       3,     1,     1,     1,     1,     1,     1,     3,     3,     2,
       3,     3,     3,     3,     3,     3,     5,     7,     2,     2,
       2,     1,     1,     1,     1,     1,     2,     2,     8,     4,
       5,     5,     1,     6,     5,     0,     1,     2,     2,     2,
       2,     1,     1
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
#line 40 "sintatica.y"
                                                                {
									cout << "//<<<<Bala Compiler>>>>" << iniciate() +"\nint main(void)\n{\n" << yyvsp[0].translation << "\treturn 0;\n}" << endl; 
								}
#line 1534 "y.tab.c"
    break;

  case 3:
#line 46 "sintatica.y"
                                                                {
									//cout << "ss.translation\n" << $$.translation << endl;
									yyval.translation = yyvsp[-1].translation;
									//cout << "ss.translation\n" << $$.translation << endl;
									popScope(StackContext);
								}
#line 1545 "y.tab.c"
    break;

  case 4:
#line 54 "sintatica.y"
                                                                {
									VariableTable table;
									pushScope(StackContext,table);
								}
#line 1554 "y.tab.c"
    break;

  case 5:
#line 62 "sintatica.y"
                                                                {
									yyval.translation = yyvsp[-1].translation + yyvsp[0].translation;
								}
#line 1562 "y.tab.c"
    break;

  case 6:
#line 66 "sintatica.y"
                                                                {
									yyval.translation = "";
								}
#line 1570 "y.tab.c"
    break;

  case 7:
#line 72 "sintatica.y"
                                                                {
									yyval.translation = yyvsp[-1].translation;
								}
#line 1578 "y.tab.c"
    break;

  case 8:
#line 76 "sintatica.y"
                                                                {
									yyval.translation = yyvsp[0].translation;
								}
#line 1586 "y.tab.c"
    break;

  case 9:
#line 80 "sintatica.y"
                                                                {
									yyval.translation = yyvsp[0].translation;
								}
#line 1594 "y.tab.c"
    break;

  case 10:
#line 84 "sintatica.y"
                                                                {
									yyval.translation = yyvsp[0].translation;
								}
#line 1602 "y.tab.c"
    break;

  case 11:
#line 88 "sintatica.y"
                                                                {
									yyval.translation = yyvsp[0].translation;
								}
#line 1610 "y.tab.c"
    break;

  case 12:
#line 92 "sintatica.y"
                                                                {
									yyval.translation = yyvsp[0].translation;
								}
#line 1618 "y.tab.c"
    break;

  case 13:
#line 96 "sintatica.y"
                                                                {
									yyval.translation = yyvsp[0].translation;
								}
#line 1626 "y.tab.c"
    break;

  case 15:
#line 104 "sintatica.y"
                                                                {
									yyval.translation = yyvsp[0].translation;
								}
#line 1634 "y.tab.c"
    break;

  case 16:
#line 108 "sintatica.y"
                                                                {
									yyval.translation = yyvsp[0].translation;
								}
#line 1642 "y.tab.c"
    break;

  case 17:
#line 112 "sintatica.y"
                                                                {
									yyval.translation = yyvsp[0].translation;
								}
#line 1650 "y.tab.c"
    break;

  case 18:
#line 116 "sintatica.y"
                                                                {
									yyval.translation = yyvsp[0].translation;
								}
#line 1658 "y.tab.c"
    break;

  case 19:
#line 122 "sintatica.y"
                                                                {
									yyval = declareTK_TYPE("int", yyval, yyvsp[-2], yyvsp[-1]);
								}
#line 1666 "y.tab.c"
    break;

  case 20:
#line 126 "sintatica.y"
                                                                {
									yyval = declareTK_TYPE("float", yyval, yyvsp[-2], yyvsp[-1]);
								}
#line 1674 "y.tab.c"
    break;

  case 21:
#line 130 "sintatica.y"
                                                                {
									yyval = declareTK_TYPE("char", yyval, yyvsp[-2], yyvsp[-1]);
								}
#line 1682 "y.tab.c"
    break;

  case 22:
#line 134 "sintatica.y"
                                                                {
									yyval = declareTK_TYPE("bool", yyval, yyvsp[-2], yyvsp[-1]);
								}
#line 1690 "y.tab.c"
    break;

  case 23:
#line 138 "sintatica.y"
                                                                {
									yyval = declareTK_TYPE("string", yyval, yyvsp[-2], yyvsp[-1]);
								}
#line 1698 "y.tab.c"
    break;

  case 24:
#line 144 "sintatica.y"
                                                                {
									yyval.translation = "int";
								}
#line 1706 "y.tab.c"
    break;

  case 25:
#line 148 "sintatica.y"
                                                                {
									yyval.translation = "float";
								}
#line 1714 "y.tab.c"
    break;

  case 26:
#line 152 "sintatica.y"
                                                                {
									yyval.translation = "char";
								}
#line 1722 "y.tab.c"
    break;

  case 27:
#line 156 "sintatica.y"
                                                                {
									yyval.translation = "bool";
								}
#line 1730 "y.tab.c"
    break;

  case 28:
#line 160 "sintatica.y"
                                                                {
									yyval.translation = "string";
								}
#line 1738 "y.tab.c"
    break;

  case 29:
#line 166 "sintatica.y"
                                                                {
									yyval.label = yyvsp[-1].label;
									yyval.translation = yyvsp[-1].translation;
									yyval.type = yyvsp[-1].type;
								}
#line 1748 "y.tab.c"
    break;

  case 30:
#line 172 "sintatica.y"
                                                                {
									yyval = makeAssignment(yyval, yyvsp[-2], yyvsp[0]);
								}
#line 1756 "y.tab.c"
    break;

  case 31:
#line 176 "sintatica.y"
                                                                {
									yyval.translation = yyvsp[0].translation;
								}
#line 1764 "y.tab.c"
    break;

  case 32:
#line 180 "sintatica.y"
                                                                {
									yyval.translation = yyvsp[0].translation;
								}
#line 1772 "y.tab.c"
    break;

  case 33:
#line 184 "sintatica.y"
                                                                {
									yyval.translation = yyvsp[0].translation;
								}
#line 1780 "y.tab.c"
    break;

  case 34:
#line 188 "sintatica.y"
                                                                {
									yyval.translation = yyvsp[0].translation;
								}
#line 1788 "y.tab.c"
    break;

  case 35:
#line 192 "sintatica.y"
                                                                {
									yyval = resolveExplicitConversion(yyvsp[-2], yyvsp[0]);
								}
#line 1796 "y.tab.c"
    break;

  case 36:
#line 198 "sintatica.y"
                                                                {
									yyval = makeExpression(yyvsp[-2], "*", yyvsp[0]);
								}
#line 1804 "y.tab.c"
    break;

  case 37:
#line 202 "sintatica.y"
                                                                {
									yyval = makeExpression(yyvsp[-2], "/", yyvsp[0]);
								}
#line 1812 "y.tab.c"
    break;

  case 38:
#line 206 "sintatica.y"
                                                                {
									yyval = makeExpression(yyvsp[-2], "+", yyvsp[0]);
								}
#line 1820 "y.tab.c"
    break;

  case 39:
#line 210 "sintatica.y"
                                                                {
									yyval = makeExpression(yyvsp[-2], "-", yyvsp[0]);
								}
#line 1828 "y.tab.c"
    break;

  case 40:
#line 214 "sintatica.y"
                                                                {
									yyval = makeExpression(yyvsp[-2], "%", yyvsp[0]);
								}
#line 1836 "y.tab.c"
    break;

  case 41:
#line 220 "sintatica.y"
                                                                {
									yyval = createTK_TYPE(yyval, "int", yyvsp[0]);
								}
#line 1844 "y.tab.c"
    break;

  case 42:
#line 224 "sintatica.y"
                                                                {
									yyval = createTK_TYPE(yyval, "float", yyvsp[0]);
								}
#line 1852 "y.tab.c"
    break;

  case 43:
#line 228 "sintatica.y"
                                                                {
									yyval = createTK_TYPE(yyval, "char", yyvsp[0]);
								}
#line 1860 "y.tab.c"
    break;

  case 44:
#line 232 "sintatica.y"
                                                                {
									yyval = createTK_TYPE(yyval, "bool", yyvsp[0]);
								}
#line 1868 "y.tab.c"
    break;

  case 45:
#line 236 "sintatica.y"
                                                                {
									yyval = createTK_TYPE_STRING(yyval, "string", yyvsp[0]);
								}
#line 1876 "y.tab.c"
    break;

  case 46:
#line 240 "sintatica.y"
                                                                {
									yyval = createTK_ID(yyval, yyvsp[0]);
								}
#line 1884 "y.tab.c"
    break;

  case 47:
#line 246 "sintatica.y"
                                                                {
									yyval = makeExpression(yyvsp[-2], "&&", yyvsp[0]);
								}
#line 1892 "y.tab.c"
    break;

  case 48:
#line 250 "sintatica.y"
                                                                {
									yyval = makeExpression(yyvsp[-2], "||", yyvsp[0]);
								}
#line 1900 "y.tab.c"
    break;

  case 49:
#line 254 "sintatica.y"
                                                                {
									yyval = makeTK_NOT(yyval, yyvsp[0]);
								}
#line 1908 "y.tab.c"
    break;

  case 50:
#line 260 "sintatica.y"
                                                                {
									yyval = makeExpression(yyvsp[-2], "<", yyvsp[0]);
								}
#line 1916 "y.tab.c"
    break;

  case 51:
#line 264 "sintatica.y"
                                                                {
									yyval = makeExpression(yyvsp[-2], ">", yyvsp[0]);
								}
#line 1924 "y.tab.c"
    break;

  case 52:
#line 268 "sintatica.y"
                                                                {
									yyval = makeExpression(yyvsp[-2], ">=", yyvsp[0]);
								}
#line 1932 "y.tab.c"
    break;

  case 53:
#line 272 "sintatica.y"
                                                                {
									yyval = makeExpression(yyvsp[-2], "<=", yyvsp[0]);
								}
#line 1940 "y.tab.c"
    break;

  case 54:
#line 276 "sintatica.y"
                                                                {
									yyval = makeExpression(yyvsp[-2], "==", yyvsp[0]);
								}
#line 1948 "y.tab.c"
    break;

  case 55:
#line 280 "sintatica.y"
                                                                {
									yyval = makeExpression(yyvsp[-2], "!=", yyvsp[0]);
								}
#line 1956 "y.tab.c"
    break;

  case 56:
#line 287 "sintatica.y"
                                                                {
									yyval = makeIf(yyval, yyvsp[-2], yyvsp[0]);
								}
#line 1964 "y.tab.c"
    break;

  case 57:
#line 291 "sintatica.y"
                                                                {
									yyval = makeIfElse(yyval, yyvsp[-4], yyvsp[-2], yyvsp[0]);
								}
#line 1972 "y.tab.c"
    break;

  case 58:
#line 298 "sintatica.y"
                                                                { 
									yyval = endLoop(yyval, yyvsp[0]); 
								}
#line 1980 "y.tab.c"
    break;

  case 59:
#line 302 "sintatica.y"
                                                                { 
									yyval = endLoop(yyval, yyvsp[0]);
								}
#line 1988 "y.tab.c"
    break;

  case 60:
#line 306 "sintatica.y"
                                                                { 
									yyval = endLoop(yyval, yyvsp[0]);
								}
#line 1996 "y.tab.c"
    break;

  case 61:
#line 312 "sintatica.y"
                                                                { 
									iniciateLoop("doWhile");
								}
#line 2004 "y.tab.c"
    break;

  case 62:
#line 316 "sintatica.y"
                                                                { 
									iniciateLoop("while");
								}
#line 2012 "y.tab.c"
    break;

  case 63:
#line 320 "sintatica.y"
                                                                { 
									iniciateLoop("for");
								}
#line 2020 "y.tab.c"
    break;

  case 64:
#line 328 "sintatica.y"
                                                                { 
									yyval.translation = yyvsp[0].translation; 
								}
#line 2028 "y.tab.c"
    break;

  case 65:
#line 332 "sintatica.y"
                                                                { 
									yyval.translation = yyvsp[0].translation; 
								}
#line 2036 "y.tab.c"
    break;

  case 66:
#line 338 "sintatica.y"
                                                                { 
									yyval = makeBreak(yyval, yyvsp[-1]);	
								}
#line 2044 "y.tab.c"
    break;

  case 67:
#line 344 "sintatica.y"
                                                                { 
									yyval = makeContinue(yyval, yyvsp[-1]); 
								}
#line 2052 "y.tab.c"
    break;

  case 68:
#line 351 "sintatica.y"
                                                                {
									yyval = makeForCounter(yyval, yyvsp[-6], yyvsp[-4], yyvsp[-2], yyvsp[0]);
								}
#line 2060 "y.tab.c"
    break;

  case 69:
#line 358 "sintatica.y"
                                                                {
									yyval = makeWhile(yyval, yyvsp[-2], yyvsp[0]);
								}
#line 2068 "y.tab.c"
    break;

  case 70:
#line 365 "sintatica.y"
                                                                {
									yyval = makeDoWhile(yyval, yyvsp[-4], yyvsp[-1]);
								}
#line 2076 "y.tab.c"
    break;

  case 71:
#line 373 "sintatica.y"
                                                                {	
									yyval = iniciateSwitch(yyval, yyvsp[0]); 
								}
#line 2084 "y.tab.c"
    break;

  case 72:
#line 379 "sintatica.y"
                                                                {	
									createSwicher(yyvsp[0]); 
								}
#line 2092 "y.tab.c"
    break;

  case 73:
#line 385 "sintatica.y"
                                                                {
									yyval = resolveBlockSwitch(yyval, yyvsp[-4], yyvsp[-1]);
								}
#line 2100 "y.tab.c"
    break;

  case 74:
#line 391 "sintatica.y"
                                                                {
									yyval = resolveCasesSwitch(yyval, yyvsp[-3], yyvsp[-1], yyvsp[0]);
								}
#line 2108 "y.tab.c"
    break;

  case 75:
#line 395 "sintatica.y"
                                                                {	
									yyval.translation = ""; 
								}
#line 2116 "y.tab.c"
    break;

  case 76:
#line 401 "sintatica.y"
                                                                {
									yyval = resolveCheckerSwitch(yyval, "==", yyvsp[0]);
								}
#line 2124 "y.tab.c"
    break;

  case 77:
#line 406 "sintatica.y"
                                                                {
									yyval = resolveCheckerSwitch(yyval, ">", yyvsp[0]);
								}
#line 2132 "y.tab.c"
    break;

  case 78:
#line 411 "sintatica.y"
                                                                {
									yyval = resolveCheckerSwitch(yyval, ">=", yyvsp[0]);
								}
#line 2140 "y.tab.c"
    break;

  case 79:
#line 416 "sintatica.y"
                                                                {
									yyval = resolveCheckerSwitch(yyval, "<", yyvsp[0]);
								}
#line 2148 "y.tab.c"
    break;

  case 80:
#line 421 "sintatica.y"
                                                                {
									yyval = resolveCheckerSwitch(yyval, "<=", yyvsp[0]);
								}
#line 2156 "y.tab.c"
    break;

  case 81:
#line 428 "sintatica.y"
                                                                {
									yyval.translation = yyvsp[0].translation;
								}
#line 2164 "y.tab.c"
    break;

  case 82:
#line 432 "sintatica.y"
                                                                {
									yyval.translation = yyvsp[0].translation;
								}
#line 2172 "y.tab.c"
    break;

  case 72:
#line 368 "sintatica.y"
    {
									(yyval).translation = (yyvsp[(1) - (1)]).translation;
								}
    break;

#line 2176 "y.tab.c"


/* Line 1267 of yacc.c.  */
#line 2076 "y.tab.c"
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
#line 436 "sintatica.y"


#line 377 "sintatica.y"


#include "lex.yy.c"

int yyparse();


int main( int argc, char* argv[] )
{
	iniciateCoercionTable();
	
	yyparse();

	return 0;
}
