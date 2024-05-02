#include "Partida.h"
#include "PartidaIndividual.h"
#include <iostream>
#include <string>

using namespace std;

PartidaIndividual::PartidaIndividual(){}
PartidaIndividual::PartidaIndividual(DtFechaHora* fecha, int duracion, Jugador* player, bool contiPartAnt){
	this->fecha=fecha;
	this->duracion=duracion;
	this->player=player;
	this->contiPartAnt=contiPartAnt;
}
		
bool PartidaIndividual::getContiParAnt(){
	return this->contiPartAnt;
}
void PartidaIndividual::setContiParAnt(bool contiParAnt){
	this->contiPartAnt=contiPartAnt;
}

PartidaIndividual::~PartidaIndividual(){}

int PartidaIndividual::darTotalHorasParticipantes(){
	return this->duracion;
}

/*ostream& operator << (ostream& salida, PartidaIndividual& partidaI){
	cout << partidaI.fecha << ", " << partidaI.duracion << ", " << partidaI.player << ", " << partidaI.contiPartAnt << endl;
	return salida;
}*/