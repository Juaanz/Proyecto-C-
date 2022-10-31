#ifndef PARTICIPACION
#define PARTICIPACION

#include "Perfil.h"
#include "DtTimeStamp.h"
#include <list>

#include <string>
#include <iostream>
using namespace std;

class Participacion {
    private:
        int id;
        DtTimeStamp fecha;
        string mensaje;
        Participacion * part;      // (?)
    public:
        Participacion();
        Participacion(int, DtTimeStamp , string);
        ~Participacion();

        void setId(int);
        int getId();
        void agregarPart(Participacion*);
        void setDtTimeStamp(DtTimeStamp);
        DtTimeStamp getDtTimeStamp();

        void setMensaje(string);
        string getMensaje();

        Participacion* getParticipacion();

};
#endif

