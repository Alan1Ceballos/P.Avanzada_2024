/*
 * Comentario.cpp
 *
 *  Created on: 19 jun 2024
 *      Author: UnwantedOpinion
 */

#include "Comentario.h"

Comentario::Comentario() {
	this->id = 0;
	this->contenido = "";
	this->fechaHora = DtFecha(0,0,0,0,0);
}

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

void Comentario::setRespuestas(vector<Comentario*> respuestas) {
	this->respuestas = respuestas;
}

Comentario::~Comentario() {
	// TODO Auto-generated destructor stub
}

