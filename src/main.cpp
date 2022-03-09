#include "../headers/main.hpp"

using namespace std;

//----------------------------------------------------------------------------------------------------------------------
int DEFAULT_INT = 0;
float DEFAULT_FLOAT = 0.0;
char DEFAULT_CHAR = ' ';
string DEFAULT_STRING = "\0";
bool DEFAULT_BOOL = false;
int count_var = 0;
vector<Simbolo> tabelaSimbolos;
unordered_map<string, string> temporarias;
map<TripleKey, Coercao> tabelaCoercao;
//----------------------------------------------------------------------------------------------------------------------

void yyerror(string MSG)
{
	cout << MSG << endl;
	exit (0);
}

string createTempCode()
{
	count_var++;
	return "t" + intToString(count_var);
}

string intToString(int value)
{
	return to_string(value);
}
//----------------------------------------------------------------------------------------------------------------------

string declararVariaveis()
{
	string resultado = "";
	for(auto &x: temporarias){
		resultado = resultado + x.second + " " +x.first + ";\n";
	}
	for(int i = 0; i < tabelaSimbolos.size(); i++){
		resultado = resultado + tabelaSimbolos[i].tipo + " " +tabelaSimbolos[i].nome + ";\n";
	}
	return resultado;
}

//----------------------------------------------------------------------------------------------------------------------

void inserirTemporaria(string label, string tipo)
{
  temporarias[label] = tipo;
}

void inserirSimboloNaTabela(string label, string tipo, Atributo atual)
{
	Simbolo simbolo;
	
	simbolo.nome = label;
	simbolo.tipo = tipo;
	simbolo.inicializado = true;

	tabelaSimbolos.push_back(simbolo);

	atual.traducao = "";
	atual.label = "";
}
//----------------------------------------------------------------------------------------------------------------------

Atributo criarAtrubutoAtual(Coercao coercao)
{
	Atributo atual;
	atual.label = createTempCode();
	atual.tipo = coercao.retornoTipo;
	inserirTemporaria(atual.label, atual.tipo);

	return atual;
}

Atributo resolverTipoExpressao(Atributo leftAtribute, string operador, Atributo rightAtribute)
{
	Coercao coercao = getCoercao(leftAtribute.tipo, operador, rightAtribute.tipo);
	Atributo atual = criarAtrubutoAtual(coercao);

	if (leftAtribute.tipo == coercao.conversaoTipo && rightAtribute.tipo == coercao.conversaoTipo)
	{
		atual.traducao = leftAtribute.traducao + rightAtribute.traducao + "\t" + atual.label +" = " + leftAtribute.label + " " + operador + " " + rightAtribute.label +";\n";
	}
	else
	{
		string newTemp = createTempCode();
		inserirTemporaria(newTemp, coercao.conversaoTipo);

		string message = "\t"+ newTemp + " = " "("+ coercao.conversaoTipo +") ", resultado;


		if (leftAtribute.tipo != coercao.conversaoTipo)
		{
			message += leftAtribute.label;
			resultado = newTemp + " " + operador + " " + rightAtribute.label;
		}
		else if (rightAtribute.tipo != coercao.conversaoTipo)
		{
			message += rightAtribute.label;
			resultado = leftAtribute.label + " " + operador + " " + newTemp;
		}

		message += ";\n";
		atual.traducao = leftAtribute.traducao + rightAtribute.traducao + message +"\t" + atual.label + " = "  + resultado + ";\n";
	}

	return atual;
}

Atributo resolverTipoAtribuicao(Atributo leftAtribute, string operador, Atributo rightAtribute)
{
	Simbolo leftSimbol = getSimbolo(leftAtribute.label);

	Coercao coercao = getCoercao(leftSimbol.tipo, operador, rightAtribute.tipo);
	Atributo atual = criarAtrubutoAtual(coercao);	

	string newTemp = createTempCode();
	inserirTemporaria(newTemp, coercao.conversaoTipo);

	string message = "\t"+ leftSimbol.nome + " " + operador + " ("+ coercao.conversaoTipo +") ", resultado;
	

	if (leftSimbol.tipo != coercao.conversaoTipo)
	{
		atual.traducao = atual.traducao + "\t" + leftSimbol.nome + " " + operador + " (" + coercao.conversaoTipo + ") " + atual.label + ";\n";
	}
	else if (rightAtribute.tipo != coercao.conversaoTipo)
	{
		message += rightAtribute.label;
		resultado = newTemp;
	}
	else
	{
		yyerror("The operation is not set to " + leftSimbol.tipo + " and " + rightAtribute.tipo);
	}
	
	atual.traducao = leftAtribute.traducao + rightAtribute.traducao + message + ";\n";

	return atual;
}

Coercao getCoercao(string tipo1, string operador, string tipo2)
{
	TripleKey key(tipo1, operador, tipo2);
	
	if (tabelaCoercao.find(key) != tabelaCoercao.end())
	{
		return tabelaCoercao[key];
	}

	Coercao naoEncontrada = {"NULL", "NULL"};
	return naoEncontrada;
}


