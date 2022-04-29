#ifndef VECTOR_H
#define VECTOR_H

#include "struct.hpp"
#include <unordered_map>


using namespace structs;


Attribute makeVector(Attribute actual, Attribute type, Attribute variable, Attribute expression);
Attribute setValueInVector(Attribute actual, Attribute variable, Attribute position, Attribute expression);
Attribute makeAssignmentVector(Attribute actual, Attribute left, Attribute right, Attribute position);

Attribute createCopyToMakeVectorAssignment(Attribute actual, Symbol variableSymbol);
Symbol removePointerOfVectorType(Symbol variableSymbol);
void validateVector(string type);

#endif