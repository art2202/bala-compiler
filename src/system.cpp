#include "../headers/system.hpp"

using namespace std;

extern unordered_map<string, string> temporaries;
extern vector<Symbol> allSymbols;

string iniciate()
{
  string libs = "\n//Includes\n";
  libs += "#include<iostream>\n#include<string.h>\n#include<stdio.h>\n";

  return libs + getDefines() + getTemps() + getGlobalVariabels();
}

string getDefines()
{
  string result = "\n//Defines\n";

  result += "#define boleano int\n";
  result += "#define verdadeiro 1\n";
  result += "#define falso 0\n";
	result += "#define string char*\n";
  return result;
}

string getTemps()
{
  string result = "\n//Temporaries\n";
  for (auto &x: temporaries)
  {
    result = result + x.second + " " +x.first + ";\n";
  }
  return result;
}

string getGlobalVariabels()
{
  string result = "\n//Global variables\n";
  for (int i = 0; i < allSymbols.size(); i++)
	{
		result = result + allSymbols[i].type + " " + allSymbols[i].name + ";\n";
	}
  return result;
}


string getVisibleSymbols()
{
  string result = "\n//Visible Symbols\n";

  vector<VariableTable> symbols = StackContext->scopes;
  
  for (int i = 0; i < symbols.size(); i++)
  {
    for (auto &x: symbols[i])
    {
      result = result + x.second.type + " " +x.second.name + ";\n";
    }
  }
  return result;
}

string getCurrentBlockSymbols()
{
  string result = "\n//Current Block Symbols\n";
  vector<VariableTable> symbols = StackContext->scopes;
  VariableTable actualScope = symbols[StackContext->actualScope];
  
  for (auto &x: symbols[StackContext->actualScope])
  {
    result = result + x.second.type + " " +x.second.name + ";\n";
  }
  return result;
}




// TIRAR DAQUI
Attribute implicitResolveExpressionType(Attribute left, string operador, Attribute right)
{
	Coercion coercion = getCoercion(left.type, operador, right.type);
	Attribute actual = createActualAttribute(coercion.returnedType);

	//cout <<"//left.type: " << left.type  << "operador: " << operador << "right.type: " << right.type<< endl;

	if (left.type == coercion.conversionType && right.type == coercion.conversionType)
	{
		actual.translation = left.translation + right.translation + "\t" + actual.label +" = " + left.label + " " + operador + " " + right.label +";\n";
	}
	else
	{
		string newTemp = createTempCode();
		addTemporary(newTemp, coercion.conversionType);

		string message = "\t"+ newTemp + " = " "("+ coercion.conversionType +") ", result;


		if (left.type != coercion.conversionType)
		{
			message += left.label;
			result = newTemp + " " + operador + " " + right.label;
		}
		else if (right.type != coercion.conversionType)
		{
			message += right.label;
			result = left.label + " " + operador + " " + newTemp;
		}

		message += ";\n";
		actual.translation = left.translation + right.translation + message +"\t" + actual.label + " = "  + result + ";\n";
	}

	return actual;
}