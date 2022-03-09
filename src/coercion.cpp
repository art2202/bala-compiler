#include "../headers/coercion.hpp"

using namespace std;


map<TripleKey, Coercao> tabelaCoercao;



Coercao getCoercao(string tipo1, string operador, string tipo2)
{
	TripleKey key(tipo1, operador, tipo2);
	
	if (tabelaCoercao.find(key) != tabelaCoercao.end())
	{
		return tabelaCoercao[key];
	}

	Coercao naoEncontrada = {"NULL", "NULL"};
	return naoEncontrada;
}


TripleKey gerarKey(string a , string b, string c)
{
	TripleKey key(a , b, c);

	return key;
}

void inicializarTabelaCoercao()
{
	tabelaCoercao[gerarKey("int" , "+" , "int")] = {"int", "int"};
	tabelaCoercao[gerarKey("int" , "-" , "int")] = {"int", "int"};
	tabelaCoercao[gerarKey("int" , "*" , "int")] = {"int", "int"};
	tabelaCoercao[gerarKey("int" , "/" , "int")] = {"int", "int"};

	tabelaCoercao[gerarKey("float", "+", "float")] = {"float", "float"};
	tabelaCoercao[gerarKey("float", "-", "float")] = {"float", "float"};
	tabelaCoercao[gerarKey("float", "*", "float")] = {"float", "float"};
	tabelaCoercao[gerarKey("float", "/", "float")] = {"float", "float"};

	tabelaCoercao[gerarKey("int", "+", "float")] = {"float", "float"};
	tabelaCoercao[gerarKey("int", "-", "float")] = {"float", "float"};
	tabelaCoercao[gerarKey("int", "*", "float")] = {"float", "float"};
	tabelaCoercao[gerarKey("int", "/", "float")] = {"float", "float"};

	tabelaCoercao[gerarKey("float", "+", "int")] = {"float", "float"};
	tabelaCoercao[gerarKey("float", "-", "int")] = {"float", "float"};
	tabelaCoercao[gerarKey("float", "*", "int")] = {"float", "float"};
	tabelaCoercao[gerarKey("float", "/", "int")] = {"float", "float"};

	tabelaCoercao[gerarKey("int", "=", "float")] = {"int", "int"};
	tabelaCoercao[gerarKey("float", "=", "int")] = {"float", "float"};
}