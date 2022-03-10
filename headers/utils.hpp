#ifndef UTILS_H
#define UTILS_H

#include <string>
#include "../headers/struct.hpp"


using namespace std;


void yyerror(string);
string createTempCode();
string intToString(int value);
void addTemporary(string label, string type);

#endif