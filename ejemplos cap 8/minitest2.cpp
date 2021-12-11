#include <iostream>

int main()
{
    char letra{'a'};
    do 
    {
        std::cout<<letra<<'='<<static_cast<int>(letra)<<'\n';
        letra++;
    }while (letra<='z');
    return 0;
}