#include "../headers/foreach.hpp"
#include "../headers/loopCommands.hpp"
#include "../headers/expression.hpp"
#include "../headers/utils.hpp"
#include "../headers/vectorUtils.hpp"
#include "../headers/symbols.hpp"
#include "../headers/assignment.hpp"
#include "../headers/expression.hpp"
#include "../headers/type.hpp"
#include "../headers/scope.hpp"

using namespace std;


Attribute makeForeachCounter(Attribute actual, Attribute declarationWithAssignment, Attribute vectorId, Attribute expression)
{
  Vector _vector = searchVector(vectorId.label);

  Attribute aux1 = createActualAttribute(_vector.type);
  declareTK_TYPE(_vector.type, actual, aux1);
  Attribute aux2 = createActualAttribute(_vector.type);
  declareTK_TYPE(_vector.type, actual, aux2);

  Symbol aux1Symbol = getSymbolAnywere(aux1.label);
  aux2.translation = "\t" + aux2.label + " = " + _vector.size + ";\n";
  aux1.translation += aux2.translation
  + "\t" + aux1.label + " = " + aux1Symbol.name + " < " + aux2.label + ";\n";

  Attribute increment = createActualAttribute(_vector.type);
  declareTK_TYPE(_vector.type, actual, increment);
  increment = makeUnaryOperator(actual, aux1, "+");

  return makeForCounter(actual, declarationWithAssignment, aux1, increment, expression);
}
