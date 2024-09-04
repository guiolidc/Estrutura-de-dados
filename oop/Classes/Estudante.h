#ifndef ESTUDANTES_H
#define ESTUDANTE_H

class Estudante{
public:
    Estudante();
    ~Estudante();
    void setNota(float vetor[]);
    void media();
private:
    float* nota;
    float mediaNotas;


};
#endif