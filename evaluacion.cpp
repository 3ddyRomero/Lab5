#include "evaluacion.h"

evaluacion::evaluacion(){

}

evaluacion::evaluacion(int pPuntuacion){
        this->puntuacion = pPuntuacion;
}

int evaluacion::getEvaluacion(){
    return puntuacion;
}

void evaluacion::setEvaluacion(int pPuntuacion){
        this->puntuacion=pPuntuacion;
}

evaluacion::~evaluacion(){

}
