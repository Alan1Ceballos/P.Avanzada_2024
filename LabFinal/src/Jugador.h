/*
 * Jugador.h
 *
 *  Created on: 19 jun 2024
 *      Author: UnwantedOpinion
 */

#ifndef JUGADOR_H_
#define JUGADOR_H_
#include "Usuario.h"
#include "Partida.h"
#include "Historial.h"
#include "Puntuacion.h"
#include <string>
#include <vector>
using namespace::std;

class Jugador: public Usuario {
private:
	string nickname;
	string descripcion;
	vector<Jugador*> jugadoresSeguidos;
	vector<Partida*> partidasIniciadas;
	vector<Historial*> historialSubscripciones;
	vector<Puntuacion*> puntuaciones;
public:
	Jugador();
	string getNickname();
	void setNickname(string nickname);
	string getDescripcion();
	void setDescripcion(string descripcion);
	vector<Jugador*> getJugadoresSeguidos();
	void setJugadoresSeguidos(vector<Jugador*>);
	vector<Partida*> getPartidasIniciadas();
	void setPartidasIniciadas(vector<Partida*>);
	vector<Historial*> getHistorialSubscripciones();
	void setHistorialSubscripciones(vector<Historial*>);
	vector<Puntuacion*> getPuntuaciones();
	void setPuntuaciones(vector<Puntuacion*>);
	virtual ~Jugador();
};

#endif /* JUGADOR_H_ */
