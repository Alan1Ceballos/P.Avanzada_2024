/*
 * Partida.cpp
 *
 *  Created on: 2 abr 2024
 *      Author: UnwantedOpinion
 */

#include "Partida.h"
Partida::Partida() {
}

float Partida::getDuracion(){
	return this->duracion;
}

void Partida::setDuracion(float newDuracion){
	this->duracion = newDuracion;
}

void Partida::setFecha(DtFechaHora fecha){
	this->fecha = fecha;
}

DtFechaHora Partida::getFecha() {
    return fecha;
}

Partida::~Partida() {
	// TODO Auto-generated destructor stub
}

