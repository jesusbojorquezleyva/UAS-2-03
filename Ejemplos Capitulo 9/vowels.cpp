#include <iostream>
#include <iterator>// std::size
#include <string_view>

int main()
{
    //sin terminar en null
    char vowels[]{'a','e','i','o','u'};

    std::string_view str{vowels,sizeof(vowels)};

    std::cout<<str<<'\n';

    return 0;
}