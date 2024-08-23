#include<iostream>

bool primo(int num){
    
    if( (num != 2 && num % 2 == 0) || (num == 1)) return false;
    else if (num != 3 && num % 3 ==0) return false;
    else return true;
}

int main(){
    
    int num {0};
    int num2 {0};
    
    std::cin >> num >> num2;
    
    for (int i = num; i <= num2 ; i++ ){
        if(primo(i)) std::cout << i << std::endl;
    }
}