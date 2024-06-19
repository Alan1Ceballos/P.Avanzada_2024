/*
 * SubscripcionVitalicia.h
 *
 *  Created on: 19 jun 2024
 *      Author: UnwantedOpinion
 */

#ifndef SUBSCRIPCIONVITALICIA_H_
#define SUBSCRIPCIONVITALICIA_H_
#include <string>
#include "Subscripcion.h"
using namespace::std;

class SubscripcionVitalicia: public Subscripcion {
private:
	bool pagoHecho;
public:
	SubscripcionVitalicia();
	bool getPagoHecho();
	void setPagoHecho(bool);
	virtual ~SubscripcionVitalicia();
};

#endif /* SUBSCRIPCIONVITALICIA_H_ */
