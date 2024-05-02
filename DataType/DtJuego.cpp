#include "DtJuego.h"
#include <iostream>
#include <string>

using namespace std;

DtJuego::DtJuego(){}
DtJuego::DtJuego(string nombre, TipoGenero genero, int totalHorasDeJuego){
	this->nombre=nombre;
	this->genero=genero;
	this->totalHorasDeJuego=totalHorasDeJuego;
}

string DtJuego::getNombre(){
	return this->nombre;
}
TipoGenero DtJuego::getGenero(){
	return this->genero;
}
int DtJuego::getTotalHorasDeJuego(){
	return this->totalHorasDeJuego;
}

DtJuego::~DtJuego(){}

ostream& operator << (ostream& salida, DtJuego& juego){
	string tipGen[4]{"ACCION","AVENTURA","DEPORTE","OTRO"};
	cout << juego.nombre << ", " << tipGen[juego.genero] << ", " << juego.totalHorasDeJuego << endl;
	return salida;
}

