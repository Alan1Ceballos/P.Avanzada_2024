/*
 * Categoria.h
 *
 *  Created on: 26 jun 2024
 *      Author: UnwantedOpinion
 */

#ifndef CATEGORIA_H_
#define CATEGORIA_H_
#include <string>
using namespace::std;

class Categoria {
private:
    string nombre;
    string descripcion;
    bool esGenero;
    bool esPlataforma;
    bool esOtro;
public:
	Categoria();
	Categoria(string, string, bool, bool, bool);
	string getNombre();
	void setNombre(string);
	string getDescripcion();
	void setDescripcion(string);
	bool getEsGenero();
	void setEsGenero(bool);
	bool getEsPlataforma();
	void setEsPlataforma(bool);
	bool getEsOtro();
	void setEsOtro(bool);
	virtual ~Categoria();
};

#endif /* CATEGORIA_H_ */
