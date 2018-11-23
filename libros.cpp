#include "libros.h"
#include <iostream>
#include <string>

using namespace std;

//Cosntructor 1
libros::libros(int fragil,int codigo){
    this->fragil=fragil;
    this->codigo=codigo;
}//Fin constructor

//Constructor2
libros::libros(){

}//Fin constructor sencillo

int libros::getFragil(){
    return fragil;
}

void libros:: setFragil(int fragil){

    this->fragil=fragil;

}

int libros::getCodigo(){
    return codigo;
}

void libros:: setCodigo(int codigo){

    this->codigo=codigo;

}

libros::~libros(){

    

}
