#include "../headers/system.hpp"

using namespace std;

extern unordered_map<string, string> temporaries;

string iniciate()
{
  return getDefines() + getTemps();
}


string getDefines()
{
  string result = "";

  result += "#define boleano int\n";
  result += "#define verdadeiro 1\n";
  result += "#define falso 0\n";
	result += "#define string char*\n";
  return result;
}


string getTemps()
{
  string result = "";
  for (auto &x: temporaries)
  {
    result = result + x.second + " " +x.first + ";\n";
  }
  return result;
}

string getVisiblesSymbols()
{
  string result = "";
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
  string result = "";
  vector<VariableTable> symbols = StackContext->scopes;
  VariableTable actualScope = symbols[StackContext->actualScope];
  
  for (auto &x: symbols[StackContext->actualScope])
  {
    result = result + x.second.type + " " +x.second.name + ";\n";
  }
  return result;
}