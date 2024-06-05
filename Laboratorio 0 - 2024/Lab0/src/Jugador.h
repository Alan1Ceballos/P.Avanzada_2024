/*
 * Jugador.h
 *
 *  Created on: 2 abr 2024
 *      Author: UnwantedOpinion
 */

#ifndef JUGADOR_H_
#define JUGADOR_H_
#include <string>
using namespace::std;

class Jugador {
private:
	string nickname;
	int edad;
	string contrasenia;
public:
	Jugador();
	Jugador(string, int, string);
	string getNickname();
	void setNickname(string);
	int getEdad();
	void setEdad(int);
	string getContrasenia();
	void setContrasenia(string);
	virtual ~Jugador();
};

#endif /* JUGADOR_H_ */
