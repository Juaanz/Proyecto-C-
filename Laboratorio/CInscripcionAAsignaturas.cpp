#include "CInscripcionAAsignaturas.h"

#include "ManejadorAsignatura.h"
#include "ManejadorPerfil.h"

list<string> CInscripcionAAsignaturas::asignaturasNoInscripto(string email){
    ManejadorAsignatura* mA = ManejadorAsignatura::getInstancia();
    ManejadorPerfil * mP = ManejadorPerfil::getInstancia();
    list<Asignatura*> asignaturas = mA->getAsignaturas();
    Perfil* perfil =  mP->getPerfil(email);
    list<string> codigos;
        if (Estudiante* e = dynamic_cast<Estudiante*>(perfil)){
            for(auto itemA: asignaturas){
                if(e->noInscripto(itemA->getCodigo()))
                    codigos.push_back(itemA->getCodigo());
            }
        }
return codigos;
}

void CInscripcionAAsignaturas::selectAsignatura(string codigo){
    this->codigo = codigo;

}
void CInscripcionAAsignaturas::inscribir(string email){
    ManejadorAsignatura* mA = ManejadorAsignatura::getInstancia();
    ManejadorPerfil* mP = ManejadorPerfil::getInstancia();
    Asignatura * a = mA->getAsignatura(this->codigo);
    Perfil* p =  mP->getPerfil(email);
    if(Estudiante * e = dynamic_cast<Estudiante*>(p))
        e->inscribirAsignatura(a);
}

CInscripcionAAsignaturas::~CInscripcionAAsignaturas(){} 