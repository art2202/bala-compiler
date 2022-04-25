/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "sintatica.y"

#include "headers/system.hpp"
#include "string.h"


#define YYSTYPE attribute

using namespace std;

int yylex(void);

#line 82 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
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
    TK_PRINT = 287,
    TK_SCAN = 288,
    TK_BREAK = 289,
    TK_CONTINUE = 290,
    TK_SEMICOLON = 291,
    TK_ADD_ADD = 292,
    TK_SUBTRACT_SUBTRACT = 293,
    TK_ASSIGNMENT = 294,
    TK_ADD_ASSIGNMENT = 295,
    TK_SUBTRACT_ASSIGNMENT = 296,
    TK_MULTIPLICATION_ASSIGNMENT = 297,
    TK_DIVISION_ASSIGNMENT = 298,
    TK_ADD = 299,
    TK_SUBTRACT = 300,
    TK_MULTIPLICATION = 301,
    TK_DIVISION = 302,
    TK_MODULE = 303,
    NO_ELSE = 304
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
#define TK_PRINT 287
#define TK_SCAN 288
#define TK_BREAK 289
#define TK_CONTINUE 290
#define TK_SEMICOLON 291
#define TK_ADD_ADD 292
#define TK_SUBTRACT_SUBTRACT 293
#define TK_ASSIGNMENT 294
#define TK_ADD_ASSIGNMENT 295
#define TK_SUBTRACT_ASSIGNMENT 296
#define TK_MULTIPLICATION_ASSIGNMENT 297
#define TK_DIVISION_ASSIGNMENT 298
#define TK_ADD 299
#define TK_SUBTRACT 300
#define TK_MULTIPLICATION 301
#define TK_DIVISION 302
#define TK_MODULE 303
#define NO_ELSE 304

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */



#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))

/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
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
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  65
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   381

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  56
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  32
/* YYNRULES -- Number of rules.  */
#define YYNRULES  90
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  171

#define YYUNDEFTOK  2
#define YYMAXUTOK   304


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      49,    50,     2,     2,    54,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    55,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    52,     2,    53,     2,     2,     2,     2,
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
      45,    46,    47,    48,    51
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    50,    50,    56,    63,    71,    76,    81,    85,    89,
      93,    97,   101,   105,   109,   113,   121,   125,   129,   133,
     137,   143,   147,   151,   155,   159,   165,   169,   173,   178,
     179,   183,   189,   193,   197,   201,   207,   211,   218,   222,
     229,   235,   239,   243,   247,   251,   257,   261,   265,   269,
     273,   279,   283,   287,   291,   295,   299,   305,   309,   313,
     319,   323,   327,   331,   335,   339,   346,   350,   357,   361,
     365,   371,   375,   379,   387,   391,   397,   403,   410,   417,
     424,   432,   438,   444,   450,   455,   460,   465,   470,   475,
     480
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TK_ID", "TK_EXPLICIT_CONVERTER",
  "TK_NUM", "TK_REAL", "TK_CHAR", "TK_BOOL", "TK_STRING", "TK_TYPE_INT",
  "TK_TYPE_FLOAT", "TK_TYPE_BOOL", "TK_TYPE_CHAR", "TK_TYPE_STRING",
  "TK_BIG", "TK_SMALL", "TK_NOT_EQ", "TK_BIG_EQ", "TK_SMALL_EQ", "TK_EQ",
  "TK_AND", "TK_OR", "TK_NOT", "TK_IF", "TK_ELSE", "TK_FOR", "TK_WHILE",
  "TK_DO", "TK_SWITCH", "TK_CASE", "TK_DEFAULT", "TK_PRINT", "TK_SCAN",
  "TK_BREAK", "TK_CONTINUE", "TK_SEMICOLON", "TK_ADD_ADD",
  "TK_SUBTRACT_SUBTRACT", "TK_ASSIGNMENT", "TK_ADD_ASSIGNMENT",
  "TK_SUBTRACT_ASSIGNMENT", "TK_MULTIPLICATION_ASSIGNMENT",
  "TK_DIVISION_ASSIGNMENT", "TK_ADD", "TK_SUBTRACT", "TK_MULTIPLICATION",
  "TK_DIVISION", "TK_MODULE", "'('", "')'", "NO_ELSE", "'{'", "'}'", "','",
  "':'", "$accept", "S", "BLOCK", "BLOCK_AUX", "COMMANDS", "COMMAND",
  "DEFINITION", "TYPE", "IO", "OPERATORS", "COMPOUSED_OPERATOR",
  "UNARY_OPERATOR", "ASSIGNMENT", "E", "ARITHMETIC", "VARIABLE", "LOGICAL",
  "RELATIONAL", "IF", "LOOP", "LOOP_AUX", "LOOP_CONTROL", "BREAK",
  "CONTINUE", "FOR", "WHILE", "DO_WHILE", "SWITCH", "SEEKER_SWITCH",
  "BLOCK_SWITCH", "CASES", "VARIABLE_SWITCH", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,    40,
      41,   304,   123,   125,    44,    58
};
# endif

