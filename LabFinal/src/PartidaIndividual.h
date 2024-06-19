/*
 * PartidaIndividual.h
 *
 *  Created on: 19 jun 2024
 *      Author: UnwantedOpinion
 */

#ifndef PARTIDAINDIVIDUAL_H_
#define PARTIDAINDIVIDUAL_H_
#include "Partida.h"
using namespace::std;

class PartidaIndividual: public Partida {
private:
	bool partidaNueva;
public:
	PartidaIndividual();
	bool getPartidaNueva();
	void setPartidaNueva(bool);
	virtual ~PartidaIndividual();
};

#endif /* PARTIDAINDIVIDUAL_H_ */
