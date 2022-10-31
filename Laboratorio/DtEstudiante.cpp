#include "DtEstudiante.h"
#include <iostream>
using namespace std;

DtEstudiante::DtEstudiante(){}

DtEstudiante::DtEstudiante(string nombre,string imagenUrl, string email, string password,string documento):DtPerfil(nombre,imagenUrl,email,password){
    this->documento = documento;
}


string DtEstudiante::getDocumento(){
     return this->documento;
}
        
DtEstudiante::~DtEstudiante(){}

ostream& operator <<(ostream& salida, DtEstudiante& estudiante){
    cout<< "NOMBRE:" << estudiante.getNombre() << "IMAGEN:" << estudiante.getImagenUrl() << "EMAIL:" << estudiante.getEmail() << "PASS:" << estudiante.getPassword() << "DOCUMENTO:" << estudiante.getDocumento() << endl;
    return salida;
}
