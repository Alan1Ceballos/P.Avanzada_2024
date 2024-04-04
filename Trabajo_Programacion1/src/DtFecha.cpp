
#include "DtFecha.h"
DtFecha::DtFecha(int D, int M, int A) {
	this->Dia = D;
	this->Mes = M;
	this->Anio = A;
};
int DtFecha::getFechaNacimientoDia() {
	return Dia;
};
int DtFecha::getFechaNacimientoMes(){
	return Mes;
};
int DtFecha::getFechaNacimientoAnio(){
	return Anio;
};


