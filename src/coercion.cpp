#include "../headers/coercion.hpp"
#include "../headers/utils.hpp"

using namespace std;


map<TripleKey, Coercion> coercionTable;
map<string, StringCoercion> stringCoercionTable;



TripleKey generateKey(string a , string b, string c)
{
	TripleKey key(a , b, c);

	return key;
}

Coercion getCoercion(string type1, string operation, string type2)
{
	TripleKey key(type1, operation, type2);

	if (type1 == type2)
	{
		Coercion coercion = {type1, type2};
		return coercion;
	}
	if (coercionTable.find(key) != coercionTable.end())
	{
		return coercionTable[key];
	}
	yyerror("Cannot convert type " + type1 + " to type " + type2 + ".");

	// Just to remove the warning, it will never run.
	Coercion notFound = {"NULL", "NULL"};
	return notFound;
}

void iniciateCoercionTable()
{
	coercionTable[generateKey("int", "=", "float")] = {"int", "int"};
	coercionTable[generateKey("float", "=", "int")] = {"float", "float"};
	coercionTable[generateKey("int" , "=", "bool")] = {"int","int"};
	coercionTable[generateKey("bool" , "=", "int")] = {"bool","bool"};

	coercionTable[generateKey("int" , "%" , "int")] = {"int", "int"};

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



	coercionTable[generateKey("bool" , "&&", "bool")] = {"bool","bool"};
	coercionTable[generateKey("bool" , "||", "bool")] = {"bool","bool"};
	coercionTable[generateKey("bool" , "==", "bool")] = {"bool","bool"};
	coercionTable[generateKey("bool" , "!=", "bool")] = {"bool","bool"};



	coercionTable[generateKey("int" , "<", "int")] = {"bool","int"};
	coercionTable[generateKey("int" , ">", "int")] = {"bool","int"};
	coercionTable[generateKey("int" , ">=", "int")] = {"bool","int"};
	coercionTable[generateKey("int" , "<=", "int")] = {"bool","int"};
	coercionTable[generateKey("int" , "==", "int")] = {"bool","int"};
	coercionTable[generateKey("int" , "!=", "int")] = {"bool","int"};


	coercionTable[generateKey("float" , "<", "float")] = {"bool","float"};
	coercionTable[generateKey("float" , ">", "float")] = {"bool","float"};
	coercionTable[generateKey("float" , ">=", "float")] = {"bool","float"};
	coercionTable[generateKey("float" , "<=", "float")] = {"bool","float"};
	coercionTable[generateKey("float" , "==", "float")] = {"bool","float"};
	coercionTable[generateKey("float" , "!=", "float")] = {"bool","float"};


	coercionTable[generateKey("char" , "<", "char")] = {"bool", "char"};
	coercionTable[generateKey("char" , ">", "char")] = {"bool", "char"};
	coercionTable[generateKey("char" , ">=", "char")] = {"bool", "char"};
	coercionTable[generateKey("char" , "<=", "char")] = {"bool", "char"};
	coercionTable[generateKey("char" , "==", "char")] = {"bool","char"};
	coercionTable[generateKey("char" , "!=", "char")] = {"bool","char"};


	coercionTable[generateKey("int" , "<", "float")] = {"bool","float"};
	coercionTable[generateKey("int" , ">", "float")] = {"bool","float"};
	coercionTable[generateKey("int" , ">=", "float")] = {"bool","float"};
	coercionTable[generateKey("int" , "<=", "float")] = {"bool","float"};
	coercionTable[generateKey("int" , "==", "float")] = {"bool","float"};
	coercionTable[generateKey("int" , "!=", "float")] = {"bool","float"};

	coercionTable[generateKey("float" , "<", "int")] = {"bool","float"};
	coercionTable[generateKey("float" , ">", "int")] = {"bool","float"};
	coercionTable[generateKey("float" , ">=", "int")] = {"bool","float"};
	coercionTable[generateKey("float" , "<=", "int")] = {"bool","float"};
	coercionTable[generateKey("float" , "==", "int")] = {"bool","float"};
	coercionTable[generateKey("float" , "!=", "int")] = {"bool","float"};
}


StringCoercion getStringCoercion(string operation)
{
	return stringCoercionTable[operation];
}

void iniciateStringCoercionTable()
{
	stringCoercionTable["=="] = {"0", "=="};
	stringCoercionTable["!="] = {"0", "!="};
	stringCoercionTable["<"] = {"-1", "<="};
	stringCoercionTable[">"] = {"1", ">="};
	stringCoercionTable["<="] = {"0", "<="};
	stringCoercionTable[">="] = {"0", ">="};
}