/*
 * ControladorPartida.cpp
 *
 *  Created on: 23 jun 2024
 *      Author: UnwantedOpinion
 */

#include "ControladorPartida.h"

ControladorPartida* ControladorPartida::instanciaCP = nullptr;

ControladorPartida::ControladorPartida() {
	// TODO Auto-generated constructor stub

}

ControladorPartida* ControladorPartida::getControladorPartida() {
	if(instanciaCP == NULL) {
		instanciaCP = new ControladorPartida();
	}
	return instanciaCP;
}

bool ControladorPartida::continuarUnaPartidaAnterior(bool) {
    return false;
}

vector<PartidaIndividual*> ControladorPartida::listarPartidasFinalizadasInd() {
    return vector<PartidaIndividual*>();
}

vector<PartidaIndividual*> ControladorPartida::listarPartidasInd(int) {
    return vector<PartidaIndividual*>();
}

vector<PartidaMultijugador*> ControladorPartida::listarPartidasMul(int) {
    return vector<PartidaMultijugador*>();
}

void ControladorPartida::seleccionarPartida(int) {
}

bool ControladorPartida::indicarTipoTransmision(bool) {
    return false;
}

vector<PartidaMultijugador*> ControladorPartida::listarPartidasMul() {
    return vector<PartidaMultijugador*>();
}

vector<PartidaMultijugador*> ControladorPartida::listarPartidasActivas() {
    return vector<PartidaMultijugador*>();
}

void ControladorPartida::registrarAbandono(int, int, DtFecha) {}

void ControladorPartida::registrarSalidaDeCadaJugador() {}

bool ControladorPartida::responderUnComentario(bool) {
    return false;
}

vector<Comentario*> ControladorPartida::listarComentariosDeLaPartida(int) {
    return vector<Comentario*>();
}

void ControladorPartida::seleccionarComentario(int) {}

void ControladorPartida::ingresarContenidoComentario(string) {}

void ControladorPartida::registrarComentario(int, int, string, DtFecha) {}

ControladorPartida::~ControladorPartida() {
	// TODO Auto-generated destructor stub
}

