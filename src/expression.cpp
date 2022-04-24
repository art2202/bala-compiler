#include "../headers/expression.hpp"
#include "../headers/symbols.hpp"

using namespace std;


extern Attribute resolveExpressionType(Attribute left, string operation, Attribute right);



Attribute makeExpression(Attribute left, string operation, Attribute right)
{
	Attribute newActual = resolveExpressionType(left, operation, right);
	return newActual;
}

Attribute makeTK_NOT(Attribute actual, Attribute right)
{
  Attribute newActual = createActualAttribute("bool");

  newActual.translation = right.translation + "\t" + newActual.label + " = !" + right.label + ";\n";
  return newActual;
}