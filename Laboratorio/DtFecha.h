#ifndef DTFECHA
#define DTFECHA
#include<iostream>

using namespace std;

class DtFecha{
    private:
        int dia;
        int mes;
        int anio;
    public:
        DtFecha();
        DtFecha(int,int,int);
        int getDia();
        int getMes();
        int getAnio();
        
        ~DtFecha();

        friend ostream& operator <<(ostream& os, const DtFecha& fe);
        friend bool operator ==(const DtFecha&, const DtFecha&);
};
#endif