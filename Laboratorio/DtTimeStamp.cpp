#include "DtTimeStamp.h"
DtTimeStamp::DtTimeStamp(){}
DtTimeStamp::DtTimeStamp(DtFecha,int,int,int){
  this->fecha;
  this->hora;
  this->minuto;
  this->segundo;
}
DtFecha DtTimeStamp:: getFecha(){
    return this->fecha;
}
void DtTimeStamp::setFecha(DtFecha fecha){
    this->fecha=fecha;
}
int DtTimeStamp::getHora(){
  return this->hora;
}
void DtTimeStamp::setHora(int hora){
  this->hora=hora;
}
int DtTimeStamp::getMinuto(){
  return this->minuto;
}
void DtTimeStamp::setMinuto(int minuto){
  this->minuto=minuto;
}
int DtTimeStamp::getSegundo(){
  return this->segundo;
}
void DtTimeStamp::setSegundo(int segundo){
  this->segundo = segundo;  
}
DtTimeStamp::~DtTimeStamp(){}

ostream& operator <<(ostream& salida, const DtTimeStamp& dtTimeStamp){
  cout << dtTimeStamp.fecha << "  " << dtTimeStamp.hora << ":" << dtTimeStamp.minuto << ":" << dtTimeStamp.segundo << endl;
  return salida;
}

bool operator ==(const DtTimeStamp& dtTimeStamp1, const DtTimeStamp& dtTimeStamp2)
{
  bool iguales = false;
  if(dtTimeStamp1.fecha == dtTimeStamp2.fecha)
  {
    if(dtTimeStamp1.hora == dtTimeStamp2.hora && dtTimeStamp1.minuto == dtTimeStamp2.minuto && dtTimeStamp1.segundo == dtTimeStamp2.segundo)
    {
      iguales = true;
    }
  }
  return iguales;
}