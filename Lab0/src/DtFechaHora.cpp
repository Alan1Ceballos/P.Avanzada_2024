/*
 * DtFechaHora.cpp
 *
 *  Created on: 2 abr 2024
 *      Author: UnwantedOpinion
 */

#include "DtFechaHora.h"

DtFechaHora::DtFechaHora() {
	this->dia = 0;
	this->mes = 0;
	this->anio = 0;
	this->hora = 0;
	this->minuto = 0;
}

DtFechaHora::DtFechaHora(int new_dia, int new_mes, int new_anio, int new_hora, int new_minuto) {
	this->dia = new_dia;
	this->mes = new_mes;
	this->anio = new_anio;
	this->hora = new_hora;
	this->minuto = new_minuto;
}

int DtFechaHora::getDia()  {
    return dia;
}

int DtFechaHora::getMes()  {
    return mes;
}

int DtFechaHora::getAnio()  {
    return anio;
}

int DtFechaHora::getHora()  {
    return hora;
}

int DtFechaHora::getMinuto()  {
    return minuto;
}

DtFechaHora::~DtFechaHora() {
	// TODO Auto-generated destructor stub
}


