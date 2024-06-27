/*
 * ControladorUsuario.cpp
 *
 *  Created on: 20 jun. 2024
 *      Author: UTEC-5695
 */

#include "ControladorUsuario.h"

ControladorUsuario* ControladorUsuario::instanciaCU = nullptr;

ControladorUsuario::ControladorUsuario() {
	// TODO Auto-generated constructor stub
}

ControladorUsuario* ControladorUsuario::getControladorUsuario() {
	if(instanciaCU == NULL) {
		instanciaCU = new ControladorUsuario();
	}
	return instanciaCU;
}

void ControladorUsuario::ingresarDatosUsuario(Usuario* usuario) {}

Usuario* ControladorUsuario::indicarTipoUsuario(bool tipo) {
    return nullptr;
}

bool ControladorUsuario::verificarDatosUsuario(Usuario* usuario) {
    return false;
}

bool ControladorUsuario::verificarNickname(string nickname) {
    return false;
}

void ControladorUsuario::ingresarNickname(string nickname) {}

void ControladorUsuario::ingresarDescripcionDelJugador(string descripcion) {}

void ControladorUsuario::ingresarNombreEmpresa(string nombre) {}

vector<Videojuego*> ControladorUsuario::listarVideojuegosConSubActiva() {
    return vector<Videojuego*>();
}

void ControladorUsuario::altaSubscripcion(string nombre, Subscripcion* subscripcion, DtTipoPago formaPago) {}

vector<Videojuego*> ControladorUsuario::listarVideojuegos() {
	return vector<Videojuego*>();
}

void ControladorUsuario::puntuarVideojuego(string nombre, int puntaje) {}

vector<Videojuego*> ControladorUsuario::listarTodosLosVideojuegosPublicados() {
	return vector<Videojuego*>();
}

vector<Jugador*> ControladorUsuario::listarJugadoresConSubActiva() {
    return vector<Jugador*>();
}

vector<Jugador*> ControladorUsuario::listarTodosLosJugadores() {
    return vector<Jugador*>();
}

void ControladorUsuario::seleccionarJugador(std::string nickname) {}

ControladorUsuario::~ControladorUsuario() {
	// TODO Auto-generated destructor stub
}

