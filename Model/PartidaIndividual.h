#ifndef PARTIDAINDIVIDUAL_H
#define PARTIDAINDIVIDUAL_H

#include "Partida.h"
#include <iostream>
#include <string>

using namespace std;

class PartidaIndividual : public Partida{
	private:
		bool contiPartAnt;
	public:
		PartidaIndividual();
		PartidaIndividual(DtFechaHora*, int, Jugador*, bool);
		
		bool getContiParAnt();
		void setContiParAnt(bool contiPartAnt);
		
		~PartidaIndividual();
		
		int darTotalHorasParticipantes();

		//friend ostream& operator << (ostream&, PartidaIndividual&);
};

#endif