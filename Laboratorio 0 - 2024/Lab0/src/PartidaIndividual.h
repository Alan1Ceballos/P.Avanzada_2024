/*
 * PartidaIndividual.h
 *
 *  Created on: 2 abr 2024
 *      Author: UnwantedOpinion
 */

#ifndef PARTIDAINDIVIDUAL_H_
#define PARTIDAINDIVIDUAL_H_
#include "Partida.h"

class PartidaIndividual: public Partida {
private:
	bool continuaPartidaAnterior;
	Videojuego* videojuego;
public:
	PartidaIndividual();
	bool getContinuaPartidaAnterior();
	void setContinuaPartidaAnterior(bool);
	virtual float darTotalHorasParticipantes() override;
	Videojuego* getVideojuego();
	void setVideojuego(Videojuego*) override;
	virtual ~PartidaIndividual();
};

#endif /* PARTIDAINDIVIDUAL_H_ */
