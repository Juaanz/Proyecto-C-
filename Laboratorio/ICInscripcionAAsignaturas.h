#ifndef ICINSCRIPCIONAASIGNATURA
#define ICINSCRIPCIONAASIGNATURA

#include <string>
#include <list>
#include "Estudiante.h"
#include "ManejadorAsignatura.h"
using namespace std;

class ICInscripcionAAsignaturas{
    public:
        virtual list<string> asignaturasNoInscripto(string) = 0;
        virtual void selectAsignatura(string) = 0;
        virtual void inscribir(string) = 0;        

};
#endif

