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



// v1 ------------------------
// Not more used

vector<Symbol> symbolTable;

void addSymbolInTable(string label, string type, Attribute actual)
{
  string variableName = createVariable();

	Symbol symbol = createSymbol(variableName, type, label);

	symbolTable.push_back(symbol);

	actual.translation = "";
	actual.label = "";
}

int findSymbol(string label)
{
	for (int i = 0; i < symbolTable.size(); i++)
	{
		if (symbolTable[i].label == label)
		{
			return i;
		}
	}
	return -1;
}

Symbol getSymbol(string label)
{
	int position = findSymbol(label);
	return symbolTable[position];
}