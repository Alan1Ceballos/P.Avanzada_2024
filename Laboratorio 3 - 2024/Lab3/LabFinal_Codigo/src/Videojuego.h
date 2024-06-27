/*
 * Videojuego.h
 *
 *  Created on: 26 jun 2024
 *      Author: UnwantedOpinion
 */

#ifndef VIDEOJUEGO_H_
#define VIDEOJUEGO_H_
#include <string>
#include <vector>
#include "Categoria.h"
#include "Desarrollador.h"
#include "Puntuacion.h"
#include "Partida.h"
#include "Subscripcion.h"
using namespace::std;

class Desarrollador;
class Puntuacion;
class Subscripcion;

class Videojuego {
private:
    string nombre;
    string descripcion;
    float costoMensual;
    float costoTrimestral;
    float costoAnual;
    float costoVitalicio;
    float puntajeProm;
    double horasJugadas;
    Desarrollador* desarrollador;
    vector<Categoria*> categorias;
    vector<Puntuacion*> puntuaciones;
    vector<Partida*> partidas;
    vector<Subscripcion*> subscripciones;
public:
	Videojuego();
	Videojuego(string, string, float, float, float, float, float, double);
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
	double getHorasJugadas();
	void setHorasJugadas(double);
	Desarrollador* getDesarrollador();
	void setDesarrollador(Desarrollador*);
	vector<Categoria*> getCategorias();
	vector<Puntuacion*> getPuntuaciones();
	vector<Partida*> getPartidas();
	vector<Subscripcion*> getSubscripciones();
	virtual ~Videojuego();
};

#endif /* VIDEOJUEGO_H_ */
