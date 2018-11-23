#include <string>
#include <iostream>
#include "producto.h"

using namespace std;

#ifndef ELECTRONICOS_H
#define ELECTRONICOS_H


//Inicio clase
class electronicos : public producto{

    //Atributos
    private:
        int fragil;


    //metodos publicos
    public:
        //prototipos de metodos
        //constructor
        electronicos();
        electronicos(int);

        //metodos accersores / mutadores
        int getFragil();
        void setFragil(int);

    //Destructor
    ~electronicos();


};//Fin de la clase


#endif
