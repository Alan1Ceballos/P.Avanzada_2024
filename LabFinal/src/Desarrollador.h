/*
 * Desarrollador.h
 *
 *  Created on: 19 jun 2024
 *      Author: UnwantedOpinion
 */

#ifndef DESARROLLADOR_H_
#define DESARROLLADOR_H_
#include "Usuario.h"
#include "Videojuego.h"
#include <vector>
#include <string>
using namespace::std;

class Desarrollador: public Usuario {
private:
	string nomEmpresa;
	vector<Videojuego*> juegosPublicados;
public:
	Desarrollador();
	string getNomEmpresa();
	void setNomEmpresa(string);
	vector<Videojuego*> getJuegosPublicados();
	void setJuegosPublicados(vector<Videojuego*>);
	virtual ~Desarrollador();
};

#endif /* DESARROLLADOR_H_ */
