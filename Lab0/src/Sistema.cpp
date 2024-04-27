/*
 * Sistema.cpp
 *
 *  Created on: 2 abr 2024
 *      Author: UnwantedOpinion
 */
#include "Sistema.h"
using namespace::std;
//=====================================================================
//=====================================================================
//=====================================================================

Sistema::Sistema() {

}

void Sistema::agregarJugador(string nickname, int edad, string contrasenia){
	int JS = Jugadores.size();
	for(int i = 0; i < JS; i++){
		if(Jugadores[i]->getNickname() == nickname){
			throw runtime_error("Este jugador ya existe!");
		}
	}
	Jugador* nuevoJugador = new Jugador(nickname, edad, contrasenia);
	Jugadores.push_back(nuevoJugador);
}

//=====================================================================
//=====================================================================
//=====================================================================

void Sistema::agregarVideojuego(string nombre, DtTipoJuego genero){
	int JS = Juegos.size();
	for (int i = 0; i < JS; i++) {
		if (Juegos[i]->getNombre() == nombre) {
			throw runtime_error("Ya existe registrado un juego con ese nombre!");
		}
	}
	Videojuego* juegoNuevo = new Videojuego();
	juegoNuevo->setNombre(nombre);
	juegoNuevo->setGenero(genero);
	Juegos.push_back(juegoNuevo);
}

//=====================================================================
//=====================================================================
//=====================================================================

vector<Jugador*> Sistema::obtenerJugadores(int cantJugadores){
    if(Jugadores.empty()){
        throw runtime_error("No hay jugadores registrados");
    }
    cantJugadores = Jugadores.size();
    vector<Jugador*> listaJugadores;
    for(int i = 0; i < cantJugadores; i++){
        string name = Jugadores[i]->getNickname();
        int edad = Jugadores[i]->getEdad();
        string contra = Jugadores[i]->getContrasenia();
        Jugador* jugador = new Jugador(name, edad, contra);
        listaJugadores.push_back(jugador);
    }
    return listaJugadores;
}

void Sistema::mostrarJugadores(vector<Jugador*> listaJugadores){
	int JS = listaJugadores.size();
	for(int i = 0; i < JS; i++){
		cout<<"<"<<i + 1<<"> ["<<listaJugadores[i]->getNickname()<<"] ("
		<<listaJugadores[i]->getEdad()<<") ("<<listaJugadores[i]->getContrasenia()<<")"<<endl;
	}
}

//=====================================================================
//=====================================================================
//=====================================================================

vector<Videojuego*> Sistema::obtenerVideojuegos(int cantVideojuegos) {
	if(Juegos.empty()){
		throw runtime_error("No hay videojuegos registrados");
	}
	cantVideojuegos = Juegos.size();
	vector<Videojuego*> listaVideojuegos;
	for(int i = 0; i < cantVideojuegos; i++){
		Videojuego* juegoActual = Juegos[i];
		double totalHoras = 0;
		vector<Partida*> partidas = juegoActual->getPartidas();
		int PS = partidas.size();
		for (int j = 0; j < PS; j++) {
			Partida* partida = partidas[j];
			if (PartidaIndividual* partidaIndividual = dynamic_cast<PartidaIndividual*>(partida)) {
				totalHoras += partidaIndividual->darTotalHorasParticipantes();
			}
			else if(PartidaMultijugador* partidaMultijugador = dynamic_cast<PartidaMultijugador*>(partida)) {
				totalHoras += partidaMultijugador->darTotalHorasParticipantes() * partidaMultijugador->getCantidadTotalJugadores();
			}
		}

		juegoActual->setTotalHorasDeJuego(totalHoras);
		//string a = "cinco";
		//string b = juegoActual->getNombre();
		//if(b.length() >= a.length()){
			listaVideojuegos.push_back(juegoActual);
		//}
	}
	return listaVideojuegos;
}

