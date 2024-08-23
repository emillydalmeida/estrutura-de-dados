#include<iostream>
#include<iomanip>

double fatorial(int num){

    if(num == 1) return 1;
    else return fatorial(num-1)*num;
}

double euler(int num){

    double euler {1};
    
    for(int i = 1; i <= num; i++){
        euler += 1/fatorial(i);
    }
    return euler;
    
}
int main(){
    int num {0};
    std::cin>>num;
    std::cout << 
    std::fixed << 
    std::setprecision(6) << 
    euler(num) << 
    std::endl;
    
}