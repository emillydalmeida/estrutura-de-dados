#include<iostream>
#include<iomanip>

struct Aluno{

    std::string name;
    int matricula;
    std::string disciplina;
    double nota;
};

int main(){

    Aluno aluno1;
    Aluno aluno2;

    std::cin >> aluno1.name;    
    std::cin >> aluno1.matricula;
    std::cin >> aluno1.disciplina;
    std::cin >> aluno1.nota;

    std::cin >> aluno2.name;    
    std::cin >> aluno2.matricula;
    std::cin >> aluno2.disciplina;
    std::cin >> aluno2.nota;

    if (aluno1.nota == aluno2.nota)
    {
        std::cout << aluno1.name << " e " << aluno2.name << std::fixed << std::setprecision(1) << " , " << aluno1.nota;
    }
    else if (aluno1.nota > aluno2.nota)
    {
        std::cout << aluno1.name << " , " << std::fixed << std::setprecision(1) << aluno1.nota;
    }
    else std::cout << aluno2.name << " , " << std::fixed << std::setprecision(1) << aluno2.nota;
    
}