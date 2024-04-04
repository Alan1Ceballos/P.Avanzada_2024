#include <iostream>
#include <string>
using namespace std;
#include "DtFecha.h"

class Usuario {
	private:
		string Nombre;
		int Edad;
		string Email;
		DtFecha fechaNacimiento;
	public:
		Usuario() : Nombre(""), Edad(0), Email(""), fechaNacimiento(0, 0, 0) {};
		Usuario(string ,int , string , DtFecha);
		string getNombre();
		int getEdad();
		string getEmail();
		void mostrarInformacion();
};


