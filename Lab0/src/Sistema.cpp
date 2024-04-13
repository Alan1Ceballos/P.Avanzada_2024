/*
 * Sistema.cpp
 *
 *  Created on: 2 abr 2024
 *      Author: UnwantedOpinion
 */
#include "Sistema.h"
#include <vector>
using namespace::std;

vector<Jugador> Jugadores;
vector<Videojuego> Juegos;
//=====================================================================
//=====================================================================
//=====================================================================

void agregarJugador(string nickname, int edad, string contrasenia){
	bool jugadorExiste = false;
	int a = Jugadores.size();
	for(int i = 0; i < a; i++){
		if(Jugadores[i].getNickname() == nickname){
			jugadorExiste = true;
			break;
		}
	}
	if(jugadorExiste){
		cout<<"Este jugador ya existe!"<<endl;
	}
	else{
		Jugador nuevoJugador(nickname, edad, contrasenia);
		Jugadores.push_back(nuevoJugador);
	}
}

//=====================================================================
//=====================================================================
//=====================================================================

void agregarVideojuego(string nombre, DtTipoJuego genero){
	bool juegoExiste = false;
	int b = Juegos.size();
	for(int i = 0; i < b; i++){
		if(Juegos[i].getNombre() == nombre){
			juegoExiste = true;
			break;
		}
	}
	if(juegoExiste){
		cout<<"Ya existe registrado un juego con ese nombre!"<<endl;
	}
	else{
		Videojuego newJuego;
		newJuego.setNombre(nombre);
		newJuego.setGenero(genero);
		Juegos.push_back(newJuego);
	}
}

void mostrarJuegos() {
    if (Juegos.empty()) {
        cout<<"No hay juegos registrados"<<endl;
        return;
    }
    cout<<endl;
    cout << "[Lista de juegos]:" << endl;
    int c = Juegos.size();
    for(int i = 0; i < c; i++){
        cout << "Nombre: " << Juegos[i].getNombre() << endl;
        cout << "Género: " << Juegos[i].getGenero().getNombre() << endl;
        cout << "-------------------------" << endl;
    }
}

//=====================================================================
//=====================================================================
//=====================================================================

Jugador* obtenerJugadores(int cantJugadores){
	cantJugadores = Jugadores.size();
	if(cantJugadores == 0){
		cout<<"... No hay jugadores registrados";
	}
	Jugador* listaJugadores = new Jugador[cantJugadores];
	for(int i = 0; i < cantJugadores; i++) {
		string name = Jugadores[i].getNickname();
		int edad = Jugadores[i].getEdad();
		string contra = Jugadores[i].getContrasenia();
		listaJugadores[i] = Jugador(name, edad, contra);
	}
	for (int O = 0; O < cantJugadores; O++){
		cout << "<" << O+1 << "> [" << listaJugadores[O].getNickname() << "] (" << listaJugadores[O].getEdad() << ") (" << listaJugadores[O].getContrasenia() << ")" << endl;
	}
	return listaJugadores;
}

void MostrarJugadores(){
	int o = Jugadores.size();
	for(int i= 0 ; i < o;i++){
		cout<<"<"<<i+1<<"> ["<<Jugadores[i].getNickname()<<"] ("<<Jugadores[i].getEdad()<<") ("<< Jugadores[i].getContrasenia()<<")"<<endl;
	}
}

//=====================================================================
//=====================================================================
//=====================================================================

void iniciarPartida(string nickname, string videojuego, Partida* datos){
	Jugador* Jugador = NULL;
	int f = Jugadores.size();
	for(int i = 0; i < f; ++i){
		if(Jugadores[i].getNickname() == nickname){
			Jugador = &Jugadores[i];
			break;
		}
	}
	if(!Jugador){
		cout<<"No se encontró ningun jugador con ese nickname";
	}
	Videojuego* Juego = NULL;
	int g = Juegos.size();
	for(int i = 0; i < g; ++i){
		if(Juegos[i].getNombre() == videojuego){
			Juego = &Juegos[i];
			break;
		}
	}
	if(!Juego){
		cout<<"No se encontró ningun juego con ese nombre";
		return;
	}

	DtFechaHora fechaHoraPredeterminada(1, 1, 2024, 12, 0);
	datos->setFecha(fechaHoraPredeterminada);


	PartidaIndividual* parIndivual = dynamic_cast<PartidaIndividual*>(datos);
	if (parIndivual){
		cout<<"Creando una partida individual..."<<endl;
		Juego->agregarPartida(parIndivual);
		Juego->agregarJugador(Jugador);
		cout<<"Partida individual creada y jugador agregado al juego"<<endl;
	} else {
		PartidaMultijugador* parMultijugador = dynamic_cast<PartidaMultijugador*>(datos);
		if (parMultijugador) {
			cout<<"Creando una partida multijugador..."<<endl;
			Juego->agregarPartida(parMultijugador);
			Juego->agregarJugador(Jugador);
			cout<<"Partida multijugador creada y jugador agregado al juego"<<endl;
		} else {
			cout<<"El tipo de partida no es válido";
		}
	}
}

