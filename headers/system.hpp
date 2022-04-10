#ifndef SYSTEM_H
#define SYSTEM_H

#include <iostream>
#include <string>
#include <sstream>
#include <vector>
//#include <bits/stdc++.h>
#include <unordered_map>
#include "../headers/assignment.hpp"
#include "../headers/coercion.hpp"
#include "../headers/expression.hpp"
#include "../headers/explicitConversion.hpp"
#include "../headers/type.hpp"
#include "../headers/utils.hpp"
#include "../headers/symbols.hpp"
#include "../headers/scope.hpp"

using namespace std;

string iniciate();
string getDefines();
string getTemps();
string getCurrentBlockSymbols();
string getVisiblesSymbols();

#endif