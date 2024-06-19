/*
 * PartidaMultijugador.h
 *
 *  Created on: 19 jun 2024
 *      Author: UnwantedOpinion
 */

#ifndef PARTIDAMULTIJUGADOR_H_
#define PARTIDAMULTIJUGADOR_H_
#include "Partida.h"
#include "Comentario.h"
using namespace::std;

class PartidaMultijugador: public Partida {
private:
	bool transmitidaEnVivo;
	vector<Comentario*> comentarios;
public:
	PartidaMultijugador();
	bool getTransmitidaEnVivo();
	void setTransmitidaEnVivo(bool);
	vector<Comentario*> getComentarios();
	void setComentarios(vector<Comentario*>);
	virtual ~PartidaMultijugador();
};

#endif /* PARTIDAMULTIJUGADOR_H_ */
