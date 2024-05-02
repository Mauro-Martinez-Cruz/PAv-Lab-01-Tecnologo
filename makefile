todo: main.o Sistema.o Partida.o DtPartida.o PartidaIndividual.o DtPartidaIndividual.o PartidaMultijugador.o DtPartidaMultijugador.o Juego.o DtJuego.o Jugador.o DtJugador.o DtFechaHora.o
	g++ main.o Sistema.o Partida.o DtPartida.o PartidaIndividual.o DtPartidaIndividual.o PartidaMultijugador.o DtPartidaMultijugador.o Juego.o DtJuego.o Jugador.o DtJugador.o DtFechaHora.o -g -o main
main.o: main.cpp
	g++ -g -c main.cpp
Sistema.o: Model/Sistema.cpp
	g++ -g -c Model/Sistema.cpp
Partida.o:
	g++ -g -c Model/Partida.cpp
DtPartida.o:
	g++ -g -c DataType/DtPartida.cpp
PartidaIndividual.o:
	g++ -g -c Model/PartidaIndividual.cpp
DtPartidaIndividual.o:
	g++ -g -c DataType/DtPartidaIndividual.cpp
PartidaMultijugador.o:
	g++ -g -c Model/PartidaMultijugador.cpp
DtPartidaMultijugador.o:
	g++ -g -c DataType/DtPartidaMultijugador.cpp
Juego.o:
	g++ -g -c Model/Juego.cpp
DtJuego.o:
	g++ -g -c DataType/DtJuego.cpp
Jugador.o:
	g++ -g -c Model/Jugador.cpp
DtJugador.o:
	g++ -g -c DataType/DtJugador.cpp
DtFechaHora.o:
	g++ -g -c DataType/DtFechaHora.cpp
clean:
	rm -f main
	rm -f *.o
run:
	./main.o
