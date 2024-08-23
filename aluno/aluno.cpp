#include <iostream>

struct Aluno{
    std::string nomeAluno;
    int matricula;
    std::string disciplina;
    double notaAluno;
};

int main() {
    
    Aluno aluno;

    std::cin >> aluno.nomeAluno;
    std::cin.ignore() >>  aluno.matricula;
    std::cin >> aluno.disciplina;
    std::cin.ignore() >>  aluno.notaAluno;

    if (aluno.notaAluno < 7)
    std::cout << aluno.nomeAluno << " reprovado(a) em " << aluno.disciplina;
    else
    std::cout << aluno.nomeAluno << " aprovado(a) em " << aluno.disciplina;
}