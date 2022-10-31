#include "CListarClases.h"

list<string> CListarClases::asignaturasAsignadas(string email){
    ManejadorPerfil* mP = ManejadorPerfil::getInstancia();
    this->doc = mP->getPerfil(email);
    Docente * d = dynamic_cast<Docente*>(this->doc);
    list<string> cod = d->asignaturasDocente();
    return cod;
}


list<DtInfoClase*> CListarClases::selectAsignatura(string codigo){
    ManejadorAsignatura* mA = ManejadorAsignatura::getInstancia();
    Asignatura* a = mA ->getAsignatura(codigo);
    
    list<DtInfoClase*> dtIC = a -> getDtInfoClase();
}

void CListarClases::estudiantes(string e){
    this->emailE.push_back(e);
}

