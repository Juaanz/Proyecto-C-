#ifndef DOCENTE_h
#define DOCENTE_h
#include "Perfil.h"
#include <string>
#include "Rol.h"
#include "DtIniciarClase.h"
using namespace std;
class Rol;

class Docente : public Perfil{
    private:
        string instituto;
        list<Rol*> roles;
        DtIniciarClase* ic;
    public:
        
        Docente();
        Docente(string,string,string,string,string);
        list<string> asignaturasDocente();
        string getInstituto();
        DtIniciarClase* getInicioClase();
        
        void setInicioClase(DtIniciarClase*);
        void setInstituto(string);
        bool noDictaAsignatura(string);
        void agregarAsignatura(Rol*);
        void eliminarAsignatura(string);
        ~Docente();


};
#endif 