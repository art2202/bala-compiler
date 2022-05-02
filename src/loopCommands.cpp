#include "../headers/loopCommands.hpp"
#include "../headers/loopUtils.hpp"
#include "../headers/expression.hpp"
#include "../headers/utils.hpp"
#include "../headers/vectorUtils.hpp"
#include "../headers/symbols.hpp"
#include "../headers/assignment.hpp"
#include "../headers/expression.hpp"
#include "../headers/type.hpp"
#include "../headers/scope.hpp"


using namespace std;


Attribute makeForCounter(Attribute actual, Attribute TK_counter, Attribute condition, Attribute increment, Attribute expression)
{
  Loop currentLoop = getLoop();

  actual.translation =
  "\t//*for init*//\n"
  + TK_counter.translation
  + currentLoop.initialLabel + ": "
  + condition.translation + "\t"
  + condition.label + " = !" + condition.label + ";\n"
  + "\tif( " + condition.label + " ) goto " + currentLoop.endLabel + ";\n"
  + expression.translation
    + "\t" + currentLoop.continueLabel + ":\n"
  + increment.translation
  + "\tgoto " + currentLoop.initialLabel + ";\n"
  + currentLoop.endLabel+ ":\n"
  + "\t//*for end*//\n";

  return actual;
}

Attribute makeWhile(Attribute actual, Attribute condition, Attribute expression)
{
  Loop currentLoop = getLoop();

  actual.translation =
  "\t//*while init*//\n"
  + currentLoop.initialLabel + ": "
    + "\t" + currentLoop.continueLabel + ":\n"
  + condition.translation + "\t"
  + condition.label + " = !" + condition.label + ";\n"
  + "\tif( " + condition.label + " ) goto " + currentLoop.endLabel + ";\n"
  + expression.translation
  + "\tgoto " + currentLoop.initialLabel + ";\n"
  + currentLoop.endLabel+ ":\n"
  + "\t//*while end*//\n";

  return actual;
}

Attribute makeDoWhile(Attribute actual, Attribute expression, Attribute condition)
{
  Loop currentLoop = getLoop();

  actual.translation =
  "\t//*do init*//\n"
  + currentLoop.initialLabel + ": "
  + expression.translation
    + "\t" + currentLoop.continueLabel + ":\n"
  + condition.translation + "\t"
  + condition.label + " = !" + condition.label + ";\n"
  + "\tif( " + condition.label + " ) goto " + currentLoop.endLabel + ";\n"

  + "\tgoto " + currentLoop.initialLabel + ";\n"
  + currentLoop.endLabel+ ":\n"
  + "\t//*do end*//\n";

  return actual;
}
