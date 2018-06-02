#include "experiencia.h"

experiencia::~experiencia(){

}

experiencia::experiencia(string pCliente, string pPlato, int pGastado){
    this->cliente=pCliente;
    this->plato=pPlato;
    this->gastado=pGastado;
}


string experiencia::getCliente(){
    return cliente;
}

void experiencia::setCliente(string pCliente){
    this->cliente = pCliente;
}

string experiencia::getPlato(){
    return plato;
}

void experiencia::setPlato(string pPlato){
    this->plato = pPlato;
}

int experiencia::getGastado(){
    return gastado;
}

void experiencia::setGastado(int pGastado){
    this-> gastado = pGastado;
}



