#include "../headers/scope.hpp"
#include "../headers/utils.hpp"
#include "../headers/symbols.hpp"

using namespace std;


StackMapPtr StackContext = createMapStack();


void pushScope(StackMapPtr stack, VariableTable mapScope)
{
  //cout <<"//pushScope"<< endl;
  //cout <<"//actualScope: " << stack->actualScope << endl;
  stack->actualScope += 1;
  stack->scopes.push_back(mapScope);
  //cout <<"//actualScope push: " << stack->actualScope << endl;
}

VariableTable popScope(StackMapPtr stack)
{
  //cout <<"//popScope"<< endl;
  if(stack->scopes.empty())
  {
    cout << "POP_FUNCTION: There are no scopes to be removed." << endl;
    exit(-1); 
  }

  VariableTable scope = stack->scopes.back();

  stack->scopes.pop_back();
  stack->actualScope -= 1;

  return scope;
}

StackMapPtr createMapStack()
{
  StackMapPtr stack = (StackMapPtr) malloc(sizeof(StackMap));
  
  VariableTable global, actual;
  pushScope(stack, global);
  pushScope(stack, actual);
  
	stack->actualScope = 1;
  //cout <<"//stack->actualScope: " << stack->actualScope << endl;

  return stack;
}



Symbol createVariableNameToSymbol (string label, string type, Attribute actual)
{
  string variableName = createVariable();
	Symbol symbol = createSymbol(variableName, type, label);

  actual.translation = "";
	actual.label = "";

  return symbol;
}


Symbol addSymbolInScope (StackMapPtr stack, string label, string type, Attribute actual)
{
  //cout <<"//addSymbolInScope"<< endl;
  
  Symbol symbol = createVariableNameToSymbol(label, type, actual);
	stack->scopes[stack->actualScope][label] = symbol;
  addSymbol(symbol);

  return symbol;
}

Symbol addSymbolInSuperiorScope (StackMapPtr stack, string label, string type, Attribute actual)
{
  Symbol symbol = createVariableNameToSymbol(label, type, actual);
  stack->scopes[stack->actualScope - 1][label] = symbol;
  addSymbol(symbol);
  
  return symbol;
}

Symbol addSymbolInGlobalScope (StackMapPtr stack, string label, string type, Attribute actual)
{
  Symbol symbol = createVariableNameToSymbol(label, type, actual);
	stack->scopes[0][symbol.label] = symbol;
  addSymbol(symbol);

  return symbol;
}



Symbol getSymbolAnywere(string label)
{
	for (int i = StackContext->actualScope; i >= 0 ; i--)
  {
		VariableTable posAtual = StackContext->scopes[i];
    
		if (posAtual.find(label) != posAtual.end())
    {
			return (posAtual[label]);
		}
	}
	return createSymbol("","", "");
}

Symbol getSymbolTop(string label)
{
	VariableTable top = StackContext->scopes.back();
  //cout << "//top[label].label: " << top[label].label << endl;
	if (top.find(label) != top.end())
  {
    //cout <<"//dentro do if"<< endl;
		return (top[label]);
	}
	return createSymbol("", "", "");
}

Symbol getSymbolGlobal(string label)
{
	VariableTable posAtual = StackContext->scopes[0];

	if (posAtual.find(label) != posAtual.end())
  {
		return (posAtual[label]);
	}
	return createSymbol("", "", "");
}