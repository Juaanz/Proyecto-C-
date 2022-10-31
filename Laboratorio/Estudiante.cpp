#include "Estudiante.h"


Estudiante::Estudiante(){}

Estudiante::Estudiante(string nombre,string imagenUrl, string email, string password, string documento):Perfil(nombre, imagenUrl, email, password){
    this->documento=documento;
}

string Estudiante::getDocumento(){
    return this->documento;
}

bool  Estudiante::noInscripto(string codigo){
    list<Asignatura*>::iterator it=this->asignaturas.begin();
    bool noEncontre=true;
    while(it!=this->asignaturas.end() && noEncontre){
        if((*it)->getCodigo()==codigo){
            noEncontre=false;
        }
        it++;
    }
    return noEncontre;
}
void Estudiante::inscribirAsignatura(Asignatura* a){
    this->asignaturas.push_back(a);
}

void Estudiante::setDocumento(int){
    this->documento=documento;
}

Estudiante::~Estudiante(){}
list<Asignatura*> Estudiante::getAsignaturas(){
    return this->asignaturas;
}

/*
Recorro la lista de asignaturas del estudiante
y cuando encuentro la asignatura de codigo=cod
quito esa asignatura de la lista de ese estudiante
*/
void Estudiante::eliminarAsignatura(string cod){
    for(auto item:this->asignaturas){
        if (item->getCodigo()==cod)
            this->asignaturas.remove(item);
    }
}