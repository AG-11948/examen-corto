#include "Persona.cpp"
#include <iostream>

using namespace std;

main(){
      string nit, nombres, apellidos, direccion, fechaN;
      int telefono;
      double cui;
      
      cout<<"Ingresar Nit: ";
      cin>>nit;
      cout<<"Ingresar Nombres: ";
      cin>>nombres;
      cout<<"Ingresar Apellidos: ";
      cin>>apellidos;
      cout<<"Ingresar Direccion: ";
      cin>>direccion;
      cout<<"Ingresar fecha de nacimiento: ";
      cin>>fechaN;
      cout<<"Ingresar Telefono: ";
      cin>>telefono;
      cout<<"Ingresar su CUI: ";
      cin>>cui;

      Persona obj = Persona (nombres, apellidos, direccion, telefono, fechaN, cui,nit);
      obj.mostrar();

      
}
