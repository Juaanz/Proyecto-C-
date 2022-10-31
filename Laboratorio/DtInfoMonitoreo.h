#ifndef DTINFOMONITOREO
#define DTINFOMONITOREO
using namespace std;
#include "DtInfoClase.h"

class DtInfoMonitoreo: public DtInfoClase{
    private:
        list<string> emailEstudiantes;
    public:
        DtInfoMonitoreo();
        DtInfoMonitoreo(int,string,string,list<string>);
        list<string> getEmailEstudiantes();
        ~DtInfoMonitoreo();


};
#endif