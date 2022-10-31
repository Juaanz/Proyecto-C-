#ifndef DTINICIARMONITOREO
#define DTINICIARMONITOREO
#include <string>
#include <list>
#include "DtIniciarClaseFull.h"

using namespace std;

class DtIniciarMonitoreo : public DtIniciarClaseFull{
    private:
        list<string> habilitados;
    public:
        DtIniciarMonitoreo();
        ~DtIniciarMonitoreo();
};
#endif