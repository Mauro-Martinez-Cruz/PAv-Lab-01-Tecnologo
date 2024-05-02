#include "Model/Sistema.h"
#include <iostream>
#include <string>

Sistema* sistema;

using namespace std;

void menu(){
    system("clear");
    cout << "❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖" << endl;
    cout << "████████╗██╗░░██╗███████╗  ░█████╗░██████╗░░█████╗░░█████╗░██████╗░███████╗" << endl;
    cout << "╚══██╔══╝██║░░██║██╔════╝  ██╔══██╗██╔══██╗██╔══██╗██╔══██╗██╔══██╗██╔════╝" << endl;
    cout << "░░░██║░░░███████║█████╗░░  ███████║██████╔╝██║░░╚═╝███████║██║░░██║█████╗░░" << endl;
    cout << "░░░██║░░░██╔══██║██╔══╝░░  ██╔══██║██╔══██╗██║░░██╗██╔══██║██║░░██║██╔══╝░░" << endl;
    cout << "░░░██║░░░██║░░██║███████╗  ██║░░██║██║░░██║╚█████╔╝██║░░██║██████╔╝███████╗" << endl;
    cout << "░░░╚═╝░░░╚═╝░░╚═╝╚══════╝  ╚═╝░░╚═╝╚═╝░░╚═╝░╚════╝░╚═╝░░╚═╝╚═════╝░╚══════╝" << endl;
    cout << "1. Agregar Jugador" << endl;
    cout << "2. Agregar VideoJuego" << endl;
    cout << "3. Iniciar Partida" << endl;
    cout << "4. Obtener Jugadores" << endl;
    cout << "5. Obtener VideoJuegos" << endl;
    cout << "6. Obtener Partidas" << endl;
    cout << "7. Salir" << endl;
    cout << "❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖" << endl;
	cout << "OPCION: ";
}

void menuAgregarJugador(){
    system("clear");
    cout << "❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖" << endl;
    cout << "▄▀█ █▀▀ █▀█ █▀▀ █▀▀ ▄▀█ █▀█   ░░█ █░█ █▀▀ ▄▀█ █▀▄ █▀█ █▀█" << endl;
    cout << "█▀█ █▄█ █▀▄ ██▄ █▄█ █▀█ █▀▄   █▄█ █▄█ █▄█ █▀█ █▄▀ █▄█ █▀▄" << endl;
    cout << "❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖" << endl;
    string nickname, password;
    int edad;
    cout << "NICKNAME: ";
    getline(cin, nickname);
	try{
		sistema->existeJugador(nickname, 1);
    	cout << "EDAD: ";
    	cin >> edad;
		cout << "PASSWORD: ";
		cin.ignore();
    	getline(cin, password);
		if(password.length()<8)
			throw invalid_argument("LA PASSWORD DEBE SER DE 8 DIGITOS O MAS");
		sistema->agregarJugador(nickname, edad, password);
    }catch(exception& e){
		cerr << "exception caught: " << e.what() << '\n';
	}
    system("sleep 2");
}

void menuAgregarVideoJuego(){
    system("clear");
    cout << "❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖" << endl;
    cout << "▄▀█ █▀▀ █▀█ █▀▀ █▀▀ ▄▀█ █▀█   █░█ █ █▀▄ █▀▀ █▀█ ░░█ █░█ █▀▀ █▀▀ █▀█" << endl;
    cout << "█▀█ █▄█ █▀▄ ██▄ █▄█ █▀█ █▀▄   ▀▄▀ █ █▄▀ ██▄ █▄█ █▄█ █▄█ ██▄ █▄█ █▄█" << endl;
    cout << "❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖" << endl;
    string nombre;
    int genero;
    cout << "NOMBRE: ";
    getline(cin, nombre);
	try{
   		sistema->existeVJuego(nombre,1);
		cout << "1.ACCION  2.AVENTURA  3.DEPORTE  4.OTRO" << endl;
    	cout << "GENERO: ";
    	cin >> genero;
		if(genero!=1 and genero!=2 and genero!=3 and genero!=4)
			throw invalid_argument("GENERO NO ENCONTRADO");
    	sistema->agregarVideoJuego(nombre, genero);
		cin.ignore();
	}catch(exception& e){
		cerr << "exception caught: " << e.what() << '\n';
	}
    system("sleep 2");
}

