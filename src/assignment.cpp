#include "../headers/assignment.hpp"
#include "../headers/utils.hpp"
#include "../headers/symbols.hpp"


using namespace std;



extern Attribute resolveAssignmentType(Attribute left, string operation, Attribute right);



Attribute makeAssignment(Attribute atual, Attribute left, Attribute right)
{
	validateTK_ID(atual);
	string operation = "=";

	Symbol leftSimbol = getSymbol(left.label);
	if(leftSimbol.type == right.type)
	{
		atual.translation = left.translation + right.translation + "\t" + leftSimbol.name + " " + operation + " " + right.label + ";\n";
	}
	else 
	{
		Attribute novoAtual = resolveAssignmentType(left, operation, right);
		return novoAtual;
	}

	return atual;
}

void validateTK_ID(Attribute attribute)
{
	int position = findSymbol(attribute.label);
	if (position < 0)
	{
		yyerror("TK_ID '" +  attribute.label + "' is not defined. Please defines a type to '" +  attribute.label + "'.\n");
	}
}