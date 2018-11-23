#include "Electrodomestico.h"

#include <string>

using std::string;

Electrodomestico::Electrodomestico(){

}

Electrodomestico::Electrodomestico(string tipo, string nombre, double peso, string fragil):Producto(nombre, peso, fragil){
    this->tipo=tipo;
}

void Electrodomestico::setTipo(string tipo){
   this-> tipo=tipo;
}
string Electrodomestico::getTipo(){
   return tipo;
}

string Electrodomestico::fragil(){
	string retVal="Fragil";
	return retVal;
}

Electrodomestico::~Electrodomestico(){

}
