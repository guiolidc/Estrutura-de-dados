#include "Estudante.h"
#include <iostream>
using namespace std;


int main(){
    Estudante bruno;
    float vetor[3] {7, 8.5, 9.5};
    bruno.setNota(vetor);
    bruno.media();

    return 0;

}