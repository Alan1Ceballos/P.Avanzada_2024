/*
 * Subscripcion.cpp
 *
 *  Created on: 26 jun 2024
 *      Author: UnwantedOpinion
 */

#include "Subscripcion.h"

Subscripcion::Subscripcion() : id(0), videojuego(nullptr) {}

int Subscripcion::getId(){
	return this->id;
}

void Subscripcion::setId(int id){
	this->id = id;
}

Videojuego* Subscripcion::getVideojuego() {
    return videojuego;
}

void Subscripcion::setVideojuego(Videojuego* videojuego){
    this->videojuego = videojuego;
}

Subscripcion::~Subscripcion() {
	// TODO Auto-generated destructor stub
}

