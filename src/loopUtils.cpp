#include "../headers/loopUtils.hpp"
#include "../headers/expression.hpp"
#include "../headers/utils.hpp"
#include "../headers/vectorUtils.hpp"
#include "../headers/symbols.hpp"
#include "../headers/assignment.hpp"
#include "../headers/expression.hpp"
#include "../headers/type.hpp"
#include "../headers/scope.hpp"
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
