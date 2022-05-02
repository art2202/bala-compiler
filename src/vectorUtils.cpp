#include "../headers/vectorUtils.hpp"
#include "../headers/utils.hpp"
#include "../headers/symbols.hpp"
#include "../headers/type.hpp"
#include "../headers/assignment.hpp"
#include <iostream>
#include <sstream>


using namespace std;

VectorMap vectorMap;


Attribute createCopyToMakeVectorAssignment(Attribute actual, Symbol variableSymbol)
{
    variableSymbol = removePointerOfVectorType(variableSymbol);

    Attribute copy = createActualAttribute(variableSymbol.type);
    declareTK_TYPE(variableSymbol.type, actual, copy);

    return copy;
}

Symbol removePointerOfVectorType(Symbol variableSymbol)
{
    // remove pointer of type. ex: int* to int
    stringstream sstream(variableSymbol.type);
    string type;
    getline(sstream, type, '*');
    variableSymbol.type = type;
    return variableSymbol;
}

void validateVector(string type)
{
    if(type != "int") { yyerror("The vector size must be an integer type."); }
}

void pushVector(Vector vector)
{
	string label = vector.label;
    vectorMap[label] = vector;
}

Vector searchVector(string label)
{
	Vector vetor = vectorMap[label];
    if(vetor.label == "") {yyerror(label + " is not a vector."); }
    return vetor;
}

Vector createVector(string type, string label, string name, string size)
{
    Vector _vector;
    _vector.type = type;
    _vector.label = label;
    _vector.name = name;
    _vector.size = size;
    return _vector;
}