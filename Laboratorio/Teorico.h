#ifndef TEORICO_h
#define TEORICO_h
#include "Clase.h"
#include "DtInfoTeorico.h"

class Teorico : public Clase{
    private:
        int cantAsistentes=this->getAsistenciasEnVivo().size();
        
    public:
        Teorico(string nombre, DtTimeStamp inicio, DtTimeStamp fin, string rutavideo, int cantAsistentes);
        void setCantAsistentes(int);
        int getCantAsistentes();
        
        ~Teorico();
        DtInfoTeorico* getDtInfoClase();

};
#endif