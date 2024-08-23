#include <iostream>
#include <string>

bool vogal (char letra) 
{
    char vogal [] = {'a', 'e', 'i', 'o', 'u'};
    
    for (int i = 0; i < 5; i++)
        if (tolower(letra) == vogal[i])
            return true;
    
    return false;
}

int main() 
{
    std::string text {};
    
    std::getline(std::cin, text);

    for (size_t i = 0; i < text.length(); i++) 
    {
        if(text[i] == ' ' && vogal(text[i+1])) 
        {
         i++;
        }
         
         else
          std::cout << text[i];
    }
}