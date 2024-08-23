#include<iostream>

int main(){

    int n{0};
    std::cin >> n;
    int dominos[n];

    for (int i = 0; i < n; i++)
    {
        std::cin >> dominos[i]; 
    }

    int count {0};

    for (int i = 0; i < n; i++)
    {
        if (dominos[i-1] == dominos[i]) count++;
        if (dominos[i] < dominos[i+1]) count++;
    }
    
    if(count == n) std::cout << "ok";
    else std::cout << "precisa de ajuste";
}