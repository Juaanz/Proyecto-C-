#include "DtParticipacion.h"

DtParticipacion::DtParticipacion(){}
DtParticipacion::DtParticipacion(int id, DtTimeStamp fecha, string mensaje){
    this->id = id;
    this->fecha = fecha;
    this->mensaje = mensaje;
}
        
int DtParticipacion::getId(){
    return this->id;
}
DtTimeStamp DtParticipacion::getDtTimeStamp(){
    return this->fecha;
}
string DtParticipacion::getMensaje(){
    return this->mensaje;

}

ostream& operator <<(ostream& salida,DtParticipacion& dtParticipacion){
    cout<<"El id del mensaje es: "<< dtParticipacion.id << "Mensaje : " << dtParticipacion.mensaje << "Fecha : " << dtParticipacion.fecha<< endl;
    return salida;
}
DtParticipacion::~DtParticipacion(){}