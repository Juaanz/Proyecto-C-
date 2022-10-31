#ifndef DTINFOTEORICO
#define DTINFOTEORICO
#include <string>
#include "DtInfoClase.h"
#include "Asignatura.h"
#include "Rol.h"
#include "Docente.h"
#include "ICListarClases.h"

using namespace std;

class DtInfoTeorico : public DtInfoClase{
    private:
        int cantAsistentes;
        
    public:
        DtInfoTeorico();
        DtInfoTeorico(int,string,string,int);
        int getcantAsistentes();
         ~DtInfoTeorico();

        
};


#endif