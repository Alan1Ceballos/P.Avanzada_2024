/*
 * Usuario.cpp
 *
 *  Created on: 26 jun 2024
 *      Author: UnwantedOpinion
 */

#include "Usuario.h"

Usuario::Usuario() {
	this->email = "";
	this->contrasenia = "";
}

Usuario::Usuario(string email, string contrasenia) : email(email), contrasenia(contrasenia) {}

string Usuario::getEmail() {
    return email;
}

string Usuario::getContrasenia() {
    return contrasenia;
}

void Usuario::setEmail(string email) {
    this->email = email;
}

void Usuario::setContrasenia(string) {
    this->contrasenia = contrasenia;
}

vector<Comentario*> Usuario::getComentarios() {
    return comentarios;
}

Usuario::~Usuario() {
	// TODO Auto-generated destructor stub
}

