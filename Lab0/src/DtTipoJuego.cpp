/*
 * TipoJuego.cpp
 *
 *  Created on: 2 abr 2024
 *      Author: UnwantedOpinion
 */

#include "DtTipoJuego.h"

DtTipoJuego::DtTipoJuego(string new_nombre) {
	this->nombre = new_nombre;

}

string DtTipoJuego::getNombre() {
	return this->nombre;

}


DtTipoJuego::~DtTipoJuego() {
	// TODO Auto-generated destructor stub
}

