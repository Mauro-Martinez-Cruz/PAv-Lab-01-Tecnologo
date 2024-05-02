#include "Partida.h"
#include "PartidaMultijugador.h"
#include <iostream>
#include <string>

using namespace std;

PartidaMultijugador::PartidaMultijugador(){}
PartidaMultijugador::PartidaMultijugador(bool transEnVivo, DtFechaHora* fecha, int duracion, Jugador* player, int cantJugadores){
	this->transEnVivo=transEnVivo;
	this->fecha=fecha;
	this->duracion=duracion;
	this->player=player;
	this->cantJugadores=cantJugadores;
}

int PartidaMultijugador::getCantJugadores(){
	return this->cantJugadores;
}
bool PartidaMultijugador::getContiParAnt(){
	return this->transEnVivo;
}
void PartidaMultijugador::setContiParAnt(bool transEnVivo){
	this->transEnVivo=transEnVivo;
}
bool PartidaMultijugador::getTransEnVivo(){
	return this->transEnVivo;
}
		
PartidaMultijugador::~PartidaMultijugador(){}

int PartidaMultijugador::darTotalHorasParticipantes(){
	return this->duracion*this->cantJugadores;
}

/*ostream& operator << (ostream& salida, PartidaMultijugador& partidaM){
	cout << partidaM.fecha << ", " << partidaM.duracion << ", " << partidaM.player << ", " << partidaM.cantJugadores << ", " << partidaM.transEnVivo << endl;
	return salida;
}*/