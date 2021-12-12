#include <iostream>
#include <cstddef> //null
void print(int x)
{
    std::cout<<"imprime(int): "<<x<<'\n';
}
void print(int *x)
{
    if(!x)
        std::cout<<"imprime(int*): null\n";
    else
        std::cout<<"imprime(int*): "<<*x<<'\n';
}

int main()
{
    int *x{NULL};
    print(x);//llama a print(int*) porque x tiene tipo int*
    print(0);//llama a print(int) porque 0 es un literal entero
    print(NULL);//probablemente llame a print (int), aunque probablemente quisieramos prin(int *)

    return 0;
}