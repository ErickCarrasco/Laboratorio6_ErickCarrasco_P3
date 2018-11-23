#ifndef VIDEOJUEGO_H
#define VIDEOJUEGO_H

#include <string>
using std::string;

#include "Electodomestico"

class Videojuego : public Electodomestico{
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