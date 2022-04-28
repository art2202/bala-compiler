#include "../headers/functionUtils.hpp"
#include "../headers/utils.hpp"


using namespace std;


FunctionMap functionTable;
FunctionStack functionStack;
string functions = "\n\n//functions\n";


Function createFunction(string label, string name, string returnType, int numAttributes, vector<string> typeAttributes)
{
	Function function;
	function.numParameters = numAttributes;
	function.parameters = typeAttributes;
	function.name = name;
	function.label = label;
	function.returnType = returnType;
	
	return function;
}

bool tryAddFunction(Function function)
{
    bool sucess = true;
	string label = function.label;

    if(checkOverload(function, label) == true)
	{
		sucess = false;
		return sucess;
    }
    functionTable[label].push_back(function);
    return sucess;
}

bool checkOverload(Function function, string label)
{
	if(functionTable.find(label) != functionTable.end())
	{
        vector<Function> overloads = functionTable[label];
        for(int i = 0; i < overloads.size(); i++)
		{
            if(function.parameters == overloads[i].parameters)
			{
                return true;
            }
        }
    }
	return false;
}

vector<Function> searchFunction(string label)
{
	vector<Function> vector;
	if(functionTable.find(label) != functionTable.end())
	{
        return functionTable[label];
    }
	return vector;
}


void pushFunction(string tipo)
{
    functionStack.push(tipo);
}

void popFunction()
{
    functionStack.pop();
}

string getTopFunction()
{
    if(functionStack.empty()) 
	{
		yyerror("Out of function."); 
	}
	return functionStack.top();
}


void updateFunctionTranslation(Attribute actual)
{
	functions += actual.translation;
}

bool hasAnyFunction()
{
	if(functions.empty())
	{
		return false;
	}
	return true;
}
