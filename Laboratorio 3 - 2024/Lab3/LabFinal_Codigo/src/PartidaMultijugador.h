/*
 * PartidaMultijugador.h
 *
 *  Created on: 26 jun 2024
 *      Author: UnwantedOpinion
 */

#ifndef PARTIDAMULTIJUGADOR_H_
#define PARTIDAMULTIJUGADOR_H_
#include "Partida.h"
#include "Jugador.h"
#include "Registro.h"
#include "Comentario.h"
#include <vector>
#include <map>

class PartidaMultijugador : public Partida {
private:
    bool transmitidaEnVivo;
    vector<Jugador*> participantes;
    map<Jugador*, Registro> registrosAbandono;
    vector<Comentario*> comentarios;
public:
	PartidaMultijugador();
	bool getTransmitidaEnVivo();
	void setTransmitidaEnVivo(bool);
	vector<Jugador*> getParticipantes();
	vector<Comentario*> getComentarios();
	//Registro getHoraAbandono(Jugador*);
	//void agregarParticipante(Jugador*);
	//void registrarAbandono(Jugador*, Registro);
	virtual ~PartidaMultijugador();
};

#endif /* PARTIDAMULTIJUGADOR_H_ */
