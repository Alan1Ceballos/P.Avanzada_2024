/*
 * Sistema.cpp
 *
 *  Created on: 2 abr 2024
 *      Author: UnwantedOpinion
 */
#include "Sistema.h"
using namespace::std;

vector<Jugador> Jugadores;
vector<Videojuego> Juegos;
vector<PartidaIndividual> PIndividual;
vector<PartidaMultijugador> PMultijugador;
//=====================================================================
//=====================================================================
//=====================================================================

void agregarJugador(string nickname, int edad, string contrasenia){
	int JS = Jugadores.size();
	for(int i = 0; i < JS; i++){
		if(Jugadores[i].getNickname() == nickname){
			throw runtime_error("Este jugador ya existe!");
		}
	}
	Jugador nuevoJugador(nickname, edad, contrasenia);
	Jugadores.push_back(nuevoJugador);
}

//=====================================================================
//=====================================================================
//=====================================================================

void agregarVideojuego(string nombre, DtTipoJuego genero){
	int JS = Juegos.size();
	for (int i = 0; i < JS; i++) {
		if (Juegos[i].getNombre() == nombre) {
			throw runtime_error("Ya existe registrado un juego con ese nombre!");
		}
	}
	Videojuego newJuego;
	newJuego.setNombre(nombre);
	newJuego.setGenero(genero);
	Juegos.push_back(newJuego);
}

//=====================================================================
//=====================================================================
//=====================================================================

vector<Jugador*> obtenerJugadores(int cantJugadores){
    if(Jugadores.empty()){
        throw runtime_error("No hay jugadores registrados");
    }
    cantJugadores = Jugadores.size();
    vector<Jugador*> listaJugadores;
    for(int i = 0; i < cantJugadores; i++){
        string name = Jugadores[i].getNickname();
        int edad = Jugadores[i].getEdad();
        string contra = Jugadores[i].getContrasenia();
        listaJugadores.push_back(new Jugador(name, edad, contra));
    }
    return listaJugadores;
}

void mostrarJugadores(vector<Jugador*> listaJugadores){
	int JS = listaJugadores.size();
	for(int i = 0; i < JS; i++){
		cout<<"<"<<i + 1<<"> ["<<listaJugadores[i]->getNickname()<<"] ("
		<<listaJugadores[i]->getEdad()<<") ("<<listaJugadores[i]->getContrasenia()<<")"<<endl;
	}
}

//=====================================================================
//=====================================================================
//=====================================================================

vector<Videojuego*> obtenerVideojuegos(int cantVideojuegos) {
	if(Juegos.empty()){
		throw std::runtime_error("No hay videojuegos registrados");
	}
	cantVideojuegos = Juegos.size();
	vector<Videojuego*> listaVideojuegos;
	for(int i = 0; i < cantVideojuegos; i++){
		Videojuego* juegoActual = &Juegos[i];
		int totalHoras = 0;
		vector<Partida*> partidas = juegoActual->getPartida();
		int PS = partidas.size();
		for (int j = 0; j < PS; j++) {
			Partida* partida = partidas[j];
			if (auto* partidaIndividual = dynamic_cast<PartidaIndividual*>(partida)) {
				totalHoras += partidaIndividual->getDuracion();
			}
			else if(auto* partidaMultijugador = dynamic_cast<PartidaMultijugador*>(partida)) {
				totalHoras += partidaMultijugador->getDuracion() * partidaMultijugador->getCantidadTotalJugadores();
			}
		}

		juegoActual->setTotalHorasDeJuego(totalHoras);
		listaVideojuegos.push_back(juegoActual);
	}

	return listaVideojuegos;
}

void mostrarVideojuegos(vector<Videojuego*> listaVideojuegos){
	int VS = listaVideojuegos.size();
	for (int i = 0; i < VS; i++) {
		Videojuego* juego = listaVideojuegos[i];
		cout<<"Nombre: "<<juego->getNombre()<<endl;
		cout<<"Genero: "<<juego->getGenero().getNombre()<<endl;
		cout<<"Total horas de juego: "<<juego->getTotalHorasDeJuego()<<endl;
		cout<<"-------------------------------"<<endl;
		cout<<endl;
	}
}

//=====================================================================
//=====================================================================
//=====================================================================


vector<Partida*> obtenerPartidas(string videojuego, int cantPartidas) {
	Videojuego* juego = NULL;
	int j = Juegos.size();
	for(int i = 0; i < j; ++i){
		if(Juegos[i].getNombre() == videojuego){
			juego = &Juegos[i];
			break;
		}
	}

    if(juego == NULL){
    	throw runtime_error("No existe un videojuego registrado con ese nombre");
    }

    vector<Partida*> partidas = juego->getPartida();
    cantPartidas = partidas.size();
    return partidas;
}

