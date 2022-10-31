#ifndef DTLOG
#define DTLOG
#include <iostream>
#include "DtTimeStamp.h"

using namespace std;

class DtLog{
   private:
    DtTimeStamp inicio;
    DtTimeStamp fin;

    public:
    DtLog();
    DtLog(DtTimeStamp,DtTimeStamp);
    DtTimeStamp getInicio();
    void setInicio(DtTimeStamp);
    DtTimeStamp getFin();
    void setFin(DtTimeStamp);
    ~DtLog();
};
#endif