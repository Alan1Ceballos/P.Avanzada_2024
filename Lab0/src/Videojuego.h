/*
 * Videojuego.h
 *
 *  Created on: 2 abr 2024
 *      Author: UnwantedOpinion
 */

#ifndef VIDEOJUEGO_H_
#define VIDEOJUEGO_H_
#include <string>
#include "DtTipoJuego.h"
using namespace::std;

class Videojuego {
private:
	string nombre;
	DtTipoJuego genero;
public:
	Videojuego();
	string getNombre();
	void setNombre(string);
	DtTipoJuego getGenero();
	void setGenero(DtTipoJuego);
	virtual ~Videojuego();
};

#endif /* VIDEOJUEGO_H_ */
