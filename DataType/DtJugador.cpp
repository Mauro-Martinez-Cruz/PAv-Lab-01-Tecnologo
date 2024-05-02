#include "DtJugador.h"
#include <iostream>
#include <string>

using namespace std;

DtJugador::DtJugador(){}
DtJugador::DtJugador(string nickname, int edad){
	this->nickname=nickname;
	this->edad=edad;
}

string DtJugador::getNickname(){
	return this->nickname;
}
int DtJugador::getEdad(){
	return this->edad;
}

DtJugador::~DtJugador(){}

ostream& operator << (ostream& salida, DtJugador& jugador){
	cout << jugador.nickname << ", " << jugador.edad;
	return salida;
}