#include <string>
#include <iostream>
#include "producto.h"

using namespace std;

#ifndef ROPA_H
#define ROPA_H


//Inicio clase
class ropa : public producto{
    //Atributos
  protected:
        int fragil;
        string tipo;


    //metodos publicos
    public:
        //prototipos de metodos
        //constructor
        ropa();
        ropa(int,string);

        //metodos accersores / mutadores
        int getFragil();
        void setFragil(int);
        string getTipo();
        void setTipo(string);

    //Destructor
    ~ropa();


};//Fin de la clase


#endif
