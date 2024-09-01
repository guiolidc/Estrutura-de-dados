// Aluno.h

#ifndef ALUNO_H
#define ALUNO_H

#include <string>

class Aluno {
 public:
    // Construtor padrão
    Aluno();

    // Destruidor
    ~Aluno();

    // Métodos de acesso
    std::string devolveNome() const;
    int devolveMatricula() const;

    // Métodos de modificação
    void escreveNome(const std::string& nome_);
    void escreveMatricula(int matricula_);

 private:
    // Atributos privados
    std::string nome;
    int matricula;
};

#endif // ALUNO_H
