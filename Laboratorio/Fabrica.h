#ifndef FABRICA
#define FABRICA
#include "IControladorAltaUsuario.h"
#include "IControladorAltaAsignatura.h"
#include "ICAsignacionDocente.h"
#include "ICInscripcionAAsignaturas.h"
#include "ICEliminarAsignatura.h"
#include "ICEnvioMensaje.h"
#include "ICListarClases.h"
#include "ICAsistenciaAClaseVivo.h"


class Fabrica{
    private:
        static Fabrica* instancia;
        Fabrica();
    public:
        static Fabrica* getInstancia();
        IControladorAltaUsuario* getIControladorAltaUsuario();       
        IControladorAltaAsignatura* getIControladorAltaAsignatura();
        ICAsignacionDocente* getICAsignacionDocente();
        ICInscripcionAAsignaturas * getICInscripcionAAsignatura();
        ICEliminarAsignatura * getICEliminarAsignatura();
        ICEnvioMensaje * getICEnvioMensaje();
        ICListarClases * getICListarClases();
        ICAsistenciaAClaseVivo * getICAsistenciaAClaseVivo();


        ~Fabrica();
};
#endif

