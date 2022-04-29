#include "../headers/vector.hpp"
#include "../headers/vectorUtils.hpp"
#include "../headers/utils.hpp"
#include "../headers/symbols.hpp"
#include "../headers/type.hpp"
#include "../headers/scope.hpp"
#include "../headers/assignment.hpp"


using namespace std;


Attribute makeVector(Attribute actual, Attribute type, Attribute variable, Attribute expression)
{
    validateVector(expression.type);
    declareTK_TYPE(type.translation+"*", actual, variable);
    Symbol newSymbol = getSymbolAnywere(variable.label);
    
    actual.translation = 
    expression.translation
    + "\t" + newSymbol.name + " = ( " + type.translation + "* ) malloc( sizeof(" + type.translation + ") * " + expression.label + " );\n";

    return actual;
}

Attribute setValueInVector(Attribute actual, Attribute variable, Attribute position, Attribute expression)
{
    Symbol variableSymbol = getSymbolAnywere(variable.label);

    Attribute aux = createCopyToMakeVectorAssignment(actual, variableSymbol);
    Attribute newAttribute = makeAssignment(actual, aux, expression, "=");

    Symbol auxSymbol = getSymbolAnywere(aux.label);

    actual.translation =
    variable.translation
    + position.translation
    + newAttribute.translation
    + "\t" + variableSymbol.name + " [ " + position.label + " ] = " + auxSymbol.name + ";" + "\n";
    return actual;
}

Attribute makeAssignmentVector(Attribute actual, Attribute left, Attribute right, Attribute position)
{
    Symbol variableSymbol = getSymbolAnywere(right.label);
    Symbol newSymbol = getSymbolAnywere(left.label);

    Attribute aux = createCopyToMakeVectorAssignment(actual, variableSymbol);
    Attribute newAttribute = makeAssignment(actual, left, aux, "=");

    actual.translation =
    left.translation
    + right.translation
    + position.translation
    + "\t" + newSymbol.name + " = " + variableSymbol.name + " [ " + position.label + " ];" + "\n";
    return actual;
}
