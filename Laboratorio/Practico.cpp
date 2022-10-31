//Facundo Aparicio
//Diego Poblete
//Maria Costa
//Juan Romero
//Pablo Díaz

#include "Practico.h"


Practico::Practico(string nombre, DtTimeStamp inicio, DtTimeStamp fin, string rutavideo):Clase(nombre, inicio, fin, rutavideo){}                    
Practico::~Practico(){}

DtInfoClase* Practico::getDtInfoClase(){
   DtInfoClase * dtIc = new DtInfoClase(this->getId(),this->getNombre(),this->getDocente()->getNombre());
   return dtIc;

}
    