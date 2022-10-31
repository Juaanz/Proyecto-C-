#ifndef CINSCRIPCIONAASIGNATURAS
#define CINSCRIPCIONAASIGNATURAS


#include "ICInscripcionAAsignaturas.h"
#include <list>
#include <string>

using namespace std;

class CInscripcionAAsignaturas: public ICInscripcionAAsignaturas{ 
    private:
        string codigo;     
    public:
        list<string> asignaturasNoInscripto(string); 
        void selectAsignatura(string);
        void inscribir(string); 
        ~CInscripcionAAsignaturas();

};
#endif