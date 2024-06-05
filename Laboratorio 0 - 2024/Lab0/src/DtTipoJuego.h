/*
 * TipoJuego.h
 *
 *  Created on: 2 abr 2024
 *      Author: UnwantedOpinion
 */

#ifndef DTTIPOJUEGO_H_
#define DTTIPOJUEGO_H_
#include <string>
using namespace::std;

class DtTipoJuego {
private:
	string nombre;
public:
	DtTipoJuego(): nombre(""){};
	DtTipoJuego(string nombre);
	string getNombre();
	virtual ~DtTipoJuego();
};

#endif /* DTTIPOJUEGO_H_ */
