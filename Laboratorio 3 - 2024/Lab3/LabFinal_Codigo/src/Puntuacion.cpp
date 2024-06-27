/*
 * Puntuacion.cpp
 *
 *  Created on: 26 jun 2024
 *      Author: UnwantedOpinion
 */

#include "Puntuacion.h"

Puntuacion::Puntuacion() : puntaje(0), jugador(nullptr), videojuego(nullptr){}

Puntuacion::Puntuacion(int puntaje, Jugador* jugador, Videojuego* videojuego)
    : puntaje(puntaje), jugador(jugador), videojuego(videojuego) {}

int Puntuacion::getPuntaje() {
    return puntaje;
}

void Puntuacion::setPuntaje(int puntaje) {
    this->puntaje = puntaje;
}

Jugador* Puntuacion::getJugador() {
    return jugador;
}

void Puntuacion::setJugador(Jugador* jugador) {
    this->jugador = jugador;
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

