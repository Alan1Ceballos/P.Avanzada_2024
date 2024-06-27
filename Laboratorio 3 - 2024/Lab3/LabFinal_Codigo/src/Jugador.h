/*
 * Jugador.h
 *
 *  Created on: 26 jun 2024
 *      Author: UnwantedOpinion
 */

#ifndef JUGADOR_H_
#define JUGADOR_H_
#include "Usuario.h"
#include "Partida.h"
#include "Historial.h"
#include <string>
#include <vector>
using namespace::std;

class Jugador: public Usuario {
private:
	string nickname;
	string descripcion;
	vector<Jugador*> seguidores;
	vector<Jugador*> seguidos;
	vector<Partida*> partidasIniciadas;
	vector<Historial*> historiales;
public:
	Jugador();
	string getNickname();
	string getDescripcion();
	void setNickname(string);
	void setDescripcion(string);
	vector<Jugador*> getSeguidores();
	vector<Jugador*> getSeguidos();
	//void iniciarPartida(Partida* partida);
	vector<Partida*> getPartidasIniciadas();
	vector<Historial*> getHistoriales();
	virtual ~Jugador();
};

#endif /* JUGADOR_H_ */
