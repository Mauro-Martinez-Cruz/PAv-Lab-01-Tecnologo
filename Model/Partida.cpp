#include "Partida.h"
#include <iostream>
#include <string>

using namespace std;

Partida::Partida(){}
Partida::Partida(DtFechaHora* fecha, int duracion, Jugador* player){
	this->fecha=fecha;
	this->duracion=duracion;
	this->player=player;
}
DtFechaHora* Partida::getFecha(){
	return this->fecha;
}

int Partida::getDuracion(){
	return this->duracion;
}
void Partida::setDuracion(int duracion){
	this->duracion=duracion;
}
Jugador* Partida::getJugador(){
	return this->player;
}

Partida::~Partida(){}

/*ostream& operator << (ostream& salida, const Partida& partida){
	cout << partida.fecha << ", " << partida.duracion << ", " << partida.player << endl;
	return salida;
}*/