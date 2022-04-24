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




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

