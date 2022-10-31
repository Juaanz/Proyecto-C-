#ifndef DTPerfil
#define DTPerfil

#include "Perfil.h"
#include <iostream>
#include <string>

using namespace std;

class DtPerfil{
    private:
        string nombre;
        string imagenUrl;
        string email;
        string password;

    public:
        DtPerfil();
        DtPerfil(string nombre, string imagenUrl, string email, string password);                        
        string getNombre();        
        string getImagenUrl();        
        string getEmail();        
        string getPassword ();
        virtual ~DtPerfil();

};
#endif