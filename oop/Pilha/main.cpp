#include <iostream>
#include "ClassePilha.h"

int main() {
    ClassePilha pilha;

    // testando classePilha
    pilha.empilha(10);
    pilha.empilha(20);
    pilha.empilha(30);

    std::cout << "Topo da pilha: " << pilha.verificaTopo() << std::endl;

    std::cout << "Desempilhando: " << pilha.desempilha() << std::endl;
    std::cout << "Topo da pilha agora: " << pilha.verificaTopo() << std::endl;

    pilha.empilha(40);
    std::cout << "Topo após empilhar 40: " << pilha.verificaTopo() << std::endl;

    return 0;
}
