#include "Sistema.h"
#include <string>
#include <iostream>

using namespace std;

Sistema::Sistema(){
    this->cantJuegos=0;
	this->cantJugadores=0;
}

int Sistema::getCantVJuegos(){
    return this->cantJuegos;
}

int Sistema::getCantJugadores(){
    return this->cantJugadores;
}
Jugador* Sistema::darJugador(string nickname){
	int i=0;
	bool existe=false;
	Jugador* player = new Jugador;
	while(!existe){
		if(nickname == this->jugadores[i]->getNickname()){
			player = this->jugadores[i];
			existe=true;
		}
		i++;
	}
	return player;
}
Juego* Sistema::darJuego(string juego){
	int i=0;
	bool existe=false;
	Juego* game = new Juego;
	while(!existe){
		if(juego == this->juegos[i]->getNombre()){
			game = this->juegos[i];
			existe=true;
		}
		i++;
	}
	return game;
}

void Sistema::existeVJuego(string nombre, int ops){
	int pos=0;
	bool existe=false;
	while((!existe) and (pos<this->cantJuegos)){
		if(nombre == this->juegos[pos]->getNombre())
			existe=true;
		pos++;
	}
	if(ops==1 and existe)
		throw invalid_argument("Ya existe un juego con las mismas características.\n");
	else if(ops==2 and !existe)
		throw invalid_argument("No existe un juego con las mismas características.\n");
}

void Sistema::existeJugador(string nombre, int ops){
	int pos=0;
	bool existe=false; 
	while((!existe) and (pos<this->cantJugadores)){
		if(nombre == this->jugadores[pos]->getNickname())
			existe=true;
		pos++;
	}
	if(ops==1 and existe)
		throw invalid_argument("Ya existe un jugador con el mismo nombre.\n");
	else if(ops==2 and !existe)
		throw invalid_argument("No existe un jugador con el mismo nombre.\n");
}

void Sistema::agregarJugador(string nombre,int edad, string password){
    try{
        if(this->cantJugadores >= MAX_JUGADORES){
            throw invalid_argument("No hay mas espacio para guardar jugadores");
        }
		Jugador* jugador = new Jugador(nombre,edad,password);
		this->jugadores[this->cantJugadores]=jugador;
		this->cantJugadores++;
		cout << "\nSE HA AGREGADO EL JUGADOR: " << nombre << " EN EL SISTEMA..." << endl;
	}
	catch(invalid_argument& e){
		cerr << "exception caught: " << e.what() << '\n';
	}
}

void Sistema::agregarVideoJuego(string nombre, int genero){
    try{
        if(this->cantJuegos >= MAX_VIDEOJUEGOS){
            throw invalid_argument("No hay mas espacio para guardar videojuegos");
        }
        TipoGenero tipogenero;
		switch(genero){
			case 1: tipogenero=ACCION; break;
			case 2: tipogenero=AVENTURA; break;
			case 3: tipogenero=DEPORTE; break;
			case 4: tipogenero=OTRO; break;
		}
		Juego* juego = new Juego(nombre, tipogenero);
		this->juegos[this->cantJuegos]=juego;
		this->cantJuegos++;
		cout << "\nSE HA AGREGADO EL VIDEOJUEGO: " << nombre << " EN EL SISTEMA..." << endl;
	}
	catch(invalid_argument& e){
		cerr << "exception caught: " << e.what() << '\n';
	}
}

DtJugador** Sistema::obtenerJugadores(int& cantJugadores){
    cantJugadores=this->cantJugadores;
    DtJugador** jugador = new DtJugador*[cantJugadores];
    DtJugador* dtjugador;
    for(int cont=0;cont<this->cantJugadores;cont++){
        dtjugador = new DtJugador(this->jugadores[cont]->getNickname(),this->jugadores[cont]->getEdad());
        jugador[cont]=dtjugador;
    }
    return jugador;
}

DtJuego** Sistema::obtenerVideoJuegos(int& cantVJuegos){
    DtJuego** juegos = new DtJuego*[cantVJuegos];
    DtJuego* dtjuego;
    for(int cont=0;cont<this->cantJuegos;cont++){
        dtjuego=new DtJuego(this->juegos[cont]->getNombre(),this->juegos[cont]->getGenero(), this->juegos[cont]->darTotalHorasJuego());
        juegos[cont]=dtjuego;
    }
    return juegos;
}

void Sistema::iniciarPartida(string nickname, string videojuego, DtPartida* datos){
	for(int pos=0; pos<this->cantJuegos; pos++){
		if(videojuego == this->juegos[pos]->getNombre()){
            try{
				this->juegos[pos]->agregarPartidas(nickname, datos);
				cout << "\n" << nickname << " HA INICIADO UNA PARTIDA EN EL JUEGO: " << videojuego << " ..." << endl;
				cin.ignore();
			}catch(exception& e){
                cerr << "exception caught: " << e.what() << '\n';
            }
		}
	}
}

Sistema::~Sistema(){}