/*
 * Registro.h
 *
 *  Created on: 19 jun 2024
 *      Author: UnwantedOpinion
 */

#ifndef REGISTRO_H_
#define REGISTRO_H_
#include <string>
#include <vector>
#include "Jugador.h"
#include "DtFecha.h"
using namespace::std;

class Registro {
private:
	Jugador* jugadorInicial;
	DtFecha horaInicio;
	DtFecha horaFin;
	float duracionTotal;
	vector<pair<string, DtFecha>> salidasJugadores;
public:
	Registro();
	Jugador* getJugadorInicial();
	void setJugadorInicial(Jugador*);
	DtFecha getHoraInicio();
	void setHoraInicio(DtFecha);
	DtFecha getHoraFin();
	void setHoraFin(DtFecha);
	float getDuracionTotal();
	void setDuracionTotal(float);
	vector<pair<string, DtFecha>> getSalidasJugadores();
	void setSalidasJugadores(vector<pair<string, DtFecha>>);
	virtual ~Registro();
};

#endif /* REGISTRO_H_ */
