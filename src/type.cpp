#include "../headers/type.hpp"
#include "../headers/utils.hpp"
#include "../headers/symbols.hpp"


using namespace std;


int DEFAULT_INT = 0;
float DEFAULT_FLOAT = 0.0;
char DEFAULT_CHAR = ' ';
string DEFAULT_STRING = "\0";
bool DEFAULT_BOOL = false;



Attribute declareTK_TYPE(string type, Attribute actual, Attribute left, Attribute right)
{
	addSymbolInTable(right.label, type, actual);

	if(type == "int") 		{ actual.translation = DEFAULT_INT;			+"\t" + actual.label + " = " + left.label + ";\n"; 	}
	if(type == "float") 	{ actual.translation = DEFAULT_FLOAT;		+"\t" + actual.label + " = " + left.label + ";\n"; 	}
	if(type == "char") 		{ actual.translation = DEFAULT_CHAR;		+"\t" + actual.label + " = " + left.label + ";\n"; 	}
	if(type == "string") 	{ actual.translation = DEFAULT_STRING;	+"\t" + actual.label + " = " + left.label + ";\n";	}
	if(type == "bool") 		{ actual.translation = DEFAULT_BOOL;		+"\t" + actual.label + " = " + left.label + ";\n"; 	}

	return actual;
}

Attribute createTK_ID(Attribute actual, Attribute right)
{
	Symbol simbolo = getSymbol(right.label);

	actual.label = simbolo.name;
	actual.type = simbolo.type;

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