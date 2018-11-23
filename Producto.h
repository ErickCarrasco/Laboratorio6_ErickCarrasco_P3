#ifndef PRODUCTO_H
#define PRODUCTO_H

#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;


class Producto{
    protected:
        string nombre;
        double peso;
        string fragil;
    public:
        Producto(string,double,bool);
        Producto();
        string getNombre();
        void setNombre(string);

        double getPeso();
        void setPeso(double);

        string getFragil();
        void setFragil(string);
        ~Producto();

};
#endif