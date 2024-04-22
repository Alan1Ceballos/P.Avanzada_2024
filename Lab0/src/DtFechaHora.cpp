/*
 * DtFechaHora.cpp
 *
 *  Created on: 2 abr 2024
 *      Author: UnwantedOpinion
 */

#include "DtFechaHora.h"
#include "iostream"
using namespace std;

DtFechaHora::DtFechaHora() {
    this->dia = 0;
    this->mes = 0;
    this->anio = 0;
    this->hora = 0;
    this->minuto = 0;
}

DtFechaHora::DtFechaHora(int new_dia, int new_mes, int new_anio, int new_hora, int new_minuto) {
	if (new_dia < 1 || new_dia > 31 || new_mes < 1 || new_mes > 12 || new_anio < 0 ||
			new_hora < 0 || new_hora > 23 || new_minuto < 0 || new_minuto > 59) {
		cout<<"Valores de fecha y hora inválidos";
	}
	this->dia = new_dia;
	this->mes = new_mes;
	this->anio = new_anio;
	this->hora = new_hora;
	this->minuto = new_minuto;
}

int DtFechaHora::getDia()  {
    return dia;
}

int DtFechaHora::getMes()  {
    return mes;
}

int DtFechaHora::getAnio()  {
    return anio;
}

int DtFechaHora::getHora()  {
    return hora;
}

int DtFechaHora::getMinuto()  {
    return minuto;
}

string DtFechaHora::presentate(){
	string dia, mes, anio, hora, minuto;
	dia = to_string(this->dia);
	mes = to_string(this->mes);
	anio = to_string(this->anio);
	hora = to_string(this->hora);
	minuto = to_string(this->minuto);
	return dia + "/" + mes + "/" + anio + " - " + hora + ":" + minuto;
}

DtFechaHora DtFechaHora::obtenerFechaHoraActual(){
	time_t tiempoActual = time(NULL);
	tm *tmActual = localtime(&tiempoActual);
	int anio = tmActual->tm_year + 1900;
	int mes = tmActual->tm_mon + 1;
	int dia = tmActual->tm_mday;
	int hora = tmActual->tm_hour;
	int minuto = tmActual->tm_min;

	return DtFechaHora(dia, mes, anio, hora, minuto);
}


DtFechaHora::~DtFechaHora() {
	// TODO Auto-generated destructor stub
}


