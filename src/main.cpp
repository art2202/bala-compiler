#include "../headers/main.hpp"

using namespace std;

//----------------------------------------------------------------------------------------------------------------------
int DEFAULT_INT = 0;
float DEFAULT_FLOAT = 0.0;
string DEFAULT_CHAR = "";
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

void inserirSimboloNaTabela(string label, string tipo, Atributo atual, bool inicializado)
{
	Simbolo simbolo;
	
	simbolo.nome = label;
	simbolo.tipo = tipo;
	simbolo.inicializado = inicializado;

	tabelaSimbolos.push_back(simbolo);

	atual.traducao = "";
	atual.label = "";
}
//----------------------------------------------------------------------------------------------------------------------

Coercao resolverTipo(string tipo1, string operador, string tipo2)
{
	TripleKey key = gerarKey(tipo1, operador, tipo2);
	Coercao coercao = tabelaCoercao.at(key);
	return coercao;
}


TripleKey gerarKey(string a , string b, string c)
{
	TripleKey key(a , b, c);
	return key;
}

void inicializarTabelaCoercao(){

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
//----------------------------------------------------------------------------------------------------------------------

Atributo criarTK_ID(Atributo atual, Atributo valor)
{
	int posicao = find(tabelaSimbolos, valor.label);

	Simbolo simbolo = tabelaSimbolos[posicao];

	atual.label = simbolo.nome;
	atual.tipo = simbolo.tipo;

	return atual;
}

Atributo criarTK_TYPE(Atributo atual, string tipo, Atributo valor)
{
	atual.label = createTempCode();
	atual.tipo = tipo;
	inserirTemporaria(atual.label, atual.tipo);
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


Atributo realizarAtribuicao(Atributo atual, Atributo destino, Atributo valor)
{
	validarTK_ID(atual);
	// mudar depois para por o tipo de conveção.
	atual.tipo = valor.tipo;
	atual.traducao = destino.traducao + valor.traducao + "\t" + destino.label + " = " + valor.label + ";\n";

	return atual;
}

Atributo realizarOperacao(Atributo atual, Atributo destino, Atributo operacao, Atributo valor)
{
	return atual;
}
//----------------------------------------------------------------------------------------------------------------------