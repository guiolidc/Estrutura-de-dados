#ifndef CLASSEPILHA_H
#define CLASSEPILHA_H
#define MAXPILHA 100
#define ERROPILHACHEIA -1
#define ERROPILHAVAZIA -2

class ClassePilha
{
private:
    int topo;
    int dados[MAXPILHA];
    bool pilhaCheia();
    bool pilhaVazia();
public:
    ClassePilha();
    ~ClassePilha();
    int empilha(int dado);
    int desempilha();
    int verificaTopo();
};








#endif