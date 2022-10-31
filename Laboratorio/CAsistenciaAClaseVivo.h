#ifndef CASISTENCIAACLASEVIVO
#define CASISTENCIAACLASEVIVO
#include "ICAsistenciaAClaseVivo.h"
#include "ManejadorPerfil.h"
#include "Estudiante.h"
#include "DtEstudiante.h"
#include "DtAsignatura.h"
#include "Asignatura.h"
#include "Clase.h"
#include "ManejadorAsignatura.h"
#include "DtAsistir.h"
#include "AsisteEnVivo.h"
#include "ManejadorClase.h"

#include <string>

using namespace  std;

class CAsistenciaAClaseVivo: public ICAsistenciaAClaseVivo{
    private:
        string codigo;
        Estudiante* estudiante;
        Clase* clase;
        int id;
    public:
        list<string> asignaturaInscipto(string email);
        list<int> clasesOnlineDisponibles(string cod);
        DtAsistir* selectClase(int id);
        void asistirClaseEnVivo();
        ~CAsistenciaAClaseVivo();
};  


#endif