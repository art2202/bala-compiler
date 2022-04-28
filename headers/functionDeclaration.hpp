
#ifndef FUNCTIONDECLARATION_H
#define FUNCTIONDECLARATION_H

#include "struct.hpp"
#include "functionUtils.hpp"


using namespace structs;


Attribute makeParametersFunction(Attribute actual, string previousParameters, Attribute type, Attribute tk_id);
Attribute makeFunctionAux(Attribute actual, Attribute returnType, Attribute previousParameters, Attribute parameters);
Attribute makeFunction(Attribute actual, Attribute functionAux, Attribute command);
Attribute makeReturn(Attribute actual, Attribute expression);

#endif