/*
 * Historial.h
 *
 *  Created on: 19 jun 2024
 *      Author: UnwantedOpinion
 */

#ifndef HISTORIAL_H_
#define HISTORIAL_H_
#include <string>
#include "DtTipoPago.h"
#include "DtFecha.h"
#include "Subscripcion.h"
using namespace::std;

class Historial {
private:
	DtFecha fechaContratacion;
	DtTipoPago metodoPago;
	double costo;
	Subscripcion* subcripcion;
public:
	Historial();
	DtFecha getFechaContratacion();
	void setFechaContratacion(DtFecha);
	DtTipoPago getMetodoPago();
	void setMetodoPago(DtTipoPago);
	double getCosto();
	void setCosto(double);
	Subscripcion* getSubcripcion();
	void setSubcripcion(Subscripcion*);
	virtual ~Historial();


};

#endif /* HISTORIAL_H_ */
