#include "Electrodomestico.h"

#include <string>

using std::string;

Electrodomestico::Electrodomestico(){

}

Electrodomestico::Electrodomestico(string tipo){
    this->tipo=tipo;
}

void Electrodomestico::setTipo(string tipo){
   this-> tipo=tipo;
}
string Electrodomestico::getTipo(){
   return tipo;
}

string Electrodomestico::fragil(){
	string retVal="No fragil";
	return retVal;
}

Electrodomestico::~Electrodomestico(){

}
