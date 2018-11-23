#include <string>
#include <iostream>
#include "producto.h"

using namespace std;

#ifndef LIBROS_H
#define LIBROS_H


//Inicio clase
class libros : public producto{

    //Atributos
  protected:
        int fragil;
        int codigo;


    //metodos publicos
    public:
        //prototipos de metodos
        //constructor
        libros();
        libros(int,int);

        //metodos accersores / mutadores
        int getFragil();
        void setFragil(int);
        int getCodigo();
        void setCodigo(int);

    //Destructor
    ~libros();


};//Fin de la clase


#endif
