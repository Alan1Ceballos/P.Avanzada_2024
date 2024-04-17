/*
 * Sistema.h
 *
 *  Created on: 4 abr 2024
 *      Author: UnwantedOpinion
 */

#ifndef SISTEMA_H_
#define SISTEMA_H_
#include <iostream>
#include <string>
#include <ctime>
#include <stdexcept>
#include <vector>
#include "Jugador.h"
#include "Partida.h"
#include "PartidaIndividual.h"
#include "PartidaMultijugador.h"
#include "Videojuego.h"
#include "DtFechaHora.h"

using namespace::std;


void agregarJugador(string nickname, int edad, string contrasenia);
void agregarVideojuego(string nombre, DtTipoJuego genero);
vector<Jugador*> obtenerJugadores(int);
vector<Videojuego*> obtenerVideojuegos(int);
vector<Partida*> obtenerPartidas(string videojuego, int cantPartidas);
void iniciarPartida(string nickname, string videojuego, Partida* datos);
void mostrarVideojuegos(vector<Videojuego*>);//AUX
void mostrarJugadores(vector<Jugador*>);//AUX
void mostrarPartidas(vector<Partida*>);//AUX
bool encontrarJugador(string);//AUX
void obtenerDatosP(string&, string&, float&, char&);//AUX
Partida* crearPartida(char);//AUX
void configPartida(Partida*);//AUX
Videojuego* encontrarJuego(string);//AUX

#endif /* SISTEMA_H_ */
