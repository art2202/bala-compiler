#ifndef VECTORUTILS_H
#define VECTORUTILS_H

#include "struct.hpp"
#include <unordered_map>


using namespace structs;


Attribute createCopyToMakeVectorAssignment(Attribute actual, Symbol variableSymbol);
Symbol removePointerOfVectorType(Symbol variableSymbol);
void validateVector(string type);

#endif