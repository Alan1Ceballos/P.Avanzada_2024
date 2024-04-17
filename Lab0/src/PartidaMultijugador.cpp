/*
 * PartidaMultijugador.cpp
 *
 *  Created on: 2 abr 2024
 *      Author: UnwantedOpinion
 */

#include "PartidaMultijugador.h"

PartidaMultijugador::PartidaMultijugador() : transmitidaEnVivo(false), jugadores(), videojuego(NULL) {

}

bool PartidaMultijugador::getTransmitidaEnVivo(){
	return this->transmitidaEnVivo;
}

void PartidaMultijugador::setTransmitidaEnVivo(bool newTEV){
	this->transmitidaEnVivo = newTEV;
}

float PartidaMultijugador::darTotalHorasParticipantes(){
	return getDuracion();
}

void PartidaMultijugador::unirseaPartida(Jugador* jugador){
	bool encontrado = false;
	for(size_t i = 0; i < jugadores.size(); ++i){
		if(jugadores[i] == jugador->getNickname()){
			encontrado = true;
			break;
		}
	}
	if(!encontrado) {
		jugadores.push_back(jugador->getNickname());
	}
}

int PartidaMultijugador::getCantidadTotalJugadores(){
	int total = jugadores.size();
	return total;
}

vector<string> PartidaMultijugador::getJugadores(){
	return jugadores;
}

Videojuego* PartidaMultijugador::getVideojuego(){
	return videojuego;
}

void PartidaMultijugador::setVideojuego(Videojuego* juego){
	this->videojuego = juego;
}


PartidaMultijugador::~PartidaMultijugador() {
	// TODO Auto-generated destructor stub
}