#define YYPACT_NINF (-86)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-30)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     140,   -11,   -86,   -86,   -86,   -86,   -86,    -1,     0,     3,
       9,    32,     2,     4,   -86,   -86,   -86,     7,    11,    12,
     -86,   -86,     2,    49,   -86,     6,   -86,   174,    26,    36,
     -86,   -86,   -86,    44,   258,   -86,   -86,   -86,   -86,   -86,
     -86,    42,    58,   -86,   -86,   -86,   -86,   -86,     2,    76,
     111,   113,   118,   -86,   -86,   -86,   -86,   -86,   -86,   328,
       2,   123,     2,     2,   200,   -86,    10,   -86,   -86,   -86,
     -86,   147,     2,     2,     2,     2,     2,     2,     2,     2,
     -86,     2,     2,     2,     2,     2,    92,    85,   -86,   -86,
     -86,   -86,   292,   -86,   -86,   -86,   -86,   220,   -86,    78,
     239,    88,   -86,    77,   -86,   -86,   -86,   -86,   -86,   -86,
      37,    37,    37,    37,    37,    37,   311,   328,   109,   109,
     125,   125,    43,    95,   292,    87,    90,   -86,   110,   -86,
     -86,   139,   -86,     2,   -86,     2,   145,   135,   -86,   121,
     142,   -86,   141,   -86,   362,   168,   -86,   202,   -86,   -86,
     187,   187,   187,   187,   -86,   156,   157,   -11,   163,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   135,   161,   -86,   -86,
     -86
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       4,    56,    51,    52,    53,    54,    55,     0,     0,     0,
       0,     0,     0,     0,    73,    72,    71,     0,     0,     0,
      76,    77,     0,     0,     9,     0,     2,     6,     0,     0,
      39,    30,    31,     0,     0,    41,    42,    43,    44,    10,
      12,     4,     0,    74,    75,    11,    36,    37,     0,     0,
       0,     0,     0,    16,    17,    19,    18,    20,    56,    59,
       0,     0,     0,     0,     0,     1,     4,     5,     8,    14,
      15,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       7,     0,     0,     0,     0,     0,     0,     0,    70,    69,
      68,    13,    38,    32,    33,    34,    35,     0,    82,     0,
       0,     0,    40,     0,    21,    22,    24,    23,    25,    45,
      61,    60,    65,    62,    63,    64,    57,    58,    48,    49,
      46,    47,    50,    56,     0,    44,     0,     4,     0,    26,
      27,     0,     3,     0,     4,     0,    66,    85,    81,     0,
      44,    79,    44,     4,     0,     0,    28,    29,    80,    67,
       0,     0,     0,     0,    86,     0,     0,     0,     0,    87,
      89,    88,    90,     4,     4,     4,    85,     0,    78,    84,
      83
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -86,   -86,   -41,   -86,    30,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,    80,    -8,   -86,   -33,   -86,   -85,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,
      59,   -86
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    23,    24,    25,    26,    27,    28,   109,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    88,    89,    90,    45,    99,   138,
     145,   155
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      87,   125,    53,    54,    59,    58,    55,     2,     3,     4,
       5,     6,    56,     1,    64,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    46,    47,    48,    49,
      50,    51,    52,    12,    13,    57,    14,    15,    16,    17,
      92,    71,    18,    19,    20,    21,   -29,    71,   140,    65,
     142,    22,    97,    60,   100,   101,    61,    67,    66,    22,
      62,    63,    68,    -6,   110,   111,   112,   113,   114,   115,
     116,   117,    69,   118,   119,   120,   121,   122,   124,    93,
      70,    81,    82,    83,    84,    85,   136,    81,    82,    83,
      84,    86,    71,   141,    91,   123,   103,     2,     3,     4,
       5,     6,   149,    72,    73,    74,    75,    76,    77,    78,
      79,   154,   126,    71,    94,    12,    95,   159,   160,   161,
     162,    96,   166,   167,   168,   124,    98,   124,   128,    71,
     132,   133,    81,    82,    83,    84,    85,   134,   130,   135,
      -6,    22,   131,     1,   139,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    83,    84,   104,   105,   106,
     107,   108,   137,    12,    13,   144,    14,    15,    16,    17,
     143,   146,    18,    19,    20,    21,   -29,     1,   147,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    22,
      58,   148,     2,     3,     4,     5,     6,    12,    13,   156,
      14,    15,    16,    17,    71,   157,    18,    19,    20,    21,
     -29,   163,   164,   165,   170,    72,    73,    74,    75,    76,
      77,    78,    79,    22,    71,   169,    -4,   158,     0,     0,
       0,     0,     0,     0,     0,    72,    73,    74,    75,    76,
      77,    78,    79,    71,    81,    82,    83,    84,    85,     0,
     102,     0,     0,     0,    72,    73,    74,    75,    76,    77,
      78,    79,    71,     0,    81,    82,    83,    84,    85,     0,
     127,     0,     0,    72,    73,    74,    75,    76,    77,    78,
      79,     0,     0,    81,    82,    83,    84,    85,     0,   129,
       0,     0,     0,     0,    80,     0,    71,     0,     0,     0,
       0,     0,    81,    82,    83,    84,    85,    72,    73,    74,
      75,    76,    77,    78,    79,    71,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    72,    73,    74,    75,
      76,    77,    71,    79,     0,     0,    81,    82,    83,    84,
      85,     0,     0,    72,    73,    74,    75,    76,    77,     0,
       0,     0,     0,     0,     0,    81,    82,    83,    84,    85,
       0,     0,     0,     0,     0,    58,     0,     2,     3,     4,
       5,     6,    81,    82,    83,    84,    85,   150,   151,     0,
     152,   153
};

