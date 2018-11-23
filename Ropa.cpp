#include "Ropa.h"

#include <string>

using std::string;

Ropa::Ropa(){

}

Ropa::Ropa(string type, string nombre, double peso, string fragil):Producto(nombre, peso, fragil){
	this->type=type;
}

string Ropa::getType(){
	return type;
}

void Ropa::setType(string type){
	this->type=type;
}

string Ropa::fragil(){
	string retVal="No fragil";
	return retVal;
}

Ropa::~Ropa(){
	
}