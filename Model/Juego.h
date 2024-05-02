#ifndef JUEGO_H
#define JUEGO_H
#define MAX_PARTIDAS 10

#include "TipoGenero.h"
#include "Partida.h"
#include <iostream>
#include <string>

using namespace std;

class Juego{
	private:
		string nombre;
		TipoGenero genero;
		Partida* partidas[MAX_PARTIDAS];
		int tope;
	public:
		Juego();
		Juego(string, TipoGenero);

		int getTope();
		string getNombre();
		TipoGenero getGenero();
		DtPartida** getInfoPartidas();
		void setNombre(string nombre);
		void setGenero(TipoGenero genero);
		void agregarPartidas(string nickname, DtPartida* datos);

		~Juego();

		int darTotalHorasJuego();
};

#endif