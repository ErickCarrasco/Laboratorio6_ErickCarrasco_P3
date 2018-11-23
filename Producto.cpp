#include "Producto.h"

Producto::Producto(string nombre,double peso,bool fragil){
    this->nombre=nombre;
    this->peso=peso;
    this->fragil=fragil;
}
Producto::Producto(){

}
void Producto::setNombre(string nombre){
   this-> nombre=nombre;
}
string Producto::getNombre(){
   return nombre;
}
void Producto::setPeso(double peso){
   this-> peso=peso;
}
double Producto::getPeso(){
   return peso;
}
void Producto::setFragil(string fragil){
   this-> fragil=fragil;
}
string Producto::getFragil(){
   return fragil;
}

Producto::~Producto(){

}
