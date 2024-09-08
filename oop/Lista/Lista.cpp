#include "Lista.h"

Lista::Lista(){
    ultimo = -1;
}

Lista::Lista(){
    ultimo = -1;
}

bool Lista::listaCheia(){
    if(ultimo == MAXLISTA-1) return(true);
    else return(false);
}

bool Lista::listaVazia(){
    if (ultimo == -1) return(true);
    else return(false);
}

int Lista::adiciona(int dado){
    if(this->listaCheia()) return(ERROLISTACHEIA);
    else{
        ultimo += 1;
        dados[ultimo] = dado;
        return(ultimo);
    }
}

int Lista::retira(){
    if(listaVazia()) return(ERROLISTAVAZIA);
    else{
        ultimo -= 1;
        return(dados[ultimo+1]);
    }
}

int Lista::adicionaNoInicio(int dado){
    if(this->listaCheia()) return(ERROLISTACHEIA);
    else{
        ultimo += 1;
        int posicao = ultimo;
        while(posicao > 0){
            dados[posicao] = dados[posicao-1];
            posicao -= 1;
        }
        dados[0] = dado;
        return dados[0];
    }
}

int Lista::retiraDoInicio(){
    if(this->listaVazia()) return(ERROLISTAVAZIA);
    else{
        ultimo -= 1;
        int valor = dados[0];
        for (int i = 0; i < ultimo; i++){
            dados[i] = dados[i+1];
        }
        return valor;
    }
}

int Lista::adicionaNaPosicao(int dado, int destino){
    if (this->listaCheia()) return(ERROLISTACHEIA);
    else{
        if (destino > ultimo + 1 || destino < 0) return(ERROPOSICAO);
        ultimo += 1;
        int posicao = ultimo;
        while(posicao < destino){
            dados[posicao] = dados[posicao-1];
            posicao -= 1;
        }
        dados[destino] = dado;
        return destino;
    }
}

int Lista::retiraDaPosicao(int posicao){
    if (posicao > ultimo || posicao < 0) return(ERROPOSICAO);
    else{
        ultimo -= 1;
        int valor = dados[posicao];
        for (int i = posicao; i <= ultimo; i++){
            dados[i] = dados[i+1];
        }
        return(valor);
    }
}


