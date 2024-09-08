#include "ClasseFila.h"


ClasseFila::ClasseFila(){
    fimDaFila = -1;
}

ClasseFila::~ClasseFila(){

}

bool ClasseFila::filaCheia(){
    if (fimDaFila == MAXFILA - 1) return true;
    else return false;
}

bool ClasseFila::filaVazia(){
    if (fimDaFila == -1) return true;
    else return false;
}

int ClasseFila::adicionarDado(int dado){
    if(this->filaCheia()) return(ERROFILACHEIA);
    else{
        fimDaFila += 1;
        dados[fimDaFila] = dado;
        return fimDaFila;
    }
}

int ClasseFila::retirarDado(){
    if (this->filaVazia()) return(ERROFILAVAZIA);
    else{
        int dado = dados[0];
        for (int i = 0; i < fimDaFila; i++){
            dados[i] = dados[i+1];
        }
        fimDaFila -= 1;
        return dado;
    }
}

int ClasseFila::verificaUltimo(){
    return dados[fimDaFila];
}