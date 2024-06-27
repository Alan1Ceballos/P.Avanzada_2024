/*
 * DtFecha.h
 *
 *  Created on: 19 jun 2024
 *      Author: UnwantedOpinion
 */

#ifndef DTFECHA_H_
#define DTFECHA_H_
#include <string>
#include <ctime>
using namespace::std;

class DtFecha {
public:
private:
	int dia, mes, anio;
	int hora, minuto;
public:
	DtFecha();
	DtFecha(int dia, int mes, int anio, int hora, int minuto);
	int getDia();
	int getMes();
	int getAnio();
	int getHora();
	int getMinuto();
	string presentate();
	DtFecha obtenerFechaHoraActual();
	virtual ~DtFecha();
};

#endif /* DTFECHA_H_ */
