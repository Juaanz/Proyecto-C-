#ifndef CENVIOMENSAJE
#define CENVIOMENSAJE
#include <list>
#include <string>
#include "DtParticipacion.h"
#include "ICEnvioMensaje.h"
#include "DtTimeStamp.h"
#include <time.h>
using namespace std;

class CEnvioMensaje: public ICEnvioMensaje{
    private:
        int id;
        int idP;
        DtTimeStamp fecha;
        string txt;
    public:

        list<int> clasesOnlineAsistiendo();
        list<DtParticipacion*> selectClase(int);
        void responder (int);
        void ingresarTexto(string);
        void enviarMensaje();
        
        ~CEnvioMensaje();



};

#endif