#ifndef DTJUGADOR_H
#define DTJUGADOR_H

#include <iostream>
#include <string>

using namespace std;

class DtJugador{
	private:
		string nickname;
		int edad;
	public:
		DtJugador();
		DtJugador(string, int);

		string getNickname();
		int getEdad();

		~DtJugador();
		
		friend ostream& operator << (ostream&, DtJugador&);
};

#endif