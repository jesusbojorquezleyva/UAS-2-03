#include <iostream>
#include <string>

int main()
{
    std::string str{"Vi un auto azul ayer."};

    str.replace(11,4,"azul");

    std::cout<<str<<'\n';

    return 0;
}