#ifndef DTFECHAHORA_H
#define DTFECHAHORA_H

#include <iostream>
#include <string>

using namespace std;

class DtFechaHora{
	private:
		int dia, mes, anio, hora, min;
	public:
		DtFechaHora();
		DtFechaHora(int, int, int, int, int);

		int getDia();
		int getMes();
		int getAnio();
		int getMin();
		int getHora();
		
		~DtFechaHora();

		friend ostream& operator << (ostream&, DtFechaHora&);
};

#endif
