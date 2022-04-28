#ifndef DECISIONCOMMANDS_H
#define DECISIONCOMMANDS_H


#include "struct.hpp"
#include <string>
#include <stack>


using namespace structs;

typedef struct switcher
{
  string endLabel;
  string nextLabel;
  Symbol searchVariable;
} Switcher;

Attribute makeIf(Attribute actual, Attribute expression, Attribute blockCommand);
Attribute makeIfElse(Attribute actual, Attribute expression, Attribute blockCommandIf, Attribute blockCommandElse);
Attribute makeIfTernary(Attribute actual, Attribute left, Attribute expression, Attribute right1,  Attribute right2);

Attribute iniciateSwitch(Attribute actual, Attribute blockSwitch);
void finalizeSwitcher();
void createSwicher(Attribute searchVariable);
Attribute resolveBlockSwitch(Attribute actual, Attribute cases, Attribute blockCommand);
Attribute resolveCasesSwitch(Attribute actual, Attribute variableSwitch, Attribute blockCommandCase, Attribute cases);
Attribute resolveCheckerSwitch(Attribute actual, string operador, Attribute variable);

extern stack<Switcher> switcherStack;

#endif