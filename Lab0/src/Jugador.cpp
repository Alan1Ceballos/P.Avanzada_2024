/*
 * Jugador.cpp
 *
 *  Created on: 2 abr 2024
 *      Author: UnwantedOpinion
 */

#include "Jugador.h"
#include <string>

Jugador::Jugador() {
	// TODO Auto-generated constructor stub

}

Jugador::Jugador(string newNickname, int newEdad, string newContrasenia) {
	this->nickname = newNickname;
	this->edad = newEdad;
	this->contrasenia = newContrasenia;

}

string Jugador::getNickname(){
	return this->nickname;
}

void Jugador::setNickname(string newNickname){
	this->nickname = newNickname;
}

int Jugador::getEdad(){
	return this->edad;
}

void Jugador::setEdad(int newEdad){
	this->edad = newEdad;
}

string Jugador::getContrasenia(){
	return this->contrasenia;
}

void Jugador::setContrasenia(string newContrasenia){
	this->contrasenia = newContrasenia;
}


Jugador::~Jugador() {
	// TODO Auto-generated destructor stub
}

