#include "Videojuego.h"

#include <string>

using std::string;

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

string Videojuego::getType(){
	return this->tipo;
}

Videojuego::Videojuego(string company, string tipo):Electrodomestico(tipo){
	this->company=company;
}

Videojuego::~Videojuego(){

}