/*
 * Subscripcion.cpp
 *
 *  Created on: 19 jun 2024
 *      Author: UnwantedOpinion
 */

#include "Subscripcion.h"

Subscripcion::Subscripcion() {
	// TODO Auto-generated constructor stub

}

int Subscripcion::getId() {
	return id;
}

void Subscripcion::setId(int id) {
	this->id = id;
}

string Subscripcion::getNombreJugador() {
	return nombreJugador;
}

void Subscripcion::setNombreJugador(string nombreJugador) {
	this->nombreJugador = nombreJugador;
}

string Subscripcion::getNombreVideojuego() {
	return nombreVideojuego;
}

void Subscripcion::setNombreVideojuego(string nombreVideojuego) {
	this->nombreVideojuego = nombreVideojuego;
}

Subscripcion::~Subscripcion() {
	// TODO Auto-generated destructor stub
}

