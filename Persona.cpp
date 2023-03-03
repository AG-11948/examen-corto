#include "Propietario.cpp"
#include <iostream>
using namespace std;

class Persona: Propietario {
	private : string nit;
	public :
        persona (){
        }

        Persona(string nom, string ape,string dir, string fhn, int tel){
        	nombre = nom;
			apellido = ape;
			direccion = dir;
			fechaN = fhn;
			cui = ci;
			telefono = tel;         
		}
         // metodos
         // set (modificar)
         
        void setNit(string n){nit = n;}
        void setNombres(string nom) {nombres = nom;}
        void setApellidos(string ape){apellidos = ape;}
        void setDireccion(string dir){direccion = dir;}
        void setFecha_nacimiento(string fhn){fechaN = fhn;}
        void setTelefono(int tel){telefono = tel;}
        void setCUI(double ci){cui = ci;}
        // get (mostrar)
        
        string getNit(){return nit;}
        string getNombres (){return nombres;}
        string getApellidos(){return apellidos;}
        string getDireccion(){return direccion;}
        string getFecha_nacimiento(){return fechaN;}
        int getTelefono(){return telefono;}
        double getCUI(){return cui;}
        //metodos
        
         void mostrar(){
         cout<<"____________________"<<endl;
         cout<<nit<<","<<nombres<<","<<apellidos<<","<<direccion<<","<<fechaN<<","<<telefono<<","<<cui<<endl;

         }
};
