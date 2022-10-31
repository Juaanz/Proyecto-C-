#ifndef ICENVIOMENSAJE
#define ICENVIOMENSAJE
using namespace std;
#include "Perfil.h"
#include "DtParticipacion.h"
#include <list>
#include "DtTimeStamp.h"


class ICEnvioMensaje{
    public:
        virtual list<int> clasesOnlineAsistiendo() = 0;
        virtual list<DtParticipacion*> selectClase(int)= 0;
        virtual void responder (int)= 0;
        
        virtual void ingresarTexto(string)= 0;
        virtual void enviarMensaje()= 0;


};
#endif