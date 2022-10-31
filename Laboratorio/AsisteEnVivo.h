//Facundo Aparicio
//Diego Poblete
//Maria Costa
//Juan Romero
//Pablo Díaz

#ifndef ASISTEENVIVO
#define ASISTEENVIVO
#include <string>
#include "DtTimeStamp.h"
#include "Estudiante.h"
using namespace std;

class AsisteEnVivo{
    private:
        DtTimeStamp inicio;
        DtTimeStamp fin;
        Estudiante* e;

    public:

        AsisteEnVivo();
        AsisteEnVivo(DtTimeStamp inicio, DtTimeStamp fin,Estudiante* e);
        

        DtTimeStamp getInicio();
        DtTimeStamp getFin();
        Estudiante* getEstudiante();

        ~AsisteEnVivo();
};


#endif
