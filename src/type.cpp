#include "../headers/type.hpp"
#include "../headers/utils.hpp"
#include "../headers/symbols.hpp"
#include "../headers/scope.hpp"


using namespace std;


int DEFAULT_INT = 0;
float DEFAULT_FLOAT = 0.0;
char DEFAULT_CHAR = ' ';
string DEFAULT_STRING = "\0";
string DEFAULT_BOOL = "false";



Attribute declareTK_TYPE(string type, Attribute actual, Attribute left, Attribute right)
{
	//cout <<"//declareTK_TYPE"<< endl;

	validateTK_TYPE(right);
	
	// addSymbolInTable(right.label, type, actual);
  // Symbol simbolo = getSymbol(right.label);

	Symbol currentSymbol = addSymbolInScope(StackContext, right.label, type, actual);

  string message = "// default value";

	if(type == "int") 		{ actual.translation =  "\t" + currentSymbol.name + " = " + to_string(DEFAULT_INT) + "; " + message + "\n"; }
	if(type == "float") 	{ actual.translation =  "\t" + currentSymbol.name + " = " + to_string(DEFAULT_FLOAT) + "; " + message + "\n"; }
	if(type == "char") 		{ actual.translation =  "\t" + currentSymbol.name + " = "  + "'"+ DEFAULT_CHAR + "'" + "; " + message + "\n"; }
	if(type == "bool") 		{ actual.translation =  "\t" + currentSymbol.name + " = " + DEFAULT_BOOL + "; " + message + "\n"; }

	return actual;
}

Attribute createTK_ID(Attribute actual, Attribute right)
{
	//Symbol simbolo = getSymbol(right.label);
	Symbol symbol = getSymbolAnywere(right.label);

	actual.label = symbol.name;
	actual.type = symbol.type;

	return actual;
}

Attribute createTK_TYPE(Attribute actual, string type, Attribute right)
{
	actual.label = createTempCode();

	actual.type = type;

	addTemporary(actual.label, type);
	actual.translation = "\t" + actual.label + " = " + right.label + ";\n";

	return actual;
}

void validateTK_TYPE(Attribute attribute)
{
	Symbol symbol = getSymbolTop(attribute.label);
	string message = "Error! TK_ID '" + attribute.label + "' declared twice.\n";
	variableHasAlreadyBeenDeclared(symbol, message);
}