#include "../headers/assignment.hpp"
#include "../headers/utils.hpp"
#include "../headers/symbols.hpp"
#include "../headers/scope.hpp"


using namespace std;



extern Attribute resolveAssignmentType(Attribute left, string operation, Attribute right);


Attribute makeAssignment(Attribute actual, Attribute left, Attribute right)
{
	validateTK_ID(actual);
	string operation = "=";
	Symbol leftSymbol = getSymbolAnywere(left.label);

	if(leftSymbol.type == "string") 
	{ 
		return makeAssignmentString(actual, left, right, leftSymbol, operation); 
	}
	else
	{
		return makeAssignmentDefault(actual, left, right, leftSymbol, operation);
	}
}


Attribute makeAssignmentDefault(Attribute actual, Attribute left, Attribute right, Symbol leftSimbol, string operation)
{
	if(leftSimbol.type == right.type)
	{
		actual.translation = left.translation + right.translation + "\t" + leftSimbol.name + " " + operation + " " + right.label + ";\n";
	}
	else 
	{
		Attribute newActual = resolveAssignmentType(left, operation, right);
		return newActual;
	}
	return actual;
}

Attribute makeAssignmentString(Attribute actual, Attribute left, Attribute right, Symbol leftSimbol, string operation)
{
	if(leftSimbol.type != right.type)
	{
		yyerror("The operation is not set to " + leftSimbol.type + " and " + right.type);
	}

	string type= "string";
	string leftStringSizeLabel = createStringSizeLabel(leftSimbol.name);
	string rightStringSizelabel = "size_"+right.label;

	actual.translation = left.translation + right.translation
	+ "\t" + leftStringSizeLabel +  " = " + rightStringSizelabel + ";\n"
	+ "\t" + leftSimbol.name + " = (" + type + ") realloc(" + leftSimbol.name + ", " + leftStringSizeLabel  + ");\n"
	+ "\tstrcpy( " + leftSimbol.name + ", " + right.label + " );\n"
	+ "\n"; 

	return actual;
}

void validateTK_ID(Attribute attribute)
{
	//cout <<"//validateTK_ID"<< endl;

	Symbol symbol = getSymbolAnywere(attribute.label);
	string message = "TK_ID '" +  attribute.label + "' is not defined in this scope. Please defines a type to '" + attribute.label + "'.\n";
	variableHasNotBeenDeclared(symbol, message);
}
