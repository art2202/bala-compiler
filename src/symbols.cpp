#include "../headers/symbols.hpp"
#include <vector>


using namespace std;

extern unordered_map<string, string> temporarias;
vector<Simbolo> tabelaSimbolos;


void inserirSimboloNaTabela(string label, string tipo, Atributo atual)
{
	Simbolo simbolo;
	
	simbolo.nome = label;
	simbolo.tipo = tipo;
	simbolo.inicializado = true;

	tabelaSimbolos.push_back(simbolo);

	atual.traducao = "";
	atual.label = "";
}

int findSimbolo(string nome)
{
	for(int i = 0; i < tabelaSimbolos.size(); i++)
	{
		if(tabelaSimbolos[i].nome == nome)
		{
			return i;
		}
	}
	return -1;
}

Simbolo getSimbolo(string label)
{
	int posicao = findSimbolo(label);
	return tabelaSimbolos[posicao];
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