#ifndef MATRIXUTILS_H
#define MATRIXUTILS_H

#include "struct.hpp"
#include <unordered_map>


using namespace structs;

typedef struct matrix
{
    string name;
    string numLines;
    string numColumns;
} Matrix;

typedef unordered_map<string,Matrix> MatrixMap;

void pushMatrix(Matrix matrixStruct);
Matrix searchMatrix(string name);
Matrix createMatrix(string name, string numLines, string numColumns);
void validateMatrix(string lineType, string sizeLine, string columnType, string sizeColumn);

#endif