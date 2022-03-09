#ifndef COERCION_H
#define COERCION_H

#include <iostream>
#include <string>
#include <sstream>
#include <unordered_map>
#include <map>
#include <vector>
#include "../headers/struct.hpp"


using namespace std;


typedef tuple<string, string, string> TripleKey;
extern map<TripleKey, Coercao> tabelaCoercao;



void inicializarTabelaCoercao();
TripleKey gerarKey(string , string, string);
Coercao getCoercao(string tipo1, string operador, string tipo2);

#endif