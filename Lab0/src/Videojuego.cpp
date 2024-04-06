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

Videojuego::~Videojuego() {
	// TODO Auto-generated destructor stub
}

