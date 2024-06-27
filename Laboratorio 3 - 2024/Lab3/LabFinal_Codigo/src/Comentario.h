/*
 * Comentario.h
 *
 *  Created on: 26 jun 2024
 *      Author: UnwantedOpinion
 */

#ifndef COMENTARIO_H_
#define COMENTARIO_H_
#include "DataTypes/DtFecha.h"
#include <string>
#include <vector>
using namespace::std;

class Comentario {
private:
	int id;
	DtFecha fechaHora;
	string contenido;
	vector<Comentario*> respuestas;
public:
	Comentario();
	int getId();
	void setId(int);
	DtFecha getFechaHora();
	void setFechaHora(DtFecha);
	string getContenido();
	void setContenido(string);
	vector<Comentario*> getRespuestas();
	virtual ~Comentario();
};

#endif /* COMENTARIO_H_ */
