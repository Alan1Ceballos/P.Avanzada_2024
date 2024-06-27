/*
 * SubscripcionTemporal.h
 *
 *  Created on: 26 jun 2024
 *      Author: UnwantedOpinion
 */

#ifndef SUBSCRIPCIONTEMPORAL_H_
#define SUBSCRIPCIONTEMPORAL_H_
#include "Subscripcion.h"
#include "DataTypes/DtTipoValidez.h"
#include "DataTypes/DtFecha.h"

class SubscripcionTemporal : public Subscripcion {
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
	bool isInactiva();
	void setInactiva(bool);
	bool isCancelada();
	void setCancelada(bool);
	DtFecha getFechaCancelacion();
	void setFechaCancelacion(DtFecha);
	double getCuotaMensual();
	void setCuotaMensual(double);
	virtual ~SubscripcionTemporal();
};

#endif /* SUBSCRIPCIONTEMPORAL_H_ */
