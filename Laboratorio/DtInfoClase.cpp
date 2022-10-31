#include "DtInfoClase.h"
#include "Docente.h"
#include <iostream>
using namespace std;

DtInfoClase::DtInfoClase(){}

DtInfoClase::DtInfoClase(int id, string nombre,string profe){
     this->id = id;
     this->nombre=nombre;
     this->profe=profe;
    

}


int DtInfoClase::getId(){
     return this->id;
}

string DtInfoClase::getNombre(){
     return this->nombre;
}



DtInfoClase::~DtInfoClase(){}
