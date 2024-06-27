/*
 * Subscripcion.h
 *
 *  Created on: 26 jun 2024
 *      Author: UnwantedOpinion
 */

#ifndef SUBSCRIPCION_H_
#define SUBSCRIPCION_H_
#include "Videojuego.h"

class Subscripcion {
private:
    int id;
    Videojuego* videojuego;
public:
	Subscripcion();
	int getId();
	void setId(int);
	Videojuego* getVideojuego();
	void setVideojuego(Videojuego*);
	virtual ~Subscripcion();
};

#endif /* SUBSCRIPCION_H_ */
