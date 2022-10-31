#include "Participacion.h"

Participacion::Participacion(){}
Participacion::Participacion(int id, DtTimeStamp fecha, string mensaje){
    this -> id = id;
    this -> fecha = fecha;
    this -> mensaje = mensaje;
    
}
Participacion::~Participacion(){}

void Participacion::setId(int id){
    this -> id = id;
}
int Participacion::getId(){
    return this -> id;
}

void Participacion::agregarPart(Participacion* p){
    this->part=p;
}

void Participacion::setDtTimeStamp(DtTimeStamp fecha){
    this -> fecha = fecha;
}
DtTimeStamp Participacion::getDtTimeStamp(){
    return this -> fecha;
}

void Participacion::setMensaje(string mensaje){
    this -> mensaje = mensaje;
}
string Participacion::getMensaje(){
    return this -> mensaje;
}

Participacion* Participacion::getParticipacion(){
    return this->part;
}
