/*
 * Videojuego.cpp
 *
 *  Created on: 2 abr 2024
 *      Author: UnwantedOpinion
 */

#include "Videojuego.h"
#include <string>

Videojuego::Videojuego() : nombre(""), genero(), partidas(), jugadores(), totalHorasDeJuego(0.0) {

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
	Partida* nuevaPartida = partida;
	partidas.push_back(nuevaPartida);
}

void Videojuego::agregarJugador(Jugador* jugador) {
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

float Videojuego::getTotalHorasDeJuego(){
	return totalHorasDeJuego;
}

void Videojuego::setTotalHorasDeJuego(float horas){
	totalHorasDeJuego = horas;
}

Videojuego::~Videojuego() {
	// TODO Auto-generated destructor stub
}

