#include <iostream>
using namespace std;

void imprimeArray(int* array, int tamanho){
    for( int i = 0; i < tamanho; i++){
        cout << *(array + i) << "\n";
    }
}

int main(void){
    int entrada;
    cout << "Dê o tamanho do vetor: ";
    cin >> entrada;
    int* vetor = new int[entrada];

    for (int i = 0; i < entrada; i++){
        cout << i+1 << "° posição: ";
        cin  >> vetor[i];
    }
    imprimeArray(vetor, entrada);

    delete[] vetor;

}