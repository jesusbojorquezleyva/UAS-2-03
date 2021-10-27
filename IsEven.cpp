#include <iostream>
#include <vector>
int IsEven(int x)
{
    bool val;
    int sobra;
    sobra=x%2;
    if (sobra = 1 )
    {
        std::cout<<x<<" es un numero Impar";
        val=false;
    }
    else
    {
        std::cout<<x<<" es un numero Par";
        val=true;
    }
return val;
}
int main()
{
    int num;
    std::cout<<"Introduzca un numero entero: ";
    std::cin>>num;
    IsEven(num);
    return 0;
}