#ifndef UTILS_H
#define UTILS_H

#include <iostream>
#include <string>
#include <sstream>
#include <unordered_map>
#include <vector>
#include <map>
#include "../headers/struct.hpp"


using namespace std;


void yyerror(string);
string createTempCode();
string intToString(int value);
void inserirTemporaria(string label, string tipo);

#endif