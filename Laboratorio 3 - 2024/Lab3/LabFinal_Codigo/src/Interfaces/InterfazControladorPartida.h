/*
 * InterfazControladorPartida.h
 *
 *  Created on: 23 jun 2024
 *      Author: UnwantedOpinion
 */

#ifndef INTERFAZCONTROLADORPARTIDA_H_
#define INTERFAZCONTROLADORPARTIDA_H_
#include "../DataTypes/DtFecha.h"
#include "../PartidaIndividual.h"
#include "../PartidaMultijugador.h"
#include "../Comentario.h"
#include <vector>
#include <string>

class InterfazControladorPartida {
public:
    InterfazControladorPartida();
    virtual bool continuarUnaPartidaAnterior(bool) = 0;
    virtual vector<PartidaIndividual*> listarPartidasFinalizadasInd() = 0;
    virtual vector<PartidaIndividual*> listarPartidasInd(int) = 0;
    virtual vector<PartidaMultijugador*> listarPartidasMul(int) = 0;
    virtual void seleccionarPartida(int) = 0;
    virtual bool indicarTipoTransmision(bool) = 0;
    virtual vector<PartidaMultijugador*> listarPartidasMul() = 0;
    virtual vector<PartidaMultijugador*> listarPartidasActivas() = 0;
    virtual void registrarAbandono(int, int, DtFecha) = 0;
    virtual void registrarSalidaDeCadaJugador() = 0;
    virtual bool responderUnComentario(bool) = 0;
    virtual vector<Comentario*> listarComentariosDeLaPartida(int) = 0;
    virtual void seleccionarComentario(int) = 0;
    virtual void ingresarContenidoComentario(string) = 0;
    virtual void registrarComentario(int, int, string, DtFecha) = 0;
    virtual ~InterfazControladorPartida();
};

#endif /* INTERFAZCONTROLADORPARTIDA_H_ */
