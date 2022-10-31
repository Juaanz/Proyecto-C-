#ifndef DTASIGNATURA
#define DTASIGNATURA
#include <string>
#include <list>
#include "DtInstanciaClase.h"
#include "Clase.h"

using namespace std;

class DtAsignatura{
    private:
        string codigo;
        string nombre;
        DtInstanciaClase* dtInstanciaClase;
        list<Clase*> clases;

    public:
        DtAsignatura();
        DtAsignatura(string codigo,string nombre, DtInstanciaClase* dtInstanciaClase);  
        string getCodigo();
        string getNombre();        
        DtInstanciaClase* getDtInstanciaClase();
        list<Clase*> getClases();
        
        ~DtAsignatura();
};

#endif