#include <iostream>


void inversao(int *vet, int N) {
    int vet2[N];
    for(int i = 0; i<N; i++){
        vet2[N-1-i] = vet[i];

    }
    for(int i = 0; i<N;i++){
        vet[i] = vet2[i];
    }
}


int main(void){
    int vet[5] = {1,2,3,4,5};
    inversao(vet, 5);

}