#ifndef DTINFOCLASE
#define DTINFOCLASE
#include <string>
#include "Docente.h"
#include "DtDocente.h"
#include "DtEstudiante.h"
using namespace std;

class DtInfoClase{
    private:
        int id;
        string nombre;
        
        string profe;        

    public:
        DtInfoClase();
        DtInfoClase(int,string,string);
        int getId();
        string getNombre();
        
        ~DtInfoClase();

        

};


#endif