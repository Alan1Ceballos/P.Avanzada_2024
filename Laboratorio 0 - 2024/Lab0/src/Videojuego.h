/*
 * Videojuego.h
 *
 *  Created on: 2 abr 2024
 *      Author: UnwantedOpinion
 */

#ifndef VIDEOJUEGO_H_
#define VIDEOJUEGO_H_
#include <string>
#include <vector>
#include "DtTipoJuego.h"
#include "Partida.h"
#include "Jugador.h"
using namespace::std;

class Videojuego {
private:
	string nombre;
	DtTipoJuego genero;
	vector<Partida*> partidas;
	vector<Jugador*> jugadores;
	double totalHorasDeJuego;
public:
	Videojuego();
	string getNombre();
	void setNombre(string);
	DtTipoJuego getGenero();
	void setGenero(DtTipoJuego);
	vector<Partida*> getPartidas();
	void agregarPartida(Partida*);
	void agregarJugador(Jugador*);
	double totalHorasDedicadas();
	double getTotalHorasDeJuego();
	void setTotalHorasDeJuego(double);
	virtual ~Videojuego();
};

#endif /* VIDEOJUEGO_H_ */
