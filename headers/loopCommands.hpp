#ifndef LOOPCOMMANDS_H
#define LOOPCOMMANDS_H

#include <string>
#include "struct.hpp"
#include <vector>


using namespace structs;


Attribute makeForCounter(Attribute actual, Attribute TK_counter, Attribute condition, Attribute increment, Attribute expression);
Attribute makeWhile(Attribute actual, Attribute condition, Attribute expression);
Attribute makeDoWhile(Attribute actual, Attribute expression, Attribute condition);

#endif