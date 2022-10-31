#include "DtIniciarClase.h"

DtIniciarClase::DtIniciarClase(){}
DtIniciarClase::DtIniciarClase(string codigo,string nombre, DtTimeStamp fechahora){
this->codigo = codigo;
this->nombre = nombre;
this->fechahora = fechahora;
}

string DtIniciarClase::getCodigo(){
    return this->codigo;
}
string DtIniciarClase::getNombre(){
    return this->nombre;
}
DtTimeStamp DtIniciarClase::getFechaHora(){
    return this->fechahora;
}
DtIniciarClase::~DtIniciarClase(){}