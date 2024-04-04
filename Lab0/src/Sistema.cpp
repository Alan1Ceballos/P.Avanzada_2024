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





