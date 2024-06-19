/*
 * Comentario.h
 *
 *  Created on: 19 jun 2024
 *      Author: UnwantedOpinion
 */

#ifndef COMENTARIO_H_
#define COMENTARIO_H_
#include <string>
#include <vector>
#include "DtFecha.h"
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
	void setRespuestas(vector<Comentario*>);
	virtual ~Comentario();
};

#endif /* COMENTARIO_H_ */
