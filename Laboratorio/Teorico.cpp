#include <string>
#include "Teorico.h"
//constructor
Teorico::Teorico(string nombre, DtTimeStamp inicio, DtTimeStamp fin, string rutavideo, int cantAsistentes):Clase(nombre, inicio, fin, rutavideo){
    this->cantAsistentes = cantAsistentes;
}
//getter y setter
void Teorico::setCantAsistentes(int cantAsistentes){
    this->cantAsistentes = cantAsistentes;
}

int Teorico::getCantAsistentes(){
    return this->cantAsistentes;
}


DtInfoTeorico* Teorico::getDtInfoClase(){
    DtInfoTeorico * dtIt = new DtInfoTeorico(this->getId(),this->getNombre(),this->getDocente()->getNombre(),this->getCantAsistentes());
    return dtIt;
}
//Destructor
Teorico::~Teorico(){}