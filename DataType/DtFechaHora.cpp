#include "DtFechaHora.h"
#include <iostream>
#include <string>

using namespace std;

DtFechaHora::DtFechaHora(){}
DtFechaHora::DtFechaHora(int dia, int mes, int anio, int hora, int min){
	this->dia=dia;
	this->mes=mes;
	this->anio=anio;
	this->hora=hora;
	this->min=min;
}

int DtFechaHora::getDia(){
	return this->dia;
}
int DtFechaHora::getMes(){
	return this->mes;
}
int DtFechaHora::getAnio(){
	return this->anio;
}
int DtFechaHora::getMin(){
	return this->min;
}
int DtFechaHora::getHora(){
	return this->hora;
}

DtFechaHora::~DtFechaHora(){}

ostream& operator << (ostream& salida, DtFechaHora& fechahora){
	cout << "Fecha/Hora: " << fechahora.dia << "/" << fechahora.mes << "/" << fechahora.anio << " - " << fechahora.hora << ":" << fechahora.min;
	return salida;
}