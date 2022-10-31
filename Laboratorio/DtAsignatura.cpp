#include "DtAsignatura.h"

DtAsignatura::DtAsignatura(){}
DtAsignatura::DtAsignatura(string codigo,string nombre, DtInstanciaClase* dtInstanciaClase){
    this->codigo = codigo;
    this->nombre = nombre;
    this->dtInstanciaClase  = dtInstanciaClase;
}

string DtAsignatura::getCodigo(){
    return this->codigo;
}
string DtAsignatura::getNombre(){
    return this->nombre;
}

DtInstanciaClase* DtAsignatura::getDtInstanciaClase(){
    return this->dtInstanciaClase;
}

list<Clase*> DtAsignatura::getClases(){
    return this->clases;
}

DtAsignatura::~DtAsignatura(){}