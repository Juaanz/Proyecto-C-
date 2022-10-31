#ifndef DTESTUDIANTE
#define DTESTUDIANTE

#include "Estudiante.h"
#include "DtPerfil.h"
#include<string>

class DtEstudiante : public DtPerfil{
    private:
       string documento;
    public:
        DtEstudiante();
        DtEstudiante(string nombre,string imagenUrl, string email, string password,string documento);
        string getDocumento();
        
        ~DtEstudiante();
        
        friend ostream& operator <<(const ostream&,const DtEstudiante&);



};
#endif       
