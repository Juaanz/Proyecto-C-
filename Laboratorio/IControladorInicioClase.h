#ifndef ICONTROLADORINICIOCLASE
#define ICONTROLADORINICIOCLASE

#include "Clase.h"
#include "DtPerfil.h"
#include <string>
#include "DtIniciarClase.h"
#include "DtIniciarClaseFull.h"
#include "DtIniciarMonitoreo.h"
#include "DtFecha.h"

using namespace std;

class IControladorInicioClase{
  public:
    virtual list<string> asignaturasAsignadas(string) = 0;
    virtual bool selectAsignatura(DtIniciarClase) = 0;
    virtual list<string> inscriptosAsignatura() = 0;
    virtual void habilitar(string) = 0;
    virtual DtIniciarClaseFull* datosIngresados() = 0;
    virtual void iniciarClase() = 0;

};

#endif