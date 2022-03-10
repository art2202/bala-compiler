%{
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <bits/stdc++.h>
#include <unordered_map>
#include "headers/attribuition.hpp"
#include "headers/coercion.hpp"
#include "headers/expression.hpp"
#include "headers/type.hpp"
#include "headers/utils.hpp"
#include "headers/symbols.hpp"


#define YYSTYPE attribute


using namespace std;

int yylex(void);


%}
%token TK_MAIN TK_ID
%token TK_NUM TK_REAL TK_CHAR TK_STRING TK_BOOL
%token TK_TYPE_INT TK_TYPE_FLOAT TK_TYPE_BOOL TK_TYPE_CHAR TK_TYPE_STRING
%token TK_FIM TK_ERROR

%start S

%left '+' '-'
%left '*' '/'

%%

S					: TK_TYPE_INT TK_MAIN '(' ')' BLOCK
					{
						cout << "//<<<<Bala Compiler>>>>\n" << "#include<iostream>\n#include<string.h>\n#include<stdio.h>\n"+declareVariables()+"\nint main(void)\n{\n" << $5.translation << "\treturn 0;\n}" << endl; 
					}
					;

BLOCK		  : '{' COMMANDS '}'
					{
						$$.translation = $2.translation;
					}
					;

COMMANDS	: COMMAND COMMANDS
					{
						$$.translation = $1.translation + $2.translation;
					}
					|
					{
						$$.translation = "";
					}
					;

COMMAND 	: E ';'
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
					| TK_TYPE_STRING TK_ID ';'
					{
						$$ = declareTK_TYPE("string", $$, $1, $2);
					}
					| TK_TYPE_BOOL TK_ID ';'
					{
						$$ = declareTK_TYPE("bool", $$, $1, $2);
					}
					;

E			 		: E '*' E
					{
						$$ = makeExpression($$, $1, "*", $3);
					}
					| E '/' E
					{
						$$ = makeExpression($$, $1, "/", $3);
					}
					| E '+' E
					{
						$$ = makeExpression($$, $1, "+", $3);
					}
					| E '-' E
					{
						$$ = makeExpression($$, $1, "-", $3);
					}
					| TK_ID '=' E 
					{
						$$ = makeAttribution($$, $1, $3);
					}
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
					| TK_STRING
					{
						$$ = createTK_TYPE($$, "string", $1);
					}
					| TK_BOOL
					{
						$$ = createTK_TYPE($$, "bool", $1);
					}
					| TK_ID
					{
						$$ = createTK_ID($$, $1);
					}
					;
%%

#include "lex.yy.c"

int yyparse();


int main( int argc, char* argv[] )
{
	iniciateCoercionTable();
	
	yyparse();

	return 0;
}