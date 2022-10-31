#ifndef DTASISTIR
#define DTASISTIR

#include <string>

using namespace std;

class DtAsistir{

    private:
        string codigo;
        int id;

    public:
        DtAsistir();
        DtAsistir(string codigo, int id);
        string getCodigo();
        int getId();
        ~DtAsistir();
};

#endif