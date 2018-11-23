#include "producto.h"
#include <iostream>
#include <string>

using namespace std;

//Cosntructor 1
producto::producto(string nombre,int peso,int fragil){
    this->nombre=nombre;
    this->peso=peso;
    this->fragil=fragil;
}//Fin constructor

//Constructor2
producto::producto(){

}//Fin constructor sencillo

string producto::getNombre(){
    return nombre;
}

void producto:: setNombre(string nombre){

    this->nombre=nombre;

}

int producto::getPeso(){
    return peso;
}

void producto:: setPeso(int peso){

    this->peso=peso;

}

int producto::getFragil(){
    return fragil;
}

void producto:: setFragil(int fragil){

    this->fragil=fragil;

}

producto::~producto(){

    

}
