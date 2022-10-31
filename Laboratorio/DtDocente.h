#ifndef DTDOCENTE
#define DTDOCENTE
#include "DtPerfil.h"
#include <string>
using namespace std;

class DtDocente : public DtPerfil {
    private:
        string instituto;
    public:
        DtDocente();
        DtDocente(string,string ,string,string,string);
        string getInstituto();
        ~DtDocente();

        friend ostream& operator <<(const ostream&, const DtDocente&);
        

};

#endif