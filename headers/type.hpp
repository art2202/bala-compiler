#ifndef TYPE_H
#define TYPE_H

#include <string>
#include "../headers/struct.hpp"


using namespace structs;


Attribute createTK_ID(Attribute actual, Attribute value);
Attribute createTK_TYPE(Attribute actual, string type, Attribute value);
Attribute declareTK_TYPE(string type, Attribute actual, Attribute left, Attribute right);
void validateTK_TYPE(Attribute attribute);
void variableHasAlreadyBeenDeclared(Symbol symbol, string message);

#endif