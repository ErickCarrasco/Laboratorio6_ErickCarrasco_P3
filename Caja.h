#ifndef CAJA_H
#define CAJA_H

#include <vector>
using std::vector;

#include <string>
using std::string;

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include "Producto.h"

class Caja{
	private:
		double pesototal;
		string fragile;
		vector<Producto*> lista;
	public:
		Caja();
		Caja(double, string);
		string getFragile();
		void setFragile(string);
		double getPesototal();
		void setPesototal(double);
		vector <Producto*> getLista();
		void setLista(vector <Producto*>);
		void addProducto(Producto*);

		~Caja();
	
};
#endif