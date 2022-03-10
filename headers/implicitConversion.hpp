#ifndef IMPLICITCONVERSION_H
#define IMPLICITCONVERSION_H

#include "../headers/struct.hpp"


using namespace structs;


Attribute resolveAssignmentType(Attribute left, string operation, Attribute right);
Attribute resolveExpressionType(Attribute left, string operation, Attribute right);

#endif