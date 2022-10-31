#ifndef DTINICIARCLASEFULL
#define DTINICIARCLASEFULL
#include <string>
#include "DtIniciarClase.h"
#include "DtTimeStamp.h"

using namespace std;

class DtIniciarClaseFull : public DtIniciarClase{
    private:
        int id;
    public:
        DtIniciarClaseFull();
        DtIniciarClaseFull(string,string, DtTimeStamp, int);
        ~DtIniciarClaseFull();
};
#endif

