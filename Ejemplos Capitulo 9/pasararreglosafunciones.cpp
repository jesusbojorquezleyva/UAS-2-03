#include <iostream>
void passValue(int Value)//el valor es una copia del argunmento
{
    value=99;//asi que cambiarlo aqui no cambiara el valor del argumento
}
void passArray(int Prime[5])//prime es el arreglo real
{
    prime[0]=11;//asi que cambiarlo aqui cambiara el argumento original
    prime[1]=7;
    prime[2]=5;
    prime[3]=3;
    prime[4]=2;
}
int main()
{
    int value{1};
    std::cout<<"antes de passValue: "<<value<<'\n';
    passValue(value);
    std::cout<<"despues de passValue: "<<value<<'\n';

    int prime[5]{2,3,5,7,11};
    std::cout<<"antes de passArray: "<<prime[0]<<" "<<prime[1]<<" "<<prime[2]<<" "<<prime[3]<<" "<<prime[4]<<'\n';
    passArray(prime);
    std::cout<<"despues de passArray: "<<prime[0]<<" "<<prime[1]<<" "<<prime[2]<<" "<<prime[3]<<" "<<prime[4]<<'\n';
    
    return 0;
}