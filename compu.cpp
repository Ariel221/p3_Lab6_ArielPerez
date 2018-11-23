#include "compu.h"
#include <iostream>
#include <string>

using namespace std;

//Cosntructor 1
compu::compu(string sistema,int fragil){
    this->sistema=sistema;
    this->fragil=fragil;
}//Fin constructor

//Constructor2
compu::compu(){

}//Fin constructor sencillo

string compu::getSistema(){
    return sistema;
}

void compu:: setSistema(string sistema){

    this->sistema=sistema;

}

int compu::getFragil(){
    return fragil;
}

void compu:: setFragil(int fragil){

    this->fragil=fragil;

}

compu::~compu(){

}
