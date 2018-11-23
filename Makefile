salida:	caja.o compu.o electronicos.o libros.o producto.o ropa.o videojuego.o main.o
	g++ caja.o compu.o electronicos.o libros.o producto.o ropa.o videojuego.o main.o -o salida

caja.o: caja.cpp caja.h
	g++ -c caja.cpp

compu.o: compu.cpp compu.h
	g++ -c compu.cpp

electronicos.o: electronicos.cpp electronicos.h
	g++ -c electronicos.cpp

libros.o: libros.cpp libros.h
	g++ -c libros.cpp

producto.o: producto.cpp producto.h
	g++ -c producto.cpp

ropa.o: ropa.cpp ropa.h
	g++ -c ropa.cpp

videojuego.o: videojuego.cpp videojuego.h
	g++ -c videojuego.cpp

main.o: main.cpp
	g++ -c main.cpp