void mostrarPartidas(vector<Partida*> partidas){
	int PS = partidas.size();
	for(int i = 0; i < PS; ++i){
		Partida* partida = partidas[i];
		cout<<"Partida: "<<i + 1<<":"<<endl;
		cout<<"Duración: "<<partida->getDuracion()<<" horas"<<endl;

		if(PartidaIndividual* partidaIndividual = dynamic_cast<PartidaIndividual*>(partida)){
			cout<<"Tipo de partida: Individual"<<endl;
			cout<<"Continuación de partida anterior: "<<(partidaIndividual->getContinuaPartidaAnterior() ? "Sí" : "No")<<endl;
		}
		else if(PartidaMultijugador* partidaMultijugador = dynamic_cast<PartidaMultijugador*>(partida)){
			cout<<"Tipo de partida: Multijugador"<<endl;
			cout<<"Transmitida en vivo: "<<(partidaMultijugador->getTransmitidaEnVivo() ? "Sí" : "No")<<endl;
			cout<<"Cantidad total de jugadores: "<<partidaMultijugador->getCantidadTotalJugadores()<<endl;
			cout<<"Nicknames de los jugadores participantes:"<<endl;
			vector<string> jugadores = partidaMultijugador->getJugadores();
			for(auto& jugador : jugadores) {
				cout << "- " << jugador << endl;
			}
		}
		cout<<"-------------------------"<<endl;
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
    	throw runtime_error("No se encontró ningún jugador con ese nickname");
    }

    datos->setJugadorCreador(Jugador);

    Videojuego* Juego = NULL;
    int g = Juegos.size();
    for(int i = 0; i < g; ++i){
        if(Juegos[i].getNombre() == videojuego){
            Juego = &Juegos[i];
            break;
        }
    }
    if(!Juego){
    	throw runtime_error("No se encontró ningún juego con ese nombre");
    }

    time_t now = time(0);
    tm* localTime = localtime(&now);
    int dia = localTime->tm_mday;
    int mes = localTime->tm_mon  + 1;
    int anio = localTime->tm_year + 1900;
    int hora = localTime->tm_hour;
    int min = localTime->tm_min;

    DtFechaHora fechaHoraActual(dia, mes, anio, hora, min);
    datos->setFecha(fechaHoraActual);
    datos->setVideojuego(Juego);

    if(PartidaIndividual* partidaIndividual = dynamic_cast<PartidaIndividual*>(datos)){
    	cout<<"Creando una partida individual..."<<endl;
    	Juego->agregarPartida(partidaIndividual);
    	Juego->agregarJugador(Jugador);
    	//PIndividual.push_back(*partidaIndividual);
    	cout<<"Partida individual creada y jugador agregado al juego"<<endl;
    }
    else if(PartidaMultijugador* partidaMultijugador = dynamic_cast<PartidaMultijugador*>(datos)){
    	cout<<"Creando una partida multijugador..."<<endl;
    	Juego->agregarPartida(partidaMultijugador);
    	Juego->agregarJugador(Jugador);
    	//PMultijugador.push_back(*partidaMultijugador);
    	cout<<"Partida multijugador creada y jugador agregado al juego"<<endl;
    }
    else{
    	cout<<"El tipo de partida no es válido"<<endl;
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

Videojuego* encontrarJuego(string nombre){
	int PI = PIndividual.size();
	for (int i = 0; i < PI; ++i) {
		if (PIndividual[i].getVideojuego()->getNombre() == nombre) {
			return PIndividual[i].getVideojuego();
		}
	}

	int PM = PMultijugador.size();
	for (int i = 0; i < PM; ++i) {
		if (PMultijugador[i].getVideojuego()->getNombre() == nombre) {
			return PMultijugador[i].getVideojuego();
		}
	}

	return NULL;
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
    	throw runtime_error("Opcion invalida");
    }
    return partida;
}

void configPartida(Partida* partida){
    if(PartidaIndividual* partidaIndividual = dynamic_cast<PartidaIndividual*>(partida)){
        char continuar;
        cout<<"¿La partida es una continuación de una anterior(s/n)?: ";
        cin>>continuar;
        bool esContinuacion = (continuar == 's' || continuar == 'S');
        partidaIndividual->setContinuaPartidaAnterior(esContinuacion);
    }
    else if(PartidaMultijugador* partidaMultijugador = dynamic_cast<PartidaMultijugador*>(partida)){
        char enVivo;
        cout<<"¿La partida fue transmitida en vivo(s/n)?: ";
        cin>>enVivo;
        bool esTransmitida = (enVivo == 's' || enVivo == 'S');
        partidaMultijugador->setTransmitidaEnVivo(esTransmitida);
        string nombreJugador;
        do{
            cout<<"Ingrese los nicknames de los demás jugadores ('Fin' para finalizar): ";
            cin>>nombreJugador;
            if(nombreJugador != "fin" && nombreJugador != "Fin"){
                if(!encontrarJugador(nombreJugador)){
                    cout<<"El jugador con nickname '"<<nombreJugador<<"' no existe en el sistema"<<endl;
                }
                else{
                    partidaMultijugador->unirseaPartida(new Jugador(nombreJugador, 0, ""));
                }
            }
        }while(nombreJugador != "fin" && nombreJugador != "Fin");
    }
}

