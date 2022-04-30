#ifndef ASSIGNMENT_H
#define ASSIGNMENT_H

#include "struct.hpp"


using namespace structs;

Attribute verifyIfStringType(Symbol leftSymbol, Attribute actual, Attribute left, Attribute right, string operation);
void verifyIfIsNotDeclaredAnywere(Attribute attribute);

Attribute makeAssignment(Attribute actual, Attribute left, Attribute right, string operation);
Attribute makeDeclarationWithAssignmentVar(Attribute actual, Attribute left, Attribute right, string operation);

Attribute makeAssignmentDefault(Attribute actual, Attribute left, Attribute right, Symbol leftSimbol, string operation);
Attribute makeAssignmentString(Attribute actual, Attribute left, Attribute right, Symbol leftSimbol, string operation);

Attribute makeCompousedOperator(Attribute actual, Attribute left, string operation, Attribute right);
Attribute makeUnaryOperator(Attribute actual, Attribute left, string operation);

#endif