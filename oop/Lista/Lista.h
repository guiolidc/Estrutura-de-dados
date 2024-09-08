#ifndef LISTA_H
#define LISTA_H
#define MAXLISTA 100

class Lista{
private:
    int dados[MAXLISTA];
    int ultimo;
    Lista();
    ~Lista();
    bool listaCheia();
    bool listaVazia();
    int posicao(int dado);
    bool contem(int dado);
    bool igual(int dado1, int dado2);
    bool maior(int dado1, int dado2);
    bool menor(int dado1, int dado2);

public:
    int adiciona(int dado);
    int adicionaNoInicio(int dado);
    int adicionaNaPosicao(int dado, int posicao);
    int adicionaEmOrdem(int dado);
    int retira();
    int retiraDoInicio();
    int retiraDaPosicao(int posicao);
    int retiraEspesifico(int dado);
};

#endif