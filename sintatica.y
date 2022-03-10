%{
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <bits/stdc++.h>
#include <unordered_map>
#include "headers/assignment.hpp"
#include "headers/coercion.hpp"
#include "headers/expression.hpp"
#include "headers/explicitConversion.hpp"
#include "headers/type.hpp"
#include "headers/utils.hpp"
#include "headers/symbols.hpp"


#define YYSTYPE attribute


using namespace std;

int yylex(void);


%}
%token TK_MAIN TK_ID
%token TK_EXPLICIT_CONVERTER
%token TK_NUM TK_REAL TK_CHAR TK_BOOL
%token TK_TYPE_INT TK_TYPE_FLOAT TK_TYPE_BOOL TK_TYPE_CHAR
%token TK_BIG TK_SMALL TK_NOT_EQ TK_BIG_EQ TK_SMALL_EQ TK_EQ
%token TK_AND TK_OR TK_NOT
%token TK_FIM TK_ERROR

%start S

%left TK_AND
%left TK_OR
%left TK_NOT
%left TK_SMALL TK_BIG TK_NOT_EQ TK_EQ TK_BIG_EQ TK_SMALL_EQ
%left '+' '-'
%left '*' '/'

%%
//------------------------------------------------------------------------------
S:					
					TK_TYPE_INT TK_MAIN '(' ')' BLOCK
					{
						cout << "//<<<<Bala Compiler>>>>\n" << "#include<iostream>\n#include<string.h>\n#include<stdio.h>\n"+declareVariables()+"\nint main(void)\n{\n" << $5.translation << "\treturn 0;\n}" << endl; 
					}
					;
//------------------------------------------------------------------------------
BLOCK:			
					'{' COMMANDS '}'
					{
						$$.translation = $2.translation;
					}
					;
//------------------------------------------------------------------------------
COMMANDS:	
					COMMAND COMMANDS
					{
						$$.translation = $1.translation + $2.translation;
					}
					|
					{
						$$.translation = "";
					}
					;
//------------------------------------------------------------------------------
COMMAND: 
					E ';'
					| TK_TYPE_INT TK_ID ';'
					{
						$$ = declareTK_TYPE("int", $$, $1, $2);
					}
					| TK_TYPE_FLOAT TK_ID ';'
					{
						$$ = declareTK_TYPE("float", $$, $1, $2);
					}
					| TK_TYPE_CHAR TK_ID ';'
					{
						$$ = declareTK_TYPE("char", $$, $1, $2);
					}
					| TK_TYPE_BOOL TK_ID ';'
					{
						$$ = declareTK_TYPE("bool", $$, $1, $2);
					}
					;
//------------------------------------------------------------------------------
E:
					E '*' E
					{
						$$ = makeExpression($1, "*", $3);
					}
					| E '/' E
					{
						$$ = makeExpression($1, "/", $3);
					}
					| E '+' E
					{
						$$ = makeExpression($1, "+", $3);
					}
					| E '-' E
					{
						$$ = makeExpression($1, "-", $3);
					}
					| TK_ID '=' E 
					{
						$$ = makeAssignment($$, $1, $3);
					}
//------------------------------------------------------------------------------
					| TK_NUM
					{
						$$ = createTK_TYPE($$, "int", $1);
					}
					| TK_REAL
					{
						$$ = createTK_TYPE($$, "float", $1);
					}
					| TK_CHAR
					{
						$$ = createTK_TYPE($$, "char", $1);
					}
					| TK_BOOL
					{
						$$ = createTK_TYPE($$, "bool", $1);
					}
					| TK_ID
					{
						$$ = createTK_ID($$, $1);
					}
					
//------------------------------------------------------------------------------
					|E TK_AND E 
					{
						$$ = makeExpression($1, "&&", $3);
					}
					|	E TK_OR E 
					{
						$$ = makeExpression($1, "||", $3);
					}
					| TK_NOT E 
					{
						$$ = makeTK_NOT($$, $2);
					}
//------------------------------------------------------------------------------
					| E TK_SMALL E
					{
						$$ = makeExpression($1, "<", $3);
					}

					| E TK_BIG E
					{
						$$ = makeExpression($1, ">", $3);
					}
					| E TK_BIG_EQ E
					{
						$$ = makeExpression($1, ">=", $3);
					}

					| E TK_SMALL_EQ E
					{
						$$ = makeExpression($1, "<=", $3);
					}

					| E TK_EQ E
					{
						$$ = makeExpression($1, "==", $3);
					}
					| E TK_NOT_EQ E
					{
						$$ = makeExpression($1, "!=", $3);
					}
//------------------------------------------------------------------------------
					| E TK_EXPLICIT_CONVERTER TYPE
					{
						$$ = resolveExplicitConversion($1, $3);
					}
					;
//------------------------------------------------------------------------------
TYPE:
					TK_TYPE_BOOL	{$$.translation = "bool";}
					| TK_TYPE_INT	{$$.translation = "int";}
					| TK_TYPE_CHAR	{$$.translation = "char";}
					| TK_TYPE_FLOAT	{$$.translation = "float";}
					;
//------------------------------------------------------------------------------
%%

#include "lex.yy.c"

int yyparse();


int main( int argc, char* argv[] )
{
	iniciateCoercionTable();
	
	yyparse();

	return 0;
}