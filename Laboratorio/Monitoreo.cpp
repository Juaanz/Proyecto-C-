//Facundo Aparicio
//Diego Poblete
//Maria Costa
//Juan Romero
//Pablo Díaz

#include "Monitoreo.h"
#include <string>

Monitoreo::Monitoreo(string nombre, DtTimeStamp inicio, DtTimeStamp fin,TipoRol rol, string rutavideo,list<Estudiante*> estudiantesMonitoreo):Clase(nombre, inicio, fin, rutavideo,rol){
    this->estudiantesMonitoreo=estudiantesMonitoreo;
}
Monitoreo::~Monitoreo(){}


list<string> Monitoreo::getEmailEstudiantes(){
    list<string> emails;
    for(auto itemN:this->estudiantesMonitoreo){
        emails.push_back(itemN->getEmail());
    }return emails;

}

DtInfoMonitoreo * Monitoreo::getDtInfoClase(){
    DtInfoMonitoreo * dtIm;
    DtInfoMonitoreo * dtIm = new DtInfoMonitoreo(this->getId(),this->getNombre(),this->getDocente()->getNombre(),this->getEmailEstudiantes());
    
    return dtIm;
}