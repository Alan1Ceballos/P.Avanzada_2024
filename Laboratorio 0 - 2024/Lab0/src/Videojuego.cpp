/*
 * Videojuego.cpp
 *
 *  Created on: 2 abr 2024
 *      Author: UnwantedOpinion
 */

#include "Videojuego.h"
#include <string>

Videojuego::Videojuego() : nombre(""), genero(), partidas(), jugadores(), totalHorasDeJuego() {

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

vector<Partida*> Videojuego::getPartidas(){
	return this->partidas;
}

void Videojuego::agregarPartida(Partida* partida) {
	Partida* nuevaPartida = partida;
	partidas.push_back(nuevaPartida);
}

void Videojuego::agregarJugador(Jugador* jugador) {
	jugadores.push_back(jugador);
}


double Videojuego::totalHorasDedicadas(){
	double horasTotales = 0.0;
	int p = partidas.size();
	for(int i = 0; i < p; ++i){
		horasTotales += partidas[i]->darTotalHorasParticipantes();
	}
	return horasTotales;
}

double Videojuego::getTotalHorasDeJuego(){
	return totalHorasDeJuego;
}

void Videojuego::setTotalHorasDeJuego(double horas){
	totalHorasDeJuego = horas;
}

Videojuego::~Videojuego() {
	// TODO Auto-generated destructor stub
}

