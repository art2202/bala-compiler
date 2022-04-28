#include "../headers/functionDefinition.hpp"

using namespace std;


extern int numAttributes;
extern vector<string> typeAttributes;

string prototypes = "\n//prototypes\n";


void functionFormater(Function function)
{
	prototypes += function.returnType + " "+ function.name +"(";
	for(int i = 0; i < numAttributes; i++)
	{
		if(i == 0)
		{ prototypes += typeAttributes[i]; }
		else 
		{ prototypes += ", " + typeAttributes[i]; }
	}
	prototypes += ");\n";

	numAttributes = 0;
	typeAttributes.clear();
}
