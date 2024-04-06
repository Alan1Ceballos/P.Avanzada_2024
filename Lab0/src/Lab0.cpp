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
	agregarJugador("J1", 11, "1J");
	agregarJugador("J2", 22, "2J");
	agregarJugador("J3", 33, "3J");
	/*cout<<  "-----------------------------------"<<endl;
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
	};*/
	do {
		cout<< 	"------------------------------------"<<endl;
		cout<<	"-                                 	-"<<endl;
		cout<<  "-              MENU              	-"<<endl;
		cout<<  "-          1-AGREGAR JUGADOR      	-"<<endl;
		cout<<  "-          2-MOSTRAR JUGADORES   	-"<<endl;
		cout<<  "-          3-AGREGAR VIDEOJUEGO   	-"<<endl;
		cout<<  "-          4-MOSTRAR VIDEOJUEGOS  	-"<<endl;
		cout<<  "-          5-OBTENER JUGADORES    	-"<<endl;
		cout<<  "-          6-OBTENER VIDEOJUEGOS   -"<<endl;
		cout<<  "-          7-OBTENER PARTIDAS      -"<<endl;
		cout<<  "-          8-INICIAR PARTIDA       -"<<endl;
		cout<<  "-          9-SALIR                	-"<<endl;
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
				cin.ignore();
				getline(cin, nombre);
				cout<< "Ingrese la edad: ";
				cin>>edad;
				cout<< "Ingrese la contrasenia: ";
				cin>>contrasenia;
				agregarJugador(nombre, edad, contrasenia);
				cout<< "OK" <<endl;
				break;
			}
			case 2:{
				MostrarJugadores();
				break;
			}
			case 3:{
				string nombre;
				string genero;
				cout<<"Ingrese el nombre del videojuego: ";
				cin.ignore();
				getline(cin, nombre);
				cout<<"Ingrese el género principal del videojuego: ";
				getline(cin, genero);
				agregarVideojuego(nombre, genero);
				mostrarJuegos();
				break;
			}
			case 4:{
				mostrarJuegos();
				break;
			}
			case 5:{
				int i;
				cout<< "Cuantos Jugadores quiere mostrar? ";
				cin>>i;
				obtenerJugadores(i);
				break;
			}
		default:{
				cout<<"Salinedo!";
				break;
			}
		};
	}
	while(oper < 9);
	return 0;
}
