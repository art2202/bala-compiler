#include "../headers/ioCommands.hpp"
#include "../headers/utils.hpp"
#include "../headers/struct.hpp"
#include <iostream>

using namespace std;


string makePrint(Attribute value)
{
    return value.translation + "\t" + "cout << " + value.label + " << endl;\n";
}

string makeScan(Attribute value, string size)
{
    return value.translation + "\t" + "cin.getline(" + value.label +", " + size + ");\n";
}

string makeScan(Attribute value)
{
    string size = "200";
    return makeScan(value, size);
}