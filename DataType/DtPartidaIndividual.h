#ifndef DTPARTIDAINDIVIDUAL_H
#define DTPARTIDAINDIVIDUAL_H

#include "DtFechaHora.h"
#include "DtPartida.h"
#include <iostream>
#include <string>

using namespace std;

class DtPartidaIndividual : public DtPartida{
	private:
		bool contiPartAnt;
	public:
		DtPartidaIndividual();
		DtPartidaIndividual(DtFechaHora*, int, Jugador*, bool);
		
		bool getContiParAnt();	
		
		~DtPartidaIndividual();

		friend ostream& operator << (ostream&, DtPartidaIndividual&);
};

#endif