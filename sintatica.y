%{
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <bits/stdc++.h>
#include <unordered_map>
#include "headers/main.hpp"

#define YYSTYPE atributo


using namespace std;

%}
%token TK_MAIN TK_ID
%token TK_NUM TK_REAL TK_CHAR TK_STRING TK_BOOL
%token TK_TIPO_INT TK_TIPO_FLOAT TK_TIPO_BOOL TK_TIPO_CHAR TK_TIPO_STRING
%token TK_FIM TK_ERROR

%start S

%left '+'

%%

S 		    : TK_TIPO_INT TK_MAIN '(' ')' BLOCO
					{
						cout << "//<<<<Bala Compiler>>>>\n" << "#include <iostream>\n#include<string.h>\n#include<stdio.h>\n"+declararVariaveis()+"\nint main(void)\n{\n" << $5.traducao << "\treturn 0;\n}" << endl; 
					}
					;

BLOCO		  : '{' COMANDOS '}'
					{
						$$.traducao = $2.traducao;
					}
					;

COMANDOS	: COMANDO COMANDOS
					{
						$$.traducao = $1.traducao + $2.traducao;
					}
					|
					{
						$$.traducao = "";
					}
					;

COMANDO 	: E ';'
					| TK_TIPO_INT TK_ID ';'
					{
						inserirSimboloNaTabela($2.label, "int", $$, true);
						$$.traducao = DEFAULT_INT; +"\t" + $$.label + " = " + $1.label + ";\n";
					}
					| TK_TIPO_FLOAT TK_ID ';'
					{
						inserirSimboloNaTabela($2.label, "float", $$, true);
						$$.traducao = DEFAULT_FLOAT; +"\t" + $$.label + " = " + $1.label + ";\n";
					}
					| TK_TIPO_CHAR TK_ID ';'
					{
						inserirSimboloNaTabela($2.label, "char", $$, true);
						$$.traducao = DEFAULT_CHAR; +"\t" + $$.label + " = " + $1.label + ";\n";
					}
					| TK_TIPO_STRING TK_ID ';'
					{
						inserirSimboloNaTabela($2.label, "string", $$, true);
						$$.traducao = DEFAULT_STRING; +"\t" + $$.label + " = " + $1.label + ";\n";
					}
					| TK_TIPO_BOOL TK_ID ';'
					{
						inserirSimboloNaTabela($2.label, "bool", $$, true);
						$$.traducao = DEFAULT_BOOL; +"\t" + $$.label + " = " + $1.label + ";\n";
					}
					;

E			 		: E '*' E
					{
						$$.label = createTempCode();
						$$.tipo = $1.tipo;
						inserirTemporaria($$.label, $1.tipo);
						$$.traducao = $1.traducao + $3.traducao +"\t" + $$.label + " = " + $1.label + " * " + $3.label + ";\n";
					}
					| E '/' E
					{
						$$.label = createTempCode();
						$$.traducao = $1.traducao + $3.traducao +"\t" + $$.label + " = " + $1.label + " / " + $3.label + ";\n";
					}
					| E '+' E
					{
						$$.label = createTempCode();
						$$.traducao = $1.traducao + $3.traducao +"\t" + $$.label + " = " + $1.label + " + " + $3.label + ";\n";
					}
					| E '-' E
					{
						$$.label = createTempCode();
						$$.traducao = $1.traducao + $3.traducao +"\t" + $$.label + " = " + $1.label + " - " + $3.label + ";\n";
					}
					| TK_ID '=' E 
					{
						$$ = realizarAtribuicao($$, $1, $3);
					}
					| TK_NUM
					{
						$$ = criarTK_TYPE($$, "int", $1);
					}
					| TK_REAL
					{
						$$ = criarTK_TYPE($$, "float", $1);
					}
					| TK_CHAR
					{
						$$ = criarTK_TYPE($$, "char", $1);
					}
					| TK_STRING
					{
						$$ = criarTK_TYPE($$, "string", $1);
					}
					| TK_BOOL
					{
						$$ = criarTK_TYPE($$, "bool", $1);
					}
					| TK_ID
					{
						$$ = criarTK_ID($$, $1);
					}
					;
%%

#include "lex.yy.c"

int yyparse();


int main( int argc, char* argv[] )
{
	count_var = 0;

	inicializarTabelaCoercao();
	
	yyparse();

	return 0;
}