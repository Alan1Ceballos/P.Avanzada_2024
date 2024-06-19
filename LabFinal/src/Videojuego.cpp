/*
 * Videojuego.cpp
 *
 *  Created on: 19 jun 2024
 *      Author: UnwantedOpinion
 */

#include "Videojuego.h"

Videojuego::Videojuego() {
	// TODO Auto-generated constructor stub

}

string Videojuego::getNombre() {
	return nombre;
}

void Videojuego::setNombre(string nombre) {
	this->nombre = nombre;
}

string Videojuego::getDescripcion() {
	return descripcion;
}

void Videojuego::setDescripcion(string descripcion) {
	this->descripcion = descripcion;
}

float Videojuego::getCostoMensual() {
	return costoMensual;
}

void Videojuego::setCostoMensual(float costoMensual) {
	this->costoMensual = costoMensual;
}

float Videojuego::getCostoTrimestral() {
	return costoTrimestral;
}

void Videojuego::setCostoTrimestral(float costoTrimestral) {
	this->costoTrimestral = costoTrimestral;
}

float Videojuego::getCostoAnual() {
	return costoAnual;
}

void Videojuego::setCostoAnual(float costoAnual) {
	this->costoAnual = costoAnual;
}

float Videojuego::getCostoVitalicio() {
	return costoVitalicio;
}

void Videojuego::setCostoVitalicio(float costoVitalicio) {
	this->costoVitalicio = costoVitalicio;
}

float Videojuego::getPuntajeProm() {
	return puntajeProm;
}

void Videojuego::setPuntajeProm(float puntajeProm) {
	this->puntajeProm = puntajeProm;
}

float Videojuego::getHorasJugadas() {
	return horasJugadas;
}

void Videojuego::setHorasJugadas(float horasJugadas) {
	this->horasJugadas = horasJugadas;
}

vector<Categoria*> Videojuego::getCategorias() {
	return categorias;
}

void Videojuego::setCategorias(vector<Categoria*> categorias) {
	this->categorias = categorias;
}

vector<Subscripcion*> Videojuego::getSubcripciones() {
	return subcripciones;
}

void Videojuego::setSubcripciones(vector<Subscripcion*> subcripciones) {
	this->subcripciones = subcripciones;
}

vector<Puntuacion*> Videojuego::getPuntuaciones() {
	return puntuaciones;
}

void Videojuego::setPuntuaciones(vector<Puntuacion*> puntuaciones) {
	this->puntuaciones = puntuaciones;
}

Videojuego::~Videojuego() {
	// TODO Auto-generated destructor stub
}

