#include "../headers/vectorUtils.hpp"
#include "../headers/utils.hpp"
#include "../headers/symbols.hpp"
#include "../headers/type.hpp"
#include "../headers/assignment.hpp"
#include <sstream>


using namespace std;


Attribute createCopyToMakeVectorAssignment(Attribute actual, Symbol variableSymbol)
{
    variableSymbol = removePointerOfVectorType(variableSymbol);

    Attribute copy = createActualAttribute(variableSymbol.type);
    declareTK_TYPE(variableSymbol.type, actual, copy);

    return copy;
}

Symbol removePointerOfVectorType(Symbol variableSymbol)
{
    // remove pointer of type. ex: int* to int
    stringstream sstream(variableSymbol.type);
    string type;
    getline(sstream, type, '*');
    variableSymbol.type = type;
    return variableSymbol;
}

void validateVector(string type)
{
    if(type != "int") { yyerror("The vector size must be an integer type."); }
}
