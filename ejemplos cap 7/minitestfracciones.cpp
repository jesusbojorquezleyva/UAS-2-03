#include <iostream>

struct Fraccion
{
    int numerador;
    int denominador;
};
double multiplicar(Fraccion frac1,Fraccion frac2)
{
    int numerador,denominador;
    double res;
    numerador=frac1.numerador*frac2.numerador;
    denominador=frac1.denominador*frac2.denominador;
    res=numerador/denominador;
    return res;
}
int main()
{
    Fraccion frac1;
    Fraccion frac2;

    std::cout<<"Multiplicacion de fraciones\n";
    std::cout<<"Numerador de la fraccion 1: ";
    std::cin>>frac1.numerador;
    std::cout<<"Denominador de la fraccion 1: ";
    std::cin>>frac1.denominador;
    std::cout<<"Numerador de la fraccion 2: ";
    std::cin>>frac2.numerador;
    std::cout<<"Denominador de la fraccion 2: ";
    std::cin>>frac2.denominador;
    std::cout<<"El resultado de la multiplicacion de ambas fracciones es: "<<multiplicar(frac1,frac2);
}