#include "experiencia.h"

experiencia::~experiencia(){

}

experiencia::experiencia(int pGastado){
    this->gastado=pGastado;
}

int experiencia::getGastado(){
    return gastado;
}

void experiencia::setGastado(int pGastado){
    this-> gastado = pGastado;
}



