#include <iostream>

int maximo(int vet[], int N){
    int max = vet[0];
    for(int i = 0; i<N; i++){
        if(max < vet[i]){
            max = vet[i];
        }
    }
    return max;
}

int main(void){
    int vetor[5];
    std::cout<<"Digite 5 valores: \n";
    std::cin>>vetor[0];
    std::cin>>vetor[1];
    std::cin>>vetor[2];
    std::cin>>vetor[3];
    std::cin>>vetor[4];
    int maior = maximo(vetor, 5);
    std::cout<< maior<< std::endl;
}