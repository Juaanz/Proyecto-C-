#ifndef ROL
#define ROL
#include "Asignatura.h"
#include "TipoRol.h"
using namespace std;

class Asignatura;

class Rol{
    private:
        TipoRol tipo;
        Asignatura* asignatura;
    public:
        Rol();
        Rol(TipoRol,Asignatura*);
        TipoRol getTipoRol();
        string getCodigoAsignatura();
        Asignatura* getAsignatura();
        bool esAsignatura(string);
        void eliminar();
        ~Rol();
};
#endif