#include <string>
#include <iostream>

using namespace std;

#ifndef PRODUCTO_H
#define PRODUCTO_H


//Inicio clase
class producto{

    //Atributos
    private:
        string nombre;
        int peso;
        int fragil;


    //metodos publicos
    public:
        //prototipos de metodos
        //constructor
        producto();
        producto(string,int,int);

        //metodos accersores / mutadores
        string getNombre();
        void setNombre(string);
        int getPeso();
        void setPeso(int);
        int getFragil();
        void setFragil(int);

    //Destructor
    ~producto();


};//Fin de la clase


#endif
