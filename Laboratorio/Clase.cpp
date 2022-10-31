#include "Clase.h"
#include <string>

Clase::Clase(){}
Clase::Clase(string nombre, DtTimeStamp inicio, DtTimeStamp fin, string rutavideo, TipoRol rol){
    this->nombre    = nombre;
    this->inicio    = inicio;
    this->fin       = fin;
    this->rutavideo = rutavideo;
    this->rol       = rol;
}

int Clase::getId(){
    return this->id;
}
TipoRol Clase::getTipoRol(){
    return this->rol;
}

list<AsisteEnVivo*> Clase::getAsistenciasEnVivo(){
    return this->asistenciasEnVivo;
}

string Clase::getNombre(){
    return this->nombre;
}
DtTimeStamp Clase::getInicio(){
    return this->inicio;
}
DtTimeStamp Clase::getFin(){
    return this->fin;
}
string Clase::getRutaVideo(){
    return rutavideo;
}

list<Participacion*> Clase::getParticipaciones(){
    return this->participaciones;
}

void Clase::agregarParticipacion(Participacion* p){
    this->participaciones.push_back(p);

}

Participacion * Clase::getParticipacion(int id){
    list<Participacion*>::iterator it = this->participaciones.begin();
    bool encontre = false;
    while (it!=this->participaciones.end() && !encontre){
        if((*it)->getId() == id){
            encontre = true;
        }it++;
    }
    it--;
    return *it;
}

void Clase::setNombre(string nombre){
    this->nombre = nombre;
}
void Clase::setInicio(DtTimeStamp inicio){
    this->inicio = inicio;
}
void Clase::setFin(DtTimeStamp fin){
    this->fin = fin;
}
void Clase::setRutaVideo(string rutavideo){
    this->rutavideo = rutavideo;
}

//destroy()
Clase::~Clase(){
    for(auto item:this->asistenciasEnVivo){
        this->asistenciasEnVivo.remove(item);
        item->~AsisteEnVivo();
    }
    for(auto item:this->participaciones){
        this->participaciones.remove(item);
        item->~Participacion();
    }
    this->profe = NULL; //como no tenemos una lista de profes, es solo 1 lo dejamos en null.
    /*if (this->rol == MONITOREO){
        for(auto item:this->estudiantesMonitoreo){
            this->estudiantesMonitoreo.remove(item);
        }
    }*/
}

Docente* Clase::getDocente(){
    return this->profe;

}
void Clase::agregarAsisteEnVivo(AsisteEnVivo* aEv){
    this->asistenciasEnVivo.push_back(aEv);
}
/*void Clase::agregarEstudiante(Estudiante* e){
    this->estudiantesMonitoreo.push_back(e);
    

}*/
void Clase::setDocente(Docente* d){
    this->profe=d;

}
