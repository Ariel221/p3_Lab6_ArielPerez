#include "caja.h"
#include <iostream>
#include <string>

using namespace std;

//Cosntructor 1
caja::caja(int fragil,int peso){
    this->fragil=fragil;
    this->peso=peso;
}//Fin constructor

//Constructor2
caja::caja(){

}//Fin constructor sencillo

int caja::getFragil(){
    return fragil;
}

void caja:: setFragil(int fragil){

    this->fragil=fragil;

}

int caja::getPeso(){
    return peso;
}

void caja:: setPeso(int peso){

    this->peso=peso;

}

caja::~caja(){

    cout<<"La instancia de caja fue eliminada";

}
