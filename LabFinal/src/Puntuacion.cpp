/*
 * Puntuacion.cpp
 *
 *  Created on: 19 jun 2024
 *      Author: UnwantedOpinion
 */

#include "Puntuacion.h"

Puntuacion::Puntuacion() {
	// TODO Auto-generated constructor stub

}

int Puntuacion::getPuntaje() {
	return puntaje;
}

void Puntuacion::setPuntaje(int puntaje) {
	this->puntaje = puntaje;
}

Videojuego* Puntuacion::getVideojuego() {
	return videojuego;
}

void Puntuacion::setVideojuego(Videojuego* videojuego) {
	this->videojuego = videojuego;
}

Puntuacion::~Puntuacion() {
	// TODO Auto-generated destructor stub
}

