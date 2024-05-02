#ifndef PARTIDAMULTIJUGADOR_H
#define PARTIDAMULTIJUGADOR_H

#include "Partida.h"
#include <iostream>
#include <string>

using namespace std;

class PartidaMultijugador : public Partida{
	private:
		int cantJugadores;
		bool transEnVivo;
	public:
		PartidaMultijugador();
		PartidaMultijugador(bool, DtFechaHora*, int, Jugador*, int);

		int getCantJugadores();
		bool getContiParAnt();
		void setContiParAnt(bool transEnVivo);
		bool getTransEnVivo();
		
		~PartidaMultijugador();

		int darTotalHorasParticipantes();

		//friend ostream& operator << (ostream&, PartidaMultijugador&);
};

#endif