#ifndef HISTORICO_H
#define HISTORICO_H
#include <ctime>
using namespace std;

class Historico {

public:
    Historico();
    ~Historico();
    void adicionaTransacao(char transacao[]);
    void imprimirHistorico();

private:
    
    char transacoes[20][20];
    time_t agora = std::time(0);

};



#endif