#ifndef MANEJADORASIGNATURA
#define MANEJADORASIGNATURA
#include "Asignatura.h"
#include <map>
#include <list>

class ManejadorAsignatura{
    private:
        list<Asignatura*> asignatura;
        static ManejadorAsignatura* instancia;
        ManejadorAsignatura();

    public:
        list<Asignatura*> getAsignaturas();
        Asignatura* getAsignatura(string);
        void agregarAsignatura(Asignatura*);
        void quitarAsignatura(Asignatura*);
        static ManejadorAsignatura* getInstancia();

};
#endif
