/*
 * Partida.h
 *
 *  Created on: 2 abr 2024
 *      Author: UnwantedOpinion
 */

#ifndef PARTIDA_H_
#define PARTIDA_H_
#include "DtFechaHora.h"
#include "Jugador.h"
class Videojuego;

class Partida {
private:
	DtFechaHora fecha;
	float duracion;
	Jugador* jugadorCreador;
public:
	Partida();
	float getDuracion();
	void setDuracion(float);
	void setFecha(DtFechaHora);
	DtFechaHora getFecha();
	Jugador* getJugadorCreador();
	void setJugadorCreador(Jugador*);
	virtual float darTotalHorasParticipantes() = 0;
	virtual void setVideojuego(Videojuego*) = 0;
	virtual ~Partida();
};


#endif /* PARTIDA_H_ */
