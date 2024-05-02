#ifndef PARTIDA_H
#define PARTIDA_H

#include "../DataType/DtFechaHora.h"
#include "Jugador.h"
#include <iostream>
#include <string>

using namespace std;

class Partida{
	protected:
		DtFechaHora* fecha;
		int duracion;
		Jugador* player;
	public:
		Partida();
		Partida(DtFechaHora*, int, Jugador*);
		
		DtFechaHora* getFecha();
		string getNickname();
		void setNickname(string nickname);
		int getDuracion();
		void setDuracion(int duracion);
		Jugador* getJugador();
		
		virtual ~Partida();
		
		virtual int darTotalHorasParticipantes()=0;

		//friend ostream& operator << (ostream&, const Partida&);
};

#endif