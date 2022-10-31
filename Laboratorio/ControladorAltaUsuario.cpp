#include "ControladorAltaUsuario.h"

void ControladorAltaUsuario::ingresarDatosPerfil(DtPerfil dU){
    this->datosUsuario=dU;
    }
void ControladorAltaUsuario::ingresarEstudiante(string documento){
    this->documento=documento;
    this->tipoUsuario=ESTUDIANTE;
}
void ControladorAltaUsuario::ingresarDocente(string instituto){
    this->instituto=instituto;
    this->tipoUsuario=DOCENTE;
}
void ControladorAltaUsuario::altaPerfil(){
    ManejadorPerfil* mU=ManejadorPerfil::getInstancia();
    if(tipoUsuario==DOCENTE){
        Docente* d = new Docente(datosUsuario.getNombre(),datosUsuario.getImagenUrl(),datosUsuario.getEmail(),datosUsuario.getPassword(),this->instituto);
        mU->agregarPerfil(d);
    }
    else if(tipoUsuario==ESTUDIANTE){
        Estudiante* e = new Estudiante(datosUsuario.getNombre(),datosUsuario.getImagenUrl(),datosUsuario.getEmail(),datosUsuario.getPassword(),this->documento);
        mU->agregarPerfil(e);
    }
}

list<string> ControladorAltaUsuario::listarPerfiles(){
    ManejadorPerfil* mP = ManejadorPerfil::getInstancia();
    list<Perfil*> perfiles = mP->getPerfiles();
    list<string> personas;    
    for(auto itemA:perfiles){        
        personas.push_back(itemA->getEmail());       
    }
    return personas;
}

void ControladorAltaUsuario::cargarDocentes(){    
    ManejadorPerfil* mP = ManejadorPerfil::getInstancia();
    Docente* d1 = new Docente("Juan","sales.jpg","jsales@tecnologo.edu.uy","juan123","latu");
    Docente* d2 = new Docente("Yona", "pla.jpe", "ypla@tecnologo.edu.uy", "yona123", "latu");
    Docente* d3 = new Docente("Araí", "cabrera.jpg", "acabrera@tecnologo.edu.uy", "arai123", "latu");
    Docente* d4 = new Docente("Ramón", "salina.jpg", "rsalina@tecnologo.edu.uy", "ramoni123", "latu");
    Docente* d5 = new Docente("Laura", "gonzales.jpg", "lgonzales@tecnologo.edu.uy", "laurai123", "latu");
    Docente* d6 = new Docente("Fernando", "alonso.jpg", "falonso@tecnologo.edu.uy", "fernando123", "latu");
    Docente* d7 = new Docente("Otro", "otro.jpg", "otro@tecnologo.edu.uy", "fernando123", "buceo");
    mP -> agregarPerfil(d1);
    mP -> agregarPerfil(d2);
    mP -> agregarPerfil(d3);
    mP -> agregarPerfil(d4);
    mP -> agregarPerfil(d5);
    mP -> agregarPerfil(d6);
    mP -> agregarPerfil(d7);
}

void ControladorAltaUsuario::cargarEstudiantes(){
    ManejadorPerfil* mP = ManejadorPerfil::getInstancia();
    Estudiante* e1 = new Estudiante("Maria", "maria.jpg", "maria@gmail.com", "maria123", "latu");
    Estudiante* e2 = new Estudiante("Diego", "diego.jpg", "diego@gmail.com", "fernando123", "latu");
    Estudiante* e3 = new Estudiante("Juan", "juan.jpg", "juan@gmail.com", "fernando123", "latu");
    Estudiante* e4 = new Estudiante("Pablo", "pablo.jpg", "pablo@gmail.com", "pablo123", "latu");
    Estudiante* e5 = new Estudiante("Facundo", "facundo.jpg", "facundo@gmail.com", "facundo123", "latu");
    Estudiante* e6 = new Estudiante("Gervasio", "gervasio.jpg", "gervasio@gmail.com", "gervasio123", "buceo");
    Estudiante* e7 = new Estudiante("Claudia", "claudia.jpg", "claudia@gmail.com", "gabriel123", "buceo");
    Estudiante* e8 = new Estudiante("Nadia", "nadia.jpg", "nadia@gmail.com", "nadia123", "fing");
    mP -> agregarPerfil(e1);
    mP -> agregarPerfil(e2);
    mP -> agregarPerfil(e3);
    mP -> agregarPerfil(e4);
    mP -> agregarPerfil(e5);
    mP -> agregarPerfil(e6);
    mP -> agregarPerfil(e7);
    mP -> agregarPerfil(e8);
}
