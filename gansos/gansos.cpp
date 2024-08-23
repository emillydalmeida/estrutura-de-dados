#include<iostream>

bool Frase(std::string frase)
{
    int count{0};

    for (int i = 0; i < frase.length(); i++)
    {
        if (frase[i] != 'a') false;
        else if (frase[i] == 'a') count++;
        else if (count == 1 && frase[i] == ' ' && (frase[i + 1] == 'a' || frase [i+1] == 'b')) count++;
        else if (count > 1 && frase[i] == ' ' && (frase[i + 1] == 'b' || frase [i+1] == 'c')) count++;
        else if (count > 2 && frase[i] == ' ' && (frase[i + 1] == 'c' || frase [i+1] == 'd')) count++;
        else if (count > 3 && frase[i] == ' ' && (frase[i + 1] == 'd' || frase [i+1] == 'e')) count++;
        else if (count > 1) true;
    }
}

int main()
{
    std::string frase;
    std::getline(std::cin, frase);

    if (Frase(frase) == false) std::cout << "nao";
    else std::cout << "sim";

}