#include <iostream>
#include <random>
#include <ctime>

namespace MyRandom
{
    std::mt19937 mersenne{static_cast<std::mt19937::result_type>(std::time(nullptr))};
}

int getRandomNumber(int min, int max)
{
    std::uniform_int_distribution die(min,max);
    return die(MyRandom::mersenne);
}
int main()
{
    int i,j,adivinar, num;
    while (true)
    {
        adivinar=getRandomNumber(1,100);
        std::cout<<"Bienvenido, intenta adivinar el numero del 1 al 100\n";
        for(i=1;i<=7;i++)
        {
            std::cout<<"Dime tu intento "<<i<<": ";
            std::cin>>num;

            if(num<adivinar)
            {
                std::cout<<"Mal........ el numero que buscas es mayor, te quedan "<<(7-i)<<" intentos\n";
            }
            if (num>adivinar)
            {
                std::cout<<"Mal........ el numero que buscas es menor, te quedan "<<(7-i)<<" intentos\n";
            }
            else
            {
                std::cout<<"Felicidades!!!!!! Encontraste el numero: "<<adivinar<<" en "<<i<<" intentos";
                break;
            }
        }
opcion:
        std::cout<<"Quieres jugar de nuevo? 's' o 'n' \n";
        char op{};
        if(op=='n')
            break;
        if (op=='s')
            continue;
        else
            goto opcion;
    }
}