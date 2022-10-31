#ifndef CLISTARCLASES
#define CLISTARCLASES
#include "ICListarClases.h"
#include "DtPerfil.h"
#include "ManejadorPerfil.h"
#include "ManejadorAsignatura.h"

#include <string>

using namespace std;

class CListarClases: public ICListarClases{
    private:
         Perfil* doc;
         list<string> emailE;
        
    public:
        list<string> asignaturasAsignadas(string);
        list<DtInfoClase*> selectAsignatura(string);
        void estudiantes(string);
       // void getDtInfoClase(DtInfoClase);
       // void getDtInfoClase(DtInfoTeorico);
       // void getDtInfoClase(DtInfoMonitoreo);
        ~ControladorListarClase();

};

#endif
