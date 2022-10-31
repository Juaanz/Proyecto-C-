#include "Docente.h"

Docente::Docente(){}

Docente::Docente(string nombre,string imagenUrl,string email,string password,string instituto):Perfil(nombre,imagenUrl,email,password){
    this->instituto = instituto;
}

string Docente::getInstituto(){
    return this->instituto;
}

void Docente::setInstituto(string instituto){
    this->instituto=instituto;
}

bool Docente::noDictaAsignatura(string codigo){
    list<Rol*>::iterator it=this->roles.begin();
    bool noEncontre=true;
    while(it!=this->roles.end() && noEncontre){
        if((*it)->getCodigoAsignatura()==codigo){
            noEncontre=false;
        }
        it++;
    }
    return noEncontre;
}

void Docente::agregarAsignatura(Rol* r){
    this->roles.push_back(r);

}

void Docente::setInicioClase(DtIniciarClase* ic){
    this->ic = ic;
}

DtIniciarClase* Docente::getInicioClase(){
    return this->ic;

}


Docente::~Docente(){}

list<string> Docente::asignaturasDocente(){
    list<Rol*>::iterator it=this->roles.begin();
    list<string> codigos;
    while(it!=this->roles.end() ){
        codigos.push_back((*it)->getCodigoAsignatura());
        it++;
    }
    return codigos;
}


//hacerrrrr
void Docente::eliminarAsignatura(string cod){
    for(auto item:this->roles){
        if (item->esAsignatura(cod))
            item->eliminar();
    }
}