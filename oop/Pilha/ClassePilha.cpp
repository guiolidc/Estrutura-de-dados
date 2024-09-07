#include "ClassePilha.h"


ClassePilha::ClassePilha(){
    topo = -1;
}

ClassePilha::~ClassePilha(){
}

bool ClassePilha::pilhaCheia(){
    if (topo == MAXPILHA -1) return true;
    else return false;
}

bool ClassePilha::pilhaVazia(){
    if (topo == -1) return true;
    else return false;
}

int ClassePilha::empilha(int dado){
    if (this->pilhaCheia()){
        return(ERROPILHACHEIA);
    }else{
        topo += 1;
        dados[topo] = dado;
        return topo;
    }
}

int ClassePilha::desempilha(){
    if(this->pilhaVazia()) return(pilhaVazia());
    else{
        topo -= 1;
        return(dados[topo+1]);
    }
}

int ClassePilha::verificaTopo(){
    if(this->pilhaVazia()) return(ERROPILHAVAZIA);
    else return(dados[topo]);
}