#ifndef DTTIPOGENERO_H
#define DTTIPOGENERO_H

#include <iostream>
#include <string>

using namespace std;

enum TipoGenero{ACCION, AVENTURA, DEPORTE, OTRO};

class DtTipoGenero{
	private:
		TipoGenero genero;
	public:
		DtTipoGenero();
		DtTipoGenero(TipoGenero);
		
		TipoGenero getGenero();
		
		~DtTipoGenero();
};

#endif