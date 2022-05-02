#include "../headers/loopControls.hpp"
#include "../headers/loopUtils.hpp"
#include "../headers/expression.hpp"
#include "../headers/utils.hpp"
#include "iostream"

using namespace std;


Attribute makeBreak(Attribute actual, Attribute breakAttrubute)
{
  if(!hasLoop())
  {
    yyerror("Break out of a loop");
  }
  actual.translation = 
  "\t//*break init*//\n\tgoto " + getLoop().endLabel + ";\n"
  + "\t//*break end*//\n";
  return actual;	
}

Attribute makeContinue(Attribute actual, Attribute continueAttribute)
{
  if(!hasLoop())
  {
    yyerror("Continue out of a loop");
  }
  actual.translation = 
  "\t//*continue init*//\n\tgoto " + getLoop().continueLabel + ";\n"
  + "\t//*continue end*//\n";
  return actual;
}
