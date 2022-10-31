#include "DtInfoMonitoreo.h"

DtInfoMonitoreo::DtInfoMonitoreo(){}
DtInfoMonitoreo::DtInfoMonitoreo(int id,string nombre,string profe,list<string> emailEstudiantes):DtInfoClase(id,nombre,profe){
    this->emailEstudiantes = emailEstudiantes;
}
list<string> DtInfoMonitoreo::getEmailEstudiantes(){
    return this->emailEstudiantes;;
}
DtInfoMonitoreo::~DtInfoMonitoreo(){}





