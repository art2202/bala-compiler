#ifndef SYMBOLS_H
#define SYMBOLS_H

#include <iostream>
#include <string>
#include <sstream>
#include <unordered_map>
#include <map>
#include "../headers/struct.hpp"


using namespace std;


string declararVariaveis();
void inserirSimboloNaTabela(string label, string tipo, Atributo atual);
int findSimbolo(string nome);
Simbolo getSimbolo(string label);

#endif