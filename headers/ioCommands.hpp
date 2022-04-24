#ifndef IO_COMMANDS_H
#define IO_COMMANDS_H

#include <string>
#include "../headers/struct.hpp"


using namespace structs;

string makePrint(Attribute value);
string makeScan(Attribute value, Attribute size);
string makeScan(Attribute value);


#endif