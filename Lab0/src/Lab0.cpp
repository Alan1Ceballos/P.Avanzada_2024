//============================================================================
// Name        : Lab0.cpp
// Author      : Alan Ceballos
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Sistema.h"
using namespace std;
int main() {
	int oper;
	cout<<  "-----------------------------------"<<endl;
	cout<<  "-              MENU               -"<<endl;
	cout<<  "-        1-INICIAR CON JUGADORES  -"<<endl;
	cout<<  "-        2-INICIAR SIN JUGADORES  -"<<endl;
	cout<<  "-----------------------------------"<<endl;
	cin>>oper;
	switch(oper)
	{
		case 1:
			{
				break;
			}
		default:
			{
				cout << "Iniciando sin jugadores";
				break;
			}
	};
	do {
		cout<< 	"------------------------------------"<<endl;
		cout<<	"-                                 	-"<<endl;
		cout<<  "-              MENU              	-"<<endl;
		cout<<  "-          1-AGREGAR JUGADOR      	-"<<endl;
		cout<<  "-          2-AGREGAR VIDEOJUEGO   	-"<<endl;
		cout<<  "-          3-OBTENER JUGADORES    	-"<<endl;
		cout<<  "-          4-OBTENER VIDEOJUEGOS   -"<<endl;
		cout<<  "-          5-OBTENER PARTIDAS      -"<<endl;
		cout<<  "-          6-INICIAR PARTIDA       -"<<endl;
		cout<<  "-          7-SALIR                	-"<<endl;
		cout<<  "-                                 	-"<<endl;
		cout<<  "------------------------------------"<<endl;
		cin >> oper;
		switch (oper)
		{
			case 1:{
				string nombre;
				int edad;
				string contrasenia;
				cout<< "Ingrese el nickname: ";
				cin>>nombre;
				cout<< "Ingrese la edad: ";
				cin>>edad;
				cout<< "Ingrese la contrasenia: ";
				cin>>contrasenia;
				agregarJugador(nombre, edad, contrasenia);
				cout<< "OK" <<endl;
				break;
			}
		default:{
				cout<<"Salinedo!";
				break;
			}
		};
	}
	while(oper < 6);
	return 0;
}
