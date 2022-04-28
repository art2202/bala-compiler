#ifndef SYMBOLS_H
#define SYMBOLS_H

#include <string>
#include "struct.hpp"


using namespace structs;


Attribute createActualAttribute(string type);
Symbol createSymbol(string variableName, string type, string tempName);
void addSymbol(Symbol symbol);
void variableHasAlreadyBeenDeclared(Symbol symbol, string message);
void variableHasNotBeenDeclared(Symbol symbol, string message);

#endif