void menuObtenerJugadores(){
    system("clear");
    cout << "❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖" << endl;
    cout << "█▀█ █▄▄ ▀█▀ █▀▀ █▄░█ █▀▀ █▀█   ░░█ █░█ █▀▀ ▄▀█ █▀▄ █▀█ █▀█" << endl;
    cout << "█▄█ █▄█ ░█░ ██▄ █░▀█ ██▄ █▀▄   █▄█ █▄█ █▄█ █▀█ █▄▀ █▄█ █▀▄" << endl;
    cout << "❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖" << endl;
    int cantJugadores;
    DtJugador** jugadores=sistema->obtenerJugadores(cantJugadores);
    if(cantJugadores==0)
        cout << "\nNO HAY JUGADORES REGISTRADOS EN EL SISTEMA..." << endl;
    else{
        for(int i=0;i<cantJugadores;i++){
            cout << *jugadores[i] << endl;
        	cout << endl;
		}
    }
	cout << "(ENTER para volver al Menu)";
    cin.ignore();
}    

void menuObtenerVideoJuegos(){
	system("clear");
	cout << "❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖" << endl;
	cout << "█▀█ █▄▄ ▀█▀ █▀▀ █▄░█ █▀▀ █▀█   █░█ █ █▀▄ █▀▀ █▀█ ░░█ █░█ █▀▀ █▀▀ █▀█" << endl;
    cout << "█▄█ █▄█ ░█░ ██▄ █░▀█ ██▄ █▀▄   ▀▄▀ █ █▄▀ ██▄ █▄█ █▄█ █▄█ ██▄ █▄█ █▄█" << endl;
    cout << "❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖" << endl;
	int cantVJuegos=sistema->getCantVJuegos();
    if(cantVJuegos==0)
        cout << "\nNO HAY JUEGOS REGISTRADOS EN EL SISTEMA..." << endl;
    else{
		DtJuego** juegos=sistema->obtenerVideoJuegos(cantVJuegos);
        for(int i=0;i<cantVJuegos;i++)
			cout << *juegos[i] << endl;
    }
    cout << "(ENTER para volver al Menu)";
    cin.ignore();
} 

void menuIniciarPartida(){
    system("clear");
    cout << "❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖" << endl;
	cout << "█ █▄░█ █ █▀▀ █ ▄▀█ █▀█   █▀█ ▄▀█ █▀█ ▀█▀ █ █▀▄ ▄▀█" << endl;
    cout << "█ █░▀█ █ █▄▄ █ █▀█ █▀▄   █▀▀ █▀█ █▀▄ ░█░ █ █▄▀ █▀█" << endl;
    cout << "❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖" << endl;
    DtPartida* partida;
	Jugador* player;
    int dia, mes, anio, hora, min, duracion, select, cantJugadores, VoF;
    bool partAnt, transmision, existe;
    string nickname, videojuego;
    try{
        cout << "1.Individual" << endl;
        cout << "2.Multijugador" << endl;
		cout << endl;
		cout << "OPCION: ";
        cin >> select;
		if(select!=1 and select!=2){
			cin.ignore();
			throw invalid_argument("OPCION NO ENCONTRADA");
		}
		cout << "NICKNAME: ";
		cin.ignore();
    	getline(cin, nickname);
		sistema->existeJugador(nickname, 2);
		player=sistema->darJugador(nickname);
		cout << "VIDEOJUEGO: ";
    	getline(cin, videojuego);
		sistema->existeVJuego(videojuego, 2);
		cout << "FECHA DE CREACION" << endl;
		cout << "DIA: ";
		cin >> dia;
		cout << "MES: ";
		cin >> mes;
		cout << "ANIO: ";
		cin >> anio;
		cout << "HORA: ";
		cin >> hora;
		cout << "MINUTO: ";
		cin >> min;
		if(dia<1 or dia>31 or mes<1 or mes>12 or anio<1900 or hora<0 or hora>23 or min<0 or min>59){
			cin.ignore();
			throw invalid_argument("Fecha/Hora no es valida\n");
		}
		DtFechaHora* fechaHora = new DtFechaHora(dia,mes,anio,hora,min);
		cout << "DURACION: ";
		cin >> duracion;
		if(select==1){
			cout << "ES UNA PARTIDA CONTINUADA? (SI(1)/NO(2)): ";
			cin >> VoF;
			if(VoF==1)
                partAnt=true;
            else if(VoF==2)
                partAnt=false;
			else{
				cin.ignore();
				throw invalid_argument("OPCION NO ENCONTRADA");
			}
			partida=new DtPartidaIndividual(fechaHora, duracion, player, partAnt);
			sistema->iniciarPartida(nickname, videojuego, partida);
		}else if(select==2){
			cout << "SE TRANSMITE EN VIVO? (SI(1)/NO(2)): ";
			cin >> VoF;
			if(VoF==1)
                transmision=true;
            else if(VoF==2)
                transmision=false;
			else{
				cin.ignore();
				throw invalid_argument("OPCION NO ENCONTRADA");
			}
			cout << "CUANTOS VAN A JUGAR?: ";
			cin >> cantJugadores;
			if(cantJugadores<=1){
				cin.ignore();
				throw invalid_argument("EL MINIMO DE JUGADORES ES 2");
			}
			partida=new DtPartidaMultijugador(fechaHora, duracion, player, cantJugadores, transmision);
			sistema->iniciarPartida(nickname, videojuego, partida);
		}
    }catch(exception& e){
		cerr << "exception caught: " << e.what() << '\n';
	}
    system("sleep 2");
}

