#include "videojuego.h"
#include <iostream>
#include <string>

using namespace std;

//Cosntructor 1
videojuego::videojuego(string desarrollador,int fragil){
    this->desarrollador=desarrollador;
    this->fragil=fragil;
}//Fin constructor

//Constructor2
videojuego::videojuego(){

}//Fin constructor sencillo

string videojuego::getDesarrollador(){
    return desarrollador;
}

void videojuego:: setDesarrollador(string desarrollador){

    this->desarrollador=desarrollador;

}

int videojuego::getFragil(){
    return fragil;
}

void videojuego:: setFragil(int fragil){

    this->fragil=fragil;

}

videojuego::~videojuego(){


}
