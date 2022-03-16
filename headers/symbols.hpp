#ifndef SYMBOLS_H
#define SYMBOLS_H

#include <string>
#include "../headers/struct.hpp"


using namespace structs;

Attribute createActualAttribute(string type);
string declareVariables();
string declareDefines();
void addSymbolInTable(string label, string type, Attribute actual);
int findSymbol(string name);
Symbol getSymbol(string label);

#endif