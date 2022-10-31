#include "DtLog.h"
using namespace std;

DtLog::DtLog(){}

DtLog::DtLog(DtTimeStamp inicio,DtTimeStamp fin){
    this->inicio = inicio;
    this->fin = fin;
   
}
DtTimeStamp DtLog::getInicio(){
    return this->inicio;
}
void DtLog::setInicio(DtTimeStamp inicio){
    this->inicio=inicio;
}
DtTimeStamp DtLog::getFin(){
    return this->fin;
}
void DtLog::setFin(DtTimeStamp fin){
    this->fin = fin;
}
DtLog::~DtLog(){}