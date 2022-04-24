#include "../headers/ioCommands.hpp"
#include "../headers/utils.hpp"
#include "../headers/struct.hpp"
#include <iostream>

using namespace std;


string makePrint(Attribute value)
{
    return value.translation + "\t" + "cout << " + value.label + " << endl;\n";
}

string makeScan(Attribute value, Attribute size)
{
    return value.translation + "\t" + "cin.getline(" + value.label +", " + size.label + ");\n";
}

string makeScan(Attribute value)
{
    cout << "value.translation: " << value.translation << endl;
    string size = "200";
    return value.translation + "\t" + "cin.getline(" + value.label +", " + size + ");\n";
}