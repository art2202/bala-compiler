#ifndef STRUCT_H
#define STRUCT_H

#include <iostream>
#include <string>
#include <sstream>


using namespace std;


typedef struct atributo
{
	string label;
	string traducao;
	string tipo;
} Atributo;

typedef struct simbolo
{
	bool inicializado = false;
	string nome;
	string tipo;
} Simbolo;

typedef struct coercao
{
	string retornoTipo;
  string conversaoTipo;
} Coercao;

#endif