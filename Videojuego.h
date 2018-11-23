#ifndef VIDEOJUEGO_H
#define VIDEOJUEGO_H

#include <string>
using std::string;

#include "Electrodomestico.h"

class Videojuego : public Electrodomestico{
	protected:
		string company;
	public:
		Videojuego(string, string);
		string getCompany();
		void setCompany(string);
		string getType();
		~Videojuego();
	
};
#endif