#include "DtPartidaIndividual.h"
#include <iostream>
#include <string>

using namespace std;

DtPartidaIndividual::DtPartidaIndividual(){}
DtPartidaIndividual::DtPartidaIndividual(DtFechaHora* fecha, int duracion, Jugador* player, bool contiPartAnt){
	this->fecha=fecha;
	this->duracion=duracion;
	this->player=player;
	this->contiPartAnt=contiPartAnt;
}
		
bool DtPartidaIndividual::getContiParAnt(){
	return this->contiPartAnt;
}

DtPartidaIndividual::~DtPartidaIndividual(){}

ostream& operator << (ostream& salida, DtPartidaIndividual& dtpartidaI){
	if (dtpartidaI.contiPartAnt)
		cout << (DtPartida) dtpartidaI << " ❖❖❖❖ " << "Partida Continuada" << endl;
	else
		cout << (DtPartida) dtpartidaI << " ❖❖❖❖ " << "Partida NO Continuada" << endl;
	return salida;
}