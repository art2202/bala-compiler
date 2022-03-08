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
extern string DEFAULT_CHAR;
extern string DEFAULT_STRING;
extern bool DEFAULT_BOOL;



// count temps
extern int count_var;



// vectrs ans maps
extern vector<Simbolo> tabelaSimbolos;
extern unordered_map<string, string> temporarias;



// funcs
int yylex(void);
void yyerror(string);
string createTempCode();
string intToString(int value);
string declararVariaveis();
TripleKey gerarKey(string , string, string);
void inicializarTabelaCoercao();
int find(vector<Simbolo> vetor, string nome);
void inserirSimboloNaTabela(string label, string tipo, Atributo atual, bool inicializado);
void inserirTemporaria(string label, string tipo);
Coercao resolverTipo(string tipo1, string operador, string tipo2);

Atributo criarTK_ID(Atributo atual, Atributo valor);
Atributo criarTK_TYPE(Atributo atual, string tipo, Atributo valor);

void validarTK_ID(Atributo atributo);

Atributo realizarAtribuicao(Atributo atual, Atributo destino, Atributo valor);
Atributo realizarOperacao(Atributo atual, Atributo destino, Atributo operacao, Atributo valor);

#endif