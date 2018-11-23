#ifndef ELECTRODOMESTICO_H
#define ELECTRODOMESTICO_H

#include "Producto.h"

#include <iostream>
#include <string>

using std::string;


class Electrodomestico : public Producto{
    protected:
        string tipo;
    public:
        Electrodomestico(string);
        Electrodomestico();
        string getTipo();
        string fragil();
        void setTipo(string);
        ~Electrodomestico();

};
#endif