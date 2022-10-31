#include "Fabrica.h"
#include "ControladorAltaUsuario.h"
#include "ControladorAltaAsignatura.h"
#include "CAsignacionDocente.h"
#include "CInscripcionAAsignaturas.h"
#include "CEliminarAsignatura.h"
#include "CEnvioMensaje.h"

Fabrica* Fabrica::instancia = NULL;

Fabrica::Fabrica(){}

Fabrica* Fabrica::getInstancia(){
    if (instancia == NULL)
        instancia = new Fabrica();
    return instancia;
}

IControladorAltaUsuario* Fabrica::getIControladorAltaUsuario(){    
    return new ControladorAltaUsuario();    
}
IControladorAltaAsignatura* Fabrica::getIControladorAltaAsignatura(){
    return new ControladorAltaAsignatura();
}

ICAsignacionDocente* Fabrica::getICAsignacionDocente(){
    return new CAsignacionDocente();
}
ICInscripcionAAsignaturas * Fabrica::getICInscripcionAAsignatura(){
    return new CInscripcionAAsignaturas();
}
ICEliminarAsignatura* Fabrica::getICEliminarAsignatura(){
    return new CEliminarAsignatura();
}

ICEnvioMensaje * Fabrica::getICEnvioMensaje(){
    return new CEnvioMensaje();
}

Fabrica::~Fabrica(){}



