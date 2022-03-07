%{
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <bits/stdc++.h>
#include <unordered_map>

#define YYSTYPE atributos
#define TIPO_SIMBOLO simbolos

using namespace std;

struct atributos
{
	string label;
	string traducao;
	string tipo;
};

struct simbolos
{
	bool inicializado = false;
	string valor;
	string nome;
	string tipo;
};

int count_var;
vector<TIPO_SIMBOLO> tabelaSimbolos;
unordered_map<string, string> temporarias;

int yylex(void);
void yyerror(string);
string createTempCode();
string intToString(int value);
void addSimboloNaTabela(string label, string tipo, YYSTYPE atributoCorrente, bool inicializado, string defaultvalue);
void verificarSeVariavelFoiInicializada(string label);
int find(vector<TIPO_SIMBOLO> vetor, string nome);
string declararVariaveis();
void inserirTemporaria(string label, string tipo);
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
						addSimboloNaTabela($2.label, "int", $$, true, "0");
					}
					| TK_TIPO_FLOAT TK_ID ';'
					{
						addSimboloNaTabela($2.label, "float", $$, true, "0.0");
					}
					| TK_TIPO_CHAR TK_ID ';'
					{
						addSimboloNaTabela($2.label, "char", $$, true, "");
					}
					| TK_TIPO_BOOL TK_ID ';'
					{
						addSimboloNaTabela($2.label, "bool", $$, true, "false");
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
						$$.tipo = $3.tipo;
						$$.traducao = $1.traducao + $3.traducao +  "\t" + $1.label + " = " + $3.label + ";\n";
					}
					| TK_NUM
					{
						$$.label = createTempCode();
						$$.tipo = "int";
						inserirTemporaria($$.label, $$.tipo);
						$$.traducao = "\t" + $$.label + " = " + $1.label + ";\n";
					}
					| TK_ID
					{
						int posicao = find(tabelaSimbolos, $1.label);
						TIPO_SIMBOLO simbolo = tabelaSimbolos[posicao];
						$$.label = simbolo.nome;
						$$.tipo = simbolo.tipo;
					}
					;
%%

#include "lex.yy.c"

int yyparse();


int main( int argc, char* argv[] )
{
	count_var = 0;

	yyparse();

	return 0;
}

string createTempCode()
{
	count_var++;
	return "t" + intToString(count_var);
}

string declararVariaveis()
{
	string resultado = "";
	for(auto &x: temporarias){
		resultado = resultado + x.second + " " +x.first + ";\n";
	}
	for(int i = 0; i < tabelaSimbolos.size(); i++){
		resultado = resultado + tabelaSimbolos[i].tipo + " " +tabelaSimbolos[i].nome + ";\n";
	}
	return resultado;
}

void inserirTemporaria(string label, string tipo)
{
  temporarias[label] = tipo;
}

string intToString(int value)
{
	return to_string(value);
}

void addSimboloNaTabela(string label, string tipo, YYSTYPE atributoCorrente, bool inicializado, string defaultvalue)
{
	TIPO_SIMBOLO simbolo;
	
	simbolo.nome = label;
	simbolo.tipo = tipo;
	simbolo.inicializado = inicializado;
	simbolo.valor = defaultvalue;

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