void Sistema::mostrarVideojuegos(vector<Videojuego*> listaVideojuegos){
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


vector<Partida*> Sistema::obtenerPartidas(string videojuego, int cantPartidas) {
	Videojuego* juego = NULL;
	int j = Juegos.size();
	for(int i = 0; i < j; ++i){
		if(Juegos[i]->getNombre() == videojuego){
			juego = Juegos[i];
			break;
		}
	}

    if(juego == NULL){
    	throw runtime_error("No existe un videojuego registrado con ese nombre");
    }

    vector<Partida*> partidas = juego->getPartidas();
    cantPartidas = partidas.size();
    return partidas;
}

void Sistema::mostrarPartidas(vector<Partida*> partidas){
	int PS = partidas.size();
	for(int i = 0; i < PS; ++i){
		Partida* partida = partidas[i];
		if(partida == NULL) {
			throw runtime_error("La partida es un puntero nulo");
		}
		cout<<"Partida "<<i + 1<<":"<<endl;
		cout<<"Creador: "<<partida->getJugadorCreador()->getNickname()<<endl;
		cout<<"Duración: "<<partida->getDuracion()<<" horas"<<endl;
		cout<<"Fecha: "<<partida->getFecha().presentate()<<endl;

		if(PartidaIndividual* partidaIndividual = dynamic_cast<PartidaIndividual*>(partida)){
			cout<<"Tipo de partida: Individual"<<endl;
			cout<<"Continuación de partida anterior: "<<(partidaIndividual->getContinuaPartidaAnterior() ? "Sí" : "No")<<endl;
		}
		else if(PartidaMultijugador* partidaMultijugador = dynamic_cast<PartidaMultijugador*>(partida)){
			cout<<"Tipo de partida: Multijugador"<<endl;
			cout<<"Transmitida en vivo: "<<(partidaMultijugador->getTransmitidaEnVivo() ? "Sí" : "No")<<endl;
			cout<<"Cantidad total de jugadores: "<<partidaMultijugador->getCantidadTotalJugadores()<<endl;
			cout<<"Nicknames de los jugadores participantes:"<<endl;
			for(string& jugador : partidaMultijugador->getJugadores()){
				cout<<"- "<<jugador<<endl;
			}
		}
		cout<<"-------------------------"<<endl;
	}
}

//=====================================================================
//=====================================================================
//=====================================================================

void Sistema::iniciarPartida(string nickname, string videojuego, Partida* datos){
    Jugador* jugador = NULL;
    for(Jugador* j : Jugadores){
        if(j->getNickname() == nickname){
            jugador = j;
            break;
        }
    }
    if(!jugador){
    	throw runtime_error("No se encontró ningún jugador con ese nickname");
    }

    Videojuego* juego = NULL;
    for(Videojuego* Vj : Juegos){
        if(Vj->getNombre() == videojuego){
            juego = Vj;
            break;
        }
    }
    if(!juego){
    	throw runtime_error("No se encontró ningún juego con ese nombre");
    }

    DtFechaHora fhActual = fhActual.obtenerFechaHoraActual();

    datos->setJugadorCreador(jugador);
    datos->setFecha(fhActual);
    datos->setVideojuego(juego);

    if(PartidaIndividual* partidaIndividual = dynamic_cast<PartidaIndividual*>(datos)){
    	cout<<"Creando una partida individual..."<<endl;
    	juego->agregarPartida(partidaIndividual);
    	juego->agregarJugador(jugador);
    	cout<<"Partida individual creada y jugador agregado al juego"<<endl;
    }
    else if(PartidaMultijugador* partidaMultijugador = dynamic_cast<PartidaMultijugador*>(datos)){
    	cout<<"Creando una partida multijugador..."<<endl;
    	juego->agregarPartida(partidaMultijugador);
    	juego->agregarJugador(jugador);
    	cout<<"Partida multijugador creada y jugador agregado al juego"<<endl;
    }
    else{
    	throw runtime_error("El tipo de partida no es válido");
    }
}

bool Sistema::encontrarJugador(string nickname){
	for(Jugador* jugador : Jugadores){
		if(jugador->getNickname() == nickname){
			return true;
		}
	}
	return false;
}

Videojuego* Sistema::encontrarJuego(string nombre){
	for(Videojuego* j : Juegos){
		if(j->getNombre() == nombre){
			return j;
		}
	}
	return NULL;
}


void Sistema::obtenerDatosP(string& nickname, string& videojuego, double& duracion, char& tipoPartida){
	cout<<"Ingrese su nickname: ";
	cin.ignore();
	getline(cin, nickname);

	if(nickname.empty() || nickname.find_first_not_of(' ') == string::npos){
		throw runtime_error("El nickname no puede estar vacío");
	}

	cout<<"Ingrese el nombre del juego: ";
	getline(cin, videojuego);

	if(videojuego.empty() || videojuego.find_first_not_of(' ') == string::npos){
		throw runtime_error("El nombre del videojuego no puede estar vacío");
	}

	cout<<"Ingrese la duracion de la partida (en horas, ej: 1.5 (hora y media)): ";
	cin>>duracion;

	if(duracion <= 0){
		throw runtime_error("La duración debe ser un número positivo");
	}

	cout<<"¿La partida fue individual (i) o multijugador (m)?: ";
	cin>>tipoPartida;
	cin.ignore();

	if((tipoPartida != 'i' && tipoPartida != 'I') && (tipoPartida != 'm' && tipoPartida != 'M')){
		throw runtime_error("El tipo de partida seleccionado no es válido");
	}
}

Partida* Sistema::crearPartida(char tipoPartida){
    Partida* partida = NULL;
    if(tipoPartida == 'i' || tipoPartida == 'I'){
        partida = new PartidaIndividual();
    }
    else if(tipoPartida == 'm' || tipoPartida == 'M'){
        partida = new PartidaMultijugador();
    }
    else{
    	throw runtime_error("Opción de partida no válida");
    }
    return partida;
}

void Sistema::configPartida(Partida* partida){
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
                	throw runtime_error("El jugador con nickname '" + nombreJugador + "' no existe en el sistema");
                }
                else{
                    partidaMultijugador->unirseaPartida(new Jugador(nombreJugador, 0, ""));
                }
            }
        }while(nombreJugador != "fin" && nombreJugador != "Fin");
    }
}


Sistema::~Sistema() {
	// TODO Auto-generated destructor stub
}
