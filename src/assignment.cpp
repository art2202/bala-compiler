#include "../headers/assignment.hpp"
#include "../headers/utils.hpp"
#include "../headers/symbols.hpp"
#include "../headers/scope.hpp"


using namespace std;



extern Attribute resolveAssignmentType(Attribute left, string operation, Attribute right);


Attribute makeAssignment(Attribute actual, Attribute left, Attribute right, string operation)
{
	validateTK_ID(actual);
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
		actual.translation += left.translation + right.translation + "\t" + leftSimbol.name + " " + operation + " " + right.label + ";\n";
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
	addTemporary(leftStringSizeLabel, "int");

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
	Symbol symbol = getSymbolAnywere(attribute.label);
	string message = "TK_ID '" +  attribute.label + "' is not defined in this scope. Please defines a type to '" + attribute.label + "'.\n";
	variableHasNotBeenDeclared(symbol, message);
}


Attribute makeCompousedOperator(Attribute actual, Attribute left, string operation, Attribute right)
{
  Symbol leftSimbol = getSymbolAnywere(left.label);
	left.type = leftSimbol.type;

	Symbol rightSimbol = getSymbolAnywere(right.label);
	right.type = rightSimbol.type;
	right.label = rightSimbol.name;

	string message =  "= (" + leftSimbol.name + " " + operation + " " + right.label + ") "
	+ " /*compoused operator*/";

	right.label = "";

	return makeAssignment(actual, left, right, message);
}

Attribute makeUnaryOperator(Attribute actual, Attribute left, string operation)
{
  Symbol leftSimbol = getSymbolAnywere(left.label);
	Attribute auxAttribute = createActualAttribute(leftSimbol.type);

	actual.translation = "\t" + auxAttribute.label + " = " + "1;\n";
	string message =  "= (" + leftSimbol.name + " " + operation + " "  + auxAttribute.label + ") "
	+ " /*unary operator*/";

	auxAttribute.label = "";

	return makeAssignment(actual, left, auxAttribute, message);
}
// int var;
// int a = a + var; // a += var;

// int a = a + 1; // a ++;
// int a  op  a;

// operador tem q ter "= right.label operadorDeExpressão"

// a = a