TripleKey gerarKey(string a , string b, string c)
{
	TripleKey key(a , b, c);

	return key;
}

void inicializarTabelaCoercao()
{
	tabelaCoercao[gerarKey("int" , "+" , "int")] = {"int", "int"};
	tabelaCoercao[gerarKey("int" , "-" , "int")] = {"int", "int"};
	tabelaCoercao[gerarKey("int" , "*" , "int")] = {"int", "int"};
	tabelaCoercao[gerarKey("int" , "/" , "int")] = {"int", "int"};

	tabelaCoercao[gerarKey("float", "+", "float")] = {"float", "float"};
	tabelaCoercao[gerarKey("float", "-", "float")] = {"float", "float"};
	tabelaCoercao[gerarKey("float", "*", "float")] = {"float", "float"};
	tabelaCoercao[gerarKey("float", "/", "float")] = {"float", "float"};

	tabelaCoercao[gerarKey("int", "+", "float")] = {"float", "float"};
	tabelaCoercao[gerarKey("int", "-", "float")] = {"float", "float"};
	tabelaCoercao[gerarKey("int", "*", "float")] = {"float", "float"};
	tabelaCoercao[gerarKey("int", "/", "float")] = {"float", "float"};

	tabelaCoercao[gerarKey("float", "+", "int")] = {"float", "float"};
	tabelaCoercao[gerarKey("float", "-", "int")] = {"float", "float"};
	tabelaCoercao[gerarKey("float", "*", "int")] = {"float", "float"};
	tabelaCoercao[gerarKey("float", "/", "int")] = {"float", "float"};

	tabelaCoercao[gerarKey("int", "=", "float")] = {"int", "int"};
	tabelaCoercao[gerarKey("float", "=", "int")] = {"float", "float"};
}

//----------------------------------------------------------------------------------------------------------------------

int find(vector<Simbolo> vetor, string nome)
{
	for(int i = 0; i < vetor.size(); i++)
	{
		if(vetor[i].nome == nome)
		{
			return i;
		}
	}
	return -1;
}

Simbolo getSimbolo(string label)
{
	int posicao = find(tabelaSimbolos, label);
	return tabelaSimbolos[posicao];
}
//----------------------------------------------------------------------------------------------------------------------

Atributo criarTK_ID(Atributo atual, Atributo valor)
{
	Simbolo simbolo = getSimbolo(valor.label);

	atual.label = simbolo.nome;
	atual.tipo = simbolo.tipo;

	return atual;
}

Atributo criarTK_TYPE(Atributo atual, string tipo, Atributo valor)
{
	atual.label = createTempCode();

	atual.tipo = tipo; // resolvendo tipo

	inserirTemporaria(atual.label, tipo);
	atual.traducao = "\t" + atual.label + " = " + valor.label + ";\n";

	return atual;
}
//----------------------------------------------------------------------------------------------------------------------

void validarTK_ID(Atributo atributo)
{
	int posicao = find(tabelaSimbolos, atributo.label);
	if (posicao < 0)
	{
		yyerror("TK_ID '" +  atributo.label + "' is not defined. Please defines a type to '" +  atributo.label + "'.\n");
	}
}
//----------------------------------------------------------------------------------------------------------------------

Atributo realizarAtribuicao(Atributo atual, Atributo leftAtribute, Atributo rightAtribute)
{
	validarTK_ID(atual);
	string operador = "=";

	Simbolo leftSimbol = getSimbolo(leftAtribute.label);
	if(leftSimbol.tipo == rightAtribute.tipo)
	{
		atual.traducao = leftAtribute.traducao + rightAtribute.traducao + "\t" + leftSimbol.nome + " " + operador + " " + rightAtribute.label + ";\n";
	}
	else 
	{
		Atributo novoAtual = resolverTipoAtribuicao(leftAtribute, operador, rightAtribute);
		return novoAtual;
	}

	return atual;
}

Atributo realizarExpressao(Atributo atual, Atributo destino, string operacao, Atributo valor)
{
	Atributo novoAtual = resolverTipoExpressao(destino, operacao, valor);
	
	return novoAtual;
}
//----------------------------------------------------------------------------------------------------------------------

Atributo declararTK_TIPO(string type, Atributo atual, Atributo destino, Atributo valor)
{
	inserirSimboloNaTabela(valor.label, type, atual);

	if(type == "int") 		{ atual.traducao = DEFAULT_INT;			+"\t" + atual.label + " = " + destino.label + ";\n"; 	}
	if(type == "float") 	{ atual.traducao = DEFAULT_FLOAT;		+"\t" + atual.label + " = " + destino.label + ";\n"; 	}
	if(type == "char") 		{ atual.traducao = DEFAULT_CHAR;		+"\t" + atual.label + " = " + destino.label + ";\n"; 	}
	if(type == "string") 	{ atual.traducao = DEFAULT_STRING;	+"\t" + atual.label + " = " + destino.label + ";\n";	}
	if(type == "bool") 		{ atual.traducao = DEFAULT_BOOL;		+"\t" + atual.label + " = " + destino.label + ";\n"; 	}

	return atual;
}
//----------------------------------------------------------------------------------------------------------------------