#include "bodega.h"

#include <vector>
bodega::bodega(){
    
    
}

bodega::bodega( vector <ingrediente*> pNTC ,int pCantidad,int pCompras,int pN){
    this->ntc=pNTC;
    this->cantidad = pCantidad;
    this->compras = pCompras;
    this->n = pN;
}

vector <ingrediente*> bodega::getNTC(){
    return ntc;
}

void bodega::setNTC(vector<ingrediente*> pNTC){
    this->ntc=pNTC;
}

int bodega::getCantidad(){
    return cantidad;
}

void bodega::setCantidad(int pCantidad){
    this->cantidad=pCantidad;
}

int bodega::getCompras(){
    return compras;
}

void bodega::setCompras(int pCompras){
    this->compras=pCompras;
}

int bodega::getN(){
    return n;
}

void bodega::setN(int pN){
    this->n=pN;
}

