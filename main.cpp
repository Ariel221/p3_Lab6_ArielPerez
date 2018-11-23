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

using std::string;

int menu();


int main(){
char resp='s';
do {
switch (menu()) {
  case 1:
  int eleccion;
  std::cout << "Elija lo que desea crear" << '\n';
  std::cout << "1-Libros" << '\n';
  std::cout << "2-ropa" << '\n';
  std::cout << "3-videojuegos" << '\n';
  std::cout << "4-computadoras" << '\n';
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


  break;
  case 2:
  break;
  case 3:
  break;
  case 4:
  case 5:
  break;
  default:
  std::cout << "esta mala la opcion" << '\n';
}
std::cout << "Desea seguir en el programa" << '\n';
cin>>resp;
} while(resp=='s' || resp== 'S');



}

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
