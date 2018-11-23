#include "Caja.h"
#include "Producto.h"

#include <vector>
using std::vector;

#include <string>
using std::string;

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

Caja::Caja(){

}

Caja::~Caja(){

}

Caja::Caja(double pesototal, string fragile){
	this->pesototal=pesototal;
	this->fragile=fragile;
}

string Caja::getFragile(){
	return fragile;
}

void Caja::setFragile(string fragile){
	this->fragile=fragile;
}

double Caja::getPesototal(){
	return pesototal;
}

void Caja::setPesototal(double pesototal){
	this->pesototal=pesototal;
}

vector <Producto*> Caja::getLista(){
	return lista;
}

void Caja::setLista(vector <Producto*> lista){
	this->lista=lista;
}

void Caja::addProducto(Producto* e){
	lista.push_back(e);
}


