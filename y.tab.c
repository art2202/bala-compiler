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
#include "headers/struct.hpp"
#include "string.h"


#define YYSTYPE attribute

using namespace std;

int yylex(void);

#line 83 "y.tab.c"

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
    TK_VAR = 270,
    TK_BIG = 271,
    TK_SMALL = 272,
    TK_NOT_EQ = 273,
    TK_BIG_EQ = 274,
    TK_SMALL_EQ = 275,
    TK_EQ = 276,
    TK_AND = 277,
    TK_OR = 278,
    TK_NOT = 279,
    TK_IF = 280,
    TK_ELSE = 281,
    TK_FOR = 282,
    TK_WHILE = 283,
    TK_DO = 284,
    TK_SWITCH = 285,
    TK_CASE = 286,
    TK_DEFAULT = 287,
    TK_PRINT = 288,
    TK_SCAN = 289,
    TK_BREAK = 290,
    TK_CONTINUE = 291,
    TK_SEMICOLON = 292,
    TK_ADD_ADD = 293,
    TK_SUBTRACT_SUBTRACT = 294,
    TK_ASSIGNMENT = 295,
    TK_ADD_ASSIGNMENT = 296,
    TK_SUBTRACT_ASSIGNMENT = 297,
    TK_MULTIPLICATION_ASSIGNMENT = 298,
    TK_DIVISION_ASSIGNMENT = 299,
    TK_ADD = 300,
    TK_SUBTRACT = 301,
    TK_MULTIPLICATION = 302,
    TK_DIVISION = 303,
    TK_MODULE = 304,
    TK_LINE_COMMENT = 305,
    TK_START_MULTI_LINE_COMMENT = 306,
    TK_END_MULTI_LINE_COMMENT = 307,
    TK_RETURN = 308,
    TK_FUNCTION = 309,
    NO_ELSE = 310
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
#define TK_VAR 270
#define TK_BIG 271
#define TK_SMALL 272
#define TK_NOT_EQ 273
#define TK_BIG_EQ 274
#define TK_SMALL_EQ 275
#define TK_EQ 276
#define TK_AND 277
#define TK_OR 278
#define TK_NOT 279
#define TK_IF 280
#define TK_ELSE 281
#define TK_FOR 282
#define TK_WHILE 283
#define TK_DO 284
#define TK_SWITCH 285
#define TK_CASE 286
#define TK_DEFAULT 287
#define TK_PRINT 288
#define TK_SCAN 289
#define TK_BREAK 290
#define TK_CONTINUE 291
#define TK_SEMICOLON 292
#define TK_ADD_ADD 293
#define TK_SUBTRACT_SUBTRACT 294
#define TK_ASSIGNMENT 295
#define TK_ADD_ASSIGNMENT 296
#define TK_SUBTRACT_ASSIGNMENT 297
#define TK_MULTIPLICATION_ASSIGNMENT 298
#define TK_DIVISION_ASSIGNMENT 299
#define TK_ADD 300
#define TK_SUBTRACT 301
#define TK_MULTIPLICATION 302
#define TK_DIVISION 303
#define TK_MODULE 304
#define TK_LINE_COMMENT 305
#define TK_START_MULTI_LINE_COMMENT 306
#define TK_END_MULTI_LINE_COMMENT 307
#define TK_RETURN 308
#define TK_FUNCTION 309
#define NO_ELSE 310

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
#define YYFINAL  85
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   546

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  63
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  41
/* YYNRULES -- Number of rules.  */
#define YYNRULES  112
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  220

#define YYUNDEFTOK  2
#define YYMAXUTOK   310


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
      55,    56,     2,     2,    60,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    62,     2,
       2,     2,     2,    61,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    58,     2,    59,     2,     2,     2,     2,
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
      57
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    54,    54,    60,    67,    74,    79,    84,    88,    92,
      96,   100,   104,   108,   112,   116,   120,   124,   128,   134,
     138,   144,   148,   152,   156,   160,   166,   170,   174,   178,
     182,   188,   192,   196,   201,   202,   206,   212,   216,   220,
     224,   230,   234,   240,   244,   248,   254,   260,   264,   268,
     272,   276,   280,   286,   290,   294,   298,   302,   308,   312,
     316,   320,   324,   328,   334,   338,   342,   348,   352,   356,
     360,   364,   368,   374,   378,   382,   388,   392,   396,   402,
     406,   410,   417,   421,   427,   433,   439,   445,   451,   457,
     463,   469,   475,   480,   485,   490,   495,   500,   505,   511,
     517,   522,   527,   532,   537,   543,   549,   555,   561,   565,
     570,   573,   577
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
  "TK_VAR", "TK_BIG", "TK_SMALL", "TK_NOT_EQ", "TK_BIG_EQ", "TK_SMALL_EQ",
  "TK_EQ", "TK_AND", "TK_OR", "TK_NOT", "TK_IF", "TK_ELSE", "TK_FOR",
  "TK_WHILE", "TK_DO", "TK_SWITCH", "TK_CASE", "TK_DEFAULT", "TK_PRINT",
  "TK_SCAN", "TK_BREAK", "TK_CONTINUE", "TK_SEMICOLON", "TK_ADD_ADD",
  "TK_SUBTRACT_SUBTRACT", "TK_ASSIGNMENT", "TK_ADD_ASSIGNMENT",
  "TK_SUBTRACT_ASSIGNMENT", "TK_MULTIPLICATION_ASSIGNMENT",
  "TK_DIVISION_ASSIGNMENT", "TK_ADD", "TK_SUBTRACT", "TK_MULTIPLICATION",
  "TK_DIVISION", "TK_MODULE", "TK_LINE_COMMENT",
  "TK_START_MULTI_LINE_COMMENT", "TK_END_MULTI_LINE_COMMENT", "TK_RETURN",
  "TK_FUNCTION", "'('", "')'", "NO_ELSE", "'{'", "'}'", "','", "'?'",
  "':'", "$accept", "S", "BLOCK", "BLOCK_AUX", "COMMANDS", "COMMAND",
  "COMMENT", "DEFINITION", "TYPE", "IO", "OPERATORS", "COMPOUSED_OPERATOR",
  "UNARY_OPERATOR", "ASSIGNMENT", "E", "ARITHMETIC", "VARIABLE", "LOGICAL",
  "RELATIONAL", "IF", "LOOP", "LOOP_AUX", "LOOP_CONTROL", "BREAK",
  "CONTINUE", "FOR", "WHILE", "DO_WHILE", "SWITCH", "SEEKER_SWITCH",
  "BLOCK_SWITCH", "CASES", "VARIABLE_SWITCH", "RETURN", "PARAMETERS",
  "AUX_PARAMETERS", "FUNCTION", "FUNCTION_AUX", "CALL_FUNCTION",
  "ARGUMENTS", "AUX_ARGUMENTS", YY_NULLPTR
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
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,    40,    41,   310,   123,   125,
      44,    63,    58
};
# endif

