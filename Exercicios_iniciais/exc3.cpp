#include <iostream>

struct maxpos {
    int max;
    int pos;
};

maxpos maximo_posicao(int vet[], int N) {
    maxpos MP;
    MP.max = 0;
    MP.pos = 0;
    for(int i = 0; i<N; i++){
        if(vet[i]>MP.max){
            MP.pos = i;
            MP.max = vet[i];

        }
    }
    return MP;
}

int main(void){
    int vetor[5] = {10, 50, 30, 70, 20};
    maxpos valor = maximo_posicao(vetor, 5);
    std::cout<<valor.max << " " <<valor.pos << std::endl;
}