/*
 * ControladorUsuario.h
 *
 *  Created on: 20 jun. 2024
 *      Author: UTEC-5695
 */

#ifndef CONTROLADORUSUARIO_H_
#define CONTROLADORUSUARIO_H_
#include "../Interfaces/InterfazControladorUsuario.h"
#include "../Usuario.h"
#include "../Videojuego.h"
#include "../DataTypes/DtTipoPago.h"
#include <vector>
#include <string>
using namespace::std;

class ControladorUsuario: public InterfazControladorUsuario {
private:
    static ControladorUsuario* instanciaCU;
    vector<Usuario*> usuarios;
    ControladorUsuario();
public:
    static ControladorUsuario* getControladorUsuario();

    void ingresarDatosUsuario(Usuario*) override;
    Usuario* indicarTipoUsuario(bool) override;
    bool verificarDatosUsuario(Usuario*) override;
    bool verificarNickname(string) override;
    void ingresarNickname(string) override;
    void ingresarDescripcionDelJugador(string) override;
    void ingresarNombreEmpresa(string) override;
    vector<Videojuego*> listarVideojuegosConSubActiva() override;
    void altaSubscripcion(string, Subscripcion*, DtTipoPago) override;
    vector<Videojuego*> listarVideojuegos() override;
    void puntuarVideojuego(string, int) override;
    vector<Videojuego*> listarTodosLosVideojuegosPublicados() override;
    vector<Jugador*> listarJugadoresConSubActiva() override;
    vector<Jugador*> listarTodosLosJugadores() override;
    void seleccionarJugador(string) override;
    virtual ~ControladorUsuario();
};

#endif /* CONTROLADORUSUARIO_H_ */
