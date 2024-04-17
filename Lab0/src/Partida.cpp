/*
 * Partida.cpp
 *
 *  Created on: 2 abr 2024
 *      Author: UnwantedOpinion
 */

#include "Partida.h"
Partida::Partida() : fecha(), duracion(0.0), jugadorCreador(NULL) {
}

float Partida::getDuracion(){
	return this->duracion;
}

void Partida::setDuracion(float newDuracion){
	this->duracion = newDuracion;
}

void Partida::setFecha(DtFechaHora fecha){
	this->fecha = fecha;
}

DtFechaHora Partida::getFecha() {
    return fecha;
}

Jugador* Partida::getJugadorCreador(){
	return jugadorCreador;
}

void Partida::setJugadorCreador(Jugador* jugadorCreador){
	this->jugadorCreador = jugadorCreador;
}

Partida::~Partida() {
	// TODO Auto-generated destructor stub
}
