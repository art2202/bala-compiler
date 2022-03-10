#ifndef EXPRESSION_H
#define EXPRESSION_H

#include <string>
#include "../headers/struct.hpp"


using namespace structs;


Attribute makeExpression(Attribute actual, Attribute left, string operation, Attribute right);

#endif