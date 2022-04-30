#include "../headers/loopCommands.hpp"
#include "../headers/expression.hpp"
#include "../headers/utils.hpp"
#include "iostream"

using namespace std;


Loop emptyLoop = {"NULL", "NULL", "NULL"};
LoopStackPtr LoopStackContext = createLoopStack();


LoopStackPtr createLoopStack()
{
  return (LoopStackPtr) malloc(sizeof(LoopStack));
}

void pushLoop(Loop loop)
{
  LoopStackContext->loops.push_back(loop);
}

Loop popLoop()
{
  Loop back = LoopStackContext->loops.back();
  LoopStackContext->loops.pop_back();
  return back;
}

Loop getLoop()
{
  if (LoopStackContext->loops.size() > 0)
  {
    return LoopStackContext->loops.back();
  }
  cout << "/n\t//*loop stack is empty*//\n" << endl;
  return emptyLoop;
}

int hasLoop()
{
  // cout << "hasLoop: " << LoopStackContext->loops.size() << endl;
  return LoopStackContext->loops.size();
}


//------------------------------------------------------------------------------

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

  cout << "\n\n\n"<< expression.translation << "\n\n\n"<< endl;

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
