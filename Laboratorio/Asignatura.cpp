#include "Asignatura.h"
using namespace std;
Asignatura::Asignatura(){}

Asignatura::Asignatura(string codigo,string nombre){
    this->codigo=codigo;
    this->nombre=nombre;
}

string Asignatura::getCodigo(){
    return this->codigo;
}

void Asignatura::setCodigo(string codigo){
    this->codigo;
}

string Asignatura::getNombre(){
    return this->nombre;
}

void Asignatura::setNombre(string nombre){
    this->nombre;
}

Asignatura::~Asignatura(){
        for(auto item:this->clases){
        this->clases.remove(item);
        //no se si es solo hacer delete o llamar al destructor, son los destroy()
        delete(item);
        item->~Clase();
    }
}


list<Clase*> Asignatura::getClases(){
    return this->clases;
}

void Asignatura::agregarClase(Clase *c){
    this->clases.push_back(c);
}

list<DtInfoClase*> Asignatura::getDtInfoClase(){
    DtInfoClase *dtIc;
    list<DtInfoClase*> res;
    for(auto itemC: this->clases){
         // pregunto por cada tipo rol ? o defino un metodo en cUi
            DtInfoClase * dtIc = itemC->getInfoClase();
            res.push_back(dtIc);
    }return res;
}

