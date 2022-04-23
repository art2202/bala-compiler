/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison interface for Yacc-like parsers in C

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

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
    TK_TYPE_INT = 264,
    TK_TYPE_FLOAT = 265,
    TK_TYPE_BOOL = 266,
    TK_TYPE_CHAR = 267,
    TK_BIG = 268,
    TK_SMALL = 269,
    TK_NOT_EQ = 270,
    TK_BIG_EQ = 271,
    TK_SMALL_EQ = 272,
    TK_EQ = 273,
    TK_AND = 274,
    TK_OR = 275,
    TK_NOT = 276,
    TK_IF = 277,
    TK_ELSE = 278,
    TK_FOR = 279,
    TK_WHILE = 280,
    TK_DO = 281,
    TK_SWITCH = 282,
    TK_CASE = 283,
    TK_DEFAULT = 284,
    NO_ELSE = 285
  };
#endif
/* Tokens.  */
#define TK_ID 258
#define TK_EXPLICIT_CONVERTER 259
#define TK_NUM 260
#define TK_REAL 261
#define TK_CHAR 262
#define TK_BOOL 263
#define TK_TYPE_INT 264
#define TK_TYPE_FLOAT 265
#define TK_TYPE_BOOL 266
#define TK_TYPE_CHAR 267
#define TK_BIG 268
#define TK_SMALL 269
#define TK_NOT_EQ 270
#define TK_BIG_EQ 271
#define TK_SMALL_EQ 272
#define TK_EQ 273
#define TK_AND 274
#define TK_OR 275
#define TK_NOT 276
#define TK_IF 277
#define TK_ELSE 278
#define TK_FOR 279
#define TK_WHILE 280
#define TK_DO 281
#define TK_SWITCH 282
#define TK_CASE 283
#define TK_DEFAULT 284
#define NO_ELSE 285

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
