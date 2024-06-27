/*
 * Desarrollador.h
 *
 *  Created on: 26 jun 2024
 *      Author: UnwantedOpinion
 */

#ifndef DESARROLLADOR_H_
#define DESARROLLADOR_H_
#include <string>
#include <vector>
#include "Videojuego.h"
#include "Usuario.h"
#include "Categoria.h"
using namespace::std;

class Videojuego;
class Categoria;

class Desarrollador: public Usuario {
private:
    string nomEmpresa;
    vector<Videojuego*> videojuegosPublicados;
    vector<Categoria*> categoriasCreadas;
public:
    Desarrollador();
    string getNomEmpresa();
    void setNomEmpresa(string);
    vector<Videojuego*> getVideojuegosPublicados();
    vector<Categoria*> getCategoriasCreadas();
    ~Desarrollador();
};

#endif /* DESARROLLADOR_H_ */
