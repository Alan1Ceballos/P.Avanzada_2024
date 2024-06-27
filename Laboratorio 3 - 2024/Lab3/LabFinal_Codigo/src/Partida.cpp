/*
 * Partida.cpp
 *
 *  Created on: 26 jun 2024
 *      Author: UnwantedOpinion
 */

#include "Partida.h"

Partida::Partida() : fechaHoraInicio(), nomVideojuego(""), duracionTotal(0.0) {}


DtFecha Partida::getFechaHoraInicio() {
    return fechaHoraInicio;
}

string Partida::getNomVideojuego() {
    return nomVideojuego;
}

float Partida::getDuracionTotal() {
    return duracionTotal;
}

void Partida::setFechaHoraInicio(DtFecha) {
    this->fechaHoraInicio = fechaHoraInicio;
}

void Partida::setNomVideojuego(string) {
    this->nomVideojuego = nomVideojuego;
}

void Partida::setDuracionTotal(float duracionTotal) {
    this->duracionTotal = duracionTotal;
}

Partida::~Partida() {
	// TODO Auto-generated destructor stub
}

