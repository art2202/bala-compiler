#include "../headers/system.hpp"

using namespace std;

extern unordered_map<string, string> temporaries;
extern vector<Symbol> allSymbols;


string iniciate()
{
  string libs = 
  "\n//Includes\n#include<iostream>\n#include<string.h>\n#include<stdio.h>\n";

  return libs 
  + getDefines() 
  + "\nusing namespace std;\n"
  + getTemps() 
  + getGlobalVariabels();
}

string getDefines()
{
  string result = "\n//Defines\n";

  result += "#define bool int\n";
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


//------------------------------------------------------------------------------
// Loops

Loop generateGotoLoopLabel(string type)
{
  string initialLabel = createGotoLabel();
	string endLabel = createGotoLabel();
	string continueLabel = createGotoLabel();

	Loop loop = {initialLabel, endLabel, continueLabel};
	return loop;
}

void iniciateLoop(string type)
{
  Loop loop = generateGotoLoopLabel(type);
  pushLoop(loop);
}

Attribute endLoop(Attribute actual, Attribute loop)
{
  actual.translation = loop.translation; 
	popLoop();
  return actual;
}


//------------------------------------------------------------------------------
// Debugar

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