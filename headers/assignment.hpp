#ifndef ASSIGNMENT_H
#define ASSIGNMENT_H

#include "../headers/struct.hpp"


using namespace structs;

Attribute makeAssignment(Attribute actual, Attribute left, Attribute right);

Attribute makeAssignmentDefault(Attribute actual, Attribute left, Attribute right, Symbol leftSimbol, string operation);
Attribute makeAssignmentString(Attribute actual, Attribute left, Attribute right, Symbol leftSimbol, string operation);
void validateTK_ID(Attribute attribute);

#endif