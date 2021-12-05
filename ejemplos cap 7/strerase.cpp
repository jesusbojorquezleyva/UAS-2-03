#include<iostream>
#include <string>

int main()
{
    std::string str{"El arroz se está cocinando"};

    str.erase(4,11);
    
    std::cout<<str<<'\n';

    return 0;
}