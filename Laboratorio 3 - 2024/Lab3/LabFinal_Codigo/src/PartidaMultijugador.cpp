/*
 * PartidaMultijugador.cpp
 *
 *  Created on: 26 jun 2024
 *      Author: UnwantedOpinion
 */

#include "PartidaMultijugador.h"

PartidaMultijugador::PartidaMultijugador() : transmitidaEnVivo(false){}

bool PartidaMultijugador::getTransmitidaEnVivo() {
    return transmitidaEnVivo;
}

void PartidaMultijugador::setTransmitidaEnVivo(bool transmitidaEnVivo) {
    this->transmitidaEnVivo = transmitidaEnVivo;
}

vector<Jugador*> PartidaMultijugador::getParticipantes() {
    return participantes;
}

vector<Comentario*> PartidaMultijugador::getComentarios() {
    return comentarios;
}

PartidaMultijugador::~PartidaMultijugador() {
	// TODO Auto-generated destructor stub
}

