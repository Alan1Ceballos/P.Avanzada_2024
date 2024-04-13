/*
 * PartidaMultijugador.cpp
 *
 *  Created on: 2 abr 2024
 *      Author: UnwantedOpinion
 */

#include "PartidaMultijugador.h"

PartidaMultijugador::PartidaMultijugador() {
	// TODO Auto-generated constructor stub

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
	jugadores.push_back(jugador->getNickname());
}

int PartidaMultijugador::getCantidadTotalJugadores(){
	int total = jugadores.size();
	return total;
}

vector<string> PartidaMultijugador::getJugadores(){
	return jugadores;
}

PartidaMultijugador::~PartidaMultijugador() {
	// TODO Auto-generated destructor stub
}

