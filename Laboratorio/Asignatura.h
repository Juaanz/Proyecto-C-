#ifndef ASIGNATURA
#define ASIGNATURA
#include<string>
#include<list>
#include "Clase.h"
#include "DtInstanciaClase.h"
#include "DtInfoClase.h"
using namespace std;

class Docente;
class Rol;
class Clase;

class Asignatura{
    private:
        string codigo;
        string nombre;
        list<Clase*> clases;
        DtInstanciaClase* InstanciasClase;
    public:
      Asignatura();
      Asignatura(string,string);
      string getCodigo();
      void setCodigo(string);
      string getNombre();
      void setNombre(string);
      ~Asignatura();
      list<Clase*> getClases();
      void agregarClase(Clase*);
      list<DtInfoClase*> getDtInfoClase();
};
#endif