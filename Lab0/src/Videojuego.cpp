/*
 * Videojuego.cpp
 *
 *  Created on: 2 abr 2024
 *      Author: UnwantedOpinion
 */

#include "Videojuego.h"
#include <string>

Videojuego::Videojuego() {

}

string Videojuego::getNombre(){
	return this->nombre;
}
void Videojuego::setNombre(string newNombre){
	this->nombre = newNombre;
}

DtTipoJuego Videojuego::getGenero(){
	return this->genero;
}
void Videojuego::setGenero(DtTipoJuego newGenero){
	this->genero = newGenero;
}

vector<Partida*> Videojuego::getPartida(){
	return this->partidas;
}

void Videojuego::agregarPartida(Partida* partida) {
	partidas.push_back(partida);
}

void Videojuego::agregarJugador(Jugador* jugador){
	int jug = jugadores.size();
	for(int i = 0; i < jug; ++i){
		if(jugadores[i]->getNickname() == jugador->getNickname()){
			return;
		}
	}
	jugadores.push_back(jugador);
}

float Videojuego::totalHorasDedicadas(){
	float horasTotales = 0.0;
	int p = partidas.size();
	for(int i = 0; i < p; ++i){
		horasTotales += partidas[i]->darTotalHorasParticipantes();
	}
	return horasTotales;
}


Videojuego::~Videojuego() {
	// TODO Auto-generated destructor stub
}

