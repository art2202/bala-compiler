#ifndef COERCION_H
#define COERCION_H

#include <string>
#include <map>

using namespace std;

typedef struct coercion
{
  string returnedType;
  string conversionType;
} Coercion;

typedef struct stringCoercion
{
  string resultLabelStrcmpCompareSholdBe;
  string operatorToCheck;
} StringCoercion;


typedef tuple<string, string, string> TripleKey;
extern map<TripleKey, Coercion> coercionTable;
extern map<string, StringCoercion> stringCoercionTable;


TripleKey generateKey(string , string, string);
void iniciateCoercionTable();
Coercion getCoercion(string type1, string operation, string type2);

void iniciateStringCoercionTable();
StringCoercion getStringCoercion(string operation);

#endif