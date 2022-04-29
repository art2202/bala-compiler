#include "../headers/matrix.hpp"
#include "../headers/vectorUtils.hpp"
#include "../headers/matrixUtils.hpp"
#include "../headers/utils.hpp"
#include "../headers/symbols.hpp"
#include "../headers/type.hpp"
#include "../headers/scope.hpp"
#include "../headers/assignment.hpp"

#include <string.h>
#include <stdlib.h>


using namespace std;


Attribute makeMatrix(Attribute actual, Attribute type, Attribute variable, Attribute left, Attribute right)
{
    validateMatrix(left.type, "line", right.type, "column");

    createTK_ID(actual, variable);
	declareTK_TYPE(type.translation, actual, variable);
    Symbol newSymbol = getSymbolAnywere(variable.label);

    Attribute aux = createActualAttribute("int");

    actual.translation = 
    left.translation
    + right.translation
    + "\t" + aux.label + " = " + left.label + " * " + right.label + ";\n"
    + "\t" + newSymbol.name + " = ( " + type.translation + "* ) malloc( sizeof(" + type.translation + ") * " + aux.label + " );\n";
    
    pushMatrix(createMatrix(newSymbol.name, left.label, right.label));
    return actual;
}

Attribute setValueInMatrix(Attribute actual, Attribute variable, Attribute linePosition, Attribute columnPosition, Attribute expression)
{
    Symbol variableSymbol = getSymbolAnywere(variable.label);
    Attribute aux = createCopyToMakeVectorAssignment(actual, variableSymbol);
    Attribute newAttribute = makeAssignment(actual, aux, expression, "=");

    Symbol auxSymbol = getSymbolAnywere(aux.label);
    Symbol newSymbol = getSymbolAnywere(variable.label);

    Matrix value = searchMatrix(newSymbol.name);

    Attribute position = createActualAttribute("int");
    position.translation = "\t" + position.label + " = " + linePosition.label + " * " + value.numColumns +  " + " + columnPosition.label + ";\n";
    
    actual.translation =
    variable.translation
    + linePosition.translation
    + columnPosition.translation
    + position.translation
    + newAttribute.translation
    + "\t" + newSymbol.name + " [ " + position.label + " ] = " + auxSymbol.name + ";" + "\n";
    return actual;
}

Attribute makeAssignmentMatrix(Attribute actual, Attribute left, Attribute right, Attribute linePosition, Attribute columnPosition)
{
    //TK_ID TK_ASSIGNMENT TK_ID POSITION POSITION

    return actual;
}
