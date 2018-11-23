#ifndef ROPA_H
#define ROPA_H

#include "Producto.h"

#include <string>
using std::string;

class Ropa : public Producto{
	private:
		string type;
	public:
		Ropa();
		Ropa(string, string, double, string);
		string getType();
		void setType(string);
		string fragil();
		~Ropa();
	
};
#endif