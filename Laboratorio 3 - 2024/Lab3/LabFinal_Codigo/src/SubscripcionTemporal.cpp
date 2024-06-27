/*
 * SubscripcionTemporal.cpp
 *
 *  Created on: 26 jun 2024
 *      Author: UnwantedOpinion
 */

#include "SubscripcionTemporal.h"

SubscripcionTemporal::SubscripcionTemporal() : periodoValidez(DtTipoValidez()), inactiva(false), cancelada(false), cuotaMensual(0.0) {}

DtTipoValidez SubscripcionTemporal::getPeriodoValidez() {
    return periodoValidez;
}

void SubscripcionTemporal::setPeriodoValidez(DtTipoValidez periodoValidez) {
    this->periodoValidez = periodoValidez;
}

bool SubscripcionTemporal::isInactiva() {
    return inactiva;
}

void SubscripcionTemporal::setInactiva(bool inactiva) {
    this->inactiva = inactiva;
}

bool SubscripcionTemporal::isCancelada() {
    return cancelada;
}

void SubscripcionTemporal::setCancelada(bool cancelada) {
    this->cancelada = cancelada;
}

DtFecha SubscripcionTemporal::getFechaCancelacion() {
    return fechaCancelacion;
}

void SubscripcionTemporal::setFechaCancelacion(DtFecha fechaCancelacion) {
    this->fechaCancelacion = fechaCancelacion;
}

double SubscripcionTemporal::getCuotaMensual() {
    return cuotaMensual;
}

void SubscripcionTemporal::setCuotaMensual(double cuotaMensual) {
    this->cuotaMensual = cuotaMensual;
}

SubscripcionTemporal::~SubscripcionTemporal() {
	// TODO Auto-generated destructor stub
}

