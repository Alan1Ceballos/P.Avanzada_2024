/*
 * ControladorVideojuego.h
 *
 *  Created on: 23 jun 2024
 *      Author: UnwantedOpinion
 */

#ifndef CONTROLADORVIDEOJUEGO_H_
#define CONTROLADORVIDEOJUEGO_H_
#include "../Interfaces/InterfazControladorVideojuego.h"
#include "../Videojuego.h"
#include "../Categoria.h"
#include <vector>
#include <string>
using namespace::std;

class ControladorVideojuego: public InterfazControladorVideojuego {
private:
    static ControladorVideojuego* instanciaCV;
    vector<Videojuego*> videojuegos;
    ControladorVideojuego();
public:
    static ControladorVideojuego* getControladorVideojuego();
    void ingresarDatosVideojuego(Videojuego*) override;
    void mostrarDetallesVideojuego() override;
    vector<Videojuego*> listarTodosLosVideojuegos() override;
    void seleccionarVideojuego(string) override;
    vector<Categoria*> listarTodasLasCategorias() override;
    void ingresarDatosCategoria(Categoria*) override;
    vector<Categoria*> listarTodosLosGeneros() override;
    void seleccionarGeneros(string) override;
    vector<Categoria*> listarTodosLasPlataformas() override;
    void seleccionarPlataformas(string) override;
    bool aniadirCategoriasExtras(bool) override;
    vector<Categoria*> listarTodosLosOtros() override;
    void seleccionarOtros(string) override;
    void eliminarVideojuego(bool) override;
    virtual ~ControladorVideojuego();
};

#endif /* CONTROLADORVIDEOJUEGO_H_ */
