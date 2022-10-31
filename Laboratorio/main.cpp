#include <iostream>
#include "Fabrica.h"
#include "IControladorAltaUsuario.h"
#include "ICAsignacionDocente.h"
#include "IControladorInicioClase.h" 
#include "ICInscripcionAAsignaturas.h"
#include "ICEliminarAsignatura.h"
#include "ICEnvioMensaje.h"

using namespace std;

Fabrica *f;
IControladorAltaUsuario *iConAltaUsuario;
IControladorAltaAsignatura *iConAltaAsignatura;
ICAsignacionDocente *iConAsigDocente;
IControladorInicioClase *iConIniClase;
ICInscripcionAAsignaturas* iInscripcionAsig;
ICEliminarAsignatura* iConEliminarAsignatura;
ICEnvioMensaje * iCEnvioMensaje;

void Menu(){
    cout<<"___________________________________"<<endl;
    cout<<"0) CARGAR DATOS"<<endl;
    cout<<"___________________________________"<<endl;
    cout<<"1) ALTA USUARIO"<<endl;
    cout<<"2) ALTA ASIGNATURA"<<endl;
    cout<<"3) ASIGNACION DE DOCENTES A UNA ASIGNATURA"<<endl;
    cout<<"4) INSCRIPCION A ASIGNATURA"<<endl;
    cout<<"5) ASISTENCIA A CLASE EN VIVO"<<endl;
    cout<<"6) ENVIO DE MENSAJE"<<endl;
    cout<<"7) ELIMINACION DE ASIGNATURA"<<endl;
    cout<<"8) LISTADO DE CLASES"<<endl;
    cout<<"___________________________________"<<endl;
    cout<<"9) SALIR"<<endl<<endl<<endl;    
    cout<<"Ingrese opción: ";
    //cin<<opcion;

}

// Mostrar los perfiles
void MostrarDatos(){
    list<string> datos;
    datos = iConAltaUsuario ->listarPerfiles();
    cout<<"PERFILES"<<endl; 
    for(auto itemB:datos){
        cout << itemB << endl<<endl;
    }
}

// 1-  ALTA USUARIO

void MenuAltaUsuario(){
    string nombre;
    string imagenUrl;
    string email;
    string password;
    string documento;
    string instituto;
    string var;
    bool mientras = true;
    int tipo;
    while (mientras){
        cout << "ingrese un nombre: ";                          cin>>nombre;
        cout << "ingrese el link de su imagen: ";               cin>>imagenUrl;
        cout << "ingrese un email: ";                           cin>>email;
        cout << "ingrese su password: ";                        cin>>password;
        cout << "1-ESTUDIANTE" << endl;
        cout << "2-DOCENTE" << endl;
        cout << "ingrese una opcion: ";                         cin>>tipo;
        DtPerfil* perfil = new DtPerfil(nombre,imagenUrl,email,password);
        iConAltaUsuario->ingresarDatosPerfil(*perfil);
        if (tipo==1){
            cout <<"ingrese documento: ";                       cin>>documento;
            iConAltaUsuario->ingresarEstudiante(documento);
        }else {
            cout <<"ingrese instituto: ";                       cin>>instituto;
            iConAltaUsuario->ingresarDocente(instituto);
        }
        cout<<"Desea confirmar el alta usuario? s/n";            cin>>var;
        if (var == "s" || var == "S")
            iConAltaUsuario->altaPerfil();
        cout<<"Quiere agregar otro usuario? s/n"<<endl;    cin>>var;
        if (var == "n" || var == "N")
            mientras = false;
    }
}

// 2- ALTA ASIGNATURA

void MenuAltaAsignatura(){
    string nombre;
    string codigo;
    cout<< "ingrese el nombre de la asignatura: ";
    cin>>nombre;
    cout<< "ingrese el codigo de la asignatura: ";
    cin>>codigo;
    DtInstanciaClase* dtIC = new DtInstanciaClase();
    DtAsignatura* a = new DtAsignatura(codigo, nombre, dtIC);
    iConAltaAsignatura->ingresarDatosAsignatura(*a);
    iConAltaAsignatura->altaAsignatura();
}


//3- ASIGNACION DOCENTE A ASIGNATURA

