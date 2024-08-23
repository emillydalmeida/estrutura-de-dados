#include<iostream>

int soldiersPos(int matriz [3][3]){

    int resultado {0};

    for (int i = 0; i < 3; i++)
    {
        if (matriz [0][i] > matriz [1][i])
        resultado++;
        if (matriz [1][i] > matriz[2][i])
        resultado++;
    }
    
    return resultado;
}

int main(){

    int matriz [3][3];

    for (int l = 0; l < 3; l++)
    {
        for (int c = 0; c < 3; c++)
        {
           std::cin >> matriz [l][c]; 
        }
    }
    
    std::cout << soldiersPos(matriz);

}