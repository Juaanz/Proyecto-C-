#include "CAsignacionDocente.h"

list<string> CAsignacionDocente::listarAsignaturas(){
    ManejadorAsignatura* mU = ManejadorAsignatura::getInstancia();
    list<Asignatura*> asignaturas = mU->getAsignaturas();// hay que definir getAsignaturas
    list<string> codigos;    
    for(auto itemA:asignaturas){        
        codigos.push_back(itemA->getCodigo());       
    }
    return codigos;
}

list<string> CAsignacionDocente::docenteSinAsignatura(string codigo){
    ManejadorPerfil* mP = ManejadorPerfil::getInstancia();
    list<Perfil*> perfiles =  mP->getPerfiles();
    list<string> emails;
    bool sinAsig;
    for(auto itemP: perfiles){
        if(Docente * d = dynamic_cast<Docente*>(itemP)){
            if(d->noDictaAsignatura(codigo))
                emails.push_back(itemP->getEmail());
        }
    }
    return emails;
}

void CAsignacionDocente::selectDocente(string email, TipoRol tipoRol){
    this->email = email;
    this->tipoRol = tipoRol;
}
void CAsignacionDocente::asignarDocente(){
    ManejadorPerfil* mp = ManejadorPerfil::getInstancia();
    ManejadorAsignatura* mU = ManejadorAsignatura::getInstancia();
    Asignatura* a = mU->getAsignatura(this->codigo);
    Perfil* p = mp->getPerfil(this->email);
    Docente * d = dynamic_cast<Docente*>(p);
    Rol *r = new Rol(this->tipoRol,a);
    d->agregarAsignatura(r);
}

CAsignacionDocente::~CAsignacionDocente(){}