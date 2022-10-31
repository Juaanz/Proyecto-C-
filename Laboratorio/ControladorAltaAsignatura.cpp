#include "ControladorAltaAsignatura.h"

void ControladorAltaAsignatura::ingresarDatosAsignatura(DtAsignatura dtAsignatura){
    this->dtAsignatura = dtAsignatura;
}
void ControladorAltaAsignatura::altaAsignatura(){
        Asignatura* a = new Asignatura(dtAsignatura.getCodigo(), dtAsignatura.getNombre());                
        ManejadorAsignatura* ma = ManejadorAsignatura::getInstancia();                
        ma->agregarAsignatura(a);

}
ControladorAltaAsignatura::~ControladorAltaAsignatura(){}