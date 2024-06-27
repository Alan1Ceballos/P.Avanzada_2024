/*
 * Usuario.h
 *
 *  Created on: 26 jun 2024
 *      Author: UnwantedOpinion
 */

#ifndef USUARIO_H_
#define USUARIO_H_
#include <string>
#include <vector>
#include "Comentario.h"
using namespace::std;

class Usuario {
private:
    string email;
    string contrasenia;
    std::vector<Comentario*> comentarios;
public:
    Usuario();
    Usuario(string, string);
    string getEmail();
    string getContrasenia();
    void setEmail(string);
    void setContrasenia(string);
    vector<Comentario*> getComentarios();
    virtual ~Usuario();
};

#endif /* USUARIO_H_ */
