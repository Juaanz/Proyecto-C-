#include "DtPerfil.h" 

DtPerfil::DtPerfil(){}

DtPerfil::DtPerfil(string nombre, string imagenUrl, string email, string password){
    this->nombre = nombre;
    this->imagenUrl = imagenUrl;
    this->email = email;
    this->password = password;
}
string DtPerfil::getNombre(){
    return this->nombre;
}
string DtPerfil::getImagenUrl(){
    return this->imagenUrl;
}
string DtPerfil::getEmail(){
    return this->email;
}
string DtPerfil::getPassword(){
    return this->password;
}
DtPerfil::~DtPerfil(){}


