/*
 * PartidaIndividual.cpp
 *
 *  Created on: 2 abr 2024
 *      Author: UnwantedOpinion
 */

#include "PartidaIndividual.h"

PartidaIndividual::PartidaIndividual() : continuaPartidaAnterior(false), videojuego(NULL){

}

bool PartidaIndividual::getContinuaPartidaAnterior(){
	return this->continuaPartidaAnterior;
}

void PartidaIndividual::setContinuaPartidaAnterior(bool newCPA){
	this->continuaPartidaAnterior = newCPA;
}

float PartidaIndividual::darTotalHorasParticipantes(){
	return getDuracion();
}

Videojuego* PartidaIndividual::getVideojuego(){
	return videojuego;
}

void PartidaIndividual::setVideojuego(Videojuego* juego){
	this->videojuego = juego;
}

PartidaIndividual::~PartidaIndividual() {
	// TODO Auto-generated destructor stub
}
