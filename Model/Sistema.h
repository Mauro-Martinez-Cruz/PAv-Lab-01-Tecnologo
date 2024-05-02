#ifndef SISTEMA_H
#define SISTEMA_H

#include <string>
#include <iostream>
#include "../DataType/DtFechaHora.h"
#include "../DataType/DtJuego.h"
#include "../DataType/DtJugador.h"
#include "../DataType/DtPartida.h"
#include "../DataType/DtPartidaIndividual.h"
#include "../DataType/DtPartidaMultijugador.h"
#include "TipoGenero.h"
#include "Juego.h"
#include "Jugador.h"
#include "Partida.h"
#include "PartidaIndividual.h"
#include "PartidaMultijugador.h"

#define MAX_VIDEOJUEGOS 10
#define MAX_JUGADORES 10

using namespace std;

class Sistema{
    private:
        Juego* juegos[MAX_VIDEOJUEGOS];
        int cantJuegos;
        Jugador* jugadores[MAX_JUGADORES];
        int cantJugadores;
    public:
        Sistema();

        int getCantJugadores();
        int getCantVJuegos();
        Jugador* darJugador(string nickname);
        Juego* darJuego(string juego);

        void iniciarPartida(string nickname, string videojuego, DtPartida* datos);
        DtJuego** obtenerVideoJuegos(int& cantVJuegos);
        DtPartida** obtenerPartidas(string nomJuego, int& cantPartidas);
        DtJugador** obtenerJugadores(int& cantJugadores);
        void agregarVideoJuego(string nombre, int genero);
        void agregarJugador(string nombre, int edad, string password);
        void existeJugador(string nombre, int ops);
        void existeVJuego(string nombre, int ops);

        ~Sistema();
};

#endif 
