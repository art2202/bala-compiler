#ifndef IO_COMMANDS_H
#define IO_COMMANDS_H

#include <string>
#include "struct.hpp"


using namespace structs;


typedef struct scanHelper
{
  string format;
  string addressOperador;
} ScanHelper;

string makePrint(Attribute value);
string makeScan(Attribute value, string size);
string makeScan(Attribute value);
void iniciateScanHelperTable();
ScanHelper getScanHelper(string key);

#endif