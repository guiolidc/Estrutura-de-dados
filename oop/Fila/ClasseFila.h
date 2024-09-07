#ifndef CLASSEFILA_H
#define CLASSEFILA_H
#define MAXFILA 100
#define ERROFILACHEIA -1
#define ERROFILAVAZIA -2


class ClasseFila{
private:
    int fimDaFila;
    int dados[MAXFILA];
    bool filaCheia();
    bool filaVazia();
public:
    ClasseFila();
    ~ClasseFila();
    int adicionarDado(int dado);
    int retirarDado();
    int verificaUltimo();
};

#endif