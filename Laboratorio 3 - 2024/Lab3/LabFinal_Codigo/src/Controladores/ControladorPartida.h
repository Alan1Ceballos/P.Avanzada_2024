/*
 * ControladorPartida.h
 *
 *  Created on: 23 jun 2024
 *      Author: UnwantedOpinion
 */

#ifndef CONTROLADORPARTIDA_H_
#define CONTROLADORPARTIDA_H_
#include "../Interfaces/InterfazControladorPartida.h"
#include "../Partida.h"
#include "../PartidaIndividual.h"
#include "../PartidaMultijugador.h"
#include "../Comentario.h"
#include <vector>
#include <string>
using namespace::std;

class ControladorPartida: public InterfazControladorPartida {
private:
    static ControladorPartida* instanciaCP;
    vector<Partida*> partidas;
    ControladorPartida();
public:
    static ControladorPartida* getControladorPartida();
    bool continuarUnaPartidaAnterior(bool) override;
    vector<PartidaIndividual*> listarPartidasFinalizadasInd() override;
    vector<PartidaIndividual*> listarPartidasInd(int) override;
    vector<PartidaMultijugador*> listarPartidasMul(int) override;
    void seleccionarPartida(int) override;
    bool indicarTipoTransmision(bool) override;
    vector<PartidaMultijugador*> listarPartidasMul() override;
    vector<PartidaMultijugador*> listarPartidasActivas() override;
    void registrarAbandono(int, int, DtFecha) override;
    void registrarSalidaDeCadaJugador() override;
    bool responderUnComentario(bool) override;
    vector<Comentario*> listarComentariosDeLaPartida(int) override;
    void seleccionarComentario(int) override;
    void ingresarContenidoComentario(string) override;
    void registrarComentario(int, int, string, DtFecha) override;
    virtual ~ControladorPartida();
};

#endif /* CONTROLADORPARTIDA_H_ */
