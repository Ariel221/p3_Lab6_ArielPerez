#include "ropa.h"
#include <iostream>
#include <string>

using namespace std;

//Cosntructor 1
ropa::ropa(int fragil,string tipo){
    this->fragil=fragil;
    this->tipo=tipo;
}//Fin constructor

//Constructor2
ropa::ropa(){

}//Fin constructor sencillo

int ropa::getFragil(){
    return fragil;
}

void ropa:: setFragil(int fragil){

    this->fragil=fragil;

}

string ropa::getTipo(){
    return tipo;
}

void ropa:: setTipo(string tipo){

    this->tipo=tipo;

}

ropa::~ropa(){

    

}
