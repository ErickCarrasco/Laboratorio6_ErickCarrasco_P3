#ifndef LIBRO_H
#define LIBRO_H

#include "Producto.h"

#include <string>
using std::string;

class Libro : public Producto{
	protected:
		string codigo;
	public:
		Libro();
		Libro(string);
		string getCodigo();
		void setCodigo(string);
		string fragil();
		~Libro();
	
};
#endif