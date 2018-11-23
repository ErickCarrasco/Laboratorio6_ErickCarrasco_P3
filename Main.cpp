#include "Caja.h"
#include "Computador.h"
#include "Libro.h"
#include "Ropa.h"
#include "Electrodomestico.h"
#include "Videojuego.h"
#include "Producto.h"

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <string>
using std::string;

#include <vector>
using std::vector;

Caja*** crearAlmacen();

int main(){
	cout<<"Bienvenido al AMAZON"<<endl;
	cout<<endl;
	int value=1;
	while(value==1){
		Caja*** almacen=NULL;
    	almacen=crearAlmacen();
    	cout<<"1/ Crear Producto"<<endl;
    	cout<<"2/ Mostrar"<<endl;
    	cout<<"3/ Salir"<<endl;
    	int selection;
    	cout<<"Ingrese su selection: "<<endl;
    	cin>>selection;
    	while(selection>3||selection<0){
    		cout<<"Ingrese un numero valido"<<endl;
    		cin>>selection;
    	}

    	switch(selection){
    		case 1:{

    		}
    		break;


    		case 2:
    		{

    		}
    		break;


    		case 3:
    		{
    			value=1000;
    		}
    		break;
    	}

	}
	return 0;
}


Caja*** crearAlmacen(){
    Caja*** almacen=new Caja**[10];
    for(int i=0; i<10;i++){
        almacen[i]=new Caja*[10];
    }
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            almacen[i][j]=NULL;
        }
    }
    return almacen;
}