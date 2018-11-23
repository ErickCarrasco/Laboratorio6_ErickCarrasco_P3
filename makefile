execute:	Main.o Caja.o Libro.o Ropa.o Electrodomestico.o Videojuego.o Computador.o Producto.o
	g++	Main.o Caja.o Libro.o Ropa.o Electrodomestico.o Videojuego.o Computador.o Producto.o -o execute

Caja.o:	Caja.h Caja.cpp
	g++ -c Caja.cpp

Libro.o: Libro.h Libro.cpp
	g++ -c Libro.cpp

Ropa.o:	Ropa.h Ropa.cpp
	g++ -c Ropa.cpp

Electrodomestico.o: Electrodomestico.h Electrodomestico.cpp
	g++ -c Electrodomestico.cpp

Videojuego.o: Videojuego.h Videojuego.cpp
	g++ -c Videojuego.cpp

Computador.o: Computador.h Computador.cpp
	g++ -c Computador.cpp

Main.o:	Main.cpp
	g++ -c Main.cpp