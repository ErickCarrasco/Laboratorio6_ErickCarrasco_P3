#include "Libro.h"

#include <string>

using std::string;

Libro::Libro(){

}

Libro::Libro(string codigo){
	this->codigo=codigo;
}

string Libro::getCodigo(){
	return codigo;
}

void Libro::setCodigo(string codigo){
	this->codigo=codigo;
}

string Libro::fragil(){
	string retVal="No fragil";
	return retVal;
}