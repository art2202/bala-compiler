#ifndef SYMBOLS_H
#define SYMBOLS_H

#include <string>
#include "../headers/struct.hpp"


using namespace structs;


Attribute createActualAttribute(string type);
Symbol createSymbol(string variableName, string type, string tempName);
void addSymbol(Symbol symbol);
void variableHasAlreadyBeenDeclared(Symbol symbol, string message);
void variableHasNotBeenDeclared(Symbol symbol, string message);


// v1 -----------------------------
// not more used
void addSymbolInTable(string label, string type, Attribute actual);
int findSymbol(string name);
Symbol getSymbol(string label);

#endif