/*
 * Partida.h
 *
 *  Created on: 19 jun 2024
 *      Author: UnwantedOpinion
 */

#ifndef PARTIDA_H_
#define PARTIDA_H_
#include <string>
#include "DtFecha.h"
using namespace::std;

class Partida {
private:
	DtFecha fechaHoraInicio;
	string nomVideojuego;
public:
	Partida();
	DtFecha getFechaHoraInicio();
	void setFechaHoraInicio(DtFecha);
	virtual ~Partida();
};

#endif /* PARTIDA_H_ */
