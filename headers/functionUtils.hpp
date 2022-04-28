
#ifndef FUNCTIONUTILS_H
#define FUNCTIONUTILS_H

#include "struct.hpp"
#include <unordered_map>
#include <vector>
#include <stack>


using namespace structs;


extern string functions;

typedef struct function
{
    string label;
    string returnType;
    string name;
    vector<string> parameters;
    int numParameters;
} Function;

typedef stack<string> FunctionStack;
typedef unordered_map<string,vector<Function>> FunctionMap;

//------------------------------------------------
Function createFunction(string label, string name, string returnType, int numAttributes, vector<string> typeAttributes);
void pushFunction(string);
void popFunction();
string getTopFunction();
//------------------------------------------------
bool tryAddFunction(Function function);
bool checkOverload(Function function, string name);
//------------------------------------------------
bool hasAnyFunction();
void updateFunctionTranslation(Attribute actual);
//------------------------------------------------

#endif