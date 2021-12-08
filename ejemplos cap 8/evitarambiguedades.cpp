#include <iostream>

int main()
{
    std::cout<<"Ingrese un numero: ";
    int x{};
    std::cin>>x;

    if (x>=10)//if exterior
    {
        if(x<=20)//if interior
            std::cout<<x<<" esta entre 10 y 20\n";
        else 
            std::cout<<x<<" es mayor que 20\n";
    }
    return 0;
}