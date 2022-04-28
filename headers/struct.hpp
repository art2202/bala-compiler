#ifndef STRUCT_H
#define STRUCT_H

#include <string>

using namespace std;

namespace structs
{
  typedef struct attribute
  {
    string label;
    string translation;
    string type;
  } Attribute;

  typedef struct symbol
  {
    bool initialized = false;
    bool function = false;
    string label;
    string name;
    string type;
  } Symbol;
}

#endif