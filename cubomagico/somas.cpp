#include <iostream>

int main() {

    int soma, mat[3][3], somaLinhas[3], somaColunas[3], somaDiagonais[2];


    // preenche a matriz
    for(int l = 0; l < 3; l++){
        for(int c = 0; c < 3; c++){
            std::cin >> mat [l][c];
        }
    }

    // letra a) soma das linhas
    for(int l = 0; l < 3; l++){
        soma = 0;
        for(int c = 0; c < 3; c++){
            soma += mat[l][c];
        }
        somaLinhas[l] = soma;
    }

    // letra b) soma das colunas
    for(int c = 0; c < 3; c++){
        soma = 0;
        for(int l = 0; l < 3; l++){
            soma += mat[l][c];
        }
        somaColunas[c] = soma;
    }

    for (int l = 0; l < 3; l++)
    {
        for (int c = 0; c < 3; c++)
        {
            if (mat [l] == mat [c])
            {
                somaDiagonais [1] += mat[l][c];    
            }  
        }
    }

    for(int l = 0; l < 3; l++){
        std::cout << somaLinhas[l] << ' ';
    }

    std::cout << std::endl;

    for(int c = 0; c < 3; c++){
        std::cout << somaColunas[c] << ' ';
    }

    std::cout << somaDiagonais[1] -1 << std::endl;
    

    return 0;
}