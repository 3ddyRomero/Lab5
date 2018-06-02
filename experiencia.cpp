#include "experiencia.h"

experiencia::experiencia(){

}

experiencia::~experiencia(){

}

experiencia::experiencia(vector <plato> pPlato,int pGastado){
    this->cp=pPlato;
    this->gastado=pGastado;
}

vector <plato> experiencia::getCP(){
    return cp;
}

void experiencia::setCP(vector <plato> pCP){
    this->cp=pCP;
}

int experiencia::getGastado(){
    return gastado;
}

void experiencia::setGastado(int pGastado){
    this-> gastado = pGastado;
}

void experiencia::pushplato (plato plat){
    cp.push_back(plat);
}



