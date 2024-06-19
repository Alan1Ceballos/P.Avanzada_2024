/*
 * Usuario.h
 *
 *  Created on: 19 jun 2024
 *      Author: UnwantedOpinion
 */

#ifndef USUARIO_H_
#define USUARIO_H_
#include <string>
using namespace::std;

class Usuario{
private:
	string email;
	string contrasenia;
public:
	Usuario();
	string getEmail();
	void setEmail(string);
	string getContrasenia();
	void setContrasenia(string);
	virtual ~Usuario();
};

#endif /* USUARIO_H_ */
