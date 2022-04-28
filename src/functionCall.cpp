#include "../headers/functionCall.hpp"
#include "../headers/utils.hpp"
#include "../headers/symbols.hpp"


using namespace std;

int numArgumentsCalled = 0;
vector<string> typeArgumentsCalled;


void updateFunctionCall(string typeExpression)
{
	numArgumentsCalled++;
	typeArgumentsCalled.push_back(typeExpression);
}

void resetFunctionCall()
{
	numArgumentsCalled = 0;
	typeArgumentsCalled.clear();
}


Attribute makeArguments(Attribute actual, Attribute previousArguments, attribute expression)
{
	updateFunctionCall(expression.type);
	actual.translation = previousArguments.translation + expression.translation;
	actual.label = previousArguments.label + ", " + expression.label;
	actual.type = previousArguments.type + ", " + expression.type;
	return actual;
}

Attribute makeArgument(Attribute actual, attribute expression)
{
	updateFunctionCall(expression.type);
	actual.translation = expression.translation;
	actual.label = expression.label;
	return actual;
}

Attribute makeCallFunction(Attribute actual, Attribute left, Attribute arguments)
{
	vector<Function> function = searchFunction(left.label);
	
	if(hasAnyFunction() == false)
	{
		yyerror("Function " + left.label + " is not found.");
	}
	for(int i = 0; i < function.size(); i++)
	{
		if(typeArgumentsCalled == function[i].parameters)
		{
			string type = function[i].returnType;
			Attribute newActual = createActualAttribute(type);
			newActual.type = type;

			newActual.translation = arguments.translation + "\t" + newActual.label +" = " + function[i].name + "(" + arguments.label + ");\n";
			resetFunctionCall();

			return newActual;
		}
		yyerror("Function " + left.label + " (" + arguments.type + "); is not found.");
	}
	yyerror(left.label + " is not a function.");
	return actual;
}

