/*
 * Desarrollador.cpp
 *
 *  Created on: 19 jun 2024
 *      Author: UnwantedOpinion
 */

#include "Desarrollador.h"

Desarrollador::Desarrollador() {
}

string Desarrollador::getNomEmpresa()  {
	return nomEmpresa;
}

void Desarrollador::setNomEmpresa(string nomEmpresa) {
	this->nomEmpresa = nomEmpresa;
}

vector<Videojuego*> Desarrollador::getJuegosPublicados() {
	return juegosPublicados;
}

void Desarrollador::setJuegosPublicados(vector<Videojuego*> juegosPublicados) {
	this->juegosPublicados = juegosPublicados;
}

Desarrollador::~Desarrollador() {
	// TODO Auto-generated destructor stub
}

