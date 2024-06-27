/*
 * Puntuacion.h
 *
 *  Created on: 26 jun 2024
 *      Author: UnwantedOpinion
 */

#ifndef PUNTUACION_H_
#define PUNTUACION_H_

class Jugador;
class Videojuego;

class Puntuacion {
private:
    int puntaje;
    Jugador* jugador;
    Videojuego* videojuego;
public:
    Puntuacion();
    Puntuacion(int, Jugador*, Videojuego*);
    int getPuntaje();
    void setPuntaje(int);
    Jugador* getJugador();
    void setJugador(Jugador*);
    Videojuego* getVideojuego();
    void setVideojuego(Videojuego*);
	virtual ~Puntuacion();
};

#endif /* PUNTUACION_H_ */
