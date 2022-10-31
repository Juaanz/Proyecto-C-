#ifndef CELIMINARASIGNATURA
#define CELIMINARASIGNATURA
#include "ICEliminarAsignatura.h"
#include "ManejadorAsignatura.h"
#include "ManejadorPerfil.h"
#include <string>
#include <list>

using namespace std;

class CEliminarAsignatura: public ICEliminarAsignatura{
    private:
        string codigo;
    public:
        list<string> listarAsignaturas();
        void selectAsignatura(string);
        void eliminarAsignatura();

        ~CEliminarAsignatura();
};

#endif
