#ifndef ICONTROLADORALTAUSUARIO
#define ICONTROLADORALTAUSUARIO
#include "DtPerfil.h"
#include <string>
#include <list>

using namespace std;

class IControladorAltaUsuario{
    public:        
        virtual void ingresarDatosPerfil(DtPerfil DtPerfil) = 0;
        virtual void ingresarEstudiante(string documento)= 0;
        virtual void ingresarDocente(string instituto)= 0;
        virtual void altaPerfil()= 0;     
        
        //ver perfiles agregados //
        virtual void cargarDocentes()=0;
        virtual void cargarEstudiantes()=0;

        //no deberia estar esto aqui //
        virtual list<string> listarPerfiles()= 0; 
};
#endif