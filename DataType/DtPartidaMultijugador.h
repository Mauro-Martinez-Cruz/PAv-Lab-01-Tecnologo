#ifndef DTPARTIDAMULTIJUGADOR_H
#define DTPARTIDAMULTIJUGADOR_H

#include "DtFechaHora.h"
#include "DtPartida.h"
#include <iostream>
#include <string>

using namespace std;

class DtPartidaMultijugador : public DtPartida{
	private:
		int cantJugadores;
		bool transEnVivo;
	public:
		DtPartidaMultijugador();
		DtPartidaMultijugador(DtFechaHora*, int, Jugador*, int, bool);
		
		int getCantJugadores();
		bool getTransEnVivo();

		~DtPartidaMultijugador();

		friend ostream& operator << (ostream&, DtPartidaMultijugador&);
};

#endif