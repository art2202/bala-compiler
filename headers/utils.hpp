#ifndef UTILS_H
#define UTILS_H

#include <string>
#include "struct.hpp"


using namespace std;


void yyerror(string);
string createTempCode();
string createVariableCode();
string createFunctionCode();
string createGotoLabel();
string createStringSizeLabel(string label);
string intToString(int value);
void addTemporary(string label, string type);
void validateReturnedType(string returnedType, string leftType, string rightType);

#endif