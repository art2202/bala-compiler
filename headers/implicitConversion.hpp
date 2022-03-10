#ifndef IMPLICITCONVERSION_H
#define IMPLICITCONVERSION_H

#include "../headers/struct.hpp"


using namespace structs;


Attribute createActualAttribute(Coercion coercion);
Attribute resolveAttributionType(Attribute left, string operation, Attribute right);
Attribute resolveExpressionType(Attribute left, string operation, Attribute right);

#endif