#ifndef LOOPCONTROLS_H
#define LOOPCONTROLS_H

#include <string>
#include "../headers/struct.hpp"
#include "../headers/loopCommands.hpp"


using namespace structs;


Attribute makeBreak(Attribute actual, Attribute breakAttrubute);
Attribute makeContinue(Attribute actual, Attribute continueAttribute);

#endif