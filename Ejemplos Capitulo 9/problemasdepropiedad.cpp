#include <iostream>
#include <string>
#include <string_view>

std::string_view askForName()
{
    std::string<<"Cual es tu nombre?\n";

    std::string str{};
    std::cin>>str;

    std::string_view {str};

    std::cout<<"Hola "<<view<<'\n';

    return view;
}
int main()
{
    std::string_view view{askForName()};

    std::cout<<"Tu nombre es "<<view<<'\n';//comportamiento indefinido

    return 0;
}