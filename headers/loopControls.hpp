#ifndef LOOPCONTROLS_H
#define LOOPCONTROLS_H

#include <string>
#include "struct.hpp"
#include "loopCommands.hpp"


using namespace structs;


Attribute makeBreak(Attribute actual, Attribute breakAttrubute);
Attribute makeContinue(Attribute actual, Attribute continueAttribute);

#endif