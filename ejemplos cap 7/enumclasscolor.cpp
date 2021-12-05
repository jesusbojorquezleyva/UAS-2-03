#include <iostream>

int main()
{
    enum class Color
    {
        red,
        blue
    };

    Color color{Color::red};

    if(color==Color::red)
        std::cout<<"El color es rojo!\n";//es correcto
    else if(color==Color::blue)
        std::cout<<"El color es azul!\n";

    return 0;
}