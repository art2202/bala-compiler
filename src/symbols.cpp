#include "../headers/symbols.hpp"
#include "../headers/utils.hpp"
#include <vector>
#include <unordered_map>
#include <iostream>

using namespace std;


vector<Symbol> allSymbols;


Attribute createActualAttribute(string type)
{
	Attribute actual;
	actual.label = createTempCode();
	actual.type = type;
	addTemporary(actual.label, actual.type);

	return actual;
}

Symbol createSymbol(string variableName, string type, string tempName)
{
	Symbol symbol;

	symbol.label = tempName;
	symbol.name = variableName;
	symbol.type = type;
	symbol.initialized = true;

	return symbol;
}


void addSymbol(Symbol symbol)
{
  allSymbols.push_back(symbol);
}

void variableHasAlreadyBeenDeclared(Symbol symbol, string message)
{
	if(symbol.label != "" && symbol.type != "" && symbol.name != "")
	{
		yyerror(message);
	}
}

void variableHasNotBeenDeclared(Symbol symbol, string message)
{
	if(symbol.label == "" && symbol.type == "" && symbol.name == "")
	{
		yyerror(message);
	}
}
