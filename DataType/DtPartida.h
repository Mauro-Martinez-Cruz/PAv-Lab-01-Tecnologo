#ifndef DTPARTIDA_H
#define DTPARTIDA_H

#include "DtFechaHora.h"
#include "../Model/Jugador.h"
#include <iostream>
#include <string>

using namespace std;

class DtPartida{
	protected:
		DtFechaHora* fecha;
		int duracion;
		Jugador* player;
	public:
		DtPartida();
		DtPartida(DtFechaHora*, int, Jugador*);
		
		int getDuracion();
		DtFechaHora* getFecha();
		string getNickname();
		Jugador* getJugador();
		
		virtual ~DtPartida();

		friend ostream& operator << (ostream&, const DtPartida&);
};

#endif