// Mostrar las asignaturas
void MostrarAsignaturas(){
    list<string> codigosAsig = iConAsigDocente -> listarAsignaturas();
    for(auto item:codigosAsig)
        cout << "Codigo Asignatura : " << item << endl;
}

// docentes sin asignatura de codigo codigo
void DocentesSinAsig(string codigo){
    list<string> emails = iConAsigDocente -> docenteSinAsignatura(codigo);
    for(auto item:emails)
        cout << item << endl;
}

void MenuADAA(){
    string cod;
    string email;
    string var;
    bool mientras = true;
    TipoRol r;
    int tiporol;
    MostrarAsignaturas();
    cout<<"Escribe el codigo de la asignatura: ";               cin>>cod;
    DocentesSinAsig(cod);

    while (mientras){
        cout<<"Escribir correo del docente: ";                  cin>>email;
        cout<<"Tipo de asignacion:";
        cout<<"1-TEORICO \n2-PRACTICO \n3-MONITOREO" << endl;   cin>>tiporol;
        switch (tiporol){
            case 1: r = TEORICO;
                break;
            case 2: r = PRACTICO;
                break;
            case 3: r = MONITOREO;
                break;
            default:
                r = TEORICO;
                cout << "Por defecto: TEORICO";
                break;
        }
        iConAsigDocente->selectDocente(email, r);
        if (var == "s" || var == "S")
            iConAsigDocente->asignarDocente();
        cout<<"desea seguir agregando docentes? s/n";           cin>>var;
        if (var == "n" || var == "N")
            mientras = false;
    }
}
// 4- INSCRIPCION A ASIGNATURA

void inscripcionAsignatura(){
bool mientras = true;
string var;
string codigo;
string email;
cout<<"Escriba su email:"; cin>>email;
    while (mientras){
        list<string> codigos = iInscripcionAsig->asignaturasNoInscripto(email);
        for(auto item:codigos)
            cout << item << endl;
        cout<<"Escriba el codigo de la asignatura: "; cin>>codigo;
        iInscripcionAsig->selectAsignatura(codigo);
        cout<<"Confirmar inscripcion? s/n"; cin>>var;
        if (var == "s" || var == "S")
            iInscripcionAsig->inscribir(email);
        cout<<"Desea continuar inscribiendo asignaturas? s/n"; cin>>var;
        if (var == "n" || var == "N")
            mientras = false;
    }
}


//5- INICIO DE CLASE

