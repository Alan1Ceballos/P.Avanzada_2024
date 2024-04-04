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
#include "Jugador.h"
#include "Partida.h"
#include "Videojuego.h"
using namespace::std;


void agregarJugador(string nickname, int edad, string contrasenia);
void agregarVideojuego(string nombre, DtTipoJuego genero);
Jugador* obtenerJugadores(int cantJugadores);
Videojuego* obtenerVideojuegos(int cantVideojuegos);
Partida* obtenerPartidas(string videojuego, int cantPartidas);
void iniciarPartida(string nickname, string videojuego, Partida* datos);


#endif /* SISTEMA_H_ */
