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
    string name;
    string type;
  } Symbol;

  typedef struct coercion
  {
    string returnedType;
    string conversionType;
  } Coercion;
}


#endif