#include <string>
#include <iostream>

using namespace std;

#ifndef VIDEOJUEGO_H
#define VIDEOJUEGO_H


//Inicio clase
class videojuego{

    //Atributos
    private:
        string desarrollador;
        int fragil;


    //metodos publicos
    public:
        //prototipos de metodos
        //constructor
        videojuego();
        videojuego(string,int);

        //metodos accersores / mutadores
        string getDesarrollador();
        void setDesarrollador(string);
        int getFragil();
        void setFragil(int);

    //Destructor
    ~videojuego();


};//Fin de la clase


#endif
