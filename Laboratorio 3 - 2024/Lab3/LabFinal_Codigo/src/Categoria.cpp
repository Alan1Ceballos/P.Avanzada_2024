/*
 * Categoria.cpp
 *
 *  Created on: 26 jun 2024
 *      Author: UnwantedOpinion
 */

#include "Categoria.h"

Categoria::Categoria() : nombre(""), descripcion(""), esGenero(false), esPlataforma(false), esOtro(false) {}

Categoria::Categoria(string nombre, string descripcion, bool esGenero, bool esPlataforma, bool esOtro)
    : nombre(nombre), descripcion(descripcion), esGenero(esGenero), esPlataforma(esPlataforma), esOtro(esOtro) {}

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

