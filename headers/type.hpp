#ifndef TYPE_H
#define TYPE_H

#include <iostream>
#include <string>
#include <sstream>
#include <unordered_map>
#include <map>
#include "../headers/struct.hpp"


using namespace std;



Atributo criarTK_ID(Atributo atual, Atributo valor);
Atributo criarTK_TYPE(Atributo atual, string tipo, Atributo valor);
Atributo declararTK_TIPO(string type, Atributo atual, Atributo destino, Atributo valor);

#endif