#ifndef CONTROLADORALTAUSUARIO
#define CONTROLADORALTAUSUARIO
#include "TipoUsuario.h"
#include "DtPerfil.h"
#include "IControladorAltaUsuario.h"
#include "ManejadorPerfil.h"
#include "Docente.h"
#include "Estudiante.h"
#include <string>

using namespace std;

class ControladorAltaUsuario: public IControladorAltaUsuario{
    private:
        TipoUsuario tipoUsuario;
        DtPerfil datosUsuario;
        string documento;
        string instituto;
    public:
        void ingresarDatosPerfil(DtPerfil);
        void ingresarEstudiante(string);
        void ingresarDocente(string);
        void altaPerfil();        
        ~ControladorAltaUsuario();
        
        void cargarDocentes();
        void cargarEstudiantes();
        list<string> listarPerfiles();

};

#endif