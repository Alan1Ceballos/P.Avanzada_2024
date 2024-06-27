/*
 * Partida.h
 *
 *  Created on: 26 jun 2024
 *      Author: UnwantedOpinion
 */

#ifndef PARTIDA_H_
#define PARTIDA_H_
#include "DataTypes/DtFecha.h"
#include <string>
using namespace std;

class Partida {
private:
    DtFecha fechaHoraInicio;
    string nomVideojuego;
    float duracionTotal;
public:
	Partida();
	DtFecha getFechaHoraInicio();
	string getNomVideojuego();
	float getDuracionTotal();
	void setFechaHoraInicio(DtFecha);
	void setNomVideojuego(string);
	void setDuracionTotal(float);
	virtual ~Partida();
};

#endif /* PARTIDA_H_ */
