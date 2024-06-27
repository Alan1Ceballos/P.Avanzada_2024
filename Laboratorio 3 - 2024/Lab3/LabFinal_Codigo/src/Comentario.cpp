/*
 * Comentario.cpp
 *
 *  Created on: 26 jun 2024
 *      Author: UnwantedOpinion
 */

#include "Comentario.h"

Comentario::Comentario() : id(0), fechaHora(), contenido(""), respuestas() {}

int Comentario::getId() {
    return id;
}

void Comentario::setId(int id) {
    this->id = id;
}

DtFecha Comentario::getFechaHora() {
    return fechaHora;
}

void Comentario::setFechaHora(DtFecha fechaHora) {
    this->fechaHora = fechaHora;
}

string Comentario::getContenido() {
    return contenido;
}

void Comentario::setContenido(string contenido) {
    this->contenido = contenido;
}

vector<Comentario*> Comentario::getRespuestas() {
    return respuestas;
}

Comentario::~Comentario() {
	// TODO Auto-generated destructor stub
}

