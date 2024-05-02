#ifndef DTJUEGO
#define DTJUEGO

#include "../Model/TipoGenero.h"
#include <iostream>
#include <string>

using namespace std;

class DtJuego{
	private:
		string nombre;
		TipoGenero genero;
		int totalHorasDeJuego;
	public:
		DtJuego();
		DtJuego(string, TipoGenero, int);
		
		string getNombre();
		TipoGenero getGenero();
		int getTotalHorasDeJuego();

		~DtJuego();

		friend ostream& operator << (ostream&, DtJuego&);
};

#endif