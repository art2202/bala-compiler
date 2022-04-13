#include "../headers/implicitConversion.hpp"
#include "../headers/utils.hpp"
#include "../headers/symbols.hpp"
#include "../headers/coercion.hpp"
#include "../headers/scope.hpp"


using namespace std;


Attribute resolveAssignmentType(Attribute left, string operador, Attribute right)
{
	//Symbol leftSimbol = getSymbol(left.label);
	Symbol leftSimbol = getSymbolAnywere(left.label);

	cout <<"leftSimbol.type: " << leftSimbol.type  << " operador: " << operador << " right.type: " << right.type<< endl;
	
	Coercion coercion = getCoercion(leftSimbol.type, operador, right.type);

	Attribute actual = createActualAttribute(coercion.returnedType);	

	string newTemp = createTempCode();
	addTemporary(newTemp, coercion.conversionType);

	string message = "\t"+ leftSimbol.name + " " + operador + " ("+ coercion.conversionType +") ", result;
	

	if (leftSimbol.type != coercion.conversionType)
	{
		actual.translation = actual.translation + "\t" + leftSimbol.name + " " + operador + " (" + coercion.conversionType + ") " + actual.label + ";\n";
	}
	else if (right.type != coercion.conversionType)
	{
		message += right.label;
		result = newTemp;
	}
	else
	{
		yyerror("The operation is not set to " + leftSimbol.type + " and " + right.type);
	}
	
	actual.translation = left.translation + right.translation + message + ";\n";

	return actual;
}


Attribute resolveExpressionType(Attribute left, string operador, Attribute right)
{
	Coercion coercion = getCoercion(left.type, operador, right.type);
	Attribute actual = createActualAttribute(coercion.returnedType);

	cout <<"left.type: " << left.type  << "operador: " << operador << "right.type: " << right.type<< endl;

	if (left.type == coercion.conversionType && right.type == coercion.conversionType)
	{
		actual.translation = left.translation + right.translation + "\t" + actual.label +" = " + left.label + " " + operador + " " + right.label +";\n";
	}
	else
	{
		string newTemp = createTempCode();
		addTemporary(newTemp, coercion.conversionType);

		string message = "\t"+ newTemp + " = " "("+ coercion.conversionType +") ", result;


		if (left.type != coercion.conversionType)
		{
			message += left.label;
			result = newTemp + " " + operador + " " + right.label;
		}
		else if (right.type != coercion.conversionType)
		{
			message += right.label;
			result = left.label + " " + operador + " " + newTemp;
		}

		message += ";\n";
		actual.translation = left.translation + right.translation + message +"\t" + actual.label + " = "  + result + ";\n";
	}

	return actual;
}