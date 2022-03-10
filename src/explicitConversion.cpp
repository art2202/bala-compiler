#include "../headers/explicitConversion.hpp"
#include "../headers/symbols.hpp"


using namespace std;



Attribute resolveExplicitConversion(Attribute right, Attribute type)
{
	Attribute newActual = createActualAttribute(type.translation);

	newActual.translation = right.translation + "\t" + newActual.label + " = (" + type.translation + ") " + right.label + ";\n";
	return newActual;
}