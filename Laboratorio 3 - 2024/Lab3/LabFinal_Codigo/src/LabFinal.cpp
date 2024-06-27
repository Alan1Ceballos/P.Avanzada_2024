//============================================================================
// Name        : LabFinal.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include "Fabrica.h"
using namespace::std;

int main(){
	Fabrica* fabrica = Fabrica::getInstancia();
	InterfazControladorUsuario* controladorUsuario = fabrica->getControladorUsuario();
	InterfazControladorVideojuego* controladorVideojuego = fabrica->getControladorVideojuego();
	InterfazControladorPartida* controladorPartida = fabrica->getControladorPartida();

	//ESTO DE ABAJO ES SOLO PARA QUE NO SALGA EL WARNING
	cout<<"BlahBlahBlah controladorUsuario: "<<controladorUsuario<<endl;
	cout<<"BlahBlahBlah controladorVideojuego: "<<controladorVideojuego<<endl;
	cout<<"BlahBlahBlah controladorPartida: "<<controladorPartida<<endl;
	return 0;
}
