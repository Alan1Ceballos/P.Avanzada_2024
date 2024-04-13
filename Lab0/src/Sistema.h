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
#include "PartidaIndividual.h"
#include "PartidaMultijugador.h"
#include "Videojuego.h"
#include "DtFechaHora.h"
using namespace::std;


void agregarJugador(string nickname, int edad, string contrasenia);
void agregarVideojuego(string nombre, DtTipoJuego genero);
Jugador* obtenerJugadores(int cantJugadores);
Videojuego* obtenerVideojuegos(int cantVideojuegos);
Partida* obtenerPartidas(string videojuego, int cantPartidas);
void iniciarPartida(string nickname, string videojuego, Partida* datos);
void mostrarJuegos();//AUX
void MostrarJugadores();//AUX
void mostrarPartidasVideojuego(string);//AUX
bool encontrarJugador(string);//AUX
void obtenerDatosP(string&, string&, float&, char&);//AUX
Partida* crearPartida(char);//AUX
void configPartida(Partida*);//AUX

#endif /* SISTEMA_H_ */
