#include <iostream>
//pregunta 2
int sumTo(int hasta)
{
    int suma;
    for(int i=1; i<=hasta;i++)
    {
        suma+=i;
    }
    return suma;
}
//pregunta 1
int main()
{
    for (int i=0;i<=20;i++)
    {
        if (i>=1)
        {
            if (i%2==0)
                std::cout<<i<<' ';
        }
    }
    //parte2 pregunta 2
    std::cout<<"Introduzca un numero entero: ";
    int num{};
    std::cin>>num;
    std::cout<<"La suma de 1 hasta "<<num<<" es igual a: "<<sumTo(num);

    /* pregunta 3 Que tiene de malo este codigo?
    for (unsigned int count { 9 }; count >=0; --count)
        std::cout<<count<<' ';
    
    Que el entero sin signo causa errores en los ciclos*/
}
