#ifndef IMPLICITCONVERSION_H
#define IMPLICITCONVERSION_H

#include <iostream>
#include <string>
#include <sstream>
#include <unordered_map>
#include <map>
#include "../headers/struct.hpp"


using namespace std;



Atributo criarAtributoAtual(Coercao coercao);
Atributo resolverTipoAtribuicao(Atributo leftAtribute, string operador, Atributo rightAtribute);
Atributo resolverTipoExpressao(Atributo leftAtribute, string operador, Atributo rightAtribute);

#endif