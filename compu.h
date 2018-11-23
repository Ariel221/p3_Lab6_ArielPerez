#include <string>
#include <iostream>
#include "electronicos.h"

using namespace std;

#ifndef COMPU_H
#define COMPU_H


//Inicio clase
class compu : public electronicos{

    //Atributos
  protected:
        string sistema;
        int fragil;


    //metodos publicos
    public:
        //prototipos de metodos
        //constructor
        compu();
        compu(string,int);

        //metodos accersores / mutadores
        string getSistema();
        void setSistema(string);
        int getFragil();
        void setFragil(int);

    //Destructor
    ~compu();


};//Fin de la clase


#endif
