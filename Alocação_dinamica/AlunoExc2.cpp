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

Aluno *turmas_uniao(Aluno t1[], Aluno t2[], int N1, int N2) {
    Aluno *tu;

    for(int i = 0; i < N1 ; i++){
        *(tu+i) = *(t1 + i);
    }
    for(int i = 0 ; i < N2; i++){
        tu[N1+i] = t2[i];
    }

    return tu;
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
    Aluno* array1 = new Aluno[N];
    Aluno* array2 = new Aluno[N];
    Aluno a = new Aluno();

    Aluno b = new Aluno
    array1[0] = {a, {'Beltrano',2020}};

    // Cria o vetor de alunos
    Aluno* t = turmas_uniao(array1, array2, N, 3);

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