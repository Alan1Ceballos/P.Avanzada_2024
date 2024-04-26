/*
 * Sistema.h
 *
 *  Created on: 4 abr 2024
 *      Author: UnwantedOpinion
 */

#ifndef SISTEMA_H
#define SISTEMA_H

#include <iostream>
#include <string>
#include <stdexcept>
#include <iomanip>
#include <vector>
#include "Jugador.h"
#include "Partida.h"
#include "PartidaIndividual.h"
#include "PartidaMultijugador.h"
#include "Videojuego.h"
#include "DtFechaHora.h"
using namespace::std;

class Sistema{
private:
	vector<Jugador*> Jugadores;
	vector<Videojuego*> Juegos;
public:
	Sistema();
	//=====OBLIGATORIAS=====//
	void agregarJugador(string nickname, int edad, string contrasenia);
	void agregarVideojuego(string nombre, DtTipoJuego genero);
	vector<Jugador*> obtenerJugadores(int);
	vector<Videojuego*> obtenerVideojuegos(int);
	vector<Partida*> obtenerPartidas(string videojuego, int cantPartidas);
	void iniciarPartida(string nickname, string videojuego, Partida* datos);
	//=====AUXILIARES=====//
	void mostrarJugadores(vector<Jugador*>);
	void mostrarVideojuegos(vector<Videojuego*>);
	void mostrarPartidas(vector<Partida*>);
	void obtenerDatosP(string&, string&, double&, char&);
	Partida* crearPartida(char);
	void configPartida(Partida*);
	Videojuego* encontrarJuego(string);
	bool encontrarJugador(string nickname);
	virtual ~Sistema();

};

#endif // SISTEMA_H
