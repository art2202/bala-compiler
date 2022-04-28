#ifndef IMPLICITCONVERSION_H
#define IMPLICITCONVERSION_H


#include "struct.hpp"


using namespace structs;


Attribute resolveAssignmentType(Attribute left, string operation, Attribute right);
Attribute resolveExpressionType(Attribute left, string operador, Attribute right);

Attribute resolveExpressionTypeDefault(Attribute left, string operation, Attribute right);
Attribute resolveExpressionTypeString(Attribute left, string operador, Attribute right);

Attribute resolveArithmeticExpressionTypeString(Attribute left, string operador, Attribute right);
Attribute resolveLogicalExpressionTypeString(Attribute left, string operador, Attribute right);

#endif