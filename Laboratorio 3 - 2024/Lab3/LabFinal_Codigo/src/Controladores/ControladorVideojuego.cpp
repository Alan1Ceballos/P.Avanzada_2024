/*
 * ControladorVideojuego.cpp
 *
 *  Created on: 23 jun 2024
 *      Author: UnwantedOpinion
 */

#include "ControladorVideojuego.h"
using namespace::std;

ControladorVideojuego* ControladorVideojuego::instanciaCV = nullptr;

ControladorVideojuego::ControladorVideojuego() {
	// TODO Auto-generated constructor stub
}

ControladorVideojuego* ControladorVideojuego::getControladorVideojuego() {
	if(instanciaCV == NULL) {
		instanciaCV = new ControladorVideojuego();
	}
	return instanciaCV;
}

void ControladorVideojuego::ingresarDatosVideojuego(Videojuego* datos) {}

void ControladorVideojuego::mostrarDetallesVideojuego() {}

vector<Videojuego*> ControladorVideojuego::listarTodosLosVideojuegos() {
    return vector<Videojuego*>();
}

void ControladorVideojuego::seleccionarVideojuego(std::string nombre) {}

vector<Categoria*> ControladorVideojuego::listarTodasLasCategorias() {
    return vector<Categoria*>();
}

void ControladorVideojuego::ingresarDatosCategoria(Categoria* datos) {}

vector<Categoria*> ControladorVideojuego::listarTodosLosGeneros() {
    return vector<Categoria*>();
}

void ControladorVideojuego::seleccionarGeneros(string genero) {}

vector<Categoria*> ControladorVideojuego::listarTodosLasPlataformas() {
    return vector<Categoria*>();
}

void ControladorVideojuego::seleccionarPlataformas(string plataforma) {}

bool ControladorVideojuego::aniadirCategoriasExtras(bool extras) {
    return false;
}

vector<Categoria*> ControladorVideojuego::listarTodosLosOtros() {
    return vector<Categoria*>();
}

void ControladorVideojuego::seleccionarOtros(string otro) {}

void ControladorVideojuego::eliminarVideojuego(bool confirmacion) {}

ControladorVideojuego::~ControladorVideojuego() {
	// TODO Auto-generated destructor stub
}

