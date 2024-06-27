/*
 * InterfazControladorUsuario.h
 *
 *  Created on: 20 jun. 2024
 *      Author: UTEC-5695
 */

#ifndef INTERFAZCONTROLADORUSUARIO_H_
#define INTERFAZCONTROLADORUSUARIO_H_
#include "../Videojuego.h"
#include "../DataTypes/DtTipoPago.h"
#include <vector>
#include <string>
using namespace::std;

class InterfazControladorUsuario {
public:
    InterfazControladorUsuario();
    virtual void ingresarDatosUsuario(Usuario*) = 0;
    virtual Usuario* indicarTipoUsuario(bool) = 0;
    virtual bool verificarDatosUsuario(Usuario*) = 0;
    virtual bool verificarNickname(string) = 0;
    virtual void ingresarNickname(string) = 0;
    virtual void ingresarDescripcionDelJugador(string) = 0;
    virtual void ingresarNombreEmpresa(string) = 0;
    virtual vector<Videojuego*> listarVideojuegosConSubActiva() = 0;
    virtual void altaSubscripcion(string, Subscripcion*, DtTipoPago) = 0;
    virtual vector<Videojuego*> listarVideojuegos() = 0;
    virtual void puntuarVideojuego(string, int) = 0;
    virtual vector<Videojuego*> listarTodosLosVideojuegosPublicados() = 0;
    virtual vector<Jugador*> listarJugadoresConSubActiva() = 0;
    virtual vector<Jugador*> listarTodosLosJugadores() = 0;
    virtual void seleccionarJugador(string) = 0;
    virtual ~InterfazControladorUsuario();
};

#endif /* INTERFAZCONTROLADORUSUARIO_H_ */
