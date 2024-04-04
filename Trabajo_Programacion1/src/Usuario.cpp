#include "Usuario.h"
#include "DtFecha.h"
#include <string>
using namespace std;

Usuario::Usuario(string N,int E,string Em,DtFecha fechaNac){
	this->Edad = E;
	this->Email = Em;
	this->Nombre = N;
	this->fechaNacimiento = fechaNac;
};

string Usuario::getNombre() {
        return Nombre;
};

int Usuario::getEdad() {
        return Edad;
};

string Usuario::getEmail() {
        return Email;
};



void Usuario::mostrarInformacion(){
	cout<<"< Soy ["+ getNombre()+ "] Tengo [" + to_string(getEdad())+ "] anios y mi email es ["+getEmail()+"] naci en ["+ to_string(fechaNacimiento.getFechaNacimientoDia())+"/"+ to_string(fechaNacimiento.getFechaNacimientoMes())+"/"+ to_string(fechaNacimiento.getFechaNacimientoAnio())+"]>"<<endl;
}
