#include <iostream>

int main()
{
    int v{5};
    int *ptr{&v};//inicializa ptr con la direccion de la variable v
    std::cout<<&v<<'\n';//imprime la direccion de la variable v
    std::cout<<ptr<<'\n';//imprime la direccion que tiene ptr

    return 0;
}