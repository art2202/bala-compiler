%{
#include <iostream>
#include <string>
#include <sstream>

#define YYSTYPE atributos

using namespace std;

int count_var;

struct atributos
{
	string label;
	string traducao;
};

int yylex(void);
void yyerror(string);
string createTempCode();
string intToString(int value);
%}

%token TK_NUM
%token TK_MAIN TK_ID TK_TIPO_INT
%token TK_FIM TK_ERROR

%start S

%left '+'

%%

S 			: TK_TIPO_INT TK_MAIN '(' ')' BLOCO
			{
				cout << "<<<<Bala Compiler>>>>\n" << "#include <iostream>\n#include<string.h>\n#include<stdio.h>\nint main(void)\n{\n" << $5.traducao << "\treturn 0;\n}" << endl; 
			}
			;

BLOCO		: '{' COMANDOS '}'
			{
				$$.traducao = $2.traducao;
			}
			;

COMANDOS	: COMANDO COMANDOS
			{
				$$.traducao = $1.traducao + $2.traducao;
			}
			|
			{
				$$.traducao = "";
			}
			;

COMANDO 	: E ';'
			;

E 			: E '*' E
			{
				$$.label = createTempCode();
				$$.traducao = $1.traducao + $3.traducao +"\t" + $$.label + " = " + $1.label + " * " + $3.label + ";\n";
			}
			| E '/' E
			{
				$$.label = createTempCode();
				$$.traducao = $1.traducao + $3.traducao +"\t" + $$.label + " = " + $1.label + " / " + $3.label + ";\n";
			}
			| E '+' E
			{
				$$.label = createTempCode();
				$$.traducao = $1.traducao + $3.traducao +"\t" + $$.label + " = " + $1.label + " + " + $3.label + ";\n";
			}
			| E '-' E
			{
				$$.label = createTempCode();
				$$.traducao = $1.traducao + $3.traducao +"\t" + $$.label + " = " + $1.label + " - " + $3.label + ";\n";
			}
			| TK_ID '=' E 
			{
				$$.traducao = $1.traducao + $3.traducao +  "\t" + $1.label + " = " + $3.label + ";\n";
			}
			| TK_NUM
			{
				
				$$.label = createTempCode();
				$$.traducao = "\t" + $$.label + " = " + $1.label + ";\n";
			}
			| TK_ID
			{
				$$.label = createTempCode();
				$$.traducao = "\t" + $$.label + " = " + $1.label + ";\n";	
			}
			;

%%

#include "lex.yy.c"

int yyparse();


int main( int argc, char* argv[] )
{
	count_var = 0;
	yyparse();

	return 0;
}

string createTempCode(){
	count_var++;
	return "t" + intToString(count_var);
}

string intToString(int value){
	return std::to_string(value);
}

void yyerror( string MSG )
{
	cout << MSG << endl;
	exit (0);
}				
