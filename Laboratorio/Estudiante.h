#ifndef ESTUDIANTE_h
#define ESTUDIANTE_h
#include "Perfil.h"
#include <string>
#include "Asignatura.h"
#include <list>

class Asignatura;

using namespace std;
class Estudiante : public Perfil{
    private:
        string documento;
        list<Asignatura*> asignaturas;
        
    public:
        Estudiante();
        Estudiante(string, string, string, string, string);
        string getDocumento();
        void setDocumento(int);
        list<Asignatura*> getAsignaturas();
        bool noInscripto(string codigo);
        void inscribirAsignatura(Asignatura*);
        void eliminarAsignatura(string);
        ~Estudiante();
};
#endif