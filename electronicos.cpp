#include "electronicos.h"
#include <iostream>
#include <string>

using namespace std;

//Cosntructor 1
electronicos::electronicos(int fragil){
    this->fragil=fragil;
}//Fin constructor

//Constructor2
electronicos::electronicos(){

}//Fin constructor sencillo

int electronicos::getFragil(){
    return fragil;
}

void electronicos:: setFragil(int fragil){

    this->fragil=fragil;

}

electronicos::~electronicos(){

  

}
