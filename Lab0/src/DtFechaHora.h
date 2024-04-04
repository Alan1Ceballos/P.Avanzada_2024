/*
 * DtFechaHora.h
 *
 *  Created on: 2 abr 2024
 *      Author: UnwantedOpinion
 */

#ifndef DTFECHAHORA_H_
#define DTFECHAHORA_H_

class DtFechaHora {
private:
	int dia, mes, anio;
	int hora, minuto;
public:
	DtFechaHora();
	DtFechaHora(int dia, int mes, int anio, int hora, int minuto);
	int getDia();
	int getMes();
	int getAnio();
	int getHora();
	int getMinuto();
	virtual ~DtFechaHora();
};

#endif /* DTFECHAHORA_H_ */
