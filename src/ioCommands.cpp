#include "../headers/ioCommands.hpp"
#include "../headers/utils.hpp"
#include "../headers/struct.hpp"
#include <map>
#include <iostream>

using namespace std;

map<string, ScanHelper> ScanHelperTable;


string makePrint(Attribute value)
{
    return value.translation + "\t" + "cout << " + value.label + " << endl;\n";
}

string makeScan(Attribute value, string size)
{
    if(value.type != "string")
    { yyerror("This function with these parameters is only accepted for the string type."); }

    return value.translation + "\t" + "cin.getline(" + value.label +", " + size + ");\n";
}

string makeScan(Attribute value)
{
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
