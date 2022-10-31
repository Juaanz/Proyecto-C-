#include "Rol.h"

Rol::Rol(){}
Rol::Rol(TipoRol tipo,Asignatura* asignatura){
    this->asignatura = asignatura;
    this->tipo = tipo;

}
TipoRol Rol::getTipoRol(){
    return this->tipo;
}
Rol::~Rol(){}

string Rol::getCodigoAsignatura(){
    return this->asignatura->getCodigo();
}

Asignatura* Rol::getAsignatura(){
    return this->asignatura;
}

bool Rol::esAsignatura(string cod){
    return (cod == this->asignatura->getCodigo());
}

void Rol::eliminar(){
   //this->asignatura->destroy();
   delete(this->asignatura); // ??
}