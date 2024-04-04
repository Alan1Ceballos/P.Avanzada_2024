/*
 * Partida.h
 *
 *  Created on: 2 abr 2024
 *      Author: UnwantedOpinion
 */

#ifndef PARTIDA_H_
#define PARTIDA_H_
#include "DtFechaHora.h"

class Partida {
private:
	DtFechaHora fecha;
	float duracion;
public:
	Partida();
	float getDuracion();
	void setDuracion(float);
	virtual float darTotalHorasParticipantes() = 0;
	virtual ~Partida();
};


#endif /* PARTIDA_H_ */
