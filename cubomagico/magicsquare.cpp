#include <iostream>

bool magicSquare(int matrix[3][3]) {
    int somaLinhas[3] = {0, 0, 0};
    int somaColunas[3] = {0, 0, 0};
    int somaDiagonalp {0};
    int somaDiagonals {0};
    
    for (int linha = 0; linha < 3; linha++) 
    {

            if (matrix[linha][0]) somaLinhas[0] += matrix[linha][0];
            if (matrix[linha][1]) somaLinhas[1] += matrix[linha][1];
            if (matrix[linha][2]) somaLinhas[2] += matrix[linha][2];
    }

    for (int coluna = 0; coluna < 3; coluna++) 
    {

            if (matrix[0][coluna]) somaColunas[0] += matrix[0][coluna];
            if (matrix[1][coluna]) somaColunas[1] += matrix[1][coluna];
            if (matrix[2][coluna]) somaColunas[2] += matrix[2][coluna];
    }

    for (int linha = 0; linha < 3; linha++) 
    {
            if (matrix[linha][linha])
            somaDiagonalp += matrix[linha][linha]; 
    }

    for (int linha = 0; linha < 3; linha++) 
    {
            int coluna = 2;
            somaDiagonals += matrix[linha][coluna];
            coluna--;
    }

    for (int i = 0; i < 3 - 1; i++) 
    {
        if(somaColunas[i] == somaLinhas[i] && somaColunas[i+1] == somaLinhas[i] && somaColunas[i] == somaDiagonalp && somaColunas[i] == somaDiagonals)
        return true;
    }
    
    return false;
}

int main() {

    int matriz[3][3];

    for (int l = 0; l < 3; l++)
    {
        for (int c = 0; c < 3; c++) 
        {
            std::cin >> matriz[l][c];
        }
    }   

    if (magicSquare(matriz)) std::cout << "sim" << std::endl;
    else std::cout << "nao" << std::endl;
    
}