#include "../headers/utils.hpp"

using namespace std;


int count_var = 0;
unordered_map<string, string> temporarias;



void yyerror(string MSG)
{
	cout << MSG << endl;
	exit (0);
}

string createTempCode()
{
	count_var++;
	return "t" + intToString(count_var);
}

string intToString(int value)
{
	return to_string(value);
}

void inserirTemporaria(string label, string tipo)
{
  temporarias[label] = tipo;
}