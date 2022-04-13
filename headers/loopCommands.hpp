#ifndef LOOPCOMMANDS_H
#define LOOPCOMMANDS_H


#include <string>
#include "../headers/struct.hpp"


using namespace structs;

Attribute makeForCounter(Attribute actual, Attribute TK_counter, Attribute condition, Attribute increment, Attribute expression);
Attribute makeForCounterDefinition(Attribute actual, Attribute counterDefinition, Attribute condition, Attribute increment);
Attribute makeWhile(Attribute actual, Attribute condition, Attribute expression);

#endif