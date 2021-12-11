#include <iostream>

int main()
{
    int count{ 1 };
    int sum { 0 };
    int x{};//se crea en cada iteracion

    while(count<=5)
    {
        std::cout<<"Ingrese un entero #"<<count<<':';
        std::cin>>x;
        sum+=x;
        ++count;
    }//x se destruye

    std::cout<<"La suma de los numeros ingresados es: "<<sum;

    return 0;
}