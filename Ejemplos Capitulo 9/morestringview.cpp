#include <iostream>
#include <string_view>

int main()
{
    std::string_view str{"Los trenes son rapidos!"};

    std::cout<<str.length()<<'\n'; //16
    std::cout<<str.substr(0,str.find(' ')<<'\n';//trenes
    std::cout<<(str == "Los trenes son rapidos!")<<'\n';//1

    std::cout<<str._Starts_with("Botes")<<'\n';//0
    std::cout<<str.ends_with("rapidos!")<<'\n';//1

    std::cout<<str<<'\n';//los trenes son rapidos

    return 0;
}