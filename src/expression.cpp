#include "../headers/expression.hpp"

using namespace std;


extern Attribute resolveExpressionType(Attribute left, string operation, Attribute right);



Attribute makeExpression(Attribute actual, Attribute left, string operation, Attribute right)
{
	Attribute newActual = resolveExpressionType(left, operation, right);
	return newActual;
}