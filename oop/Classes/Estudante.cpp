#include "Estudante.h"
#include <iostream>

Estudante::Estudante(){
    nota = new float[3]{0};
    mediaNotas = 0;
}
Estudante::~Estudante(){
    delete[] nota;
}
void Estudante::setNota(float vetor[]){
    for( int i = 0; i < 3; i++){
        this->nota[i] = vetor[i];
    }
}

void Estudante::media(){
    float soma = 0;
    for( int i = 0; i < 3; i++){
        soma += this->nota[i];
    }
    this->mediaNotas = soma/3;
    std::cout<< "A media é: "<< this->mediaNotas<< std::endl;
}
   