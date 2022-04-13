#include "../headers/assignment.hpp"
#include "../headers/utils.hpp"
#include "../headers/symbols.hpp"
#include "../headers/scope.hpp"


using namespace std;



extern Attribute resolveAssignmentType(Attribute left, string operation, Attribute right);



Attribute makeAssignment(Attribute atual, Attribute left, Attribute right)
{
	//cout <<"//makeAssignment"<< endl;

	validateTK_ID(atual);
	string operation = "=";

	//Symbol leftSimbol = getSymbol(left.label);
	Symbol leftSimbol = getSymbolAnywere(left.label);

	//cout <<"//makeAssignment -- leftSimbol.type: " << leftSimbol.type << " right.type: " << right.type<< endl;

	if(leftSimbol.type == right.type)
	{
		atual.translation = left.translation + right.translation + "\t" + leftSimbol.name + " " + operation + " " + right.label + ";\n";
	}
	else 
	{
		Attribute newActual = resolveAssignmentType(left, operation, right);
		return newActual;
	}

	return atual;
}

void validateTK_ID(Attribute attribute)
{
	//cout <<"//validateTK_ID"<< endl;

	Symbol symbol = getSymbolAnywere(attribute.label);
	string message = "TK_ID '" +  attribute.label + "' is not defined in this scope. Please defines a type to '" + attribute.label + "'.\n";
	variableHasNotBeenDeclared(symbol, message);
}

// void validateTK_ID(Attribute attribute)
// {
// 	int position = findSymbol(attribute.label);
// 	if (position < 0)
// 	{
// 		yyerror("TK_ID '" +  attribute.label + "' is not defined. Please defines a type to '" +  attribute.label + "'.\n");
// 	}
// }