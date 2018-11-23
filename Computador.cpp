#include "Computador.h"

#include <string>

using std::string;

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

string Computador::getType(){
	return this->tipo;
}

Computador::Computador(string sistema, string tipo, string nombre, double peso, string fragil ):Electrodomestico(tipo, nombre, peso, fragil){
	this->sistema=sistema;
}

Computador::~Computador(){

}