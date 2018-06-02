#include "ingrediente.h"

#include <vector>
ingrediente::ingrediente(){
     
}

ingrediente::ingrediente(string pName, string pTipo){
    this->name=pName;
    this->tipo=pTipo;    
}

string ingrediente::getName(){
    return name;
}

void ingrediente::setName(string pName){
    this->name=pName;
}

string ingrediente::getTipo(){
    return tipo;
}

void ingrediente::setTipo(string pTipo){
    this->tipo=pTipo;
}

ingrediente::~ingrediente(){
    
}