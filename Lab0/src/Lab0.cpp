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
	/*agregarJugador("Player1", 25, "contrasenia1");
	agregarJugador("Player2", 22, "contrasenia2");
	agregarJugador("Player3", 21, "contrasenia3");
	string nombre, genero;
	nombre = "Call of Duty";
	genero = "Shooter";
	agregarVideojuego(nombre, genero);

	PartidaIndividual partida1;
	DtFechaHora fechaHora1(2024, 4, 10, 15, 30);
	partida1.setFecha(fechaHora1);
	partida1.setDuracion(2.5);
	partida1.setContinuaPartidaAnterior(false);
	callOfDuty.agregarPartida(&partida1);

	PartidaIndividual partida2;
	DtFechaHora fechaHora2(2024, 4, 11, 16, 0);
	partida2.setFecha(fechaHora2);
	partida2.setDuracion(1.75);
	partida2.setContinuaPartidaAnterior(true);
	callOfDuty->agregarPartida(&partida2);

	PartidaIndividual partida3;
	DtFechaHora fechaHora3(2024, 4, 12, 18, 45);
	partida3.setFecha(fechaHora3);
	partida3.setDuracion(3.0);
	partida3.setContinuaPartidaAnterior(false);
	callOfDuty->agregarPartida(&partida3);

	PartidaMultijugador partida4;
	DtFechaHora fechaHora(2024, 4, 15, 20, 0);
	partida4.setFecha(fechaHora);
	partida4.setDuracion(2.0);
	partida4.setTransmitidaEnVivo(true);
	Jugador jugador1("Player1", 25, "contrasenia1");
	Jugador jugador2("Player2", 28, "contrasenia2");
	partida4.unirseaPartida(&jugador1);
	partida4.unirseaPartida(&jugador2);
	callOfDuty->agregarPartida(&partida4);*/

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
					string nombre;
					int edad;
					string contrasenia;
					cout<<"Ingrese el nickname: ";
					cin.ignore();
					getline(cin, nombre);
					cout<<"Ingrese la edad: ";
					cin>>edad;
					cout<<"Ingrese la contrasenia: ";
					cin>>contrasenia;
					agregarJugador(nombre, edad, contrasenia);
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
					cout<<"Ingrese el género principal del videojuego: ";
					getline(cin, genero);
					agregarVideojuego(nombre, genero);
				}
				catch(runtime_error& e){
					cerr<<"Error: "<<e.what()<<endl;
				}
				break;
			}
			case 3:{
				try{
					int cantJugadores = 0;
					vector<Jugador*> jugadores = obtenerJugadores(cantJugadores);
					cout<<"Jugadores registrados en el sistema: "<<endl;
					mostrarJugadores(jugadores);
					for(Jugador* jugador : jugadores){
						delete jugador;
					}
				}
				catch(runtime_error& e) {
					cerr<<"Error: "<<e.what()<<endl;
				}
				break;
			}
			case 4:{
				try{
					int cantVideojuegos = 0;
					vector<Videojuego*> juegos = obtenerVideojuegos(cantVideojuegos);
					mostrarVideojuegos(juegos);
					for(auto juego : juegos){
						delete juego;
					}
				}catch(runtime_error& e){
					cerr<<"Error: "<<e.what()<<endl;
				}
				break;
			}
			case 5:{
				string nombreJuego;
				int cantPartidas = 0;
				cout<<"Ingrese el nombre del juego: ";
				cin.ignore();
				getline(cin, nombreJuego);

				if(nombreJuego.empty()){
					cout<<"El nombre del juego no puede estar vacío"<<endl;
					break;
				}
				try{
					vector<Partida*> partidas = obtenerPartidas(nombreJuego, cantPartidas);
					if(!partidas.empty()){
						mostrarPartidas(partidas);
						for(auto partida : partidas) {
							delete partida;
						}
					}
					else{
						cout<<"No se encontraron partidas para el videojuego '"<<nombreJuego<<"'."<<endl;
					}
				}
				catch(runtime_error& e) {
			        cerr<<"Error: "<<e.what()<<endl;
			    }
				break;
			}
			case 6:{
				string nickname, videojuego;
				float duracion = 0;
				char tipoPartida = '\0';
				obtenerDatosP(nickname, videojuego, duracion, tipoPartida);
				Partida* partida = crearPartida(tipoPartida);
				partida->setDuracion(duracion);
				configPartida(partida);
				iniciarPartida(nickname, videojuego, partida);
				delete partida;
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
