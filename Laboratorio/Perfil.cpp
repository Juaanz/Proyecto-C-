#include "Perfil.h"

Perfil::Perfil(){}
Perfil::Perfil(string nombre, string imagenUrl, string email, string password){
    this -> nombre = nombre;
    this -> imagenUrl = imagenUrl;
    this -> email = email;
    this -> password = password;
}
Perfil::~Perfil(){}

void Perfil::setNombre(string nombre)       {    this -> nombre = nombre;   }
string Perfil::getNombre()                  {    return this -> nombre;     }

void Perfil::setImagenUrl(string imagenUrl) {    this -> imagenUrl = imagenUrl; }
string Perfil::getImagenUrl()               {    return this -> imagenUrl;      }

void Perfil::setEmail(string email)         {    this -> email = email;         }
string Perfil::getEmail()                   {    return this -> email;          }

void Perfil::setPassword(string password)   {    this -> password = password;   }
string Perfil::getPassword()                {    return this -> password;       } 