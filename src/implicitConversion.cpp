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

	// cout <<"leftSimbol.type: " << leftSimbol.type  << " operador: " << operador << " right.type: " << right.type<< endl;
	
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


//------------------------------------------------------------------------------

Attribute resolveExpressionType(Attribute left, string operador, Attribute right)
{
  if (left.type == "string" || right.type == "string")
	{ 
    return resolveExpressionTypeString(left, operador, right);
  }
	return resolveExpressionTypeDefault(left, operador, right);
}


Attribute resolveExpressionTypeDefault(Attribute left, string operador, Attribute right)
{
	Coercion coercion = getCoercion(left.type, operador, right.type);
	Attribute actual = createActualAttribute(coercion.returnedType);

	//cout <<"//left.type: " << left.type  << "operador: " << operador << "right.type: " << right.type<< endl;

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

Attribute resolveExpressionTypeString(Attribute left, string operador, Attribute right)
{
	if(operador == "+")
	{ 
		return resolveArithmeticExpressionTypeString(left, operador, right); 
	}
	return resolveLogicalExpressionTypeString(left, operador, right); 
}

Attribute resolveArithmeticExpressionTypeString(Attribute left, string operador, Attribute right)
{
	Attribute actual = createActualAttribute("string");
	actual.type = "string";

	if(operador == "+")
	{
		string sizeA = createStringSizeLabel(left.label);
		string sizeB = createStringSizeLabel(right.label);
		string finalSize = createStringSizeLabel(actual.label);

		addTemporary(finalSize, "int");
		actual.translation = left.translation + right.translation
		+ "\t" + finalSize + " = " + sizeA + " + " + sizeB + ";\n"
		+ "\t" + finalSize + " = " + finalSize + " - 1;\n"
		+ "\t" + actual.label + " = (string) realloc(" + actual.label  + ", " + finalSize + " );\n"
		+ "\tstrcat("+ actual.label + ", "+ left.label +");\n"
		+ "\tstrcat("+ actual.label + ", "+ right.label +");\n"
		+ "\n";
	}
	return actual;
}

Attribute resolveLogicalExpressionTypeString(Attribute left, string operador, Attribute right)
{
	StringCoercion stringCoercion = getStringCoercion(operador);
	Attribute actual = createActualAttribute("bool");
	actual.type = "bool";

	string tempLabelCompare = createTempCode();
	addTemporary(tempLabelCompare, "int");

	string tempLabelBool = createTempCode();
	addTemporary(tempLabelBool, "bool");

	string tempLabelInt = createTempCode();
	addTemporary(tempLabelInt, "int");
	
	
	actual.translation = left.translation + right.translation
	+ "\t" + tempLabelCompare + " = strcmp(" + left.label+ ", " + right.label + " );\n"
	+ "\t" + tempLabelInt + " = " + stringCoercion.resultLabelStrcmpCompareSholdBe + ";\n"
	+ "\t" + tempLabelBool + " = " + tempLabelCompare + stringCoercion.operatorToCheck +  tempLabelInt + ";\n"
	+ "\n";

	actual.label = tempLabelBool;

	return actual;
}