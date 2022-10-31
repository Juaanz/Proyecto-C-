#ifndef CONTROLADORINICIOCLASE 
#define CONTROLADORINICIOCLASE

#include "IControladorInicioClase.h"
#include "ManejadorPerfil.h"
#include "ManejadorClase.h"
#include "ManejadorAsignatura.h"
#include "Clase.h"
#include "Perfil.h"
#include "Docente.h"
#include "Estudiante.h"
#include "Asignatura.h"
#include "TipoUsuario.h"

#include <string>

using namespace std;

class ControladorInicioClase: public IControladorInicioClase{
    private:
        DtIniciarClase* iClase;
        list<string> emailE;
        Docente* docente;
        
    public:
        list<string> asignaturasAsignadas(string);
        bool selectAsignatura(DtIniciarClase*);
        list<string> inscriptosAsignatura();
        void habilitar(string);
        DtIniciarClaseFull* datosIngresados();
        void iniciarClase();

        ~ControladorInicioClase();

};

#endif

