#include "../headers/utils.hpp"
#include <unordered_map>
#include <iostream>

using namespace std;

int count_temp = 0;
int count_var = 0;
int count_function = 0;
int count_label = 0;
unordered_map<string, string> temporaries;



void yyerror(string MSG)
{
	cout << MSG << endl;
	exit (0);
}

string createTempCode()
{
	count_temp++;
	return "t" + intToString(count_temp);
}

string createVariableCode()
{
	count_var++;
	return "v" + intToString(count_var);
}

string createFunctionCode()
{
	count_function++;
	return "f" + intToString(count_function);
}

string createGotoLabel()
{
	count_label++;
	return "l" + to_string(count_label);
}

string createStringSizeLabel(string label)
{
	return "size_" + label;
}

string intToString(int value)
{
	return to_string(value);
}

void addTemporary(string label, string type)
{
  temporaries[label] = type;
}