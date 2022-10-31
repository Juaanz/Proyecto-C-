#ifndef MANEJADORCLASE
#define MANEJADORCLASE
#include "Clase.h"
#include <list>
#include <map>

class ManejadorClase{
    private:
        static ManejadorClase* instancia;
        ManejadorClase();
        map<int, Clase*> colClases;
        int enumParticipacion=0;
        int enumClase=0;
        
    public: 
        static ManejadorClase* getInstancia();
        int autoEnumParticipacion();//autoEnumeradoParticipacion
        int autoEnumClase();//autoEnumeradoCLASE
        list<Clase*> getClases();
        Clase* getClase(int);
        void agregarClase(Clase*);
        void removerClase(Clase*);
        
        
        virtual ~ManejadorClase();
};
#endif