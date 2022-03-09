#include "../headers/type.hpp"
#include "../headers/utils.hpp"
#include "../headers/symbols.hpp"


using namespace std;


int DEFAULT_INT = 0;
float DEFAULT_FLOAT = 0.0;
char DEFAULT_CHAR = ' ';
string DEFAULT_STRING = "\0";
bool DEFAULT_BOOL = false;



Atributo declararTK_TIPO(string type, Atributo atual, Atributo destino, Atributo valor)
{
	inserirSimboloNaTabela(valor.label, type, atual);

	if(type == "int") 		{ atual.traducao = DEFAULT_INT;			+"\t" + atual.label + " = " + destino.label + ";\n"; 	}
	if(type == "float") 	{ atual.traducao = DEFAULT_FLOAT;		+"\t" + atual.label + " = " + destino.label + ";\n"; 	}
	if(type == "char") 		{ atual.traducao = DEFAULT_CHAR;		+"\t" + atual.label + " = " + destino.label + ";\n"; 	}
	if(type == "string") 	{ atual.traducao = DEFAULT_STRING;	+"\t" + atual.label + " = " + destino.label + ";\n";	}
	if(type == "bool") 		{ atual.traducao = DEFAULT_BOOL;		+"\t" + atual.label + " = " + destino.label + ";\n"; 	}

	return atual;
}

Atributo criarTK_ID(Atributo atual, Atributo valor)
{
	Simbolo simbolo = getSimbolo(valor.label);

	atual.label = simbolo.nome;
	atual.tipo = simbolo.tipo;

	return atual;
}

Atributo criarTK_TYPE(Atributo atual, string tipo, Atributo valor)
{
	atual.label = createTempCode();

	atual.tipo = tipo; // resolvendo tipo

	inserirTemporaria(atual.label, tipo);
	atual.traducao = "\t" + atual.label + " = " + valor.label + ";\n";

	return atual;
}