#include "../headers/decisionCommands.hpp"
#include "../headers/utils.hpp"

using namespace std;


Attribute makeIf(Attribute actual, Attribute expression, Attribute blockCommand)
{
  string endLabel = createGotoLabel();
	actual.translation = expression.translation + "\t" + expression.label + " = !" + expression.label + ";\n" + "\tif( " + expression.label + " ) goto " + endLabel + ";\n" + blockCommand.translation + "\t" + endLabel + ":\n"; 

  return actual;
}

Attribute makeIfElse(Attribute actual, Attribute expression, Attribute blockCommandIf, Attribute blockCommandElse)
{
  string midLabel = createGotoLabel();
  string endLabel = createGotoLabel();
  actual.translation = expression.translation + "\t" + expression.label + " = !" + expression.label + ";\n" + "\tif( " + expression.label + " ) goto " + midLabel + ";\n" + blockCommandIf.translation + "\tgoto " + endLabel+ ";\n\t"+ midLabel + ":\n" + blockCommandElse.translation + "\t" +endLabel + ":\n";

  return actual;
}