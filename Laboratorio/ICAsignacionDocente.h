#ifndef ICASIGNACIONDOCENTE
#define ICASIGNACIONDOCENTE
#include "TipoRol.h"
#include <string>
#include <list>
#include "Docente.h"

using namespace std;
#include "ManejadorAsignatura.h"

class ICAsignacionDocente{    

    public:
        virtual list<string> listarAsignaturas() = 0;
        virtual list<string> docenteSinAsignatura(string codigo) = 0;
        virtual void selectDocente(string email, TipoRol tipoRol) = 0;
        virtual void asignarDocente() = 0;
};


#endif