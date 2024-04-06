/*
 * Sistema.cpp
 *
 *  Created on: 2 abr 2024
 *      Author: UnwantedOpinion
 */
#include "Sistema.h"
#include <vector>
using namespace::std;

vector<Jugador> Jugadores;
vector<Videojuego> Juegos;

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

void agregarVideojuego(string nombre, DtTipoJuego genero){
	bool juegoExiste = false;
	int b = Juegos.size();
	for(int i = 0; i < b; i++){
		if(Juegos[i].getNombre() == nombre){
			juegoExiste = true;
			break;
		}
	}
	if(juegoExiste){
		cout<<"Ya existe registrado un juego con ese nombre!"<<endl;
	}
	else{
		Videojuego newJuego;
		newJuego.setNombre(nombre);
		newJuego.setGenero(genero);
		Juegos.push_back(newJuego);
	}
}

void mostrarJuegos() {
    if (Juegos.empty()) {
        cout<<"No hay juegos registrados"<<endl;
        return;
    }
    cout<<endl;
    cout << "[Lista de juegos]:" << endl;
    int c = Juegos.size();
    for(int i = 0; i < c; i++){
        cout << "Nombre: " << Juegos[i].getNombre() << endl;
        cout << "Género: " << Juegos[i].getGenero().getNombre() << endl;
        cout << "-------------------------" << endl;
    }
}

Jugador* obtenerJugadores(int cantJugadores){
	int d = Jugadores.size();
	if(d < cantJugadores){
		cantJugadores = d;
	}
	Jugador* listaJugadores = new Jugador[cantJugadores];
	for(int i = 0; i < cantJugadores; i++) {
		string name = Jugadores[i].getNickname();
		int edad = Jugadores[i].getEdad();
		string contra = Jugadores[i].getContrasenia();
		listaJugadores[i] = Jugador(name, edad, contra);
	}
	for (int O = 0; O < cantJugadores; O++){
		cout << "<" << O+1 << "> [" << listaJugadores[O].getNickname() << "] (" << listaJugadores[O].getEdad() << ") (" << listaJugadores[O].getContrasenia() << ")" << endl;
	}
	return listaJugadores;
}

void MostrarJugadores(){
	int o = Jugadores.size();
	for(int i= 0 ; i < o;i++){
		cout<<"<"<<i+1<<"> ["<<Jugadores[i].getNickname()<<"] ("<<Jugadores[i].getEdad()<<") ("<< Jugadores[i].getContrasenia()<<")"<<endl;
	}
}

