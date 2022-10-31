#ifndef ICLISTARCLASES
#define ICLISTARCLASES
#include <list>
#include <string>
#include "DtInfoClase.h"

using namespace std;

class ICListarClases{
    public:
        virtual list<string> asignaturasAsignadas(string)=0;
        virtual list<DtInfoClase*> selectAsignatura(string)=0;
};

#endif