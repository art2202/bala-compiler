#ifndef MATRIX_H
#define MATRIX_H

#include "struct.hpp"
#include <unordered_map>


using namespace structs;

Attribute getMatrixPosition(Attribute actual, Attribute variable, Attribute linePosition, Attribute columnPosition);
Attribute makeMatrix(Attribute actual, Attribute type, Attribute variable, Attribute left, Attribute right);
Attribute setValueInMatrix(Attribute actual, Attribute variable, Attribute linePosition, Attribute columnPosition, Attribute expression);
Attribute makeAssignmentMatrix(Attribute actual, Attribute left, Attribute right, Attribute linePosition, Attribute columnPosition);

#endif