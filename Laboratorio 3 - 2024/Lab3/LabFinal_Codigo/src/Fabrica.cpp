/*
 * Fabrica.cpp
 *
 *  Created on: 20 jun. 2024
 *      Author: UTEC-5695
 */

#include "Fabrica.h"
#include "Controladores/ControladorUsuario.h"
#include "Controladores/ControladorVideojuego.h"
#include "Controladores/ControladorPartida.h"

Fabrica* Fabrica::instancia = NULL;

Fabrica::Fabrica(){
}

Fabrica* Fabrica::getInstancia(){
    if(instancia == NULL){
        instancia = new Fabrica();
    }
    return instancia;
}

InterfazControladorUsuario* Fabrica::getControladorUsuario(){
    return ControladorUsuario::getControladorUsuario();
}

InterfazControladorVideojuego* Fabrica::getControladorVideojuego() {
    return ControladorVideojuego::getControladorVideojuego();
}

InterfazControladorPartida* Fabrica::getControladorPartida() {
    return ControladorPartida::getControladorPartida();
}

Fabrica::~Fabrica(){
}

