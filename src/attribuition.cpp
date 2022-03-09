#include "../headers/attribuition.hpp"
#include "../headers/utils.hpp"
#include "../headers/symbols.hpp"


using namespace std;



extern Atributo resolverTipoAtribuicao(Atributo leftAtribute, string operador, Atributo rightAtribute);



Atributo realizarAtribuicao(Atributo atual, Atributo leftAtribute, Atributo rightAtribute)
{
	validarTK_ID(atual);
	string operador = "=";

	Simbolo leftSimbol = getSimbolo(leftAtribute.label);
	if(leftSimbol.tipo == rightAtribute.tipo)
	{
		atual.traducao = leftAtribute.traducao + rightAtribute.traducao + "\t" + leftSimbol.nome + " " + operador + " " + rightAtribute.label + ";\n";
	}
	else 
	{
		Atributo novoAtual = resolverTipoAtribuicao(leftAtribute, operador, rightAtribute);
		return novoAtual;
	}

	return atual;
}

void validarTK_ID(Atributo atributo)
{
	int posicao = findSimbolo(atributo.label);
	if (posicao < 0)
	{
		yyerror("TK_ID '" +  atributo.label + "' is not defined. Please defines a type to '" +  atributo.label + "'.\n");
	}
}