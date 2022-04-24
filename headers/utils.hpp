#ifndef UTILS_H
#define UTILS_H

#include <string>
#include "../headers/struct.hpp"


using namespace std;


void yyerror(string);
string createTempCode();
string createVariable();
string createGotoLabel();
string createStringSizeLabel(string label);
string intToString(int value);
void addTemporary(string label, string type);
void validateReturnedType(string returnedType, string leftType, string rightType);


#endif