void InicioClase(){
    string emailP;
    string emailE;
    string var;
    string codigo;
    bool demonitoreo;
    bool mientras = true;
    list<string> inscriptos;
    cout<<"INICIO DE CLASE - DOCENTE" << endl; 
    cout<<"Escribir email: ";                               cin>>emailP;
    list<string> asig = iConIniClase->asignaturasAsignadas(emailP);
    for(auto item:asig)
        cout<< item << endl;
    string nombre;
    int mes, dia, hora, minutos;
    cout<<"Ingrese nombre de la clase: "    <<endl;         cin>>nombre;
    cout<<"Ingrese el codigo de la asignatura: " <<endl;    cin>>codigo;

    cout<<"Ingrese mes de la clase: "       <<endl;         cin>>mes;
    cout<<"Ingrese dia de la clase: "       <<endl;         cin>>dia;
    DtFecha* fecha = new DtFecha(2021,mes,dia);
    cout<<"Ingrese hora de inicio: "        <<endl;         cin>>hora;
    cout<<"Ingrese minuto inicial: "        <<endl;         cin>>minutos;
    DtTimeStamp*  iniClase = new DtTimeStamp(*fecha, hora, minutos, 0);
    
    DtIniciarClase* iClase = new DtIniciarClase(codigo, nombre, *iniClase);


    demonitoreo = iConIniClase->selectAsignatura(*iClase);


    if (demonitoreo){
        inscriptos = iConIniClase->inscriptosAsignatura();
        while(mientras){
            cout<<"HABILITAR ESTUDIANTE" << endl;
            cout<<"Email del estudiante: ";                     cin>>emailE;
            iConIniClase->habilitar(emailE);
            cout<<"Quiere habilitar mas estudiantes? s/n"<<endl;
            cin>>var;
            if (var == "n" || var == "N")
                mientras = false;
        }    
    }
    DtIniciarClaseFull* iC = iConIniClase->datosIngresados();
    cout<<"Confirmar inicio de clase s/n";                      cin>>var;
    if (var == "s" || var == "S")
        iConIniClase->iniciarClase();

}
// 6- ENVIO DE MENSAJE 
void MenuEnvioMensaje(){
    int opc;
    int idP;
    string confirmacion;
    string texto;
    string res;
    cout<< "Clases online en el momento: " << endl;
    list<int> asistiendo = iCEnvioMensaje->clasesOnlineAsistiendo();
    for(auto item:asistiendo)
        cout<< item << endl;
    cout<<"Seleccione una, ingresando el codigo: "<< endl; cin>> opc;
    list<DtParticipacion*> mensajes = iCEnvioMensaje->selectClase(opc);
    for(auto item:mensajes)
        cout<< item << endl;
    cout<< "Desea realizar una respuesta ? S / N" << endl;
    if(res == "s" || res == "S"){
        cout<< " A que mensaje desea responder .. " << endl;
        cin>> idP;
        iCEnvioMensaje->responder(idP);
        cout<< " Ingrese su mensaje: " << endl;
        cin>>texto;
        iCEnvioMensaje->ingresarTexto(texto);
        cout<< " Desea confirmar su mensaje ? S / N " << endl;
        if(confirmacion == "s" || confirmacion == "S"){
            iCEnvioMensaje->enviarMensaje();
        }
    }else{
        cout << "Usted esta creando un nuevo mensaje .." << endl;
        cout<< " Ingrese su mensaje: " << endl;
        cin>>texto;
        iCEnvioMensaje->ingresarTexto(texto);
        cout<< " Desea confirmar su mensaje ? S / N " << endl;
        if(confirmacion == "s" || confirmacion == "S"){
            iCEnvioMensaje->enviarMensaje();
        }

    }



}
// 7- ELIMINACION DE ASIGNATURA

void MenuEliminarAsignatura(){
    string codigo;
    string a;
    list<string> asignaturas = iConEliminarAsignatura->listarAsignaturas();
    cout<<"Lista de asignaturas:" << endl;
    for(auto item:asignaturas)
        cout<< item << endl;
    cout<<"Seleccione el codigo de la asignatura que desea eliminar: ";
    cin>>codigo;
    iConEliminarAsignatura->selectAsignatura(codigo);
    cout<<"Desea eliminar la asignatura de codigo-> " << codigo <<"s/n?" <<endl;
    cin>>a;
    if ( a == "s" || a == "S" ){
        iConEliminarAsignatura->eliminarAsignatura();
    }
}



//  MAIN
int main(){
    f = Fabrica::getInstancia();
    iConAltaUsuario = f->getIControladorAltaUsuario();
    iConAltaAsignatura = f->getIControladorAltaAsignatura();
    iConAsigDocente = f->getICAsignacionDocente();
    iInscripcionAsig = f->getICInscripcionAAsignatura();
    iConEliminarAsignatura = f->getICEliminarAsignatura();
    iCEnvioMensaje = f->getICEnvioMensaje();

    int select;
    Menu();
    cin>>select;

    while (select != 9){
        switch (select) {
            case 0: /*CARGAR DATOS*/
                iConAltaUsuario->cargarDocentes();
                iConAltaUsuario->cargarEstudiantes();
                MostrarDatos();
                break;
            case 1: /*ALTA USUARIO*/
                MenuAltaUsuario();
                break;
            case 2: /*ALTA ASIGNATURA*/
                MenuAltaAsignatura();
                break;
            case 3: /*ASIGNACION DOCENTE A ASIGNATURA */
                MenuADAA();
                break;
            case 4: /*INSCRIPCION A ASIGNATURA*/
                inscripcionAsignatura();
                break;
            case 5: /* */

                break;
            case 6: /*ENVIO DE MENSAJE*/
                    MenuEnvioMensaje();

                break;
            case 7: /* ELIMINACION DE ASIGNATURA */
                MenuEliminarAsignatura();
                break;
            case 8: /* */
                break;
            default:

                break;
        }
    Menu();
    cin>>select;
    }
}