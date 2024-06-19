/*
 * PartidaMultijugador.cpp
 *
 *  Created on: 19 jun 2024
 *      Author: UnwantedOpinion
 */

#include "PartidaMultijugador.h"

PartidaMultijugador::PartidaMultijugador() {
	// TODO Auto-generated constructor stub

}

bool PartidaMultijugador::getTransmitidaEnVivo() {
	return transmitidaEnVivo;
}

void PartidaMultijugador::setTransmitidaEnVivo(bool transmitidaEnVivo) {
	this->transmitidaEnVivo = transmitidaEnVivo;
}

vector<Comentario*> PartidaMultijugador::getComentarios() {
	return comentarios;
}

void PartidaMultijugador::setComentarios(vector<Comentario*> comentarios) {
	this->comentarios = comentarios;
}

PartidaMultijugador::~PartidaMultijugador() {
	// TODO Auto-generated destructor stub
}

