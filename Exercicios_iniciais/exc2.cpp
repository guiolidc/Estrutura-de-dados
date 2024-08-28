#include <iostream>

int posicao(int vet[], int N){
    int indice = 0;
    int max = vet[0];
    for(int i = 0; i<N; i++){
        if(max < vet[i]){
            max = vet[i];
            indice = i;
        }
    }
    return indice;
}

int main(void){
    int vet[5] = {10, 50, 30, 70, 20};
    int pos = posicao(vet, 5);
    std::cout<<pos<<std::endl;
    return 0;
}