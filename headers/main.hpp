#ifndef MAIN_H
#define MAIN_H

#include <iostream>
#include <string>
#include <sstream>
#include <unordered_map>
#include <map>
#include <vector>

using namespace std;


typedef tuple<string, string, string> TripleKey;

typedef struct atributo
{
	string label;
	string traducao;
	string tipo;
} Atributo;

typedef struct simbolo
{
	bool inicializado = false;
	string nome;
	string tipo;
} Simbolo;

typedef struct coercao
{
	string retornoTipo;
  string conversaoTipo;
} Coercao;



extern int DEFAULT_INT;
extern float DEFAULT_FLOAT;
extern char DEFAULT_CHAR;
extern string DEFAULT_STRING;
extern bool DEFAULT_BOOL;


extern int count_var;


extern vector<Simbolo> tabelaSimbolos;
extern unordered_map<string, string> temporarias;
extern map<TripleKey, Coercao> tabelaCoercao;



// funcs
int yylex(void);
void yyerror(string);
string createTempCode();
string intToString(int value);
string declararVariaveis();

void inserirSimboloNaTabela(string label, string tipo, Atributo atual);
void inserirTemporaria(string label, string tipo);

void inicializarTabelaCoercao();
TripleKey gerarKey(string , string, string);
Coercao getCoercao(string tipo1, string operador, string tipo2);
Atributo resolverTipoExpresao(Atributo destino, string operador, Atributo valor);
Atributo resolverTipoAtribuicao(Atributo leftAtribute, string operador, Atributo rightAtribute);


int find(vector<Simbolo> vetor, string nome);
Simbolo getSimbolo(string label);
void validarTK_ID(Atributo atributo);

Atributo criarTK_ID(Atributo atual, Atributo valor);
Atributo criarTK_TYPE(Atributo atual, string tipo, Atributo valor);

Atributo realizarAtribuicao(Atributo atual, Atributo destino, Atributo valor);
Atributo realizarExpressao(Atributo atual, Atributo destino, string operacao, Atributo valor);

Atributo declararTK_TIPO(string type, Atributo atual, Atributo destino, Atributo valor);

#endif