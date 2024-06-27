/*
 * Historial.cpp
 *
 *  Created on: 26 jun 2024
 *      Author: UnwantedOpinion
 */

#include "Historial.h"

Historial::Historial() : fechaContratacion(), metodoPago(), costo(0.0), subscripcion(NULL) {}

DtFecha Historial::getFechaContratacion() {
    return fechaContratacion;
}

DtTipoPago Historial::getMetodoPago() {
    return metodoPago;
}

double Historial::getCosto() {
    return costo;
}

Subscripcion* Historial::getSubscripcion() {
    return subscripcion;
}

Historial::~Historial() {
	// TODO Auto-generated destructor stub
}

