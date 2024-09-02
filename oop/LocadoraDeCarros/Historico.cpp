#include "Historico.h"
#include <iostream>
#include <cstring>


Historico::Historico() {

    for(int i = 0; i < 20; i++) {
        std::memset(transacoes[i], 0, sizeof(transacoes[i]));
    }
}


Historico::~Historico() {

}

// Adiciona uma transação ao histórico
void Historico::adicionaTransacao(char transacao[20]) {
    for(int i = 0; i < 20; i++) {
        if(transacoes[i][0] == '\0') {  // Verifica se a primeira posição está vazia
            std::strcpy(transacoes[i], transacao);  // Copia a nova transação
            break;
        }
    }
}


void Historico::imprimirHistorico() {
    std::cout << "Historico de Transacoes:" << std::endl;
    for(int i = 0; i < 20; i++) {
        if(transacoes[i][0] != '\0') {  // Apenas imprime transações não vazias
            std::cout << "Transacao [" << i + 1 << "]: " << transacoes[i] << std::endl;
        }
    }

    // Exibe o tempo em que o objeto foi criado
    std::cout << "Historico iniciado em: " << std::ctime(&agora) << std::endl;
}
