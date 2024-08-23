#include<iostream>

int main(){

    int produtos{0};
    std::cin >> produtos;

    float valor[produtos];
    float primeiro[produtos];
    std::string segundo [produtos];

    int countp {0};
    int counts {0};

    for (int i = 0; i < produtos; i++) std::cin.ignore() >> valor[i];
    for (int i = 0; i < produtos; i++) std::cin.ignore() >> primeiro[i];
    for (int i = 0; i < produtos; i++) std::cin.ignore() >> segundo[i];

    for (int i = 0; i < produtos; i++)
    {
        if (valor[i] == primeiro[i]) countp ++;
        
    }

    for (int i = 0; i < produtos; i++)
    {
        if (valor[i] > primeiro[i] && segundo[i] == "M") counts ++;
        else if (valor[i] < primeiro[i] && segundo[i] == "m") counts ++;
        else if (valor[i] < primeiro[i] && segundo[i] == "M") counts --;    
    }
    
    if (countp > counts) std::cout << "primeiro";
    else if (countp == counts) std::cout << "empate";
    else std::cout << "segundo";
}