/*
 * Historial.h
 *
 *  Created on: 26 jun 2024
 *      Author: UnwantedOpinion
 */

#ifndef HISTORIAL_H_
#define HISTORIAL_H_
#include "DataTypes/DtFecha.h"
#include "DataTypes/DtTipoPago.h"
#include "Subscripcion.h"

class Historial {
private:
    DtFecha fechaContratacion;
    DtTipoPago metodoPago;
    double costo;
    Subscripcion* subscripcion;
public:
    Historial();
    DtFecha getFechaContratacion();
    DtTipoPago getMetodoPago();
    double getCosto();
    Subscripcion* getSubscripcion();
	virtual ~Historial();
};

#endif /* HISTORIAL_H_ */
