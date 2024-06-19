/*
 * Puntuacion.h
 *
 *  Created on: 19 jun 2024
 *      Author: UnwantedOpinion
 */

#ifndef PUNTUACION_H_
#define PUNTUACION_H_
#include <string>
using namespace::std;

class Videojuego;

class Puntuacion {
private:
	int puntaje;
	Videojuego* videojuego;
public:
	Puntuacion();
	int getPuntaje();
	void setPuntaje(int);
	Videojuego* getVideojuego();
	void setVideojuego(Videojuego*);
	virtual ~Puntuacion();
};

#endif /* PUNTUACION_H_ */
