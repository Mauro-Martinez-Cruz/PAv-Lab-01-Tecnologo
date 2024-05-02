#ifndef JUGADOR_H
#define JUGADOR_H

#include <iostream>
#include <string>

using namespace std;

class Jugador{
	private:
		string nickname, password;
		int edad;
	public:
		Jugador();
		Jugador(string, int, string);
		
		string getNickname();
		int getEdad();
		string getPassword();
		void setNickname(string nickname);
		void setEdad(int edad);
		void setPassword(string password);

		~Jugador();

		friend ostream& operator << (ostream&, Jugador&);
};

#endif