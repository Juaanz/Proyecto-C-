#ifndef DTINICIARCLASE
#define DTINICIARCLASE
#include<iostream>
#include"DtTimeStamp.h"

using namespace std;

class DtIniciarClase{
    private:
        string codigo;
        string nombre;
        DtTimeStamp fechahora;
    public:
        DtIniciarClase();
        DtIniciarClase(string,string, DtTimeStamp);
        string getCodigo();
        string getNombre();
        DtTimeStamp getFechaHora();
        ~DtIniciarClase();
};
#endif