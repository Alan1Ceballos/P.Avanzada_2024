/*
 * Usuario.cpp
 *
 *  Created on: 19 jun 2024
 *      Author: UnwantedOpinion
 */

#include "Usuario.h"

Usuario::Usuario() {
	this->email = "";
	this->contrasenia = "";
}

string Usuario::getEmail(){
	return email;
}

void Usuario::setEmail(string email){
	this->email = email;
}


string Usuario::getContrasenia(){
	return contrasenia;
}

void Usuario::setContrasenia(string contrasenia){
	this->contrasenia = contrasenia;
}

Usuario::~Usuario() {
	// TODO Auto-generated destructor stub
}

