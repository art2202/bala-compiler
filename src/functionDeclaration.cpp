#include "../headers/functionDeclaration.hpp"
#include "../headers/functionDefinition.hpp"
#include "../headers/functionUtils.hpp"
#include "../headers/utils.hpp"
#include "../headers/symbols.hpp"
#include "../headers/type.hpp"
#include "../headers/scope.hpp"
#include "../headers/coercion.hpp"


using namespace std;

int numAttributes = 0;
vector<string> typeAttributes;


Attribute makeParametersFunction(Attribute actual, string previousParameters, Attribute type, Attribute parameter)
{
	numAttributes++;

	createTK_ID(actual, parameter);
	declareTK_TYPE(type.translation, actual, parameter);
	Symbol newSymbol = getSymbolAnywere(parameter.label);

	actual.translation = previousParameters + type.translation + " " + newSymbol.name;

	typeAttributes.push_back(type.translation);

	return actual;
}

Attribute makeFunctionAux(Attribute actual, Attribute returnType, Attribute TK_id_function, Attribute previousParameters)
{
	string nameFunction = createFunctionCode();
	Function function = createFunction(TK_id_function.label, nameFunction, returnType.translation, numAttributes, typeAttributes);
	pushFunction(function.returnType);

	if(tryAddFunction(function))
	{
		functionFormater(function);
		addSymbolInSuperiorScope(StackContext, TK_id_function.label, returnType.translation, actual);
		
		actual.type = returnType.translation;
		actual.translation = returnType.translation + " " + function.name + "(" + previousParameters.translation + ")\n";
	}
	else
	{
		yyerror("Could not overload function " 
		+ returnType.translation + " " + TK_id_function.label 
		+ "( " + previousParameters.translation + ")");
	}
	return actual;
}

Attribute makeFunction(Attribute actual, Attribute functionAux, Attribute command)
{
	actual.translation = functionAux.translation + "{\n" + command.translation + "}\n";

	updateFunctionTranslation(actual);
											
	popFunction();
	popScope(StackContext);

	return actual;
}

Attribute makeReturn(Attribute actual, Attribute expression)
{
	actual.translation = expression.translation;
	actual.type = expression.type;

	string typeFunction = getTopFunction();

	if(expression.type == typeFunction)
	{
		actual.translation += "\treturn " + expression.label + ";\n";
	}
	else
	{
		Coercion coercion = getCoercion(typeFunction, "=", expression.type);
		actual.translation += "\treturn (" + coercion.conversionType + ") " + expression.label+ ";\n";
	}
	return actual;
}
