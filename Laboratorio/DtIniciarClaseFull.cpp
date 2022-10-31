#include "DtIniciarClaseFull.h"

DtIniciarClaseFull::DtIniciarClaseFull(){

}
DtIniciarClaseFull::DtIniciarClaseFull(string codigo,string nombre, DtTimeStamp fechahora, int id):DtIniciarClase(codigo,nombre,fechahora){
    this->id = id;
}
DtIniciarClaseFull::~DtIniciarClaseFull(){

}
