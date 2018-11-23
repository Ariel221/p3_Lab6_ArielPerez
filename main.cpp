#include "caja.h"
#include "compu.h"
#include "electronicos.h"
#include "libros.h"
#include "producto.h"
#include "ropa.h"
#include "videojuego.h"
#include <iostream>
using namespace std;
#include <vector>
#include <string>
#include <stdio.h>
#include <stdlib.h>

using std::string;

int menu();

//Crea la matriz 10x10
int*** crearCubo();

//inicializa la matriz
void llenarMatriz(int***);

//Imprime una matriz
void printCubo(int***);

//liberar la  matriz
void liberarCubo(int***);


int main(){
vector<producto*>nueva;
char resp='s';
do {
switch (menu()) {
  case 1:{
  int eleccion;
  std::cout << "Elija lo que desea crear" << '\n';
  std::cout << "1-Libros" << '\n';
  std::cout << "2-ropa" << '\n';
  std::cout << "3-videojuegos" << '\n';
  std::cout << "4-computadoras" << '\n';
  cin>>eleccion;
  switch (eleccion) {
    case 1:{
    int code;
    std::cout << "Ingrese el codigo de ropa:" << '\n';
    cin>>code;
}
    break;
    case 2:{
    string tipo;
    std::cout << "Ingrese el tipo de ropa:" << '\n';
    cin>>tipo;
  }
    break;
    case 3:{
    string creador;
    std::cout << "Ingrese el desarrollador:" << '\n';
    cin>>creador;
  }
    break;
    case 4:{
    string sistem;
    std::cout << "Ingrese el sistema operativo:" << '\n';
    cin>>sistem;
  }
    break;
    default:
    std::cout << "La opcion no es correcta" << '\n';
  }
}
  break;
  case 2:{
  std::cout << "matriz de almacenes fragiles" << '\n';

}
  break;
  case 3:{
  std::cout << "matriz de almacenes por peso" << '\n';
}
  break;
  case 4:{

  }

  break;
  case 5:{

  }
  break;
  default:
  std::cout << "esta mala la opcion" << '\n';
}
std::cout << "Desea seguir en el programa" << '\n';
cin>>resp;
} while(resp=='s' || resp== 'S');



}//fin del main

int menu(){
int resp;
cout << endl
       << "------------------------------------------" << endl
       << "Seleccione la opción que desea : " << endl;
  cout << "1- crear y agregar a la caja" << endl
       << "2- Mostrar matriz de almacen(fragiles)." << endl
       << "3- Mostrar matriz de almacen por peso." << endl
       << "4- Mostrar toda la informacion de la caja" << endl
       << "5- Mover una caja" << endl;
       cout<<"----------------------------------- "<<endl;
       cin>>resp;
       return resp;
}

int*** crearCubo(){
    int*** cubo=new int**[10];
    for(int i=0;i<10;i++){
        cubo[i]=new int*[10];
    }
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            cubo[i][j]=new int[10];
        }
    }

    return cubo;
}

void llenarMatriz(int*** cubo){

    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            for(int z=0;z<10;z++){
                cubo[i][j][z]=0;
            }
        }
    }

}

void printCubo(int*** cubo){
  for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            for(int z=0;z<10;z++){
               cout<<" "<<cubo[i][j][z];
            }
        cout<<endl;
        }
    cout<<endl;
    cout<<endl;
    }
cout<<endl;
}

void liberarCubo(int*** mat){
	for(int i=0;i<10;i++){
		for(int j=0;j<3;j++){
			delete [] mat[i][j];
			mat[i][j] = NULL;
		}
	}

	for(int i=0;i<10;i++){
		delete[] mat[i];
		mat[i] =NULL;
	}
	delete[]mat;
}
