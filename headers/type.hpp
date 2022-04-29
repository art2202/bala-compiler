#ifndef TYPE_H
#define TYPE_H

#include <string>
#include "struct.hpp"


using namespace structs;


Attribute createTK_ID(Attribute actual, Attribute value);
Attribute createTK_TYPE(Attribute actual, string type, Attribute value);
Attribute declareTK_TYPE(string type, Attribute actual, Attribute right);
void declareTK_TYPE_SetNotDefaultValue(Attribute actual, Attribute attribute, string type);
void verifyIfDeclaredInCurrentScope(Attribute attribute);
void variableHasAlreadyBeenDeclared(Symbol symbol, string message);
Attribute createTK_TYPE_STRING(Attribute actual, string type, Attribute right);
string createStringSizeLabel(string label);
Attribute setDefaultValue(Symbol currentSymbol, Attribute actual, Attribute right);

#endif