#include "DtFecha.h"

DtFecha::DtFecha(){}

DtFecha::DtFecha(int dia,int mes,int anio){
  if (dia<1 || dia>31 || mes<1 || mes>12 || anio<1900)
    throw invalid_argument("Fecha no valida!!\n");
  else{
    this->dia=dia;
    this->mes=mes;
    this->anio=anio;
  }
}

int DtFecha::getDia(){
  return this->dia;
}

int DtFecha::getMes(){
  return this->mes;
}

int DtFecha::getAnio(){
  return this->anio;
}



DtFecha::~DtFecha(){}

ostream& operator <<(ostream& salida, const DtFecha& dtFecha){
  cout << dtFecha.dia << "//" << dtFecha.mes << "//" << dtFecha.anio << endl;
  return salida;
}
bool operator ==(const DtFecha& dtFecha1, const DtFecha& dtFecha2){
  bool iguales = false;
  if(dtFecha1.dia == dtFecha2.dia && dtFecha1.mes == dtFecha2.mes && dtFecha1.anio == dtFecha2.anio){
    iguales = true;
  }
  return iguales;
}