#ifndef ICASISTENCIAACLASEVIVO
#define ICASISTENCIAACLASEVIVO
#include <list>
#include <string>

using namespace std;
class ICAsistenciaAClaseVivo{
    
    virtual list<string> asignaturaInscipto(string documento) = 0;
    virtual list<int> clasesOnlineDisponibles(string cod) = 0;
    //DtAsistir selectClase(Int id);  Retorna el manejador de clase
    virtual void asistirClaseEnVivo() = 0;
};

#endif
