#include "../headers/loopCommands.hpp"
#include "../headers/expression.hpp"
#include "../headers/utils.hpp"

using namespace std;

Attribute makeForCounter(Attribute actual, Attribute TK_counter, Attribute condition, Attribute increment, Attribute expression)
{
  string initialLabel = createGotoLabel();
  string endLabel = createGotoLabel();

  actual.translation = 
  initialLabel + ": " 
  + condition.translation + "\t"
  + TK_counter.translation
  + condition.label + " = !" + condition.label + ";\n" 
  + "\tif( " + condition.label + " ) goto " + endLabel + ";\n" 
  + expression.translation 
  + increment.translation 
  + "\tgoto " + initialLabel + ";\n"
  + endLabel+ ":\n";

  return actual;
}

Attribute makeWhile(Attribute actual, Attribute condition, Attribute expression)
{
  string initialLabel = createGotoLabel();
  string endLabel = createGotoLabel();

  actual.translation = 
  initialLabel + ": " 
  + condition.translation + "\t"
  + condition.label + " = !" + condition.label + ";\n" 
  + "\tif( " + condition.label + " ) goto " + endLabel + ";\n" 
  + expression.translation
  + "\tgoto " + initialLabel + ";\n"
  + endLabel+ ":\n";

  return actual;
}