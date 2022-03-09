#include "../headers/expression.hpp"

using namespace std;


extern Atributo resolverTipoExpressao(Atributo leftAtribute, string operador, Atributo rightAtribute);



Atributo realizarExpressao(Atributo atual, Atributo destino, string operacao, Atributo valor)
{
	Atributo novoAtual = resolverTipoExpressao(destino, operacao, valor);
	
	return novoAtual;
}