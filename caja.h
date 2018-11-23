#include <string>
#include <iostream>

using namespace std;

#ifndef CAJA_H
#define CAJA_H


//Inicio clase
class caja{

    //Atributos
    private:
        int fragil;
        int peso;


    //metodos publicos
    public:
        //prototipos de metodos
        //constructor
        caja();
        caja(int,int);

        //metodos accersores / mutadores
        int getFragil();
        void setFragil(int);
        int getPeso();
        void setPeso(int);

    //Destructor
    ~caja();


};//Fin de la clase


#endif
