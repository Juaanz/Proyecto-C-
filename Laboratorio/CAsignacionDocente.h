#ifndef CASIGNACIONDOCENTE
#define CASIGNACIONDOCENTE
#include "ICAsignacionDocente.h"
#include "TipoRol.h"
#include "ManejadorAsignatura.h"
#include "ManejadorPerfil.h"
#include <string>
#include <list>

using namespace std;

class CAsignacionDocente: public ICAsignacionDocente{
    private:
        string codigo;
        string email;
        TipoRol tipoRol;

    public:
        list<string> listarAsignaturas();
        list<string> docenteSinAsignatura(string codigo);
        void selectDocente(string email, TipoRol tipoRol);
        void asignarDocente();
        

        ~CAsignacionDocente();
};


#endif