#ifndef DECISIONCOMMANDS_H
#define DECISIONCOMMANDS_H


#include <string>
#include "../headers/struct.hpp"


using namespace structs;

Attribute makeIf(Attribute actual, Attribute expression, Attribute blockCommand);
Attribute makeIfElse(Attribute actual, Attribute expression, Attribute blockCommandIf, Attribute blockCommandElse);

#endif