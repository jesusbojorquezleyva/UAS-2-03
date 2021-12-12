#include <iostream>

int main()
{
    constexpr int matriz[]{4,6,7,3,8,2,1,9,5};

    std::cout<<"El arreglo es: ";
    for(int i{0};i<sizeof(matriz);i++)
        std::cout<<matriz[i]<<' ';

    return 0;
}