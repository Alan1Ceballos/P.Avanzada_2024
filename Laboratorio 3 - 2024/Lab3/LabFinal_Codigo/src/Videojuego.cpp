/*
 * Videojuego.cpp
 *
 *  Created on: 26 jun 2024
 *      Author: UnwantedOpinion
 */

#include "Videojuego.h"

Videojuego::Videojuego(): nombre(""), descripcion(""), costoMensual(0.0f), costoTrimestral(0.0),
costoAnual(0.0), costoVitalicio(0.0), puntajeProm(0.0), horasJugadas(0.0),
desarrollador(nullptr) {}

Videojuego::Videojuego(string nombre, string descripcion, float costoMensual,
					   float costoTrimestral, float costoAnual,
					   float costoVitalicio, float puntajeProm, double horasJugadas)
						: nombre(nombre), descripcion(descripcion), costoMensual(costoMensual), costoTrimestral(costoTrimestral),
						  costoAnual(costoAnual), costoVitalicio(costoVitalicio), puntajeProm(puntajeProm), horasJugadas(horasJugadas),
						  desarrollador(nullptr){}

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

double Videojuego::getHorasJugadas() {
    return horasJugadas;
}

void Videojuego::setHorasJugadas(double horasJugadas) {
    this->horasJugadas = horasJugadas;
}

Desarrollador* Videojuego::getDesarrollador() {
    return this->desarrollador;
}

void Videojuego::setDesarrollador(Desarrollador* desarrollador) {
    this->desarrollador = desarrollador;
}

vector<Categoria*> Videojuego::getCategorias() {
    return categorias;
}

vector<Puntuacion*> Videojuego::getPuntuaciones() {
    return this->puntuaciones;
}

vector<Partida*> Videojuego::getPartidas() {
    return partidas;
}

vector<Subscripcion*> Videojuego::getSubscripciones() {
	return subscripciones;
}

Videojuego::~Videojuego() {
	// TODO Auto-generated destructor stub
}

