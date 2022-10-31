//Facundo Aparicio
//Diego Poblete
//Maria Costa
//Juan Romero
//Pablo Díaz

#ifndef PERFIL
#define PERFIL

#include <string>
using namespace std;

class Perfil {
    private:
        string nombre;
        string imagenUrl;
        string email;
        string password;
    public:
        Perfil();
        Perfil(string, string, string, string);
        virtual ~Perfil();

        void setNombre(string);
        string getNombre();

        void setImagenUrl(string);
        string getImagenUrl();

        void setEmail(string);
        string getEmail();

        void setPassword(string);
        string getPassword();

        virtual void eliminarAsignatura(string) = 0;
        
};
#endif



