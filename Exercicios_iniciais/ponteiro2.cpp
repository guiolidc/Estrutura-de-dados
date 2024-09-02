#include <iostream>


void modificarArray(int arr[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        arr[i] *= 2;
    }
}

int main() {
    int array[] = {1, 2, 3, 4, 5};
    int tamanho = sizeof(array) / sizeof(array[0]); 

    std::cout << "Array antes da modificação:\n";
    for (int i = 0; i < tamanho; i++) {
        std::cout << array[i] << " ";
    }
    std::cout << "\n";

   
    modificarArray(&array[0], tamanho);
    // tambem pode ser a modificarArray(array, tamanho);

    std::cout << "Array depois da modificação:\n";
    for (int i = 0; i < tamanho; i++) {
        std::cout << array[i] << " ";
    }
    std::cout << "\n";

    return 0;
}