#define YYPACT_NINF (-161)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-113)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     243,   104,  -161,  -161,  -161,  -161,  -161,     4,     7,     8,
      12,    15,    17,    98,   -52,  -161,  -161,  -161,   -47,   -12,
      11,  -161,  -161,  -161,    50,    98,    84,    98,    67,  -161,
      10,  -161,   296,  -161,    32,    39,  -161,  -161,  -161,    40,
     451,  -161,  -161,  -161,  -161,  -161,  -161,    23,    65,  -161,
    -161,  -161,    71,  -161,  -161,  -161,  -161,   220,   108,   112,
     113,   114,    98,  -161,  -161,  -161,  -161,  -161,    72,    63,
     270,    98,   117,    98,    98,    69,   459,  -161,  -161,  -161,
    -161,  -161,   120,    66,   318,  -161,   165,  -161,  -161,  -161,
    -161,    84,    98,    98,    98,    98,    98,    98,    98,    98,
    -161,    98,    98,    98,    98,    98,   257,   106,  -161,  -161,
    -161,  -161,  -161,    98,   459,  -161,  -161,  -161,  -161,     5,
      79,    76,    98,   339,  -161,    81,   385,   109,  -161,  -161,
     165,  -161,    80,  -161,    25,    25,    25,    25,    25,    25,
     497,   270,     9,     9,   134,   134,     0,   -21,   459,    85,
      94,   405,  -161,    98,   459,  -161,    93,  -161,  -161,   155,
     127,   102,  -161,    98,  -161,    98,   103,   187,   141,   157,
    -161,   140,    84,  -161,   174,  -161,   156,   178,  -161,   374,
     181,  -161,   211,   161,   162,    60,  -161,  -161,   159,  -161,
     178,   178,   178,   178,  -161,   168,   169,   177,  -161,    84,
      -3,   182,   178,  -161,  -161,  -161,  -161,  -161,  -161,   236,
      98,  -161,   203,   157,   183,   185,  -161,  -161,  -161,  -161
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       4,    63,    58,    59,    60,    61,    62,     0,     0,     0,
       0,     0,     0,     0,     0,    81,    80,    79,     0,     0,
       0,    84,    85,    19,     0,     0,     0,     0,     0,    10,
       0,     2,     6,     7,     0,     0,    44,    35,    36,     0,
       0,    47,    48,    49,    50,    11,    13,     4,     0,    82,
      83,    12,     0,    17,    52,    41,    42,     0,     0,     0,
       0,     0,   110,    21,    22,    24,    23,    25,     0,    63,
      66,     0,     0,     0,     0,     0,    99,    26,    27,    29,
      28,    30,     0,     0,     0,     1,     4,     5,     9,    15,
      16,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       8,     0,     0,     0,     0,     0,     0,     0,    78,    77,
      76,    14,    18,     0,    43,    37,    38,    39,    40,   108,
       0,     0,     0,     0,    90,     0,     0,     0,    20,     4,
       4,    46,     0,    51,    68,    67,    72,    69,    70,    71,
      64,    65,    55,    56,    53,    54,    57,    63,     0,    50,
       0,     0,   107,     0,    45,     4,     0,    31,    32,     0,
       0,     0,     3,     0,     4,     0,    46,   109,    73,    93,
      89,     0,   102,   105,    50,    87,    50,     0,     4,     0,
       0,    33,     0,     0,     0,    34,    88,    63,     0,    74,
       0,     0,     0,     0,    94,     0,     0,   101,   106,     0,
       0,     0,     0,    95,    97,    96,    98,     4,     4,     0,
       0,     4,     0,    93,     0,   100,    86,    75,    92,    91
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -161,  -161,   -45,   130,   -31,  -161,  -161,  -161,   -85,  -161,
    -161,  -161,  -161,    56,   -13,  -161,  -160,  -161,  -101,  -161,
    -161,  -161,  -161,  -161,  -161,  -161,  -161,  -161,  -161,  -161,
    -161,    48,  -161,  -161,  -161,  -161,  -161,  -161,  -161,  -161,
    -161
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    28,    29,    30,    31,    32,    33,    34,    82,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,   108,   109,   110,    51,   125,
     170,   180,   195,    52,   183,   184,    53,    83,    54,   120,
     121
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      70,    87,   107,    71,    91,   149,   133,    63,    72,    91,
      64,    65,    76,    91,    84,    66,   163,   188,    67,   194,
      68,    92,    93,    94,    95,    96,    97,    98,    99,    91,
     203,   204,   205,   206,    62,    55,    56,   210,    58,    59,
      60,    61,   212,    73,   114,   101,   102,   103,   104,   119,
     101,   102,   103,   104,   105,   132,   103,   104,   123,    75,
     126,   127,   174,   200,   176,  -111,    74,    85,    86,    88,
     101,   102,   103,   104,   105,    12,    89,    90,   106,   134,
     135,   136,   137,   138,   139,   140,   141,   182,   142,   143,
     144,   145,   146,   148,    77,    78,    79,    80,    81,   161,
     151,    69,   111,     2,     3,     4,     5,     6,   112,   154,
     168,   115,   122,    91,   209,   116,   117,   118,    62,   175,
     124,   128,    13,   129,   130,    92,    93,    94,    95,    96,
      97,    98,    99,   189,   150,   152,   153,   156,    91,   162,
     167,   164,    55,    56,    57,    58,    59,    60,    61,   165,
     148,   169,   148,    27,   101,   102,   103,   104,   105,    62,
     171,   173,   213,   214,   177,   158,   216,   178,     1,   159,
       2,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,   187,   172,     2,     3,     4,     5,     6,   179,    13,
      14,    91,    15,    16,    17,    18,   181,   114,    19,    20,
      21,    22,   -34,    92,    93,    94,    95,    96,    97,    98,
      99,   185,   186,   196,   197,    23,    24,   198,    25,    26,
      27,   202,   199,    69,    -6,     2,     3,     4,     5,     6,
     207,   208,   101,   102,   103,   104,   105,  -104,   211,   215,
     217,   201,   219,    -6,    13,  -103,     1,  -112,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,   160,
     147,   218,     2,     3,     4,     5,     6,    13,    14,     0,
      15,    16,    17,    18,    91,   113,    19,    20,    21,    22,
     -34,    13,     0,     0,     0,     0,    92,    93,    94,    95,
      96,    97,     0,    23,    24,     0,    25,    26,    27,     1,
       0,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    27,     0,     0,   101,   102,   103,   104,   105,
      13,    14,    91,    15,    16,    17,    18,     0,     0,    19,
      20,    21,    22,   -34,    92,    93,    94,    95,    96,    97,
      98,    99,     0,    91,     0,     0,    23,    24,     0,    25,
      26,    27,     0,     0,    -4,    92,    93,    94,    95,    96,
      97,    98,    99,   101,   102,   103,   104,   105,     0,     0,
       0,     0,     0,     0,   131,     0,     0,   187,     0,     2,
       3,     4,     5,     6,   101,   102,   103,   104,   105,    91,
     190,   191,     0,   192,   193,   155,     0,     0,     0,     0,
       0,    92,    93,    94,    95,    96,    97,    98,    99,    91,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    92,    93,    94,    95,    96,    97,    98,    99,     0,
     101,   102,   103,   104,   105,     0,     0,     0,     0,     0,
       0,   157,     0,     0,     0,     0,     0,     0,     0,     0,
     101,   102,   103,   104,   105,    91,     0,     0,     0,     0,
       0,   166,     0,    91,     0,     0,     0,    92,    93,    94,
      95,    96,    97,    98,    99,    92,    93,    94,    95,    96,
      97,    98,    99,     0,     0,     0,     0,     0,   100,     0,
       0,     0,     0,     0,     0,     0,   101,   102,   103,   104,
     105,    91,     0,     0,   101,   102,   103,   104,   105,     0,
       0,     0,     0,    92,    93,    94,    95,    96,    97,     0,
      99,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   101,   102,   103,   104,   105
};

