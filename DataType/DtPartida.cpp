#include "DtPartida.h"
#include "DtFechaHora.h"
#include "DtJugador.h"
#include <iostream>
#include <string>

using namespace std;

DtPartida::DtPartida(){}
DtPartida::DtPartida(DtFechaHora* fecha, int duracion, Jugador* player){
	this->fecha=fecha;
	this->duracion=duracion;
	this->player=player;
}

int DtPartida::getDuracion(){
	return this->duracion;
}
DtFechaHora* DtPartida::getFecha(){
	return this->fecha;
}
Jugador* DtPartida::getJugador(){
	return this->player;
}

DtPartida::~DtPartida(){}

ostream& operator << (ostream& salida, const DtPartida& dtpartida){
	DtFechaHora* fechahora=new DtFechaHora(dtpartida.fecha->getDia(), dtpartida.fecha->getMes(), dtpartida.fecha->getAnio(), dtpartida.fecha->getHora(), dtpartida.fecha->getMin());
	DtJugador* player=new DtJugador(dtpartida.player->getNickname(), dtpartida.player->getEdad());
	cout << *fechahora << " ❖❖❖❖ " << "Duracion: " << dtpartida.duracion << " ❖❖❖❖ " << "Jugador: " << *player;
	return salida;
}