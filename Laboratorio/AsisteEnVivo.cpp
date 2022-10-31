//Facundo Aparicio
//Diego Poblete
//Maria Costa
//Juan Romero
//Pablo Díaz


#include "AsisteEnVivo.h"


AsisteEnVivo::AsisteEnVivo(){}
AsisteEnVivo::AsisteEnVivo(DtTimeStamp inicio, DtTimeStamp fin, Estudiante* e){
    this->inicio = inicio;
    this->fin = fin;
    this->e = e;
}

DtTimeStamp AsisteEnVivo::getInicio(){
    return this->inicio;
}
DtTimeStamp AsisteEnVivo::getFin(){
    return this->fin;
}
Estudiante* AsisteEnVivo::getEstudiante(){
    return this->e;
}

AsisteEnVivo:: ~AsisteEnVivo(){}