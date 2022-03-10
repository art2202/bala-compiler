#ifndef COERCION_H
#define COERCION_H

#include <string>
#include <map>
#include "../headers/struct.hpp"


using namespace std;
using namespace structs;


typedef tuple<string, string, string> TripleKey;
extern map<TripleKey, Coercion> coercionTable;


void iniciateCoercionTable();
TripleKey generateKey(string , string, string);
Coercion getCoercion(string type1, string operation, string type2);

#endif