#include "DtPartidaMultijugador.h"
#include <iostream>
#include <string>

using namespace std;

DtPartidaMultijugador::DtPartidaMultijugador(){}
DtPartidaMultijugador::DtPartidaMultijugador(DtFechaHora* fecha, int duracion, Jugador* player, int cantJugadores, bool transEnVivo){
	this->fecha=fecha;
	this->duracion=duracion;
	this->cantJugadores=cantJugadores;
	this->player=player;
	this->transEnVivo=transEnVivo;
}
		
int DtPartidaMultijugador::getCantJugadores(){
	return this->cantJugadores;
}
bool DtPartidaMultijugador::getTransEnVivo(){
	return this->transEnVivo;
}

DtPartidaMultijugador::~DtPartidaMultijugador(){}

ostream& operator << (ostream& salida, DtPartidaMultijugador& dtpartidaM){
	if(dtpartidaM.transEnVivo)
		cout << (DtPartida) dtpartidaM << " ❖❖❖❖ " << "Cant. Jugadores: " << dtpartidaM.cantJugadores << " ❖❖❖❖ " << "Partida Transmitido En Vivo" << endl;
	else
		cout << (DtPartida) dtpartidaM << " ❖❖❖❖ " << "Cant. Jugadores: " << dtpartidaM.cantJugadores << " ❖❖❖❖ " << "Partida Sin Transmision En Vivo" << endl;
	return salida;
}