#ifndef CONTROLADORALTAASIGNATURA
#define CONTROLADORALTAASIGNATURA
#include "ManejadorAsignatura.h"
#include "IControladorAltaAsignatura.h"
#include "DtAsignatura.h"
#include "Asignatura.h"

using namespace std;

class ControladorAltaAsignatura : public IControladorAltaAsignatura{
    private:
        DtAsignatura dtAsignatura;
    public:
        void ingresarDatosAsignatura(DtAsignatura);
        void altaAsignatura();
        ~ControladorAltaAsignatura();
};

#endif
