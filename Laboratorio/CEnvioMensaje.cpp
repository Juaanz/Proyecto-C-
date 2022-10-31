#include "CEnvioMensaje.h"
#include "ManejadorClase.h"
#include "DtParticipacion.h"
list<int> CEnvioMensaje::clasesOnlineAsistiendo(){
    ManejadorClase * mC = ManejadorClase::getInstancia();
    list<int> aux;
    DtTimeStamp *dtTimeStamp = new DtTimeStamp();
    list <Clase*> clases = mC->getClases();
    for(auto itemC: clases){
        if(itemC ->getFin() == *dtTimeStamp)
            aux.push_back(itemC->getId());

    }
    delete dtTimeStamp;
    return aux;

}
list<DtParticipacion*> CEnvioMensaje::selectClase(int id){
    this->id = id;

    ManejadorClase * mC = ManejadorClase::getInstancia();
    Clase *c = mC->getClase(id);
    list<Participacion*> part = c->getParticipaciones();
    //DtParticipacion *dtP = new DtParticipacion();

    list<DtParticipacion*> dtP;
    for(auto itemP : part){
        DtParticipacion * dtParticipacion = new DtParticipacion(itemP->getId(),itemP->getDtTimeStamp(),itemP->getMensaje());
        dtP.push_back(dtParticipacion);

    }
    return dtP;

}

void CEnvioMensaje::responder (int idP){
    this->idP = idP;

}
void CEnvioMensaje::ingresarTexto(string txt){
    this->txt = txt;
}
// main pide fecha a sistema o usuario
// DtTimeStamp tomarFechaSistema();
void CEnvioMensaje::enviarMensaje(){ // recibo id ?  enviarMensaje(DtTimeStamp fecha, int id)
    
    DtTimeStamp* dts = new DtTimeStamp();
    time_t tiempo=time(0);
    struct tm* tlocal = localtime(&tiempo);
    char anio[128];
    char mes[128];
    char dia[128];
    char hora[128];
    char min[128];
    char seg[128];
    strftime(anio,128, "%G",tlocal);
    strftime(mes,128, "%m",tlocal);
    strftime(dia,128, "%d",tlocal);
    strftime(hora,128, "%H",tlocal);
    strftime(min,128, "%M",tlocal);
    strftime(seg,128, "%S",tlocal);
    DtFecha* dtf = new DtFecha(atoi(anio),atoi(mes),atoi(dia));
    dts->setHora(atoi(hora));
    dts->setMinuto(atoi(min));
    dts->setHora(atoi(seg));
    dts->setFecha(*dtf);
    

    ManejadorClase * mC = ManejadorClase::getInstancia();
    Clase *c = mC->getClase(this->id);
    if(this->idP == 0 ){// si no responde
        Participacion *p = new Participacion(mC->autoEnumParticipacion(),*dts,this->txt);
        // despues que esta creada
        c->agregarParticipacion(p); // lo agrego al final de la lista de participaciones
    }else{
        //participacion que es respuesta a otra
         Participacion* p = c->getParticipacion(this->idP);
         Participacion *nuevaPart = new Participacion(mC->autoEnumParticipacion(),*dts,this->txt); // revisar los parametros del constructor
         p->agregarPart(nuevaPart);
    }
 
}
CEnvioMensaje::~CEnvioMensaje(){}
