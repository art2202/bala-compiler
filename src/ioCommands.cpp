#include "../headers/ioCommands.hpp"
#include "../headers/utils.hpp"
#include "../headers/struct.hpp"

using namespace std;


string makePrint(Attribute value){
    return value.translation + "\t" + "cout <<" + value.label + ";\n";
}		