static const yytype_int16 yycheck[] =
{
      13,    32,    47,    55,     4,   106,    91,     3,    55,     4,
       3,     3,    25,     4,    27,     3,    37,   177,     3,   179,
       3,    16,    17,    18,    19,    20,    21,    22,    23,     4,
     190,   191,   192,   193,    55,    38,    39,    40,    41,    42,
      43,    44,   202,    55,    57,    45,    46,    47,    48,    62,
      45,    46,    47,    48,    49,    86,    47,    48,    71,     9,
      73,    74,   163,     3,   165,    60,    55,     0,    58,    37,
      45,    46,    47,    48,    49,    15,    37,    37,    55,    92,
      93,    94,    95,    96,    97,    98,    99,   172,   101,   102,
     103,   104,   105,   106,    10,    11,    12,    13,    14,   130,
     113,     3,    37,     5,     6,     7,     8,     9,    37,   122,
     155,     3,    40,     4,   199,     3,     3,     3,    55,   164,
       3,    52,    24,     3,    58,    16,    17,    18,    19,    20,
      21,    22,    23,   178,    28,    56,    60,    56,     4,    59,
     153,    56,    38,    39,    40,    41,    42,    43,    44,    55,
     163,    58,   165,    55,    45,    46,    47,    48,    49,    55,
       5,    59,   207,   208,    61,    56,   211,    26,     3,    60,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,     3,    55,     5,     6,     7,     8,     9,    31,    24,
      25,     4,    27,    28,    29,    30,    56,   210,    33,    34,
      35,    36,    37,    16,    17,    18,    19,    20,    21,    22,
      23,    37,    56,    32,     3,    50,    51,    56,    53,    54,
      55,    62,    60,     3,    59,     5,     6,     7,     8,     9,
      62,    62,    45,    46,    47,    48,    49,    60,    56,     3,
      37,   185,    59,     0,    24,    60,     3,    60,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,   129,
       3,   213,     5,     6,     7,     8,     9,    24,    25,    -1,
      27,    28,    29,    30,     4,    55,    33,    34,    35,    36,
      37,    24,    -1,    -1,    -1,    -1,    16,    17,    18,    19,
      20,    21,    -1,    50,    51,    -1,    53,    54,    55,     3,
      -1,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    55,    -1,    -1,    45,    46,    47,    48,    49,
      24,    25,     4,    27,    28,    29,    30,    -1,    -1,    33,
      34,    35,    36,    37,    16,    17,    18,    19,    20,    21,
      22,    23,    -1,     4,    -1,    -1,    50,    51,    -1,    53,
      54,    55,    -1,    -1,    58,    16,    17,    18,    19,    20,
      21,    22,    23,    45,    46,    47,    48,    49,    -1,    -1,
      -1,    -1,    -1,    -1,    56,    -1,    -1,     3,    -1,     5,
       6,     7,     8,     9,    45,    46,    47,    48,    49,     4,
      16,    17,    -1,    19,    20,    56,    -1,    -1,    -1,    -1,
      -1,    16,    17,    18,    19,    20,    21,    22,    23,     4,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    16,    17,    18,    19,    20,    21,    22,    23,    -1,
      45,    46,    47,    48,    49,    -1,    -1,    -1,    -1,    -1,
      -1,    56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      45,    46,    47,    48,    49,     4,    -1,    -1,    -1,    -1,
      -1,    56,    -1,     4,    -1,    -1,    -1,    16,    17,    18,
      19,    20,    21,    22,    23,    16,    17,    18,    19,    20,
      21,    22,    23,    -1,    -1,    -1,    -1,    -1,    37,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    45,    46,    47,    48,
      49,     4,    -1,    -1,    45,    46,    47,    48,    49,    -1,
      -1,    -1,    -1,    16,    17,    18,    19,    20,    21,    -1,
      23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    45,    46,    47,    48,    49
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    24,    25,    27,    28,    29,    30,    33,
      34,    35,    36,    50,    51,    53,    54,    55,    64,    65,
      66,    67,    68,    69,    70,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    91,    96,    99,   101,    38,    39,    40,    41,    42,
      43,    44,    55,     3,     3,     3,     3,     3,     3,     3,
      77,    55,    55,    55,    55,     9,    77,    10,    11,    12,
      13,    14,    71,   100,    77,     0,    58,    67,    37,    37,
      37,     4,    16,    17,    18,    19,    20,    21,    22,    23,
      37,    45,    46,    47,    48,    49,    55,    65,    88,    89,
      90,    37,    37,    55,    77,     3,     3,     3,     3,    77,
     102,   103,    40,    77,     3,    92,    77,    77,    52,     3,
      58,    56,    67,    71,    77,    77,    77,    77,    77,    77,
      77,    77,    77,    77,    77,    77,    77,     3,    77,    81,
      28,    77,    56,    60,    77,    56,    56,    56,    56,    60,
      66,    67,    59,    37,    56,    55,    56,    77,    65,    58,
      93,     5,    55,    59,    81,    65,    81,    61,    26,    31,
      94,    56,    71,    97,    98,    37,    56,     3,    79,    65,
      16,    17,    19,    20,    79,    95,    32,     3,    56,    60,
       3,    76,    62,    79,    79,    79,    79,    62,    62,    71,
      40,    56,    79,    65,    65,     3,    65,    37,    94,    59
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    63,    64,    65,    66,    67,    67,    68,    68,    68,
      68,    68,    68,    68,    68,    68,    68,    68,    68,    69,
      69,    70,    70,    70,    70,    70,    71,    71,    71,    71,
      71,    72,    72,    72,    73,    73,    73,    74,    74,    74,
      74,    75,    75,    76,    76,    76,    77,    77,    77,    77,
      77,    77,    77,    78,    78,    78,    78,    78,    79,    79,
      79,    79,    79,    79,    80,    80,    80,    81,    81,    81,
      81,    81,    81,    82,    82,    82,    83,    83,    83,    84,
      84,    84,    85,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    94,    95,    95,    95,    95,    95,    96,
      97,    97,    97,    98,    98,    99,   100,   101,   102,   102,
     102,   103,   103
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     4,     0,     2,     0,     1,     2,     2,
       1,     1,     1,     1,     2,     2,     2,     1,     2,     1,
       3,     2,     2,     2,     2,     2,     1,     1,     1,     1,
       1,     4,     4,     6,     0,     1,     1,     3,     3,     3,
       3,     2,     2,     3,     1,     4,     3,     1,     1,     1,
       1,     3,     1,     3,     3,     3,     3,     3,     1,     1,
       1,     1,     1,     1,     3,     3,     2,     3,     3,     3,
       3,     3,     3,     5,     7,    10,     2,     2,     2,     1,
       1,     1,     1,     1,     1,     1,     8,     4,     5,     5,
       1,     6,     5,     0,     1,     2,     2,     2,     2,     2,
       4,     2,     0,     4,     2,     5,     6,     4,     1,     3,
       0,     1,     3
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
#line 55 "sintatica.y"
                                                                {
									cout << "//<<<<Bala Compiler>>>>" << iniciate() + prototypes + "\nint main(void)\n{\n" << yyvsp[0].translation << "\treturn 0;\n}" + functions + "\n" << endl; 
								}
#line 1647 "y.tab.c"
    break;

  case 3:
#line 61 "sintatica.y"
                                                                {
									yyval.translation = yyvsp[-1].translation;
									popScope(StackContext);
								}
#line 1656 "y.tab.c"
    break;

  case 4:
#line 67 "sintatica.y"
                                                                {
									VariableTable table;
									pushScope(StackContext,table);
									yyval.translation = "";
								}
#line 1666 "y.tab.c"
    break;

  case 5:
#line 75 "sintatica.y"
                                                                {
									yyval.translation = yyvsp[-1].translation + yyvsp[0].translation;
								}
#line 1674 "y.tab.c"
    break;

  case 6:
#line 79 "sintatica.y"
                                                                {
									yyval.translation = "";
								}
#line 1682 "y.tab.c"
    break;

  case 7:
#line 85 "sintatica.y"
                                                                {
									yyval.translation = yyvsp[0].translation;
								}
#line 1690 "y.tab.c"
    break;

  case 8:
#line 89 "sintatica.y"
                                                                {
									yyval.translation = yyvsp[-1].translation;
								}
#line 1698 "y.tab.c"
    break;

  case 9:
#line 93 "sintatica.y"
                                                                {
									yyval.translation = yyvsp[-1].translation;
								}
#line 1706 "y.tab.c"
    break;

  case 10:
#line 97 "sintatica.y"
                                                                {
									yyval.translation = yyvsp[0].translation;
								}
#line 1714 "y.tab.c"
    break;

  case 11:
#line 101 "sintatica.y"
                                                                {
									yyval.translation = yyvsp[0].translation;
								}
#line 1722 "y.tab.c"
    break;

  case 12:
#line 105 "sintatica.y"
                                                                {
									yyval.translation = yyvsp[0].translation;
								}
#line 1730 "y.tab.c"
    break;

  case 13:
#line 109 "sintatica.y"
                                                                {
									yyval.translation = yyvsp[0].translation;
								}
#line 1738 "y.tab.c"
    break;

  case 14:
#line 113 "sintatica.y"
                                                                {
									yyval.translation = yyvsp[-1].translation;
								}
#line 1746 "y.tab.c"
    break;

  case 15:
#line 117 "sintatica.y"
                                                                {
									yyval.translation = yyvsp[-1].translation;
								}
#line 1754 "y.tab.c"
    break;

  case 16:
#line 121 "sintatica.y"
                                                                {
									yyval.translation = yyvsp[-1].translation;
								}
#line 1762 "y.tab.c"
    break;

  case 17:
#line 125 "sintatica.y"
                                                                {
									yyval.translation = "";
								}
#line 1770 "y.tab.c"
    break;

  case 18:
#line 129 "sintatica.y"
                                                                {
									yyval.translation = yyvsp[-1].translation;
								}
#line 1778 "y.tab.c"
    break;

  case 19:
#line 135 "sintatica.y"
                                                                {
									yyval.translation = yyvsp[0].label + "\n";
								}
#line 1786 "y.tab.c"
    break;

  case 20:
#line 139 "sintatica.y"
                                                                {
									yyval.translation = "/*" + yyvsp[-1].label + "*/" + "\n";
								}
#line 1794 "y.tab.c"
    break;

  case 21:
#line 145 "sintatica.y"
                                                                {
									yyval = declareTK_TYPE("int", yyval, yyvsp[0]);
								}
#line 1802 "y.tab.c"
    break;

  case 22:
#line 149 "sintatica.y"
                                                                {
									yyval = declareTK_TYPE("float", yyval, yyvsp[0]);
								}
#line 1810 "y.tab.c"
    break;

  case 23:
#line 153 "sintatica.y"
                                                                {
									yyval = declareTK_TYPE("char", yyval, yyvsp[0]);
								}
#line 1818 "y.tab.c"
    break;

  case 24:
#line 157 "sintatica.y"
                                                                {
									yyval = declareTK_TYPE("bool", yyval, yyvsp[0]);
								}
#line 1826 "y.tab.c"
    break;

  case 25:
#line 161 "sintatica.y"
                                                                {
									yyval = declareTK_TYPE("string", yyval, yyvsp[0]);
								}
#line 1834 "y.tab.c"
    break;

  case 26:
#line 167 "sintatica.y"
                                                                {
									yyval.translation = "int";
								}
#line 1842 "y.tab.c"
    break;

  case 27:
#line 171 "sintatica.y"
                                                                {
									yyval.translation = "float";
								}
#line 1850 "y.tab.c"
    break;

  case 28:
#line 175 "sintatica.y"
                                                                {
									yyval.translation = "char";
								}
#line 1858 "y.tab.c"
    break;

  case 29:
#line 179 "sintatica.y"
                                                                {
									yyval.translation = "bool";
								}
#line 1866 "y.tab.c"
    break;

  case 30:
#line 183 "sintatica.y"
                                                                {
									yyval.translation = "string";
								}
#line 1874 "y.tab.c"
    break;

  case 31:
#line 189 "sintatica.y"
                                                                {
									yyval.translation = makePrint(yyvsp[-1]);
								}
#line 1882 "y.tab.c"
    break;

  case 32:
#line 193 "sintatica.y"
                                                                {
									yyval.translation = makeScan(yyvsp[-1]);
								}
#line 1890 "y.tab.c"
    break;

  case 33:
#line 197 "sintatica.y"
                                                                {
									yyval.translation = makeScan(yyvsp[-3], yyvsp[-1].label);
								}
#line 1898 "y.tab.c"
    break;

  case 35:
#line 203 "sintatica.y"
                                                                {
									yyval.translation = yyvsp[0].translation;
								}
#line 1906 "y.tab.c"
    break;

  case 36:
#line 207 "sintatica.y"
                                                                {
									yyval.translation = yyvsp[0].translation;
								}
#line 1914 "y.tab.c"
    break;

  case 37:
#line 213 "sintatica.y"
                                                                {
									yyval = makeCompousedOperator(yyval, yyvsp[-2], "+", yyvsp[0]);
								}
#line 1922 "y.tab.c"
    break;

  case 38:
#line 217 "sintatica.y"
                                                                {
									yyval = makeCompousedOperator(yyval, yyvsp[-2], "-", yyvsp[0]);
								}
#line 1930 "y.tab.c"
    break;

  case 39:
#line 221 "sintatica.y"
                                                                {
									yyval = makeCompousedOperator(yyval, yyvsp[-2], "*", yyvsp[0]);
								}
#line 1938 "y.tab.c"
    break;

  case 40:
#line 225 "sintatica.y"
                                                                {
									yyval = makeCompousedOperator(yyval, yyvsp[-2], "/", yyvsp[0]);
								}
#line 1946 "y.tab.c"
    break;

  case 41:
#line 231 "sintatica.y"
                                                                {
									yyval = makeUnaryOperator(yyval, yyvsp[-1], "+");
								}
#line 1954 "y.tab.c"
    break;

  case 42:
#line 235 "sintatica.y"
                                                                {
									yyval = makeUnaryOperator(yyval, yyvsp[-1], "-");
								}
#line 1962 "y.tab.c"
    break;

  case 43:
#line 241 "sintatica.y"
                                                                {
									yyval = makeAssignment(yyval, yyvsp[-2], yyvsp[0], "=");
								}
#line 1970 "y.tab.c"
    break;

  case 44:
#line 245 "sintatica.y"
                                                                {
									yyval.translation = yyvsp[0].translation;
								}
#line 1978 "y.tab.c"
    break;

  case 45:
#line 249 "sintatica.y"
                                                                {
									yyval = makeDeclaredAssignmentVar(yyval, yyvsp[-2], yyvsp[0], "=");
								}
#line 1986 "y.tab.c"
    break;

  case 46:
#line 255 "sintatica.y"
                                                                {
									yyval.label = yyvsp[-1].label;
									yyval.translation = yyvsp[-1].translation;
									yyval.type = yyvsp[-1].type;
								}
#line 1996 "y.tab.c"
    break;

  case 47:
#line 261 "sintatica.y"
                                                                {
									yyval.translation = yyvsp[0].translation;
								}
#line 2004 "y.tab.c"
    break;

  case 48:
#line 265 "sintatica.y"
                                                                {
									yyval.translation = yyvsp[0].translation;
								}
#line 2012 "y.tab.c"
    break;

  case 49:
#line 269 "sintatica.y"
                                                                {
									yyval.translation = yyvsp[0].translation;
								}
#line 2020 "y.tab.c"
    break;

  case 50:
#line 273 "sintatica.y"
                                                                {
									yyval.translation = yyvsp[0].translation;
								}
#line 2028 "y.tab.c"
    break;

  case 51:
#line 277 "sintatica.y"
                                                                {
									yyval = resolveExplicitConversion(yyvsp[-2], yyvsp[0]);
								}
#line 2036 "y.tab.c"
    break;

  case 52:
#line 281 "sintatica.y"
                                                                {
									yyval.translation = yyvsp[0].translation;
								}
#line 2044 "y.tab.c"
    break;

  case 53:
#line 287 "sintatica.y"
                                                                {
									yyval = makeExpression(yyvsp[-2], "*", yyvsp[0]);
								}
#line 2052 "y.tab.c"
    break;

  case 54:
#line 291 "sintatica.y"
                                                                {
									yyval = makeExpression(yyvsp[-2], "/", yyvsp[0]);
								}
#line 2060 "y.tab.c"
    break;

  case 55:
#line 295 "sintatica.y"
                                                                {
									yyval = makeExpression(yyvsp[-2], "+", yyvsp[0]);
								}
#line 2068 "y.tab.c"
    break;

  case 56:
#line 299 "sintatica.y"
                                                                {
									yyval = makeExpression(yyvsp[-2], "-", yyvsp[0]);
								}
#line 2076 "y.tab.c"
    break;

  case 57:
#line 303 "sintatica.y"
                                                                {
									yyval = makeExpression(yyvsp[-2], "%", yyvsp[0]);
								}
#line 2084 "y.tab.c"
    break;

  case 58:
#line 309 "sintatica.y"
                                                                {
									yyval = createTK_TYPE(yyval, "int", yyvsp[0]);
								}
#line 2092 "y.tab.c"
    break;

  case 59:
#line 313 "sintatica.y"
                                                                {
									yyval = createTK_TYPE(yyval, "float", yyvsp[0]);
								}
#line 2100 "y.tab.c"
    break;

  case 60:
#line 317 "sintatica.y"
                                                                {
									yyval = createTK_TYPE(yyval, "char", yyvsp[0]);
								}
#line 2108 "y.tab.c"
    break;

  case 61:
#line 321 "sintatica.y"
                                                                {
									yyval = createTK_TYPE(yyval, "bool", yyvsp[0]);
								}
#line 2116 "y.tab.c"
    break;

  case 62:
#line 325 "sintatica.y"
                                                                {
									yyval = createTK_TYPE_STRING(yyval, "string", yyvsp[0]);
								}
#line 2124 "y.tab.c"
    break;

  case 63:
#line 329 "sintatica.y"
                                                                {
									yyval = createTK_ID(yyval, yyvsp[0]);
								}
#line 2132 "y.tab.c"
    break;

  case 64:
#line 335 "sintatica.y"
                                                                {
									yyval = makeExpression(yyvsp[-2], "&&", yyvsp[0]);
								}
#line 2140 "y.tab.c"
    break;

  case 65:
#line 339 "sintatica.y"
                                                                {
									yyval = makeExpression(yyvsp[-2], "||", yyvsp[0]);
								}
#line 2148 "y.tab.c"
    break;

  case 66:
#line 343 "sintatica.y"
                                                                {
									yyval = makeTK_NOT(yyval, yyvsp[0]);
								}
#line 2156 "y.tab.c"
    break;

  case 67:
#line 349 "sintatica.y"
                                                                {
									yyval = makeExpression(yyvsp[-2], "<", yyvsp[0]);
								}
#line 2164 "y.tab.c"
    break;

  case 68:
#line 353 "sintatica.y"
                                                                {
									yyval = makeExpression(yyvsp[-2], ">", yyvsp[0]);
								}
#line 2172 "y.tab.c"
    break;

  case 69:
#line 357 "sintatica.y"
                                                                {
									yyval = makeExpression(yyvsp[-2], ">=", yyvsp[0]);
								}
#line 2180 "y.tab.c"
    break;

  case 70:
#line 361 "sintatica.y"
                                                                {
									yyval = makeExpression(yyvsp[-2], "<=", yyvsp[0]);
								}
#line 2188 "y.tab.c"
    break;

  case 71:
#line 365 "sintatica.y"
                                                                {
									yyval = makeExpression(yyvsp[-2], "==", yyvsp[0]);
								}
#line 2196 "y.tab.c"
    break;

  case 72:
#line 369 "sintatica.y"
                                                                {
									yyval = makeExpression(yyvsp[-2], "!=", yyvsp[0]);
								}
#line 2204 "y.tab.c"
    break;

  case 73:
#line 375 "sintatica.y"
                                                                {
									yyval = makeIf(yyval, yyvsp[-2], yyvsp[0]);
								}
#line 2212 "y.tab.c"
    break;

  case 74:
#line 379 "sintatica.y"
                                                                {
									yyval = makeIfElse(yyval, yyvsp[-4], yyvsp[-2], yyvsp[0]);
								}
#line 2220 "y.tab.c"
    break;

  case 75:
#line 383 "sintatica.y"
                                                                {
									yyval = makeIfTernary(yyval, yyvsp[-9], yyvsp[-6], yyvsp[-3], yyvsp[-1]);
								}
#line 2228 "y.tab.c"
    break;

  case 76:
#line 389 "sintatica.y"
                                                                { 
									yyval = endLoop(yyval, yyvsp[0]); 
								}
#line 2236 "y.tab.c"
    break;

  case 77:
#line 393 "sintatica.y"
                                                                { 
									yyval = endLoop(yyval, yyvsp[0]);
								}
#line 2244 "y.tab.c"
    break;

  case 78:
#line 397 "sintatica.y"
                                                                { 
									yyval = endLoop(yyval, yyvsp[0]);
								}
#line 2252 "y.tab.c"
    break;

  case 79:
#line 403 "sintatica.y"
                                                                { 
									iniciateLoop("doWhile");
								}
#line 2260 "y.tab.c"
    break;

  case 80:
#line 407 "sintatica.y"
                                                                { 
									iniciateLoop("while");
								}
#line 2268 "y.tab.c"
    break;

  case 81:
#line 411 "sintatica.y"
                                                                { 
									iniciateLoop("for");
								}
#line 2276 "y.tab.c"
    break;

  case 82:
#line 418 "sintatica.y"
                                                                { 
									yyval.translation = yyvsp[0].translation; 
								}
#line 2284 "y.tab.c"
    break;

  case 83:
#line 422 "sintatica.y"
                                                                { 
									yyval.translation = yyvsp[0].translation; 
								}
#line 2292 "y.tab.c"
    break;

  case 84:
#line 428 "sintatica.y"
                                                                { 
									yyval = makeBreak(yyval, yyvsp[0]);	
								}
#line 2300 "y.tab.c"
    break;

  case 85:
#line 434 "sintatica.y"
                                                                { 
									yyval = makeContinue(yyval, yyvsp[0]); 
								}
#line 2308 "y.tab.c"
    break;

  case 86:
#line 440 "sintatica.y"
                                                                {
									yyval = makeForCounter(yyval, yyvsp[-6], yyvsp[-4], yyvsp[-2], yyvsp[0]);
								}
#line 2316 "y.tab.c"
    break;

  case 87:
#line 446 "sintatica.y"
                                                                {
									yyval = makeWhile(yyval, yyvsp[-2], yyvsp[0]);
								}
#line 2324 "y.tab.c"
    break;

  case 88:
#line 452 "sintatica.y"
                                                                {
									yyval = makeDoWhile(yyval, yyvsp[-4], yyvsp[-1]);
								}
#line 2332 "y.tab.c"
    break;

  case 89:
#line 458 "sintatica.y"
                                                                {	
									yyval = iniciateSwitch(yyval, yyvsp[0]); 
								}
#line 2340 "y.tab.c"
    break;

  case 90:
#line 464 "sintatica.y"
                                                                {	
									createSwicher(yyvsp[0]); 
								}
#line 2348 "y.tab.c"
    break;

  case 91:
#line 470 "sintatica.y"
                                                                {
									yyval = resolveBlockSwitch(yyval, yyvsp[-4], yyvsp[-1]);
								}
#line 2356 "y.tab.c"
    break;

  case 92:
#line 476 "sintatica.y"
                                                                {
									yyval = resolveCasesSwitch(yyval, yyvsp[-3], yyvsp[-1], yyvsp[0]);
								}
#line 2364 "y.tab.c"
    break;

  case 93:
#line 480 "sintatica.y"
                                                                {	
									yyval.translation = ""; 
								}
#line 2372 "y.tab.c"
    break;

  case 94:
#line 486 "sintatica.y"
                                                                {
									yyval = resolveCheckerSwitch(yyval, "==", yyvsp[0]);
								}
#line 2380 "y.tab.c"
    break;

  case 95:
#line 491 "sintatica.y"
                                                                {
									yyval = resolveCheckerSwitch(yyval, ">", yyvsp[0]);
								}
#line 2388 "y.tab.c"
    break;

  case 96:
#line 496 "sintatica.y"
                                                                {
									yyval = resolveCheckerSwitch(yyval, ">=", yyvsp[0]);
								}
#line 2396 "y.tab.c"
    break;

  case 97:
#line 501 "sintatica.y"
                                                                {
									yyval = resolveCheckerSwitch(yyval, "<", yyvsp[0]);
								}
#line 2404 "y.tab.c"
    break;

  case 98:
#line 506 "sintatica.y"
                                                                {
									yyval = resolveCheckerSwitch(yyval, "<=", yyvsp[0]);
								}
#line 2412 "y.tab.c"
    break;

  case 99:
#line 512 "sintatica.y"
                                                                {
									yyval = makeReturn(yyval, yyvsp[0]);
								}
#line 2420 "y.tab.c"
    break;

  case 100:
#line 518 "sintatica.y"
                                                                {
									string previousParameters = yyvsp[-3].translation + ", ";
									yyval = makeParametersFunction(yyval, previousParameters, yyvsp[-1], yyvsp[0]);
								}
#line 2429 "y.tab.c"
    break;

  case 101:
#line 523 "sintatica.y"
                                                                {
									yyval = makeParametersFunction(yyval, "", yyvsp[-1], yyvsp[0]);
								}
#line 2437 "y.tab.c"
    break;

  case 102:
#line 527 "sintatica.y"
                                                                {
									yyval.translation = "";
								}
#line 2445 "y.tab.c"
    break;

  case 103:
#line 533 "sintatica.y"
                                                                {
									string previousParameters = yyvsp[-3].translation + ", ";
									yyval = makeParametersFunction(yyval, previousParameters, yyvsp[-1], yyvsp[0]);
								}
#line 2454 "y.tab.c"
    break;

  case 104:
#line 538 "sintatica.y"
                                                                {
									yyval = makeParametersFunction(yyval, "", yyvsp[-1], yyvsp[0]);
								}
#line 2462 "y.tab.c"
    break;

  case 105:
#line 544 "sintatica.y"
                                                                {
									yyval = makeFunction(yyval, yyvsp[-3], yyvsp[-1]);
								}
#line 2470 "y.tab.c"
    break;

  case 106:
#line 550 "sintatica.y"
                                                                {
									yyval = makeFunctionAux(yyval, yyvsp[-5], yyvsp[-4], yyvsp[-1]);
								}
#line 2478 "y.tab.c"
    break;

  case 107:
#line 556 "sintatica.y"
                                                                {
									yyval = makeCallFunction(yyval, yyvsp[-3], yyvsp[-1]);
								}
#line 2486 "y.tab.c"
    break;

  case 108:
#line 562 "sintatica.y"
                                                                {
									yyval = makeArgument(yyval, yyvsp[0]);
								}
#line 2494 "y.tab.c"
    break;

  case 109:
#line 566 "sintatica.y"
                                                                {
									yyval = makeArguments(yyval, yyvsp[-2], yyvsp[0]);
								}
#line 2502 "y.tab.c"
    break;

  case 110:
#line 570 "sintatica.y"
                                                                { yyval.translation = ""; }
#line 2508 "y.tab.c"
    break;

  case 111:
#line 574 "sintatica.y"
                                                                {
									yyval = makeArgument(yyval, yyvsp[0]);
								}
#line 2516 "y.tab.c"
    break;

  case 112:
#line 578 "sintatica.y"
                                                                {
									yyval = makeArguments(yyval, yyvsp[-2], yyvsp[0]);
								}
#line 2524 "y.tab.c"
    break;


#line 2528 "y.tab.c"

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
#line 582 "sintatica.y"


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
