/*
 * SubscripcionVitalicia.h
 *
 *  Created on: 26 jun 2024
 *      Author: UnwantedOpinion
 */

#ifndef SUBSCRIPCIONVITALICIA_H_
#define SUBSCRIPCIONVITALICIA_H_
#include "Subscripcion.h"

class SubscripcionVitalicia : public Subscripcion {
private:
    bool pagoHecho;
public:
    SubscripcionVitalicia();
    bool getPagoHecho();
    void setPagoHecho(bool);
	virtual ~SubscripcionVitalicia();
};

#endif /* SUBSCRIPCIONVITALICIA_H_ */
