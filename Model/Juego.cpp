#include "../DataType/DtPartidaIndividual.h"
#include "../DataType/DtPartidaMultijugador.h"
#include "PartidaIndividual.h"
#include "PartidaMultijugador.h"
#include "TipoGenero.h"
#include "Juego.h"
#include <iostream>
#include <string>

using namespace std;

Juego::Juego(){}
Juego::Juego(string nombre, TipoGenero genero){ 
    this->nombre=nombre;
    this->genero=genero;
    this->tope=0;
}

int Juego::getTope(){
    return this->tope;
}
string Juego::getNombre(){
    return this->nombre;
}
TipoGenero Juego::getGenero(){
    return this->genero;
}
DtPartida** Juego::getInfoPartidas(){
    DtPartida** infoPartidas = new DtPartida*[MAX_PARTIDAS];
	PartidaIndividual* partidaI;
	PartidaMultijugador* partidaM;
	for(int i=0; i<this->tope; i++){
		partidaI=dynamic_cast<PartidaIndividual*>(this->partidas[i]);
		if(partidaI!=NULL)
            infoPartidas[i]= new DtPartidaIndividual(partidaI->getFecha(), partidaI->getDuracion(), partidaI->getJugador(), partidaI->getContiParAnt());
		else{
			partidaM=dynamic_cast<PartidaMultijugador*>(this->partidas[i]);
			if(partidaM!=NULL)
                infoPartidas[i]= new DtPartidaMultijugador(partidaM->getFecha(), partidaM->getDuracion(), partidaM->getJugador(), partidaM->getCantJugadores(), partidaM->getTransEnVivo());
	    }
    }
    return infoPartidas;
}
void Juego::setNombre(string nombre){
    this->nombre=nombre;
}
void Juego::setGenero(TipoGenero genero){
    this->genero=genero;
}
void Juego::agregarPartidas(string nickname, DtPartida* datos){
    if(this->tope >= MAX_PARTIDAS){
        throw invalid_argument("No hay espacio para guardar mas partidas");
    }
    DtPartidaIndividual* dtPartidaI=dynamic_cast<DtPartidaIndividual*>(datos);
    if(dtPartidaI!=NULL){
        Partida* partidaI = new PartidaIndividual(dtPartidaI->getFecha(), dtPartidaI->getDuracion(), dtPartidaI->getJugador(), dtPartidaI->getContiParAnt());
        this->partidas[this->tope]=partidaI;
        this->tope++;
    }else{
        DtPartidaMultijugador* dtPartidaM=dynamic_cast<DtPartidaMultijugador*>(datos);
        if(dtPartidaM!=NULL){
            Partida* partidaM = new PartidaMultijugador(dtPartidaM->getTransEnVivo(), dtPartidaM->getFecha(), dtPartidaM->getDuracion(), dtPartidaM->getJugador(), dtPartidaM->getCantJugadores());
            this->partidas[this->tope]=partidaM;
            this->tope++;
        }
    }
}

Juego::~Juego(){}

int Juego::darTotalHorasJuego(){
    int TotalHorasJuego=0;
    for(int i=0; i<this->tope; i++){
        TotalHorasJuego+=this->partidas[i]->darTotalHorasParticipantes();
    }
    return TotalHorasJuego;
}