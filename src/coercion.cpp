#include "../headers/coercion.hpp"

using namespace std;


map<TripleKey, Coercion> coercionTable;



Coercion getCoercion(string type1, string operation, string type2)
{
	TripleKey key(type1, operation, type2);
	
	if (coercionTable.find(key) != coercionTable.end())
	{
		return coercionTable[key];
	}

	Coercion notFound = {"NULL", "NULL"};
	return notFound;
}


TripleKey generateKey(string a , string b, string c)
{
	TripleKey key(a , b, c);

	return key;
}

void iniciateCoercionTable()
{
	coercionTable[generateKey("int" , "+" , "int")] = {"int", "int"};
	coercionTable[generateKey("int" , "-" , "int")] = {"int", "int"};
	coercionTable[generateKey("int" , "*" , "int")] = {"int", "int"};
	coercionTable[generateKey("int" , "/" , "int")] = {"int", "int"};

	coercionTable[generateKey("float", "+", "float")] = {"float", "float"};
	coercionTable[generateKey("float", "-", "float")] = {"float", "float"};
	coercionTable[generateKey("float", "*", "float")] = {"float", "float"};
	coercionTable[generateKey("float", "/", "float")] = {"float", "float"};

	coercionTable[generateKey("int", "+", "float")] = {"float", "float"};
	coercionTable[generateKey("int", "-", "float")] = {"float", "float"};
	coercionTable[generateKey("int", "*", "float")] = {"float", "float"};
	coercionTable[generateKey("int", "/", "float")] = {"float", "float"};

	coercionTable[generateKey("float", "+", "int")] = {"float", "float"};
	coercionTable[generateKey("float", "-", "int")] = {"float", "float"};
	coercionTable[generateKey("float", "*", "int")] = {"float", "float"};
	coercionTable[generateKey("float", "/", "int")] = {"float", "float"};

	coercionTable[generateKey("int", "=", "float")] = {"int", "int"};
	coercionTable[generateKey("float", "=", "int")] = {"float", "float"};
}