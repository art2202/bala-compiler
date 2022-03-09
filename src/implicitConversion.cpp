#include "../headers/implicitConversion.hpp"
#include "../headers/utils.hpp"
#include "../headers/symbols.hpp"
#include "../headers/coercion.hpp"


using namespace std;



Atributo criarAtributoAtual(Coercao coercao)
{
	Atributo atual;
	atual.label = createTempCode();
	atual.tipo = coercao.retornoTipo;
	inserirTemporaria(atual.label, atual.tipo);

	return atual;
}

Atributo resolverTipoAtribuicao(Atributo leftAtribute, string operador, Atributo rightAtribute)
{
	Simbolo leftSimbol = getSimbolo(leftAtribute.label);

	Coercao coercao = getCoercao(leftSimbol.tipo, operador, rightAtribute.tipo);
	Atributo atual = criarAtributoAtual(coercao);	

	string newTemp = createTempCode();
	inserirTemporaria(newTemp, coercao.conversaoTipo);

	string message = "\t"+ leftSimbol.nome + " " + operador + " ("+ coercao.conversaoTipo +") ", resultado;
	

	if (leftSimbol.tipo != coercao.conversaoTipo)
	{
		atual.traducao = atual.traducao + "\t" + leftSimbol.nome + " " + operador + " (" + coercao.conversaoTipo + ") " + atual.label + ";\n";
	}
	else if (rightAtribute.tipo != coercao.conversaoTipo)
	{
		message += rightAtribute.label;
		resultado = newTemp;
	}
	else
	{
		yyerror("The operation is not set to " + leftSimbol.tipo + " and " + rightAtribute.tipo);
	}
	
	atual.traducao = leftAtribute.traducao + rightAtribute.traducao + message + ";\n";

	return atual;
}
//----------------------------------------------------------------------------------------------------------------------

Atributo resolverTipoExpressao(Atributo leftAtribute, string operador, Atributo rightAtribute)
{
	Coercao coercao = getCoercao(leftAtribute.tipo, operador, rightAtribute.tipo);
	Atributo atual = criarAtributoAtual(coercao);

	if (leftAtribute.tipo == coercao.conversaoTipo && rightAtribute.tipo == coercao.conversaoTipo)
	{
		atual.traducao = leftAtribute.traducao + rightAtribute.traducao + "\t" + atual.label +" = " + leftAtribute.label + " " + operador + " " + rightAtribute.label +";\n";
	}
	else
	{
		string newTemp = createTempCode();
		inserirTemporaria(newTemp, coercao.conversaoTipo);

		string message = "\t"+ newTemp + " = " "("+ coercao.conversaoTipo +") ", resultado;


		if (leftAtribute.tipo != coercao.conversaoTipo)
		{
			message += leftAtribute.label;
			resultado = newTemp + " " + operador + " " + rightAtribute.label;
		}
		else if (rightAtribute.tipo != coercao.conversaoTipo)
		{
			message += rightAtribute.label;
			resultado = leftAtribute.label + " " + operador + " " + newTemp;
		}

		message += ";\n";
		atual.traducao = leftAtribute.traducao + rightAtribute.traducao + message +"\t" + atual.label + " = "  + resultado + ";\n";
	}

	return atual;
}
//----------------------------------------------------------------------------------------------------------------------