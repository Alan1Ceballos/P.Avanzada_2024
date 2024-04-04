/*
 * PartidaMultijugador.cpp
 *
 *  Created on: 2 abr 2024
 *      Author: UnwantedOpinion
 */

#include "PartidaMultijugador.h"

PartidaMultijugador::PartidaMultijugador() {
	// TODO Auto-generated constructor stub

}

bool PartidaMultijugador::getTransmitidaEnVivo(){
	return this->transmitidaEnVivo;
}

void PartidaMultijugador::setTransmitidaEnVivo(bool newTEV){
	this->transmitidaEnVivo = newTEV;
}

PartidaMultijugador::~PartidaMultijugador() {
	// TODO Auto-generated destructor stub
}

