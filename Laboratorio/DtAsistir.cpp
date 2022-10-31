#include "DtAsistir.h"

DtAsistir::DtAsistir(){}
DtAsistir::DtAsistir(string codigo, int id){
    this->codigo = codigo;
    this->id = id;
}
string DtAsistir::getCodigo(){
    return this->codigo;
}
int DtAsistir::getId(){
    return this->id;
}
DtAsistir::~DtAsistir(){}