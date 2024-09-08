#include <iostream>
#include "ClasseFila.h"

int main() {
    ClasseFila fila;

    for (int i = 0; i < 100; i++){
        fila.adicionarDado(i*10);
    }
    for (int i = 0; i < 10; i++){
        fila.retirarDado();
    }

    std::cout << "Último da fila: " << fila.verificaUltimo() << std::endl;

    std::cout << "Retirando da fila: " << fila.retirarDado() << std::endl;
    std::cout << "Retirando da fila: " << fila.retirarDado() << std::endl;
    std::cout << "Adiciona 10 na posição: " << fila.adicionarDado(10) << std::endl;
    std::cout << "Último da fila agora: " << fila.verificaUltimo() << std::endl;

    return 0;
}