void mostrarPartidasVideojuego(string nombre){
	Videojuego* Juego = NULL;
	int g = Juegos.size();
	for(int i = 0; i < g; ++i){
		if(Juegos[i].getNombre() == nombre){
			Juego = &Juegos[i];
			break;
		}
	}
	if(!Juego){
		cout<<"No se encontró ningun juego con ese nombre";
		return;
	}

	vector<Partida*> partidas = Juego->getPartida();

	if (partidas.empty()) {
		cout << "No hay partidas asociadas a este videojuego." << endl;
	} else {
		cout << "Partidas asociadas al videojuego '" << nombre << "':" << endl;
		int m = partidas.size();
		for (int i = 0; i < m; ++i) {
			cout << "Partida " << i + 1 << ":" << endl;
			cout << "Fecha y hora: " << partidas[i]->getFecha().getDia() << "/" << partidas[i]->getFecha().getMes() << "/" << partidas[i]->getFecha().getAnio() << " "
					<< partidas[i]->getFecha().getHora() << ":" << partidas[i]->getFecha().getMinuto() << endl;
			cout << "Duración" << i+1 <<": "<< partidas[i]->getDuracion() << " horas" << endl;

			// Verificar si es una partida individual o multijugador
			PartidaIndividual* partidaIndividual = dynamic_cast<PartidaIndividual*>(partidas[i]);
			if (partidaIndividual) {
				cout << "Tipo de partida: Individual" << endl;
				cout << "Continuación de partida anterior: " << (partidaIndividual->getContinuaPartidaAnterior() ? "Sí" : "No") << endl;
			} else {
				PartidaMultijugador* partidaMultijugador = dynamic_cast<PartidaMultijugador*>(partidas[i]);
				if (partidaMultijugador) {
					cout << "Tipo de partida: Multijugador" << endl;
					cout << "Transmitida en vivo: " << (partidaMultijugador->getTransmitidaEnVivo() ? "Sí" : "No") << endl;
					cout << "Cantidad total de jugadores: " << partidaMultijugador->getCantidadTotalJugadores() << endl;
					cout << "Nicknames de los jugadores participantes:" << endl;
					vector<string> jugadores = partidaMultijugador->getJugadores();
					int jug = jugadores.size();
					for (i = 0; i < jug; ++i) {
						cout << "- " << jugadores[i] << endl;
					}
				}
			}

			// Aquí puedes mostrar más detalles de la partida si es necesario
			cout << "-------------------------" << endl;
		}
	}
}


bool encontrarJugador(string nickname){
	int m = Jugadores.size();
	for (int i = 0; i < m; ++i) {
		if (Jugadores[i].getNickname() == nickname) {
			return true;
		}
	}
	return false;
}

void obtenerDatosP(string& nickname, string& videojuego, float& duracion, char& tipoPartida){
	cout<<"Ingrese su nickname: ";
	cin.ignore();
	getline(cin, nickname);
	cout<<"Ingrese el nombre del juego: ";
	getline(cin, videojuego);
	cout<<"Ingrese la duracion de la partida (en horas, ej: 1.5 (hora y media): ";
	cin>>duracion;
	cout<<"¿La partida fue individual (i) o multijugador (m)?: ";
	cin>>tipoPartida;
}

Partida* crearPartida(char tipoPartida){
	Partida* partida = NULL;
	if(tipoPartida == 'i' || tipoPartida == 'I'){
		partida = new PartidaIndividual();
	}
	else if(tipoPartida == 'm' || tipoPartida == 'M'){
		partida = new PartidaMultijugador();
	}
	else{
		cout<<"Opcion invalida!"<<endl;
	}
	return partida;
}

void configPartida(Partida* partida){
	if(PartidaIndividual* partidaIndividual = dynamic_cast<PartidaIndividual*>(partida)){
		char continuar;
		cout<<"¿La partida es una continaucion de una anterior(s/n)?: ";
		cin>>continuar;
		bool esContinuacion = (continuar == 's' || continuar == 'S');
		partidaIndividual->setContinuaPartidaAnterior(esContinuacion);
	}
	else{
		if(PartidaMultijugador* partidaMultijugador = dynamic_cast<PartidaMultijugador*>(partida)){
			char enVivo;
			cout<<"¿La partida fue transmitida en vivo(s/n)?: ";
			cin>>enVivo;
			bool esTransmitida = (enVivo == 's' || enVivo == 'S');
			partidaMultijugador->setTransmitidaEnVivo(esTransmitida);

			string nombreJugador;
			do{
				cout<<"Ingrese los nicknames de los demas jugadores ('Fin' para finalizar): ";
				cin>>nombreJugador;
				if(nombreJugador != "fin" || nombreJugador != "Fin"){
					if(!encontrarJugador(nombreJugador)){
						cout<<"El jugador con nickname '"<<nombreJugador<<"' no existe en el sitema"<<endl;
					}
					else{
						partidaMultijugador->unirseaPartida(new Jugador(nombreJugador, 0, ""));
					}
				}
			}while(nombreJugador != "fin" || nombreJugador != "Fin");
		}
	}
}
