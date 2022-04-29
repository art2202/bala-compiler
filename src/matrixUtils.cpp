#include "../headers/matrixUtils.hpp"
#include "../headers/vectorUtils.hpp"
#include "../headers/utils.hpp"
#include "../headers/symbols.hpp"
#include "../headers/type.hpp"
#include "../headers/scope.hpp"
#include "../headers/assignment.hpp"

#include <string.h>
#include <stdlib.h>


using namespace std;

MatrixMap matrixMap;


void validateMatrix(string lineType, string sizeLine, string columnType, string sizeColumn)
{
    if(lineType != "int") { yyerror("The matrix rows size must be an integer type."); }
    if(columnType != "int") { yyerror("The matrix column size must be an integer type."); }
}


void pushMatrix(Matrix matrix)
{
	string name = matrix.name;
    matrixMap[name] = matrix;
}

Matrix searchMatrix(string name)
{
	return matrixMap[name];
}

Matrix createMatrix(string name, string numLines, string numColumns)
{
    Matrix matrix;
    matrix.name = name;
    matrix.numLines = numLines;
    matrix.numColumns = numColumns;
    return matrix;
}
