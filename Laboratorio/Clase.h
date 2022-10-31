#ifndef CLASE
#define CLASE
#include <list>
#include <string>
#include "DtTimeStamp.h"
#include "AsisteEnVivo.h"
#include "Docente.h"
#include "Estudiante.h"
#include "Participacion.h"
#include "TipoRol.h"
using namespace std;
class Docente;
class Estudiante;

class Clase{
    
    private:
        int id;
        string nombre;
        DtTimeStamp inicio;
        DtTimeStamp fin;
        string rutavideo;
        TipoRol rol;
       
        //string codigo; //codigo de la asignatura
        Docente* profe;
        DtInfoClase * dtIc;
        
        list<Participacion*> participaciones;
        list<AsisteEnVivo*> asistenciasEnVivo;
    public:
        Clase();
        Clase(string nombre, DtTimeStamp inicio, DtTimeStamp fin, string rutavideo,TipoRol rol);

        string getNombre();
        TipoRol getTipoRol();
        DtTimeStamp getInicio();
        DtTimeStamp getFin();
        string getRutaVideo();
        void setDocente(Docente*);
        Docente* getDocente();
        int getId();
        void agregarEstudiante(Estudiante*);
        list<AsisteEnVivo*> getAsistenciasEnVivo();
        list<Participacion*> getParticipaciones();
        Participacion * getParticipacion(int);
        void agregarParticipacion(Participacion*);
        void agregarAsisteEnVivo(AsisteEnVivo*);
        virtual DtInfoClase* getInfoClase(); // declaro virtual porque practico teorico y monitoreo definen sus propios metodos.
        void setNombre(string nombre);
        void setInicio(DtTimeStamp inicio);
        void setFin(DtTimeStamp fin);
        void setRutaVideo(string rutavideo);

        ~Clase();

};

#endif
