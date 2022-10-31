#include "CEliminarAsignatura.h"

list<string> CEliminarAsignatura::listarAsignaturas(){
    ManejadorAsignatura* mE = ManejadorAsignatura::getInstancia();
    list<Asignatura*> asignaturas = mE->getAsignaturas();
    list<string> codigos;    
    for(auto itemA:asignaturas){        
        codigos.push_back(itemA->getCodigo());       
    }
    return codigos;
}

void CEliminarAsignatura::selectAsignatura(string codigo){
    this->codigo = codigo;
}

void CEliminarAsignatura::eliminarAsignatura(){
    ManejadorAsignatura* mA = ManejadorAsignatura::getInstancia();
    ManejadorPerfil* mP = ManejadorPerfil::getInstancia();
    list<Perfil*> perfiles = mP->getPerfiles();
    Perfil* p; // ?? 
    for (auto itemP:perfiles){
        if(Estudiante * e = dynamic_cast<Estudiante*>(itemP)){
            itemP->eliminarAsignatura(this->codigo);
        }else{
            itemP->eliminarAsignatura(this->codigo);

        }
        /*
        llamar eliminarAsignatura(this->codigo) para ese perfil p
        eliminarAsignatura se declara en perfil como abstracta y se
        implementa en estudiante y docente.
        deberia quitar la asignatura de codigo = this->codigo 
        de la lista de asignaturas del perfil p.
        */
    }
    Asignatura* asignatura = mA->getAsignatura(this->codigo);
    mA->quitarAsignatura(asignatura);
    delete(asignatura);
}

CEliminarAsignatura::~CEliminarAsignatura(){}