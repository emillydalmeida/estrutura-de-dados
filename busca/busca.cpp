#include <iostream>
#include <string>
#include <iomanip>

struct Aluno{

    int matricula;
    std::string nome;
    double nota;
};


int main() {

    int n;

    std::cin >> n;
    
    Aluno aluno[n];
    
    int matricula;

    for (int i = 0; i < n; i++) 
    {
        std::cin >> aluno[i].matricula;
        std::cin.ignore();
        std::getline(std::cin, aluno[i].nome);
        std::cin >> aluno[i].nota;
    }

    std::cin >> matricula;

    bool encontrado;
    
    for (size_t i = 0; i < n; i++) 
    {
        if (matricula == aluno[i].matricula) 
        {
            std::cout << aluno[i].nome << "\n" << std::fixed << std::setprecision(1) << aluno[i].nota;
            encontrado = true;
            break;
        }
        else encontrado = false;
    }

    if (encontrado == false) std::cout << "NAO ENCONTRADA";
}