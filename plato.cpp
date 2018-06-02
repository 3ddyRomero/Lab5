#include "plato.h"

plato::plato(){
	
}

plato::~plato(){

}

plato::plato(string pCliente, string pPlato){
    this->cliente=pCliente;
    this->plat=pPlato;
}

string plato::getCliente(){
    return cliente;
}

void plato::setCliente(string pCliente){
    this->cliente = pCliente;
}

string plato::getPlato(){
    return plat;
}

void plato::setPlato(string pPlato){
    this->plat = pPlato;
}


