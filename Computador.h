#ifndef COMPUTADOR_H
#define COMPUTADOR_H

#include <string>
using std::string;

#include "Electrodomestico.h"

class Computador : public Electrodomestico{
	protected:
		string sistema;
	public:
		Computador(string, string);
		string getSistema();
		void setSistema(string);
		string getType();
		~Computador();
	
};
#endif