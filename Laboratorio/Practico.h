//Facundo Aparicio
//Diego Poblete
//Maria Costa
//Juan Romero
//Pablo Díaz
#ifndef PRACTICO_h
#define PRACTICO_h
#include "Clase.h"
#include "DtTimeStamp.h"
#include "DtInfoClase.h"
using namespace std;
#include <string>

class Practico: public Clase{
    private:
        

    public:
        Practico();
        Practico(string nombre, DtTimeStamp inicio, DtTimeStamp fin, string rutavideo);
        ~Practico();
        
        DtInfoClase* getDtInfoClase();

};


#endif