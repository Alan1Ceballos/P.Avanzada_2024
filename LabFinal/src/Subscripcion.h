/*
 * Subscripcion.h
 *
 *  Created on: 19 jun 2024
 *      Author: UnwantedOpinion
 */

#ifndef SUBSCRIPCION_H_
#define SUBSCRIPCION_H_
#include <string>
using namespace::std;

class Subscripcion {
private:
	int id;
	string nombreJugador;
	string nombreVideojuego;
public:
	Subscripcion();
	int getId();
	void setId(int id);
	string getNombreJugador();
	void setNombreJugador(string);
	string getNombreVideojuego();
	void setNombreVideojuego(string);
	virtual ~Subscripcion();
};

#endif /* SUBSCRIPCION_H_ */
