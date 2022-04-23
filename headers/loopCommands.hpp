#ifndef LOOPCOMMANDS_H
#define LOOPCOMMANDS_H

#include <string>
#include "../headers/struct.hpp"
#include <vector>


using namespace structs;


typedef struct loop 
{
  string initialLabel;
  string endLabel;
  string continueLabel;
} Loop;

typedef struct loopStack
{
  vector<Loop> loops;
} LoopStack;

typedef LoopStack* LoopStackPtr;


LoopStackPtr createLoopStack();
int hasLoop();
void pushLoop(Loop loop);
Loop popLoop();
Loop getLoop();
Loop getLoopAt(int position);


void iniciateLoop(string type);
Loop generateGotoLoopLabel(string type);
Attribute endLoop(Attribute actual, Attribute loop);


Attribute makeForCounter(Attribute actual, Attribute TK_counter, Attribute condition, Attribute increment, Attribute expression);
Attribute makeWhile(Attribute actual, Attribute condition, Attribute expression);
Attribute makeDoWhile(Attribute actual, Attribute expression, Attribute condition);


#endif