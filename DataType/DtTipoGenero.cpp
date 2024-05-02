#include "DtTipoGenero.h"
#include <iostream>
#include <string>

using namespace std;

DtTipoGenero::DtTipoGenero(){}
DtTipoGenero::DtTipoGenero(TipoGenero genero){
	this->genero=genero;
}

TipoGenero DtTipoGenero::getGenero(){
	return this->genero;
}

DtTipoGenero::~DtTipoGenero(){}
