/*
 * Registro.h
 *
 *  Created on: 26 jun 2024
 *      Author: UnwantedOpinion
 */

#ifndef REGISTRO_H_
#define REGISTRO_H_
#include "DataTypes/DtFecha.h"

class Registro {
private:
    DtFecha horaAbandono;
public:
	Registro();
	DtFecha getHoraAbandono();
	void setHoraAbandono(DtFecha);
	virtual ~Registro();
};

#endif /* REGISTRO_H_ */
