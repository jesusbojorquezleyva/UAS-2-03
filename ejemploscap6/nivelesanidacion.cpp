#include <iostream>
int main()
{//nivel 1
    std::cout<<"Ingrese un entero: ";
    int value{};
    std::cin>>value;
    if(value>0)
    {//nivel 2
        if((value%2)==0)
        {//nivel 3
            std::cout<<value<<"es positivo y par\n";
        }
        else
        {//nivel 3
            std::cout<<value<<" es positivo e impar\n";
        }
    }
    return 0;
}