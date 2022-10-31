/*
GRUPO INTEGRADO POR:
FACUNDO APARICIO
MARÍA NOEL COSTA
PABLO DIAZ
DIEGO POBLETE
JUAN PABLO ROMERO
*/

#ifndef DTTIMESTAMP
#define DTTIMESTAMP
#include <iostream>
#include "DtFecha.h"

using namespace std;

class DtTimeStamp{
    private:    
        DtFecha fecha;
        int hora; 
        int minuto;
        int segundo;

    public:
    DtTimeStamp();
    DtTimeStamp(DtFecha,int,int,int);
    DtFecha getFecha();
    void setFecha(DtFecha fecha);
    int getHora();
    void setHora(int hora);
    int getMinuto();
    void setMinuto(int minuto);
    int getSegundo();
    
    void setSegundo(int segundo);
    ~DtTimeStamp();

    friend ostream& operator<<(ostream&, const DtTimeStamp&);
    friend bool operator ==(const DtTimeStamp&, const DtTimeStamp&);

};
#endif