static const yytype_int16 yycheck[] =
{
      41,    86,     3,     3,    12,     3,     3,     5,     6,     7,
       8,     9,     3,     3,    22,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    23,    37,    38,    39,    40,
      41,    42,    43,    23,    24,     3,    26,    27,    28,    29,
      48,     4,    32,    33,    34,    35,    36,     4,   133,     0,
     135,    49,    60,    49,    62,    63,    49,    27,    52,    49,
      49,    49,    36,    53,    72,    73,    74,    75,    76,    77,
      78,    79,    36,    81,    82,    83,    84,    85,    86,     3,
      36,    44,    45,    46,    47,    48,   127,    44,    45,    46,
      47,    49,     4,   134,    36,     3,    66,     5,     6,     7,
       8,     9,   143,    15,    16,    17,    18,    19,    20,    21,
      22,   144,    27,     4,     3,    23,     3,   150,   151,   152,
     153,     3,   163,   164,   165,   133,     3,   135,    50,     4,
      53,    36,    44,    45,    46,    47,    48,    50,    50,    49,
       0,    49,    54,     3,     5,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    46,    47,    10,    11,    12,
      13,    14,    52,    23,    24,    30,    26,    27,    28,    29,
      25,    50,    32,    33,    34,    35,    36,     3,    36,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    49,
       3,    50,     5,     6,     7,     8,     9,    23,    24,    31,
      26,    27,    28,    29,     4,     3,    32,    33,    34,    35,
      36,    55,    55,    50,    53,    15,    16,    17,    18,    19,
      20,    21,    22,    49,     4,   166,    52,   147,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    15,    16,    17,    18,    19,
      20,    21,    22,     4,    44,    45,    46,    47,    48,    -1,
      50,    -1,    -1,    -1,    15,    16,    17,    18,    19,    20,
      21,    22,     4,    -1,    44,    45,    46,    47,    48,    -1,
      50,    -1,    -1,    15,    16,    17,    18,    19,    20,    21,
      22,    -1,    -1,    44,    45,    46,    47,    48,    -1,    50,
      -1,    -1,    -1,    -1,    36,    -1,     4,    -1,    -1,    -1,
      -1,    -1,    44,    45,    46,    47,    48,    15,    16,    17,
      18,    19,    20,    21,    22,     4,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    15,    16,    17,    18,
      19,    20,     4,    22,    -1,    -1,    44,    45,    46,    47,
      48,    -1,    -1,    15,    16,    17,    18,    19,    20,    -1,
      -1,    -1,    -1,    -1,    -1,    44,    45,    46,    47,    48,
      -1,    -1,    -1,    -1,    -1,     3,    -1,     5,     6,     7,
       8,     9,    44,    45,    46,    47,    48,    15,    16,    -1,
      18,    19
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    23,    24,    26,    27,    28,    29,    32,    33,
      34,    35,    49,    57,    58,    59,    60,    61,    62,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    83,    37,    38,    39,    40,
      41,    42,    43,     3,     3,     3,     3,     3,     3,    69,
      49,    49,    49,    49,    69,     0,    52,    60,    36,    36,
      36,     4,    15,    16,    17,    18,    19,    20,    21,    22,
      36,    44,    45,    46,    47,    48,    49,    58,    80,    81,
      82,    36,    69,     3,     3,     3,     3,    69,     3,    84,
      69,    69,    50,    60,    10,    11,    12,    13,    14,    63,
      69,    69,    69,    69,    69,    69,    69,    69,    69,    69,
      69,    69,    69,     3,    69,    73,    27,    50,    50,    50,
      50,    54,    53,    36,    50,    49,    58,    52,    85,     5,
      73,    58,    73,    25,    30,    86,    50,    36,    50,    58,
      15,    16,    18,    19,    71,    87,    31,     3,    68,    71,
      71,    71,    71,    55,    55,    50,    58,    58,    58,    86,
      53
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    56,    57,    58,    59,    60,    60,    61,    61,    61,
      61,    61,    61,    61,    61,    61,    62,    62,    62,    62,
      62,    63,    63,    63,    63,    63,    64,    64,    64,    65,
      65,    65,    66,    66,    66,    66,    67,    67,    68,    68,
      69,    69,    69,    69,    69,    69,    70,    70,    70,    70,
      70,    71,    71,    71,    71,    71,    71,    72,    72,    72,
      73,    73,    73,    73,    73,    73,    74,    74,    75,    75,
      75,    76,    76,    76,    77,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    86,    87,    87,    87,    87,
      87
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     4,     0,     2,     0,     2,     2,     1,
       1,     1,     1,     2,     2,     2,     2,     2,     2,     2,
       2,     1,     1,     1,     1,     1,     4,     4,     6,     0,
       1,     1,     3,     3,     3,     3,     2,     2,     3,     1,
       3,     1,     1,     1,     1,     3,     3,     3,     3,     3,
       3,     1,     1,     1,     1,     1,     1,     3,     3,     2,
       3,     3,     3,     3,     3,     3,     5,     7,     2,     2,
       2,     1,     1,     1,     1,     1,     1,     1,     8,     4,
       5,     5,     1,     6,     5,     0,     1,     2,     2,     2,
       2
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

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
#ifndef YYINITDEPTH
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
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
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
            else
              goto append;

          append:
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

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

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
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
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
      if (yytable_value_is_error (yyn))
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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

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
#line 51 "sintatica.y"
                                                                {
									cout << "//<<<<Bala Compiler>>>>" << iniciate() +"\nint main(void)\n{\n" << yyvsp[0].translation << "\treturn 0;\n}" << endl; 
								}
#line 1576 "y.tab.c"
    break;

  case 3:
#line 57 "sintatica.y"
                                                                {
									yyval.translation = yyvsp[-1].translation;
									popScope(StackContext);
								}
#line 1585 "y.tab.c"
    break;

  case 4:
#line 63 "sintatica.y"
                                                                {
									VariableTable table;
									pushScope(StackContext,table);
									yyval.translation = "";
								}
#line 1595 "y.tab.c"
    break;

  case 5:
#line 72 "sintatica.y"
                                                                {
									yyval.translation = yyvsp[-1].translation + yyvsp[0].translation;
								}
#line 1603 "y.tab.c"
    break;

  case 6:
#line 76 "sintatica.y"
                                                                {
									yyval.translation = "";
								}
#line 1611 "y.tab.c"
    break;

  case 7:
#line 82 "sintatica.y"
                                                                {
									yyval.translation = yyvsp[-1].translation;
								}
#line 1619 "y.tab.c"
    break;

  case 8:
#line 86 "sintatica.y"
                                                                {
									yyval.translation = yyvsp[-1].translation;
								}
#line 1627 "y.tab.c"
    break;

  case 9:
#line 90 "sintatica.y"
                                                                {
									yyval.translation = yyvsp[0].translation;
								}
#line 1635 "y.tab.c"
    break;

  case 10:
#line 94 "sintatica.y"
                                                                {
									yyval.translation = yyvsp[0].translation;
								}
#line 1643 "y.tab.c"
    break;

  case 11:
#line 98 "sintatica.y"
                                                                {
									yyval.translation = yyvsp[0].translation;
								}
#line 1651 "y.tab.c"
    break;

  case 12:
#line 102 "sintatica.y"
                                                                {
									yyval.translation = yyvsp[0].translation;
								}
#line 1659 "y.tab.c"
    break;

  case 13:
#line 106 "sintatica.y"
                                                                {
									yyval.translation = yyvsp[-1].translation;
								}
#line 1667 "y.tab.c"
    break;

  case 14:
#line 110 "sintatica.y"
                                                                {
									yyval.translation = yyvsp[-1].translation;
								}
#line 1675 "y.tab.c"
    break;

  case 15:
#line 114 "sintatica.y"
                                                                {
									yyval.translation = yyvsp[-1].translation;
								}
#line 1683 "y.tab.c"
    break;

  case 16:
#line 122 "sintatica.y"
                                                                {
									yyval = declareTK_TYPE("int", yyval, yyvsp[-1], yyvsp[0]);
								}
#line 1691 "y.tab.c"
    break;

  case 17:
#line 126 "sintatica.y"
                                                                {
									yyval = declareTK_TYPE("float", yyval, yyvsp[-1], yyvsp[0]);
								}
#line 1699 "y.tab.c"
    break;

  case 18:
#line 130 "sintatica.y"
                                                                {
									yyval = declareTK_TYPE("char", yyval, yyvsp[-1], yyvsp[0]);
								}
#line 1707 "y.tab.c"
    break;

  case 19:
#line 134 "sintatica.y"
                                                                {
									yyval = declareTK_TYPE("bool", yyval, yyvsp[-1], yyvsp[0]);
								}
#line 1715 "y.tab.c"
    break;

  case 20:
#line 138 "sintatica.y"
                                                                {
									yyval = declareTK_TYPE("string", yyval, yyvsp[-1], yyvsp[0]);
								}
#line 1723 "y.tab.c"
    break;

  case 21:
#line 144 "sintatica.y"
                                                                {
									yyval.translation = "int";
								}
#line 1731 "y.tab.c"
    break;

  case 22:
#line 148 "sintatica.y"
                                                                {
									yyval.translation = "float";
								}
#line 1739 "y.tab.c"
    break;

  case 23:
#line 152 "sintatica.y"
                                                                {
									yyval.translation = "char";
								}
#line 1747 "y.tab.c"
    break;

  case 24:
#line 156 "sintatica.y"
                                                                {
									yyval.translation = "bool";
								}
#line 1755 "y.tab.c"
    break;

  case 25:
#line 160 "sintatica.y"
                                                                {
									yyval.translation = "string";
								}
#line 1763 "y.tab.c"
    break;

  case 26:
#line 166 "sintatica.y"
                                                                {
									yyval.translation = makePrint(yyvsp[-1]);
								}
#line 1771 "y.tab.c"
    break;

  case 27:
#line 170 "sintatica.y"
                                                                {
									yyval.translation = makeScan(yyvsp[-1]);
								}
#line 1779 "y.tab.c"
    break;

  case 28:
#line 174 "sintatica.y"
                                                                {
									yyval.translation = makeScan(yyvsp[-3], yyvsp[-1].label);
								}
#line 1787 "y.tab.c"
    break;

  case 30:
#line 180 "sintatica.y"
                                                                {
									yyval.translation = yyvsp[0].translation;
								}
#line 1795 "y.tab.c"
    break;

  case 31:
#line 184 "sintatica.y"
                                                                {
									yyval.translation = yyvsp[0].translation;
								}
#line 1803 "y.tab.c"
    break;

  case 32:
#line 190 "sintatica.y"
                                                                {
									yyval = makeCompousedOperator(yyval, yyvsp[-2], "+", yyvsp[0]);
								}
#line 1811 "y.tab.c"
    break;

  case 33:
#line 194 "sintatica.y"
                                                                {
									yyval = makeCompousedOperator(yyval, yyvsp[-2], "-", yyvsp[0]);
								}
#line 1819 "y.tab.c"
    break;

  case 34:
#line 198 "sintatica.y"
                                                                {
									yyval = makeCompousedOperator(yyval, yyvsp[-2], "*", yyvsp[0]);
								}
#line 1827 "y.tab.c"
    break;

  case 35:
#line 202 "sintatica.y"
                                                                {
									yyval = makeCompousedOperator(yyval, yyvsp[-2], "/", yyvsp[0]);
								}
#line 1835 "y.tab.c"
    break;

  case 36:
#line 208 "sintatica.y"
                                                                {
									yyval = makeUnaryOperator(yyval, yyvsp[-1], "+");
								}
#line 1843 "y.tab.c"
    break;

  case 37:
#line 212 "sintatica.y"
                                                                {
									yyval = makeUnaryOperator(yyval, yyvsp[-1], "-");
								}
#line 1851 "y.tab.c"
    break;

  case 38:
#line 219 "sintatica.y"
                                                                {
									yyval = makeAssignment(yyval, yyvsp[-2], yyvsp[0], "=");
								}
#line 1859 "y.tab.c"
    break;

  case 39:
#line 223 "sintatica.y"
                                                                {
									yyval.translation = yyvsp[0].translation;
								}
#line 1867 "y.tab.c"
    break;

  case 40:
#line 230 "sintatica.y"
                                                                {
									yyval.label = yyvsp[-1].label;
									yyval.translation = yyvsp[-1].translation;
									yyval.type = yyvsp[-1].type;
								}
#line 1877 "y.tab.c"
    break;

  case 41:
#line 236 "sintatica.y"
                                                                {
									yyval.translation = yyvsp[0].translation;
								}
#line 1885 "y.tab.c"
    break;

  case 42:
#line 240 "sintatica.y"
                                                                {
									yyval.translation = yyvsp[0].translation;
								}
#line 1893 "y.tab.c"
    break;

  case 43:
#line 244 "sintatica.y"
                                                                {
									yyval.translation = yyvsp[0].translation;
								}
#line 1901 "y.tab.c"
    break;

  case 44:
#line 248 "sintatica.y"
                                                                {
									yyval.translation = yyvsp[0].translation;
								}
#line 1909 "y.tab.c"
    break;

  case 45:
#line 252 "sintatica.y"
                                                                {
									yyval = resolveExplicitConversion(yyvsp[-2], yyvsp[0]);
								}
#line 1917 "y.tab.c"
    break;

  case 46:
#line 258 "sintatica.y"
                                                                {
									yyval = makeExpression(yyvsp[-2], "*", yyvsp[0]);
								}
#line 1925 "y.tab.c"
    break;

  case 47:
#line 262 "sintatica.y"
                                                                {
									yyval = makeExpression(yyvsp[-2], "/", yyvsp[0]);
								}
#line 1933 "y.tab.c"
    break;

  case 48:
#line 266 "sintatica.y"
                                                                {
									yyval = makeExpression(yyvsp[-2], "+", yyvsp[0]);
								}
#line 1941 "y.tab.c"
    break;

  case 49:
#line 270 "sintatica.y"
                                                                {
									yyval = makeExpression(yyvsp[-2], "-", yyvsp[0]);
								}
#line 1949 "y.tab.c"
    break;

  case 50:
#line 274 "sintatica.y"
                                                                {
									yyval = makeExpression(yyvsp[-2], "%", yyvsp[0]);
								}
#line 1957 "y.tab.c"
    break;

  case 51:
#line 280 "sintatica.y"
                                                                {
									yyval = createTK_TYPE(yyval, "int", yyvsp[0]);
								}
#line 1965 "y.tab.c"
    break;

  case 52:
#line 284 "sintatica.y"
                                                                {
									yyval = createTK_TYPE(yyval, "float", yyvsp[0]);
								}
#line 1973 "y.tab.c"
    break;

  case 53:
#line 288 "sintatica.y"
                                                                {
									yyval = createTK_TYPE(yyval, "char", yyvsp[0]);
								}
#line 1981 "y.tab.c"
    break;

  case 54:
#line 292 "sintatica.y"
                                                                {
									yyval = createTK_TYPE(yyval, "bool", yyvsp[0]);
								}
#line 1989 "y.tab.c"
    break;

  case 55:
#line 296 "sintatica.y"
                                                                {
									yyval = createTK_TYPE_STRING(yyval, "string", yyvsp[0]);
								}
#line 1997 "y.tab.c"
    break;

  case 56:
#line 300 "sintatica.y"
                                                                {
									yyval = createTK_ID(yyval, yyvsp[0]);
								}
#line 2005 "y.tab.c"
    break;

  case 57:
#line 306 "sintatica.y"
                                                                {
									yyval = makeExpression(yyvsp[-2], "&&", yyvsp[0]);
								}
#line 2013 "y.tab.c"
    break;

  case 58:
#line 310 "sintatica.y"
                                                                {
									yyval = makeExpression(yyvsp[-2], "||", yyvsp[0]);
								}
#line 2021 "y.tab.c"
    break;

  case 59:
#line 314 "sintatica.y"
                                                                {
									yyval = makeTK_NOT(yyval, yyvsp[0]);
								}
#line 2029 "y.tab.c"
    break;

  case 60:
#line 320 "sintatica.y"
                                                                {
									yyval = makeExpression(yyvsp[-2], "<", yyvsp[0]);
								}
#line 2037 "y.tab.c"
    break;

  case 61:
#line 324 "sintatica.y"
                                                                {
									yyval = makeExpression(yyvsp[-2], ">", yyvsp[0]);
								}
#line 2045 "y.tab.c"
    break;

  case 62:
#line 328 "sintatica.y"
                                                                {
									yyval = makeExpression(yyvsp[-2], ">=", yyvsp[0]);
								}
#line 2053 "y.tab.c"
    break;

  case 63:
#line 332 "sintatica.y"
                                                                {
									yyval = makeExpression(yyvsp[-2], "<=", yyvsp[0]);
								}
#line 2061 "y.tab.c"
    break;

  case 64:
#line 336 "sintatica.y"
                                                                {
									yyval = makeExpression(yyvsp[-2], "==", yyvsp[0]);
								}
#line 2069 "y.tab.c"
    break;

  case 65:
#line 340 "sintatica.y"
                                                                {
									yyval = makeExpression(yyvsp[-2], "!=", yyvsp[0]);
								}
#line 2077 "y.tab.c"
    break;

  case 66:
#line 347 "sintatica.y"
                                                                {
									yyval = makeIf(yyval, yyvsp[-2], yyvsp[0]);
								}
#line 2085 "y.tab.c"
    break;

  case 67:
#line 351 "sintatica.y"
                                                                {
									yyval = makeIfElse(yyval, yyvsp[-4], yyvsp[-2], yyvsp[0]);
								}
#line 2093 "y.tab.c"
    break;

  case 68:
#line 358 "sintatica.y"
                                                                { 
									yyval = endLoop(yyval, yyvsp[0]); 
								}
#line 2101 "y.tab.c"
    break;

  case 69:
#line 362 "sintatica.y"
                                                                { 
									yyval = endLoop(yyval, yyvsp[0]);
								}
#line 2109 "y.tab.c"
    break;

  case 70:
#line 366 "sintatica.y"
                                                                { 
									yyval = endLoop(yyval, yyvsp[0]);
								}
#line 2117 "y.tab.c"
    break;

  case 71:
#line 372 "sintatica.y"
                                                                { 
									iniciateLoop("doWhile");
								}
#line 2125 "y.tab.c"
    break;

  case 72:
#line 376 "sintatica.y"
                                                                { 
									iniciateLoop("while");
								}
#line 2133 "y.tab.c"
    break;

  case 73:
#line 380 "sintatica.y"
                                                                { 
									iniciateLoop("for");
								}
#line 2141 "y.tab.c"
    break;

  case 74:
#line 388 "sintatica.y"
                                                                { 
									yyval.translation = yyvsp[0].translation; 
								}
#line 2149 "y.tab.c"
    break;

  case 75:
#line 392 "sintatica.y"
                                                                { 
									yyval.translation = yyvsp[0].translation; 
								}
#line 2157 "y.tab.c"
    break;

  case 76:
#line 398 "sintatica.y"
                                                                { 
									yyval = makeBreak(yyval, yyvsp[0]);	
								}
#line 2165 "y.tab.c"
    break;

  case 77:
#line 404 "sintatica.y"
                                                                { 
									yyval = makeContinue(yyval, yyvsp[0]); 
								}
#line 2173 "y.tab.c"
    break;

  case 78:
#line 411 "sintatica.y"
                                                                {
									yyval = makeForCounter(yyval, yyvsp[-6], yyvsp[-4], yyvsp[-2], yyvsp[0]);
								}
#line 2181 "y.tab.c"
    break;

  case 79:
#line 418 "sintatica.y"
                                                                {
									yyval = makeWhile(yyval, yyvsp[-2], yyvsp[0]);
								}
#line 2189 "y.tab.c"
    break;

  case 80:
#line 425 "sintatica.y"
                                                                {
									yyval = makeDoWhile(yyval, yyvsp[-4], yyvsp[-1]);
								}
#line 2197 "y.tab.c"
    break;

  case 81:
#line 433 "sintatica.y"
                                                                {	
									yyval = iniciateSwitch(yyval, yyvsp[0]); 
								}
#line 2205 "y.tab.c"
    break;

  case 82:
#line 439 "sintatica.y"
                                                                {	
									createSwicher(yyvsp[0]); 
								}
#line 2213 "y.tab.c"
    break;

  case 83:
#line 445 "sintatica.y"
                                                                {
									yyval = resolveBlockSwitch(yyval, yyvsp[-4], yyvsp[-1]);
								}
#line 2221 "y.tab.c"
    break;

  case 84:
#line 451 "sintatica.y"
                                                                {
									yyval = resolveCasesSwitch(yyval, yyvsp[-3], yyvsp[-1], yyvsp[0]);
								}
#line 2229 "y.tab.c"
    break;

  case 85:
#line 455 "sintatica.y"
                                                                {	
									yyval.translation = ""; 
								}
#line 2237 "y.tab.c"
    break;

  case 86:
#line 461 "sintatica.y"
                                                                {
									yyval = resolveCheckerSwitch(yyval, "==", yyvsp[0]);
								}
#line 2245 "y.tab.c"
    break;

  case 87:
#line 466 "sintatica.y"
                                                                {
									yyval = resolveCheckerSwitch(yyval, ">", yyvsp[0]);
								}
#line 2253 "y.tab.c"
    break;

  case 88:
#line 471 "sintatica.y"
                                                                {
									yyval = resolveCheckerSwitch(yyval, ">=", yyvsp[0]);
								}
#line 2261 "y.tab.c"
    break;

  case 89:
#line 476 "sintatica.y"
                                                                {
									yyval = resolveCheckerSwitch(yyval, "<", yyvsp[0]);
								}
#line 2269 "y.tab.c"
    break;

  case 90:
#line 481 "sintatica.y"
                                                                {
									yyval = resolveCheckerSwitch(yyval, "<=", yyvsp[0]);
								}
#line 2277 "y.tab.c"
    break;


#line 2281 "y.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
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

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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


#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[+*yyssp], yyvsp);
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
  return yyresult;
}
#line 488 "sintatica.y"


#include "lex.yy.c"

int yyparse();


int main( int argc, char* argv[] )
{
	iniciateCoercionTable();
	iniciateScanHelperTable();
	iniciateStringExpressionHelperTable();
	
	yyparse();

	return 0;
}
