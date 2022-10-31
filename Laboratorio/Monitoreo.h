//Facundo Aparicio
//Diego Poblete
//Maria Costa
//Juan Romero
//Pablo Díaz
#ifndef MONITOREO_h
#define MONITOREO_h
#include <string>
#include "Clase.h"
#include "DtInfoMonitoreo.h"
using namespace std;


class Monitoreo: public Clase{
    private:
        list<Estudiante*> estudiantesMonitoreo;


    public:    
        Monitoreo(string nombre, DtTimeStamp inicio, DtTimeStamp fin,TipoRol rol, string rutavideo,list<Estudiante*> estudiantesMonitoreo);
        void setEstudiantesMonitoreo(Estudiante*);
        Estudiante* getEstudianteMonitoreo();
        list<string> getEmailEstudiantes();
        ~Monitoreo();
        DtInfoMonitoreo * getDtInfoClase();

};

#endif