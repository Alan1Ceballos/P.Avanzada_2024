/*
 * Categoria.cpp
 *
 *  Created on: 19 jun 2024
 *      Author: UnwantedOpinion
 */

#include "Categoria.h"

Categoria::Categoria() {
	// TODO Auto-generated constructor stub

}

string Categoria::getNombre() {
	return nombre;
}

void Categoria::setNombre(string nombre) {
	this->nombre = nombre;
}

string Categoria::getDescripcion() {
	return descripcion;
}

void Categoria::setDescripcion(string descripcion) {
	this->descripcion = descripcion;
}

bool Categoria::getEsGenero() {
	return esGenero;
}

void Categoria::setEsGenero(bool esGenero) {
	this->esGenero = esGenero;
}

bool Categoria::getEsPlataforma() {
	return esPlataforma;
}

void Categoria::setEsPlataforma(bool esPlataforma) {
	this->esPlataforma = esPlataforma;
}

bool Categoria::getEsOtro() {
	return esOtro;
}

void Categoria::setEsOtro(bool esOtro) {
	this->esOtro = esOtro;
}

Categoria::~Categoria() {
	// TODO Auto-generated destructor stub
}

