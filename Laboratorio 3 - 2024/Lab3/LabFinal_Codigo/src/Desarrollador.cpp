/*
 * Desarrollador.cpp
 *
 *  Created on: 26 jun 2024
 *      Author: UnwantedOpinion
 */

#include "Desarrollador.h"

Desarrollador::Desarrollador() {
	// TODO Auto-generated constructor stub

}

string Desarrollador::getNomEmpresa() {
    return nomEmpresa;
}

void Desarrollador::setNomEmpresa(string) {
    this->nomEmpresa = nomEmpresa;
}

vector<Videojuego*> Desarrollador::getVideojuegosPublicados() {
    return videojuegosPublicados;
}

vector<Categoria*> Desarrollador::getCategoriasCreadas() {
    return categoriasCreadas;
}

Desarrollador::~Desarrollador() {
	// TODO Auto-generated destructor stub
}

