#ifndef VECTORUTILS_H
#define VECTORUTILS_H

#include "struct.hpp"
#include <unordered_map>


using namespace structs;


typedef struct _vector
{
    string type;
    string label;
    string name;
    string size;
} Vector;

typedef unordered_map<string,Vector> VectorMap;

Attribute createCopyToMakeVectorAssignment(Attribute actual, Symbol variableSymbol);
Symbol removePointerOfVectorType(Symbol variableSymbol);
void validateVector(string type);
void pushVector(Vector vector);
Vector searchVector(string name);
Vector createVector(string type, string label, string name, string size);

#endif