
#ifndef FUNCTIONCALL_H
#define FUNCTIONCALL_H

#include "struct.hpp"
#include "functionUtils.hpp"


using namespace structs;


void updateFunctionCall(string typeExpression);
void resetFunctionCall();
vector<Function> searchFunction(string name);
Attribute makeArgument(Attribute actual, attribute expression);
Attribute makeArguments(Attribute actual, Attribute previousArguments, attribute expression);
Attribute makeCallFunction(Attribute actual, Attribute left, Attribute arguments);

#endif