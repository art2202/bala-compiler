#ifndef SCOPE_H
#define SCOPE_H_H

#include <iostream>
#include <vector>
#include <unordered_map>
#include "../headers/symbols.hpp"


using namespace std;


typedef unordered_map<string, Symbol> VariableTable; // <actualScope, Symbol>

typedef struct stackMap
{
  vector<VariableTable> scopes;
  int actualScope;
} StackMap;

typedef StackMap* StackMapPtr;


void pushScope(StackMapPtr, VariableTable);
VariableTable popScope(StackMapPtr);
StackMapPtr createMapStack();

Symbol addSymbolInScope (StackMapPtr stack, string label, string type, Attribute actual);
Symbol addSymbolInSuperiorScope(StackMapPtr, Symbol);
Symbol addSymbolInGlobalScope (StackMapPtr, Symbol);

Symbol getSymbolAnywere(string label);
Symbol getSymbolTop(string label);
Symbol getSymbolGlobal(string label);

string getAllSymbols();


extern StackMapPtr StackContext;

#endif