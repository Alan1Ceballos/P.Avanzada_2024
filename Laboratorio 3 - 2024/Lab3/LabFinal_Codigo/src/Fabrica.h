/*
 * Fabrica.h
 *
 *  Created on: 20 jun. 2024
 *      Author: UTEC-5695
 */

#ifndef FABRICA_H_
#define FABRICA_H_

#include "Interfaces/InterfazControladorUsuario.h"
#include "Interfaces/InterfazControladorVideojuego.h"
#include "Interfaces/InterfazControladorPartida.h"
using namespace::std;

class Fabrica{
private:
    static Fabrica* instancia;
    Fabrica();
public:
    static Fabrica* getInstancia();
    InterfazControladorUsuario* getControladorUsuario();
    InterfazControladorVideojuego* getControladorVideojuego();
    InterfazControladorPartida* getControladorPartida();
    virtual ~Fabrica();
};

#endif /* FABRICA_H_ */
