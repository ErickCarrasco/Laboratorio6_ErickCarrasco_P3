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

#include <typeinfo>

Caja*** crearAlmacen();

void free(Caja***&);

int main(){
	cout<<"Bienvenido al AMAZON"<<endl;
	cout<<endl;
	int value=1;
	while(value==1){
		Caja*** almacen=NULL;
    	almacen=crearAlmacen();

    	//Iniciar Cajas
    	for (int i = 0; i < 10; i++)
    	{
    		for (int j = 0; j < 10; j++)
    		{
    			double value=999;
    			almacen[i][j]=new Caja(value, "No fragil");
    		}
    	}

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
    			cout<<"1/ Crear Ropa"<<endl;
    			cout<<"2/ Crear Libro"<<endl;
    			cout<<"3/ Crear Electrodomestico PC"<<endl;
    			cout<<"4/ Crear Electrodomestico Videojuego"<<endl;
    			int selectionC;
    			while(selection>4||selection<0){
    				cout<<"Ingrese un numero valido"<<endl;
    				cin>>selectionC;
    			}
    			if (selectionC==1){
    				cout<<"Ingrese un peso: "<<endl;
    				double peso;
    				cin>>peso;
    				cout<<"Ingrese un nombre: "<<endl;
    				string nombre;
    				cin>>nombre;
    				string fragilation="No fragil";
    				cout<<"El codigo: "<<endl;
    				string codex;
    				cin>>codex;


    				Producto* producto= new Libro(codex, nombre, peso, fragilation);
    				bool adder=true;
    				for (int i = 0; i < 10; i++){
    					for (int j = 0; j < 10; j++){
    						double pesoActual=almacen[i][j]->getPesototal();
    						if (pesoActual<999 && peso+pesoActual<999 && adder==true){
    							almacen[i][j]->addProducto(producto);
    							double pesoNuevo;
    							pesoNuevo=pesoActual+peso;
    							almacen[i][j]->setPesototal(pesoNuevo);
    							adder=false;
    						}else{
    							cout<<"Ya no hay espacio"<<endl;
    						}
    					}
    				}
    				
    			}//FIn if 1

    			if (selectionC==2){
    				cout<<"Ingrese un peso: "<<endl;
    				double peso;
    				cin>>peso;
    				cout<<"Ingrese un nombre: "<<endl;
    				string nombre;
    				cin>>nombre;
    				string fragilation="No fragil";
    				cout<<"El tipo de ropa: "<<endl;
    				string typeO;
    				cin>>typeO;

    				Producto* producto2= new Ropa(typeO, nombre, peso, fragilation);
    				bool adder=true;
    				for (int i = 0; i < 10; i++){

    					for (int j = 0; j < 10; j++){

    						double pesoActual=almacen[i][j]->getPesototal();

    						if (pesoActual<999 && peso+pesoActual<999 && adder==true){

    							almacen[i][j]->addProducto(producto2);
    							double pesoNuevo;
    							pesoNuevo=pesoActual+peso;
    							almacen[i][j]->setPesototal(pesoNuevo);
    							adder=false;
    						}else{
    							cout<<"Ya no hay espacio"<<endl;
    						}
    					}
    				}

    			}//Fin if 2

    			if (selectionC==3){
    				cout<<endl;

    				cout<<"Ingrese un peso: "<<endl;
    				double peso;
    				cin>>peso;
    				cout<<"Ingrese un nombre: "<<endl;
    				string nombre;
    				cin>>nombre;
    				string fragilation="fragil";
    				string typeE="Computador";
    				cout<<"Ingrese el tipo de sistema operativo: "<<endl;
    				string os;
    				cin>>os;
    				Producto* producto3= new Computador(os, typeE, nombre, peso, fragilation);
    				bool adder=true;

    				for (int i = 0; i < 10; i++){

    					for (int j = 0; j < 10; j++){

    						double pesoActual=almacen[i][j]->getPesototal();

    						if (pesoActual<999 && peso+pesoActual<999 && adder==true){

    							almacen[i][j]->addProducto(producto3);
    							double pesoNuevo;
    							pesoNuevo=pesoActual+peso;
    							almacen[i][j]->setPesototal(pesoNuevo);
    							almacen[i][j]->setFragile(fragilation);
    							adder=false;
    						}else{
    							cout<<"Ya no hay espacio"<<endl;
    						}
    					}
    				}
    				
    			}//Fin if 3

    			if (selectionC==4){
    				cout<<endl;

    				cout<<"Ingrese un peso: "<<endl;
    				double peso;
    				cin>>peso;
    				cout<<"Ingrese un nombre: "<<endl;
    				string nombre;
    				cin>>nombre;
    				string fragilation="fragil";
    				string typeE="Videojuego";
    				cout<<"Ingrese la company que creo el juego: "<<endl;
    				string company;
    				cin>>company;
    				Producto* producto4= new Videojuego(company, typeE, nombre, peso, fragilation);
    				bool adder=true;

    				for (int i = 0; i < 10; i++){

    					for (int j = 0; j < 10; j++){

    						double pesoActual=almacen[i][j]->getPesototal();

    						if (pesoActual<999 && peso+pesoActual<999 && adder==true){

    							almacen[i][j]->addProducto(producto4);
    							double pesoNuevo;
    							pesoNuevo=pesoActual+peso;
    							almacen[i][j]->setPesototal(pesoNuevo);
    							almacen[i][j]->setFragile(fragilation);
    							adder=false;
    						}else{
    							cout<<"Ya no hay espacio"<<endl;
    						}
    					}
    				}
    			}//FIn if 4
    		}
    		break;


    		case 2:
    		{
    			cout<<"1/ Mostrar por fragil"<<endl;
    			cout<<"2/ Mostrar por peso"<<endl;
    			cout<<"3/ Mostrar caja"<<endl;
    			int selectionM;
    			cout<<"Ingrese una selection: "<<endl;
    			cin>>selectionM;
    			while(selection>3||selection<0){
    				cout<<"Ingrese un numero valido"<<endl;
    				cin>>selectionM;
    			}

    			if (selectionM==1){
    				cout<<"Almacen, cajas fragiles: "<<endl;
    				for (int i = 0; i < 10; i++){
    					for (int j = 0; j < 10; j++){
    						string validadorS=almacen[i][j]->getFragile();
    						if (validadorS=="fragil"){
    							cout<<0;
    						}
    					}
    					cout<<endl;
    				}
    			}
    			if (selectionM==2){
    				for (int i = 0; i < 10; i++){
    					for (int j = 0; j < 10; j++){
    						double registro=almacen[i][j]->getPesototal();
    						if(registro>=0 && registro<100){
    							cout<<0;
    						}
    						if (registro>=100 && registro<200)
    						{
    							cout<<1;
    						}
    						if (registro>=200 && registro<300)
    						{
    							cout<<2;
    						}
    						if (registro>=300 && registro<400)
    						{
    							cout<<3;
    						}
    						if (registro>=400 && registro<500)
    						{
    							cout<<4;
    						}
    						if (registro>=500 && registro<600)
    						{
    							cout<<5;
    						}
    						if (registro>=600 && registro<700)
    						{
    							cout<<6;
    						}
    						if (registro>=700 && registro<800)
    						{
    							cout<<7;
    						}
    						if (registro>=800 && registro<900)
    						{
    							cout<<8;
    						}
    						if (registro>=900)
    						{
    							cout<<9;
    						}
    					}//Fin for 1
    					cout<<endl;
    				}//Fin for 2
    			}//Fin selection 2

    			if (selectionM==3)
    			{
    				int x;
    				int y;
    				cout<<"Ingrese la posicion en x (no mayor que 10) "<<endl;
    				cin>>x;
    				cout<<"Ingrese la posicion en y (no mayor que 10) "<<endl;
    				cin>>y;
    				while(x<0 || x>9 || y<0 || y>9){
    					cout<<"Se encontro un error en los registros.."<<endl;
    					cout<<endl;
    					cout<<"Ingrese la posicion en x (no mayor que 10) "<<endl;
    					cin>>x;
    					cout<<"Ingrese la posicion en y (no mayor que 10) "<<endl;
    					cin>>y;
    				}
    				double pesoX = almacen[x][y]->getPesototal();
    				cout<<"Peso: "<< pesoX<<endl;
    				cout<<"Fragil: "<<almacen[x][y]->getFragile()<<endl;
    				for (int i = 0; i < almacen[x][y]->getLista().size(); ++i)
    				{
    					cout<<almacen[x][y]->getLista()[i]->getNombre()<<endl;
    				}
    			}



    		}
    		break;


    		case 3:
    		{
    			free(almacen);
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

void free(Caja***& tablero){
  if(tablero!=NULL){
    /*for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            delete[] tablero;
            tablero[i][j]=NULL; 
        }
    }*/

    for(int i=0;i<10;i++){
        delete[] tablero[i];
        tablero[i]=NULL;
    }
    delete[] tablero;
    tablero=NULL;
  }
}