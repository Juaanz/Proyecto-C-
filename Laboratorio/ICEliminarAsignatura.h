#ifndef ICELIMINARASIGNATURA
#define ICELIMINARASIGNATURA
#include <list>
#include <string>
//incluir los .h que usemos

using namespace std;

class ICEliminarAsignatura{

    public:
        virtual list<string> listarAsignaturas() = 0;
        virtual void selectAsignatura(string) = 0;
        virtual void eliminarAsignatura() = 0;
};

#endif
