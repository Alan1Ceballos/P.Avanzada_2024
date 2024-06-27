/*
 * SubscripcionVitalicia.cpp
 *
 *  Created on: 26 jun 2024
 *      Author: UnwantedOpinion
 */

#include "SubscripcionVitalicia.h"

SubscripcionVitalicia::SubscripcionVitalicia() : pagoHecho(false) {}

bool SubscripcionVitalicia::getPagoHecho() {
    return pagoHecho;
}

void SubscripcionVitalicia::setPagoHecho(bool pagoHecho) {
    this->pagoHecho = pagoHecho;
}

SubscripcionVitalicia::~SubscripcionVitalicia() {
	// TODO Auto-generated destructor stub
}

