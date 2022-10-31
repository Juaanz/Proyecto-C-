#ifndef ICONTROLADORALTAASIGNATURA
#define ICONTROLADORALTAASIGNATURA
#include "DtAsignatura.h"

#include <string>

using namespace std;

class IControladorAltaAsignatura{
    public:        
        virtual void ingresarDatosAsignatura(DtAsignatura) = 0;
        virtual void altaAsignatura() = 0;       

};

#endif