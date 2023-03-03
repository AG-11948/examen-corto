#include <iostream>
using namespace std;

class Propietario{

// atributos
protected : string nombres, apellidos, direccion, nit, fechaN;
        int telefono;
        double cui;

// constructo
protected :
      Propietario(){
         }
        Propietario(string nom, string ape,string dir, string nit, string fhn, int tel, double ci){
        nombres = nom;
        apellidos = ape;
        direccion = dir;
        telefono = tel;
        fechaN = fhn;
        nit = nit;
        cui = ci;
     }

//metodo
void mostrar();
};

