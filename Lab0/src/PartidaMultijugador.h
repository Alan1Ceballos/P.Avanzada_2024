/*
 * PartidaMultijugador.h
 *
 *  Created on: 2 abr 2024
 *      Author: UnwantedOpinion
 */

#ifndef PARTIDAMULTIJUGADOR_H_
#define PARTIDAMULTIJUGADOR_H_
#include "Partida.h"

class PartidaMultijugador: public Partida {
private:
	bool transmitidaEnVivo;
public:
	PartidaMultijugador();
	bool getTransmitidaEnVivo();
	void setTransmitidaEnVivo(bool);
	virtual ~PartidaMultijugador();
};

#endif /* PARTIDAMULTIJUGADOR_H_ */
