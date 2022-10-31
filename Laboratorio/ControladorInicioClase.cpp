#include "ControladorInicioClase.h"

list<string> ControladorInicioClase::asignaturasAsignadas(string email){
    ManejadorPerfil* mP = ManejadorPerfil::getInstancia();
    
    Docente * d = dynamic_cast<Docente*>(mP->getPerfil(email));
    this->docente=d;
    list<string> cod = d->asignaturasDocente();
    return cod;
}


//falta esta funcion REVISARRRR
bool ControladorInicioClase::selectAsignatura(DtIniciarClase* iClase){
    this->iClase = iClase;
    
    return true;
}



list<string> ControladorInicioClase::inscriptosAsignatura(){
    list<string> inscriptos;
    ManejadorPerfil* mP = ManejadorPerfil::getInstancia();
    list<Perfil*> perfiles = mP->getPerfiles();
    for (auto item:perfiles){
        if (Estudiante * e = dynamic_cast<Estudiante*>(item)){
            if (!(e->noInscripto(this->iClase->getCodigo())))
                inscriptos.push_back(e->getEmail());
        }
    }
    return inscriptos;
}
void ControladorInicioClase::habilitar(string e){
    this->emailE.push_back(e);
}
DtIniciarClaseFull* ControladorInicioClase::datosIngresados(){
    DtIniciarClaseFull* res = new DtIniciarClaseFull(iClase->getCodigo(),iClase->getNombre(),iClase->getFechaHora(), 4); //puse 4 pero es un id generido 
    return res;
}
void ControladorInicioClase::iniciarClase(){
    Clase* c = new Clase(iClase->getNombre(), iClase->getFechaHora(),iClase->getFechaHora(),"ruta video" ); //colocar ruta video y fecha fin
    //revisar el new c, dependiendo de que tipo es TEORICO PRACTICO O MONITOREO
    c->setDocente(this->docente);
     
    if(c->getTipoRol() == MONITOREO){
        //agrego la clase a docente
        ManejadorPerfil* mP = ManejadorPerfil::getInstancia();
        list<Perfil*> perfiles = mP->getPerfiles();
        for(auto itemP: perfiles){
            if(Estudiante* e = dynamic_cast<Estudiante*>(itemP))
                if(!(e->noInscripto(this->iClase->getCodigo())))
                    c->agregarEstudiante(e);
        }

        //hago un find en perfil buscando un estudiante
        //agrego la clase a estudiante
    }


    ManejadorClase* mC = ManejadorClase::getInstancia();
    mC->agregarClase(c);
    ManejadorAsignatura* mA = ManejadorAsignatura::getInstancia();
    Asignatura* a = mA->getAsignatura(iClase->getCodigo());
    a->agregarClase(c);
}
