#ifndef ROPA_H
#define ROPA_H

#include "Producto.h"

#include <string>
using std::string;

class Ropa : Producto{
	private:
		string type;
	public:
		Ropa();
		Ropa(string);
		string getType();
		void setType(string);
		string fragil();
		~Ropa();
	
};