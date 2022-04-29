#include "../headers/ioCommands.hpp"
#include "../headers/utils.hpp"
#include "../headers/assignment.hpp"
#include <map>
#include <iostream>

using namespace std;

map<string, ScanHelper> ScanHelperTable;


string makePrint(Attribute value)
{
    validateInput(value);

    return value.translation + "\t" + "cout << " + value.label + " << endl;\n";
}

string makeScan(Attribute value, string size)
{
    validateInput(value);

    if(value.type != "string")
    { yyerror("This function with these parameters is only accepted for the string type."); }

    return value.translation + "\t" + "cin.getline(" + value.label +", " + size + ");\n";
}

string makeScan(Attribute value)
{
    validateInput(value);

    ScanHelper scanHelper = getScanHelper(value.type);
    return value.translation + "\t" + "scanf(\"" + scanHelper.format + "\", " + scanHelper.addressOperador + value.label + "\"" + ");\n";
}

ScanHelper getScanHelper(string key)
{
    ScanHelper scanHelper = ScanHelperTable[key];

    if(scanHelper.format.empty())
    { yyerror("This function with these parameters does not accept " + key + " type."); }

    return scanHelper;
}

void iniciateScanHelperTable()
{
	ScanHelperTable["int"] = {"%d", "&"};
	ScanHelperTable["float"] = {"%f", "&"};
	ScanHelperTable["char"] = {"%c", "&"};
	ScanHelperTable["string"] = {"%s", ""};
}

void validateInput(Attribute variable)
{
    if(variable.label == "") { yyerror("Variable not found.\n"); }
}
