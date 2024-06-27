/*
 * InterfazControladorVideojuego.h
 *
 *  Created on: 23 jun 2024
 *      Author: UnwantedOpinion
 */

#ifndef INTERFAZCONTROLADORVIDEOJUEGO_H_
#define INTERFAZCONTROLADORVIDEOJUEGO_H_
#include "../Videojuego.h"
#include "../Categoria.h"
#include <vector>
#include <string>

class InterfazControladorVideojuego {
public:
    InterfazControladorVideojuego();
    virtual void ingresarDatosVideojuego(Videojuego*) = 0;
    virtual void mostrarDetallesVideojuego() = 0;
    virtual vector<Videojuego*> listarTodosLosVideojuegos() = 0;
    virtual void seleccionarVideojuego(string) = 0;
    virtual vector<Categoria*> listarTodasLasCategorias() = 0;
    virtual void ingresarDatosCategoria(Categoria*) = 0;
    virtual vector<Categoria*> listarTodosLosGeneros() = 0;
    virtual void seleccionarGeneros(string) = 0;
    virtual vector<Categoria*> listarTodosLasPlataformas() = 0;
    virtual void seleccionarPlataformas(string) = 0;
    virtual bool aniadirCategoriasExtras(bool) = 0;
    virtual vector<Categoria*> listarTodosLosOtros() = 0;
    virtual void seleccionarOtros(string) = 0;
    virtual void eliminarVideojuego(bool) = 0;
    virtual ~InterfazControladorVideojuego();
};

#endif /* INTERFAZCONTROLADORVIDEOJUEGO_H_ */
