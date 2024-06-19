/*
 * SubscripcionTemporal.h
 *
 *  Created on: 19 jun 2024
 *      Author: UnwantedOpinion
 */

#ifndef SUBSCRIPCIONTEMPORAL_H_
#define SUBSCRIPCIONTEMPORAL_H_
#include <string>
#include "Subscripcion.h"
#include "DtFecha.h"
#include "DtTipoValidez.h"
using namespace::std;

class SubscripcionTemporal: public Subscripcion {
private:
	DtTipoValidez periodoValidez;
	bool inactiva;
	bool cancelada;
	DtFecha fechaCancelacion;
	double cuotaMensual;
public:
	SubscripcionTemporal();
	DtTipoValidez getPeriodoValidez();
	void setPeriodoValidez(DtTipoValidez);
	bool getInactiva();
	void setInactiva(bool);
	bool getCancelada();
	void setCancelada(bool);
	DtFecha getFechaCancelacion();
	void setFechaCancelacion(DtFecha);
	double getCuotaMensual();
	void setCuotaMensual(double);
	virtual ~SubscripcionTemporal();
};

#endif /* SUBSCRIPCIONTEMPORAL_H_ */
