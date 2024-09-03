#include <string>
#include <iostream>


class Aluno {
 public:
    Aluno() {


    }  // construtor
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

Aluno* turma(std::string nomes[], int matriculas[], int N) {
    // Passo 1: Alocar memória para o vetor de objetos Aluno
    Aluno* t = new Aluno[N];

    // Passo 2: Preencher cada objeto Aluno com os dados fornecidos
    for (int i = 0; i < N; ++i) {
        t[i].escreveNome(nomes[i]);
        t[i].escreveMatricula(matriculas[i]);
    }

    // Passo 3: Retornar o ponteiro para o vetor alocado
    return t;
}

Aluno *turmas_uniao(Aluno t1[], Aluno t2[], int N1, int N2) {
    Aluno *tu = new Aluno[N1+N2];

    for(int i = 0; i < N1 ; i++){
        *(tu+i) = *(t1 + i);
    }
    for(int i = 0 ; i < N2; i++){
        tu[N1+i] = t2[i];
    }

    return tu;
}

int main() {

    int array1[] {1010, 2020, 3030};
    int array11[] {1010, 2020};
    std::string arrayS[] {"Fulano", "Beltrano", "Cicrano"};
    std::string arrayS2[] {"Fulano", "Beltrano"};
    Aluno* t1 = new Aluno[3];
    Aluno* t2 = new Aluno[2];
    Aluno* tu = new Aluno[5];


    // Cria o vetor de alunos
    t1 = turma(arrayS, array1, 3);
    t2 = turma(arrayS2, array11, 2);
    tu = turmas_uniao(t1, t2, 3, 2);
    // Exibe os alunos
    std::cout << "Dados dos alunos:" << std::endl;
    for (int i = 0; i < 5; ++i) {
        std::cout << "Nome: " << tu[i].devolveNome() 
                  << ", Matrícula: " << tu[i].devolveMatricula() 
                  << std::endl;
    }

    // Libera a memória alocada
    delete[] tu;
    delete[] t1;
    delete[] t2;

    return 0;

}