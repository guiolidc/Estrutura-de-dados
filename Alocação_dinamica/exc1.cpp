#include <iostream>

int main() {
    // Alocação de memória para um único int
    int* ptr = new int; 
    *ptr = 5;
    std::cout << "Valor do int: " << *ptr << std::endl;

    // Liberação da memória
    delete ptr;

    // Alocação de memória para um array de 5 ints
    int* arr = new int[5];
    for (int i = 0; i < 5; ++i) {
        arr[i] = i * 10;
    }

    for (int i = 0; i < 5; ++i) {
        std::cout << "arr[" << i << "] = " << arr[i] << std::endl;
    }

    // Liberação da memória
    delete[] arr;

    return 0;
}