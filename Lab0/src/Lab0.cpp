//============================================================================
// Name        : Lab0.cpp
// Author      : Alan Ceballos
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Sistema.h"
using namespace::std;
int main() {
	int oper;
	Sistema* sistema = new Sistema();
	do {
		cout<< 	"-----------------------------------------"<<endl;
		cout<<	"-                                 	-"<<endl;
		cout<<  "-              MENU              	-"<<endl;
		cout<<  "-          1-AGREGAR JUGADOR		-"<<endl;
		cout<<  "-          2-AGREGAR VIDEOJUEGO		-"<<endl;
		cout<<  "-          3-OBTENER JUGADORES		-"<<endl;
		cout<<  "-          4-OBTENER VIDEOJUEGOS	-"<<endl;
		cout<<  "-          5-OBTENER PARTIDAS		-"<<endl;
		cout<<  "-          6-INICIAR PARTIDA		-"<<endl;
		cout<<  "-          7-SALIR			-"<<endl;
		cout<<  "-                                 	-"<<endl;
		cout<<  "-----------------------------------------"<<endl;
		cin >> oper;
		switch (oper)
		{
			case 1:{
				try{
					string nombre, contrasenia;
					int edad;

					cout<<"Ingrese el nickname: ";
					cin.ignore();
					getline(cin, nombre);

					if(nombre.empty() || nombre.find_first_not_of(' ') == string::npos){
						throw runtime_error("El nombre del jugador no puede estar vacío");
					}

					cout<<"Ingrese la edad: ";
					cin>>edad;

					if (cin.fail()) {
					    throw runtime_error("La edad debe ser un número entero válido");
					}

					cout<<"Ingrese la contrasenia: ";
					cin>>contrasenia;

					if(contrasenia.empty() || contrasenia.find_first_not_of(' ') == string::npos){
						throw runtime_error("La contrasenia del jugador no puede estar vacía");
					}

					sistema->agregarJugador(nombre, edad, contrasenia);
				}
				catch(runtime_error& e){
					cerr<<"Error: "<<e.what()<<endl;
				}
				break;
			}
			case 2:{
				try{
					string nombre;
					string genero;
					cout<<"Ingrese el nombre del videojuego: ";
					cin.ignore();
					getline(cin, nombre);

					if(nombre.empty() || nombre.find_first_not_of(' ') == string::npos){
						throw runtime_error("El nombre del videojuego no puede estar vacío");
					}

					cout<<"Ingrese el género principal del videojuego: ";
					getline(cin, genero);

					if(genero.empty() || genero.find_first_not_of(' ') == string::npos){
						throw runtime_error("El género del videojuego no puede estar vacío");
					}

					sistema->agregarVideojuego(nombre, genero);
				}
				catch(runtime_error& e){
					cerr<<"Error: "<<e.what()<<endl;
				}
				break;
			}
			case 3:{
				try{
					int cantJugadores = 0;
					vector<Jugador*> jugadores = sistema->obtenerJugadores(cantJugadores);
					cout<<"Jugadores registrados en el sistema: "<<endl;
					sistema->mostrarJugadores(jugadores);
				}
				catch(runtime_error& e) {
					cerr<<"Error: "<<e.what()<<endl;
				}
				break;
			}
			case 4:{
				try{
					int cantVideojuegos = 0;
					vector<Videojuego*> juegos = sistema->obtenerVideojuegos(cantVideojuegos);
					sistema->mostrarVideojuegos(juegos);
				}catch(runtime_error& e){
					cerr<<"Error: "<<e.what()<<endl;
				}
				break;
			}
			case 5:{
				try{
					string nombreJuego;
					int cantPartidas = 0;
					cout<<"Ingrese el nombre del juego: ";
					cin.ignore();
					getline(cin, nombreJuego);

					if(nombreJuego.empty() || nombreJuego.find_first_not_of(' ') == string::npos){
						throw runtime_error("El nombre del juego no puede estar vacío");
					}

					vector<Partida*> partidas = sistema->obtenerPartidas(nombreJuego, cantPartidas);
					if(!partidas.empty()){
						cout<<std::fixed<<std::setprecision(2);
						sistema->mostrarPartidas(partidas);
					}
					else{
						throw runtime_error("No se encontraron partidas para el juego '" + nombreJuego + "'");
					}
				}
				catch(runtime_error& e) {
					cerr<<"Error: "<<e.what()<<endl;
				}
				break;
			}
			case 6:{
				try{
					string nickname, videojuego;
					double duracion;
					char tipoPartida = '\0';
					sistema->obtenerDatosP(nickname, videojuego, duracion, tipoPartida);
					Partida* partida = sistema->crearPartida(tipoPartida);
					partida->setDuracion(duracion);
					sistema->configPartida(partida);
					sistema->iniciarPartida(nickname, videojuego, partida);
				}catch(runtime_error& e){
					cerr<<"Error: "<<e.what()<<endl;
				}
				break;
			}
		default:{
				cout<<"Saliendo!";
				break;
			}
		};
	}
	while(oper < 7);
	return 0;
}
