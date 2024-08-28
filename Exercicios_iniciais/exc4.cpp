#include <iostream>

void maximo_vetores(int vet1[], int vet2[], int N){
    for(int i = 0; i < N; i++){
        if(vet1[i] < vet2[i]){
            vet1[i] = vet2[i];
        }

    }
}

int main(void){
    int vetor1[5] = {10, 50, 30, 70, 20};
    int vetor2[5] = {30, 40, 20, 70, 10};
    maximo_vetores(vetor1, vetor2, 5);
    for(int i = 0; i< 5; i++){
        std::cout<<vetor1[i]<< " ";
    }
    std::cout<<"\n";
}
