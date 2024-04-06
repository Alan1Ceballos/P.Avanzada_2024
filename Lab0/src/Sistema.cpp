#include "Sistema.h"
#include <vector>
using namespace::std;

vector<Jugador> Jugadores;

void agregarJugador(string nickname, int edad, string contrasenia){
	bool jugadorExiste = false;
	int a = Jugadores.size();
	for(int i = 0; i < a; i++){
		if(Jugadores[i].getNickname() == nickname){
			jugadorExiste = true;
			break;
		}
	}
	if(jugadorExiste){
		cout<<"Este jugador ya existe!"<<endl;
	}
	else{
		Jugador nuevoJugador(nickname, edad, contrasenia);
		Jugadores.push_back(nuevoJugador);
	}
}
Jugador* obtenerJugadores(int cantJugadores) {
	if(Jugadores.size() < cantJugadores)
		cantJugadores = Jugadores.size();
    Jugador* listaJugadores = new Jugador[cantJugadores];
    for (int i = 0; i < cantJugadores; i++) {
        string name = Jugadores[i].getNickname();
        int edad = Jugadores[i].getEdad();
        string contra = Jugadores[i].getContrasenia();
        listaJugadores[i] = Jugador(name, edad, contra);
    }
    for (int O = 0; O < cantJugadores; O++)
        cout << "<" << O+1 << "> [" << listaJugadores[O].getNickname() << "] (" << listaJugadores[O].getEdad() << ") (" << listaJugadores[O].getContrasenia() << ")" << endl;
    return listaJugadores;
}
void MostrarJugadores(){
	int o = Jugadores.size();
	for(int i= 0 ; i < o;i++)
		cout<<"<"<<i+1<<"> ["<<Jugadores[i].getNickname()<<"] ("<<Jugadores[i].getEdad()<<") ("<< Jugadores[i].getContrasenia()<<")"<<endl;
}




