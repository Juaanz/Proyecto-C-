#ifndef DTPARTICIPACION
#define DTPARTICIPACION
#include "Participacion.h"


using namespace std;
class DtParticipacion{
    private:
        int id;
        DtTimeStamp fecha;
        string mensaje;
    public:
        DtParticipacion();
        DtParticipacion(int, DtTimeStamp, string);
        
        int getId();
        DtTimeStamp getDtTimeStamp();
        string getMensaje();
        ~DtParticipacion();


        friend ostream& operator <<(ostream&,DtParticipacion&);

};
#endif