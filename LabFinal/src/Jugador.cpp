/*
 * Jugador.cpp
 *
 *  Created on: 19 jun 2024
 *      Author: UnwantedOpinion
 */

#include "Jugador.h"

Jugador::Jugador() {
	this->nickname = "";
	this->descripcion = "";
}

string Jugador::getNickname() {
	return nickname;
}

void Jugador::setNickname(string nickname) {
	this->nickname = nickname;
}

string Jugador::getDescripcion() {
	return descripcion;
}

void Jugador::setDescripcion(string descripcion){
	this->descripcion = descripcion;
}

vector<Jugador*> Jugador::getJugadoresSeguidos() {
	return jugadoresSeguidos;
}

void Jugador::setJugadoresSeguidos(vector<Jugador*> jugadoresSeguidos) {
	this->jugadoresSeguidos = jugadoresSeguidos;
}

vector<Partida*> Jugador::getPartidasIniciadas() {
	return partidasIniciadas;
}

void Jugador::setPartidasIniciadas(vector<Partida*> partidasIniciadas) {
	this->partidasIniciadas = partidasIniciadas;
}

vector<Historial*> Jugador::getHistorialSubscripciones() {
	return historialSubscripciones;
}

void Jugador::setHistorialSubscripciones(vector<Historial*> historialSubscripciones) {
	this->historialSubscripciones = historialSubscripciones;
}

vector<Puntuacion*> Jugador::getPuntuaciones() {
	return puntuaciones;
}

void Jugador::setPuntuaciones(vector<Puntuacion*> puntuaciones) {
	this->puntuaciones = puntuaciones;
}

Jugador::~Jugador() {
	// TODO Auto-generated destructor stub
}

