#include <iostream>
// Copyright [2022] <Guilherme Oliveira de Campos>
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
        this->nome = nome_;
    }
    void escreveMatricula(int matricula_) {
        this->matricula = matricula_;
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

int *turma_conta(Aluno t[], int N) {
    int *c = new int[26]{0};
    for (int i = 0; i < N; i++) {
        int letra = int(t[i].devolveNome()[0]);
        c[letra] += 1;
    }
    return c;
}


int main() {
    int N;
    std::cout << "Digite o número de alunos: ";
    std::cin >> N;

    // Verifica se o número de alunos é positivo
    if (N <= 0) {
        std::cerr << "Número de alunos deve ser positivo." << std::endl;
        return 1;
    }

    // Aloca memória para vetores dinâmicos
    std::string* arrayNomes = new std::string[N];
    int* arrayMatricula = new int[N];

    // Preenche os vetores com dados de exemplo
    // Você pode modificar para ler os dados do usuário se preferir
    for (int i = 0; i < N; ++i) {
        std::cout << "Digite o nome do aluno " << i + 1 << ": ";
        std::cin >> arrayNomes[i];
        std::cout << "Digite a matrícula do aluno " << i + 1 << ": ";
        std::cin >> arrayMatricula[i];
    }

    // Cria o vetor de alunos
    Aluno* t = turma(arrayNomes, arrayMatricula, N);

    // Exibe os alunos
    std::cout << "Dados dos alunos:" << std::endl;
    for (int i = 0; i < N; ++i) {
        std::cout << "Nome: " << t[i].devolveNome() 
                  << ", Matrícula: " << t[i].devolveMatricula() 
                  << std::endl;
    }

    // Libera a memória alocada
    delete[] t;
    delete[] arrayNomes;
    delete[] arrayMatricula;

    return 0;

}