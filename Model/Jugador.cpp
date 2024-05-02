#include "Jugador.h"
#include <iostream>
#include <string>

using namespace std;

Jugador::Jugador(){}
Jugador::Jugador(string nickname, int edad, string password){
	this->nickname=nickname;
	this->edad=edad;
	this->password=password;
}

string Jugador::getNickname(){
	return this->nickname;
}
int Jugador::getEdad(){
	return this->edad;
}
string Jugador::getPassword(){
	return this->password;
}
void Jugador::setNickname(string nickname){
	this->nickname=nickname;
}
void Jugador::setEdad(int edad){
	this->edad=edad;
}
void Jugador::setPassword(string password){
	this->password=password;
}	

Jugador::~Jugador(){}

ostream& operator << (ostream& salida, Jugador& jugador){
	cout << jugador.nickname << ", " << jugador.edad << endl;
	return salida;
}
		
