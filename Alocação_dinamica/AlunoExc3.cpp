#include <iostream>

#include <string>


class Aluno {
 public:
    Aluno() {}  // construtor
    ~Aluno() {}  // destrutor
    std::string devolveNome() {
        return nome;
    }
    int devolveMatricula() {
        return matricula;
    }
    void escreveNome(std::string nome_) {
        nome = nome_;
    }
    void escreveMatricula(int matricula_) {
        matricula = matricula_;
    }
 private:
    std::string nome;
    int matricula;
};



void turmas_divisao(Aluno t[], int k, int N, Aluno **pt1, Aluno **pt2) {
    Aluno *t1 = new Aluno[k];
    Aluno *t2 = new Aluno[N-k];
    for(int i = 0; i < k; i++){
        t1[i] = t[i];
    }
    for( int i = k; i < N; i++){
        t2[i-k] = t[i];
    }

    *pt1 = t1;
    *pt2 = t2;
}

int main(){
    const int N = 5;
    Aluno t[N];

    // Definindo os alunos
    t[0].escreveNome("Fulano");
    t[0].escreveMatricula(1010);
    
    t[1].escreveNome("Beltrano");
    t[1].escreveMatricula(2020);
    
    t[2].escreveNome("Fulana");
    t[2].escreveMatricula(7070);
    
    t[3].escreveNome("Beltrana");
    t[3].escreveMatricula(8080);
    
    t[4].escreveNome("Cicrana");
    t[4].escreveMatricula(9090);

    int k = 2;

    Aluno *pt1 = nullptr;
    Aluno *pt2 = nullptr;

    turmas_divisao(t, k, N, &pt1, &pt2);

    std::cout << "Conteúdo de pt1: " << std::endl;
    for(int i = 0; i < k; i++) {
        std::cout << "Nome: " << pt1[i].devolveNome() << ", Matrícula: " << pt1[i].devolveMatricula() << std::endl;
    }

    std::cout << "Conteúdo de pt2: " << std::endl;
    for(int i = 0; i < N-k; i++) {
        std::cout << "Nome: " << pt2[i].devolveNome() << ", Matrícula: " << pt2[i].devolveMatricula() << std::endl;
    }

    // Liberando a memória alocada
    delete[] pt1;
    delete[] pt2;

    return 0;
}

