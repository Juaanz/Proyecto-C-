#include "DtDocente.h"
#include <iostream>

using namespace std;

DtDocente::DtDocente(){}
DtDocente::DtDocente(string nombre,string imagenUrl, string email, string password,string instituto):DtPerfil(nombre,imagenUrl,email,password){
    this->instituto=instituto;
}

string DtDocente::getInstituto(){
    return this->instituto;
}
DtDocente::~DtDocente(){}

ostream& operator <<(ostream& salida,DtDocente& docente){
    cout<< "NOMBRE:" << docente.getNombre() << "IMAGEN:" << docente.getImagenUrl() << "EMAIL:" << docente.getEmail() << "PASS:" << docente.getPassword() << "DOCUMENTO:" << docente.getInstituto() << endl;
    return salida;
}