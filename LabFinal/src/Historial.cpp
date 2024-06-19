/*
 * Historial.cpp
 *
 *  Created on: 19 jun 2024
 *      Author: UnwantedOpinion
 */

#include "Historial.h"

Historial::Historial() {
	// TODO Auto-generated constructor stub

}

DtFecha Historial::getFechaContratacion() {
	return fechaContratacion;
}

void Historial::setFechaContratacion(DtFecha fechaContratacion) {
	this->fechaContratacion = fechaContratacion;
}

DtTipoPago Historial::getMetodoPago() {
	return metodoPago;
}

void Historial::setMetodoPago(DtTipoPago metodoPago) {
	this->metodoPago = metodoPago;
}

double Historial::getCosto() {
	return costo;
}

void Historial::setCosto(double costo) {
	this->costo = costo;
}

Subscripcion* Historial::getSubcripcion() {
	return subcripcion;
}

void Historial::setSubcripcion(Subscripcion* subcripcion) {
	this->subcripcion = subcripcion;
}

Historial::~Historial() {
	// TODO Auto-generated destructor stub
}

