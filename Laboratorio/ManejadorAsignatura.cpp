#include "ManejadorAsignatura.h"
#include "Asignatura.h"
#include <list>

using namespace std;

ManejadorAsignatura::ManejadorAsignatura(){}
ManejadorAsignatura* ManejadorAsignatura::instancia = NULL;
ManejadorAsignatura* ManejadorAsignatura::getInstancia(){
    if(instancia == NULL){
        instancia = new ManejadorAsignatura();
    }
    return instancia;
}

list<Asignatura*> ManejadorAsignatura::getAsignaturas(){
    //return this->asignatura;
    list<Asignatura*> aux;
    for(auto item:this->asignatura){
        aux.push_back(item);
    }
    return aux;
 
}
Asignatura* ManejadorAsignatura::getAsignatura(string codigo){
    list<Asignatura*>::iterator it=this->asignatura.begin();
    bool encontre=false;
    while(it!=this->asignatura.end() && !encontre){
        if((*it)->getCodigo() == codigo){
            encontre=true;

        }
        it++;
    }
    it--;
    return *it;
}



void ManejadorAsignatura::agregarAsignatura(Asignatura* asignatura){    
    this->asignatura.push_back(asignatura);    
}

void ManejadorAsignatura::quitarAsignatura(Asignatura* asignatura){
    this->asignatura.remove(asignatura);
}