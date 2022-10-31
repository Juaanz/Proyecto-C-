#include "ManejadorPerfil.h"
#include "Perfil.h"
#include "Estudiante.h"
#include "Docente.h"

ManejadorPerfil::ManejadorPerfil(){}

ManejadorPerfil* ManejadorPerfil::instancia = NULL;

ManejadorPerfil* ManejadorPerfil::getInstancia(){
    if(instancia == NULL)
        instancia = new ManejadorPerfil();
    return instancia;
}

list<Perfil*> ManejadorPerfil::getPerfiles(){
    list<Perfil*> aux;
    for (map<string, Perfil*>::iterator i = this->colPerfiles.begin(); i != this->colPerfiles.end(); i++)
        aux.push_back(i->second);
    return aux;
}

Perfil* ManejadorPerfil::getPerfil(string id){
    map<string, Perfil*>::iterator i = this->colPerfiles.find(id);
    return i->second;
}

void ManejadorPerfil::removerPerfil(Perfil* p){
    map<string, Perfil*>::iterator i = this->colPerfiles.find(p->getNombre());
    this->colPerfiles.erase(i);
}

void ManejadorPerfil::agregarPerfil(Perfil* p){
    if (Estudiante* e = dynamic_cast<Estudiante*>(p))
        this->colPerfiles.insert(pair<string, Perfil*> (e->getEmail(),e)); 
    else if (Docente * d = dynamic_cast<Docente*>(p))
        this->colPerfiles.insert(pair<string, Perfil*> (d->getEmail(),d));
}

ManejadorPerfil::~ManejadorPerfil(){}
