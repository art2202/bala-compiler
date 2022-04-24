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
    string label; // localVar
    string name;
    string type;
  } Symbol;
}


#endif