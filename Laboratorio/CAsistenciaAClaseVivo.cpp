#include "CAsistenciaAClaseVivo.h"


list<string> CAsistenciaAClaseVivo::asignaturaInscipto(string email){
    
    list<string> codigosAsignaturas;    
    ManejadorPerfil* mP = ManejadorPerfil::getInstancia();
    
    if(Estudiante* e = dynamic_cast<Estudiante*>(mP->getPerfil(email))){   
        this->estudiante = e;     
                          
        list<Asignatura*> asignaturas =  e->getAsignaturas();
        for(auto itemA: asignaturas){
            codigosAsignaturas.push_back(itemA->getCodigo());        
        }

    }
    
    return codigosAsignaturas;
}
list<int> CAsistenciaAClaseVivo::clasesOnlineDisponibles(string codigo){
    this->codigo = codigo;
    list<int> clasesDisponibles;
    //Si no tiene fin entonces esta disponible
    //Manejador de clases y preguntar si la fecha de fin esta vacia entonces la cargo en la lista.
    ManejadorAsignatura* mA = ManejadorAsignatura::getInstancia();
    Asignatura* asignatura = mA->getAsignatura(codigo);
    DtTimeStamp* dtTimeStamp = NULL;
    
    list<Clase*> clases = asignatura->getClases();
    for(auto itemC:clases)
    {                
        if(itemC->getFin() == *dtTimeStamp){ //Si la clase no tiene fecha de fin entonces esta disponible
            clasesDisponibles.push_back(itemC->getId());
        } 
                    
    }       
    delete dtTimeStamp;
    return clasesDisponibles;
}
DtAsistir* CAsistenciaAClaseVivo::selectClase(int id){
    this->id = id;   
    DtAsistir* dtAsistir = new DtAsistir(this->codigo, id);                               
    return dtAsistir;
}
void CAsistenciaAClaseVivo::asistirClaseEnVivo(){
    //Creo la instancia de asiste clase en vivo.
    //Find clase
    //Find estudiante
    ManejadorClase* mC = ManejadorClase::getInstancia();
    Clase* c = mC->getClase(this->id);

    AsisteEnVivo* asisteEnVivo = new AsisteEnVivo(this->clase->getInicio(), this->clase->getFin(), this->estudiante);

    this->clase->agregarAsisteEnVivo(asisteEnVivo);
    
}

CAsistenciaAClaseVivo::~CAsistenciaAClaseVivo(){}