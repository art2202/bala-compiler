#ifndef SYMBOLS_H
#define SYMBOLS_H

#include <string>
#include "../headers/struct.hpp"


using namespace structs;


string declareVariables();
void addSymbolInTable(string label, string type, Attribute actual);
int findSymbol(string name);
Symbol getSymbol(string label);

#endif