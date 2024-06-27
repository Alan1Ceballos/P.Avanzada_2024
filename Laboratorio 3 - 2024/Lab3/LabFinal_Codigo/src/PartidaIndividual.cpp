/*
 * PartidaIndividual.cpp
 *
 *  Created on: 26 jun 2024
 *      Author: UnwantedOpinion
 */

#include "PartidaIndividual.h"

PartidaIndividual::PartidaIndividual() : partidaNueva(false) {}

bool PartidaIndividual::getPartidaNueva() {
    return partidaNueva;
}

void PartidaIndividual::setPartidaNueva(bool partidaNueva) {
    this->partidaNueva = partidaNueva;
}

PartidaIndividual::~PartidaIndividual() {
	// TODO Auto-generated destructor stub
}

