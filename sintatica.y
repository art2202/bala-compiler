%{
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <bits/stdc++.h>

#define YYSTYPE atributos
#define TIPO_SIMBOLO simbolos

using namespace std;

struct atributos
{
	string label;
	string traducao;
};

struct simbolos
{
	bool inicializado = false;
	string nome;
	string tipo;
};

int count_var;
vector<TIPO_SIMBOLO> tabelaSimbolos;

int yylex(void);
void yyerror(string);
string createTempCode();
string intToString(int value);
void addSimboloNaTabela(string label, string tipo, YYSTYPE atributoCorrente);
void verificarSeVariavelFoiInicializada(string label);
int find(vector<TIPO_SIMBOLO> vetor, string nome);
%}

%token TK_NUM
%token TK_MAIN TK_ID TK_TIPO_INT
%token TK_TIPO_BOOL TK_TIPO_FLOAT TK_TIPO_CHAR
%token TK_FIM TK_ERROR

%start S

%left '+'

%%

S 		    : TK_TIPO_INT TK_MAIN '(' ')' BLOCO
					{
						cout << "<<<<Bala Compiler>>>>\n" << "#include <iostream>\n#include<string.h>\n#include<stdio.h>\nint main(void)\n{\n" << $5.traducao << "\treturn 0;\n}" << endl; 
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
						addSimboloNaTabela($2.label, "int", $$);
					}
					| TK_TIPO_FLOAT TK_ID ';'
					{
						addSimboloNaTabela($2.label, "float", $$);
					}
					| TK_TIPO_CHAR TK_ID ';'
					{
						addSimboloNaTabela($2.label, "char", $$);
					}
					| TK_TIPO_BOOL TK_ID ';'
					{
						addSimboloNaTabela($2.label, "bool", $$);
					}
					;

E			 		: E '*' E
					{
						verificarSeVariavelFoiInicializada($1.label);
						verificarSeVariavelFoiInicializada($3.label);

						$$.label = createTempCode();
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
						$$.traducao = $1.traducao + $3.traducao +  "\t" + $1.label + " = " + $3.label + ";\n";
					}
					| TK_NUM
					{
						
						$$.label = createTempCode();
						$$.traducao = "\t" + $$.label + " = " + $1.label + ";\n";
					}
					| TK_ID
					{
						$$.label = createTempCode();
						$$.traducao = "\t" + $$.label + " = " + $1.label + ";\n";	
					}
					;

%%

#include "lex.yy.c"

int yyparse();


int main( int argc, char* argv[] )
{
	TIPO_SIMBOLO valor;
	valor.nome = "score";
	valor.tipo = "int";
	cout << valor.nome << endl;

	tabelaSimbolos.push_back(valor);
	
	cout << tabelaSimbolos.size() << endl;
	cout << tabelaSimbolos[0].nome << endl;

	count_var = 0;
	yyparse();

	return 0;
}

string createTempCode()
{
	count_var++;
	return "t" + intToString(count_var);
}

string intToString(int value)
{
	return to_string(value);
}

void addSimboloNaTabela(string label, string tipo, YYSTYPE atributoCorrente)
{
	TIPO_SIMBOLO simbolo;
	simbolo.nome = label;
	simbolo.tipo = "tipo";

	tabelaSimbolos.push_back(simbolo);

	atributoCorrente.traducao = "";
	atributoCorrente.label = "";
}

void verificarSeVariavelFoiInicializada(string label)
{
	int posicao = find(tabelaSimbolos, label);
	if (posicao < 0)
	{
		yyerror("Variável não declarada.");	
	}
	if(tabelaSimbolos[posicao].inicializado == false)
	{
		yyerror("Variável não inicializada.");
	}
}

int find(vector<TIPO_SIMBOLO> vetor, string nome)
{
	for(int i = 0; i < vetor.size(); i++)
	{
		if(vetor[i].nome == nome)
		{
			return i;
		}
	}
	return -1;
}

void yyerror(string MSG)
{
	cout << MSG << endl;
	exit (0);
}