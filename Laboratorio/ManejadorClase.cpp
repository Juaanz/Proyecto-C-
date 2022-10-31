#include "ManejadorClase.h"
#include "Clase.h"

ManejadorClase::ManejadorClase(){}

ManejadorClase* ManejadorClase::instancia = NULL;

ManejadorClase* ManejadorClase::getInstancia(){
    if(instancia == NULL)
        instancia = new ManejadorClase();
    return instancia;
}

list<Clase*> ManejadorClase::getClases(){
    list<Clase*> aux;
    for (map<int, Clase*>::iterator i = this->colClases.begin(); i != this->colClases.end(); i++)
        aux.push_back(i->second);
    return aux;
}

Clase* ManejadorClase::getClase(int id){// cambie nombre por id
    map<int, Clase*>::iterator i = this->colClases.find(id);
    return i->second;
}

void ManejadorClase::removerClase(Clase* p){
    map<int, Clase*>::iterator i = this->colClases.find(p->getId());
    this->colClases.erase(i);
}

void ManejadorClase::agregarClase(Clase* p){
    this->colClases.insert(pair<int, Clase*> (p->getId(),p));
}

int ManejadorClase::autoEnumParticipacion(){
    return this->enumParticipacion++;
}

int ManejadorClase::autoEnumClase(){
    return this->enumClase++;
}

ManejadorClase::~ManejadorClase(){}