void menuObtenerPartidas(){
	system("clear");
	cout << "❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖" << endl;
	cout << "█▀█ █▄▄ ▀█▀ █▀▀ █▄░█ █▀▀ █▀█   █▀█ ▄▀█ █▀█ ▀█▀ █ █▀▄ ▄▀█" << endl;
    cout << "█▄█ █▄█ ░█░ ██▄ █░▀█ ██▄ █▀▄   █▀▀ █▀█ █▀▄ ░█░ █ █▄▀ █▀█" << endl;
    cout << "❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖❖" << endl;
	try{
		string juego;
		cout << "NOMBRE DEL JUEGO: ";
    	getline(cin, juego);
		sistema->existeVJuego(juego, 2);
		Juego* game=sistema->darJuego(juego);
		DtPartida** infoPartidas=game->getInfoPartidas();
		int cantPartidas=game->getTope();
		DtPartidaIndividual * partidaI;
		DtPartidaMultijugador * partidaM;
		cout << endl;
		for(int i=0; i<cantPartidas; i++){
			partidaI=dynamic_cast<DtPartidaIndividual*>(infoPartidas[i]);
			if(partidaI!=NULL)
      	      cout << *partidaI << endl;
			else{
				partidaM=dynamic_cast<DtPartidaMultijugador*>(infoPartidas[i]);
				if(partidaM!=NULL)
        			cout << *partidaM << endl;
			}
		}
		cout << endl;
		cout << "HAY " << cantPartidas << " PARTIDA/AS" << endl;
		cout << endl;
	}catch(exception& e){
		cerr << "exception caught: " << e.what() << '\n';
	}
	cout << "(ENTER para volver al Menu)";
    cin.ignore();
}

int main(){
	sistema = new Sistema;
	string str;
	int opc;
	bool exit=false;
	do{
		menu();
		getline(cin, str);
		opc=atoi(str.c_str());
		switch(opc){
			case 1: menuAgregarJugador(); break;
			case 2: menuAgregarVideoJuego(); break;
			case 3: menuIniciarPartida(); break;
			case 4: menuObtenerJugadores(); break;
			case 5: menuObtenerVideoJuegos(); break;
			case 6: menuObtenerPartidas(); break;
			case 7: 
				exit=true;
				cout << "Gracias por usar THE ARCADE" << endl;
				system("sleep 2");
				system("clear");
			break;
			default:
				cout << "\nOPCION INCORRECTA";
				system("sleep 1");
			break;
		};
	}while(!exit);
	return 0;
}