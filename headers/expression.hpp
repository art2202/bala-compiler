#ifndef EXPRESSION_H
#define EXPRESSION_H

#include <string>
#include "struct.hpp"


using namespace structs;


Attribute makeExpression(Attribute left, string operation, Attribute right);
Attribute makeTK_NOT(Attribute actual, Attribute right);

#endif