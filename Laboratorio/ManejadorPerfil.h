#ifndef MANEJADORPERFIL
#define MANEJADORPERFIL
#include "Perfil.h" 
#include <list>
#include <map>


class ManejadorPerfil{
    private:
        static ManejadorPerfil* instancia;
        ManejadorPerfil();
        map<string, Perfil*> colPerfiles;
    public:
        static ManejadorPerfil* getInstancia();
        
        list<Perfil*> getPerfiles();
        Perfil* getPerfil(string);
        void agregarPerfil(Perfil*);
        void removerPerfil(Perfil*);
        bool esta(string);
        virtual ~ManejadorPerfil();

        

};
#endif