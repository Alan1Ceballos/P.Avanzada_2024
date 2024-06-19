/*
 * Registro.cpp
 *
 *  Created on: 19 jun 2024
 *      Author: UnwantedOpinion
 */

#include "Registro.h"

Registro::Registro() {
	// TODO Auto-generated constructor stub

}

Jugador* Registro::getJugadorInicial() {
	return jugadorInicial;
}

void Registro::setJugadorInicial(Jugador* jugadorInicial) {
	this->jugadorInicial = jugadorInicial;
}

DtFecha Registro::getHoraInicio() {
	return horaInicio;
}

void Registro::setHoraInicio(DtFecha horaInicio) {
	this->horaInicio = horaInicio;
}

DtFecha Registro::getHoraFin() {
	return horaFin;
}

void Registro::setHoraFin(DtFecha horaFin) {
	this->horaFin = horaFin;
}

float Registro::getDuracionTotal() {
	return duracionTotal;
}

void Registro::setDuracionTotal(float duracionTotal) {
	this->duracionTotal = duracionTotal;
}

vector<pair<string, DtFecha>> Registro::getSalidasJugadores() {
	return salidasJugadores;
}

void Registro::setSalidasJugadores(vector<pair<string, DtFecha>> salidasJugadores) {
	this->salidasJugadores = salidasJugadores;
}

Registro::~Registro() {
	// TODO Auto-generated destructor stub
}

