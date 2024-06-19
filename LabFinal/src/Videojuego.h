/*
 * Videojuego.h
 *
 *  Created on: 19 jun 2024
 *      Author: UnwantedOpinion
 */

#ifndef VIDEOJUEGO_H_
#define VIDEOJUEGO_H_
#include <string>
#include <vector>
#include "Categoria.h"
#include "Subscripcion.h"
#include "Puntuacion.h"
using namespace::std;

class Videojuego {
private:
	string nombre;
	string descripcion;
	float costoMensual;
	float costoTrimestral;
	float costoAnual;
	float costoVitalicio;
	float puntajeProm;
	float horasJugadas;
	vector<Categoria*> categorias;
	vector<Subscripcion*> subcripciones;
	vector<Puntuacion*> puntuaciones;
public:
	Videojuego();
	string getNombre();
	void setNombre(string);
	string getDescripcion();
	void setDescripcion(string);
	float getCostoMensual();
	void setCostoMensual(float);
	float getCostoTrimestral();
	void setCostoTrimestral(float);
	float getCostoAnual();
	void setCostoAnual(float);
	float getCostoVitalicio();
	void setCostoVitalicio(float);
	float getPuntajeProm();
	void setPuntajeProm(float);
	float getHorasJugadas();
	void setHorasJugadas(float);
	vector<Categoria*> getCategorias();
	void setCategorias(vector<Categoria*>);
	vector<Subscripcion*> getSubcripciones();
	void setSubcripciones(vector<Subscripcion*>);
	vector<Puntuacion*> getPuntuaciones();
	void setPuntuaciones(vector<Puntuacion*>);
	virtual ~Videojuego();
};

#endif /* VIDEOJUEGO_H_ */
