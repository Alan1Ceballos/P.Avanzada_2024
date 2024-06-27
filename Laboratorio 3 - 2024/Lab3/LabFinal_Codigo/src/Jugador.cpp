/*
 * Jugador.cpp
 *
 *  Created on: 26 jun 2024
 *      Author: UnwantedOpinion
 */

#include "Jugador.h"

Jugador::Jugador() {
	// TODO Auto-generated constructor stub

}

string Jugador::getNickname() {
    return nickname;
}

string Jugador::getDescripcion() {
    return descripcion;
}

void Jugador::setNickname(string nickname) {
    this->nickname = nickname;
}

void Jugador::setDescripcion(string) {
    this->descripcion = descripcion;
}

vector<Jugador*> Jugador::getSeguidores() {
    return seguidores;
}

vector<Jugador*> Jugador::getSeguidos() {
    return seguidos;
}

vector<Partida*> Jugador::getPartidasIniciadas() {
    return partidasIniciadas;
}

vector<Historial*> Jugador::getHistoriales() {
    return historiales;
}

Jugador::~Jugador() {
	// TODO Auto-generated destructor stub
}

